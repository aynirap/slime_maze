`timescale 1ns / 1ps
//=============================================================================
// SLIME MAZE : game logic (everything that is not drawing)
//
//   Feature 1  MOVABLE    : the slime and 4 ghosts walk along the maze paths
//   Feature 2  EVOLUTIONS : form 1 -> form 2 (after N_EVOLVE pellets)
//                           form 2 -> form 3 (pick up the crown)
//   Feature 3  KING MODE  : form 3 eats ghosts and walks 2x faster for
//                           KING_SECONDS, then goes back to form 2.
//   Win  : all ghosts eaten.        Lose : all 3 lives lost.
//
//   Positions are in pixels (top-left corner of a 32 x 32 sprite).
//   A sprite is "aligned" when it sits exactly on a tile (x, y multiples of 32);
//   only then may it turn, so it can never cut through a wall.
//
//   tick  = 1 clock pulse per video frame (60 Hz)  -> everything moves 2 pixels
//   tick2 = a second pulse per frame                -> extra step for form 3
//=============================================================================
module slime_logic (
    input  wire         clk,
    input  wire         rst,            // synchronous, active HIGH
    input  wire         tick,
    input  wire         tick2,
    input  wire         btn_u, btn_d, btn_l, btn_r, btn_c,   // already synchronised

    output reg  [2:0]   state,          // game FSM state (see S_... below)
    output reg  [1:0]   form,           // 1, 2 or 3
    output reg  [9:0]   px, py,         // slime position
    output wire [39:0]  gx_flat,        // ghost positions {g3, g2, g1, g0}
    output wire [39:0]  gy_flat,
    output reg  [3:0]   galive,         // 1 = ghost still in the game
    output reg  [299:0] pellet,         // 1 = pellet not eaten yet (index = ty*20 + tx)
    output reg          crown_on,
    output wire [4:0]   crown_tx,
    output wire [3:0]   crown_ty,
    output reg  [15:0]  score,          // 4 BCD digits
    output reg  [1:0]   lives,
    output reg  [3:0]   ksec,           // seconds of king mode left (0 when not king)
    output reg  [5:0]   frame,          // free-running frame counter (for blinking)
    output wire [2:0]   pose            // slime picture: 0 idle, 1 left, 2 right, 3 died, 4 down, 5 up
);
    //---------------- settings you can change ----------------
    localparam N_EVOLVE     = 8'd30;    // pellets needed for form 2
    localparam KING_SECONDS = 4'd10;    // how long form 3 lasts
    localparam CROWN_DELAY  = 8'd180;   // frames before the crown comes back (3 s)

    //---------------- game FSM states (Moore) ----------------
    localparam S_TITLE = 3'd0, S_PLAY = 3'd1, S_PAUSE = 3'd2,
               S_DEAD  = 3'd3, S_WIN  = 3'd4, S_OVER  = 3'd5;

    //---------------- directions ----------------
    // opposite direction = dir ^ 1
    localparam UP = 2'd0, DOWN = 2'd1, LEFT = 2'd2, RIGHT = 2'd3;

    //---------------- start positions (tile * 32) ----------------
    localparam [9:0] P_X0  = 10'd320, P_Y0  = 10'd352;   // tile (10, 11)
    localparam [9:0] G0_X0 = 10'd32,  G0_Y0 = 10'd32;    // tile ( 1,  1)
    localparam [9:0] G1_X0 = 10'd576, G1_Y0 = 10'd32;    // tile (18,  1)
    localparam [9:0] G2_X0 = 10'd320, G2_Y0 = 10'd96;    // tile (10,  3)
    localparam [9:0] G3_X0 = 10'd576, G3_Y0 = 10'd416;   // tile (18, 13)

    //---------------- tile next to (tx, ty) in direction d ----------------
    function [4:0] next_tx (input [4:0] tx, input [1:0] d);
        next_tx = (d == LEFT) ? tx - 5'd1 : (d == RIGHT) ? tx + 5'd1 : tx;
    endfunction
    function [3:0] next_ty (input [3:0] ty, input [1:0] d);
        next_ty = (d == UP)   ? ty - 4'd1 : (d == DOWN)  ? ty + 4'd1 : ty;
    endfunction

    //---------------- add 10 to a 4-digit BCD score (stops at 9990) ----------------
    function [15:0] bcd_add10 (input [15:0] s);
        reg [3:0] d1, d2, d3;
        begin
            d1 = s[7:4]; d2 = s[11:8]; d3 = s[15:12];
            if (d1 != 4'd9)      d1 = d1 + 4'd1;
            else if (d2 != 4'd9) begin d1 = 4'd0; d2 = d2 + 4'd1; end
            else if (d3 != 4'd9) begin d1 = 4'd0; d2 = 4'd0; d3 = d3 + 4'd1; end
            bcd_add10 = {d3, d2, d1, s[3:0]};
        end
    endfunction

    //=========================================================================
    // Random numbers : 16-bit LFSR (a shift register with XOR feedback)
    //=========================================================================
    reg [15:0] lfsr = 16'hACE1;
    always @(posedge clk)
        lfsr <= {lfsr[14:0], lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10]};

    //=========================================================================
    // Player : wanted direction (from the buttons) and wall checks
    //=========================================================================
    reg  [1:0] pdir, want;
    reg        pmoving, want_valid;

    // which slime picture to draw
    assign pose = (state == S_DEAD)               ? 3'd3 :
                  (!pmoving)                      ? 3'd0 :
                  (pdir == LEFT)                  ? 3'd1 :
                  (pdir == RIGHT)                 ? 3'd2 :
                  (pdir == DOWN)                  ? 3'd4 : 3'd5;

    wire [4:0] ptx = px[9:5];                       // tile the slime is on
    wire [3:0] pty = py[8:5];
    wire       p_aligned = (px[4:0] == 5'd0) && (py[4:0] == 5'd0);

    wire wall_want, wall_cur;
    maze_rom u_mw (.tx(next_tx(ptx, want)), .ty(next_ty(pty, want)), .wall(wall_want));
    maze_rom u_mc (.tx(next_tx(ptx, pdir)), .ty(next_ty(pty, pdir)), .wall(wall_cur));

    // next direction / "do I move this step" (combinational)
    reg [1:0] p_nd;
    reg       p_go;
    always @* begin
        p_nd = pdir;
        p_go = 1'b0;
        if (p_aligned) begin
            if (want_valid && !wall_want) begin p_nd = want; p_go = 1'b1; end   // turn
            else if (pmoving && !wall_cur) p_go = 1'b1;                         // keep going
        end else begin
            p_go = 1'b1;                                                        // between two tiles
            if (want_valid && want == (pdir ^ 2'd1)) p_nd = want;               // may turn back
        end
    end

    //=========================================================================
    // Ghosts : positions, wall checks and direction choice
    //=========================================================================
    reg [9:0] gx [0:3];
    reg [9:0] gy [0:3];
    reg [1:0] gdir [0:3];
    assign gx_flat = {gx[3], gx[2], gx[1], gx[0]};
    assign gy_flat = {gy[3], gy[2], gy[1], gy[0]};

    wire fright = (form == 2'd3);                   // ghosts run away from the king

    wire [3:0] gwall [0:3];                         // wall on {RIGHT, LEFT, DOWN, UP} side
    genvar gi;
    generate
        for (gi = 0; gi < 4; gi = gi + 1) begin : g_walls
            maze_rom u_u (.tx(gx[gi][9:5]),        .ty(gy[gi][8:5] - 4'd1), .wall(gwall[gi][0]));
            maze_rom u_d (.tx(gx[gi][9:5]),        .ty(gy[gi][8:5] + 4'd1), .wall(gwall[gi][1]));
            maze_rom u_l (.tx(gx[gi][9:5] - 5'd1), .ty(gy[gi][8:5]),        .wall(gwall[gi][2]));
            maze_rom u_r (.tx(gx[gi][9:5] + 5'd1), .ty(gy[gi][8:5]),        .wall(gwall[gi][3]));
        end
    endgenerate

    // At a tile, a ghost tries 4 directions in order d0, d1, d2, d3 and takes the
    // first one that is not a wall and not a U-turn.
    //   chase  : first the direction that brings it closer to the slime
    //   flee   : the same list, reversed in meaning (away from the slime)
    //   random : the list starts at a random direction
    // ghost 0 always chases, ghosts 1 and 3 chase half of the time, ghost 2 is random.
    reg [1:0] gnd [0:3];                            // chosen direction (combinational)
    reg [3:0] ok;
    reg [1:0] h, v, d0, d1, d2, d3, rnd;
    reg [4:0] gtx, adx;
    reg [3:0] gty, ady;
    reg       use_rnd;
    integer   i;
    always @* begin
        for (i = 0; i < 4; i = i + 1) begin
            gtx = gx[i][9:5];
            gty = gy[i][8:5];
            ok  = ~gwall[i];
            ok[gdir[i] ^ 2'd1] = 1'b0;              // no U-turn

            h   = (ptx > gtx) ? RIGHT : LEFT;       // towards the slime
            v   = (pty > gty) ? DOWN  : UP;
            if (fright) begin h = h ^ 2'd1; v = v ^ 2'd1; end   // away from the slime
            adx = (ptx > gtx) ? ptx - gtx : gtx - ptx;
            ady = (pty > gty) ? pty - gty : gty - pty;

            rnd     = (i == 0) ? lfsr[1:0] : (i == 1) ? lfsr[5:4] : (i == 2) ? lfsr[9:8] : lfsr[14:13];
            use_rnd = (i == 0) ? 1'b0      : (i == 1) ? lfsr[12]  : (i == 2) ? 1'b1      : lfsr[3];

            if (use_rnd)                  begin d0 = rnd; d1 = rnd + 2'd1; d2 = rnd + 2'd2; d3 = rnd + 2'd3; end
            else if (adx >= {1'b0, ady})  begin d0 = h; d1 = v; d2 = v ^ 2'd1; d3 = h ^ 2'd1; end
            else                          begin d0 = v; d1 = h; d2 = h ^ 2'd1; d3 = v ^ 2'd1; end

            gnd[i] = ok[d0] ? d0 : ok[d1] ? d1 : ok[d2] ? d2 : ok[d3] ? d3 : (gdir[i] ^ 2'd1);
        end
    end

    //=========================================================================
    // Crown item : appears at 4 places in turn
    //=========================================================================
    reg [1:0] cidx;
    assign crown_tx = cidx[0] ? 5'd18 : 5'd1;
    assign crown_ty = (cidx[0] ^ cidx[1]) ? 4'd1 : 4'd13;
    // tile under the centre of the slime
    wire [9:0] pcx = px + 10'd16;
    wire [9:0] pcy = py + 10'd16;
    wire crown_hit = crown_on && (pcx[9:5] == crown_tx) && (pcy[8:5] == crown_ty);

    //=========================================================================
    // Collisions slime <-> ghosts (sprites overlap by more than 12 pixels)
    //=========================================================================
    reg [3:0] touch;
    reg [9:0] ddx, ddy;
    integer   j;
    always @* begin
        for (j = 0; j < 4; j = j + 1) begin
            ddx = (px > gx[j]) ? px - gx[j] : gx[j] - px;
            ddy = (py > gy[j]) ? py - gy[j] : gy[j] - py;
            touch[j] = galive[j] && (ddx < 10'd20) && (ddy < 10'd20);
        end
    end

    //=========================================================================
    // Sequential part
    //=========================================================================
    reg        btnc_q;                  // BTNC one frame ago (edge detect + debounce)
    reg [7:0]  pcount;                  // pellets eaten (stops at 255)
    reg [7:0]  cdelay;                  // frames until the crown appears
    reg [5:0]  kframe;                  // frames inside the current king second
    reg [6:0]  dtimer;                  // pause after losing a life
    reg [6:0]  pend;                    // points still to add, in tens
    reg [6:0]  add;                     // points won in this clock, in tens

    wire       start_press = tick && btn_c && !btnc_q;
    wire [8:0] pidx = {pty, 4'b0} + {pty, 2'b0} + ptx;       // ty*20 + tx
    wire       ptick = tick || (tick2 && form == 2'd3);      // form 3 moves twice a frame

    integer k;
    always @(posedge clk) begin
        if (tick) begin
            btnc_q <= btn_c;
            frame  <= frame + 6'd1;
        end

        // remember the last direction button (priority encoder)
        if      (btn_u) begin want <= UP;    want_valid <= 1'b1; end
        else if (btn_d) begin want <= DOWN;  want_valid <= 1'b1; end
        else if (btn_l) begin want <= LEFT;  want_valid <= 1'b1; end
        else if (btn_r) begin want <= RIGHT; want_valid <= 1'b1; end

        // add the waiting points to the BCD score, 10 at a time
        add = 7'd0;
        if (pend != 7'd0) score <= bcd_add10(score);

        case (state)
        //---------------------------------------------------------------------
        S_TITLE: begin
            if (start_press) begin
                // new game
                state    <= S_PLAY;
                form     <= 2'd1;
                lives    <= 2'd3;
                score    <= 16'h0000;
                pend     <= 7'd0;
                pcount   <= 8'd0;
                pellet   <= {300{1'b1}};
                galive   <= 4'b1111;
                crown_on <= 1'b0;
                cdelay   <= 8'd0;
                ksec     <= 4'd0;
                kframe   <= 6'd0;
                px <= P_X0; py <= P_Y0; pdir <= LEFT; pmoving <= 1'b0; want_valid <= 1'b0;
                gx[0] <= G0_X0; gy[0] <= G0_Y0; gdir[0] <= RIGHT;
                gx[1] <= G1_X0; gy[1] <= G1_Y0; gdir[1] <= LEFT;
                gx[2] <= G2_X0; gy[2] <= G2_Y0; gdir[2] <= LEFT;
                gx[3] <= G3_X0; gy[3] <= G3_Y0; gdir[3] <= LEFT;
            end
        end
        //---------------------------------------------------------------------
        S_PLAY: begin
            // ---- slime movement (Feature 1) ----
            if (ptick) begin
                pdir    <= p_nd;
                pmoving <= p_go;
                if (p_go) begin
                    case (p_nd)
                        UP:    py <= py - 10'd2;
                        DOWN:  py <= py + 10'd2;
                        LEFT:  px <= px - 10'd2;
                        RIGHT: px <= px + 10'd2;
                    endcase
                end
            end

            // ---- ghost movement : 2 pixels every frame ----
            if (tick) begin
                for (k = 0; k < 4; k = k + 1) begin
                    if (galive[k]) begin
                        if (gx[k][4:0] == 5'd0 && gy[k][4:0] == 5'd0) begin   // on a tile : choose
                            gdir[k] <= gnd[k];
                            case (gnd[k])
                                UP:    gy[k] <= gy[k] - 10'd2;
                                DOWN:  gy[k] <= gy[k] + 10'd2;
                                LEFT:  gx[k] <= gx[k] - 10'd2;
                                RIGHT: gx[k] <= gx[k] + 10'd2;
                            endcase
                        end else begin                                         // between tiles
                            case (gdir[k])
                                UP:    gy[k] <= gy[k] - 10'd2;
                                DOWN:  gy[k] <= gy[k] + 10'd2;
                                LEFT:  gx[k] <= gx[k] - 10'd2;
                                RIGHT: gx[k] <= gx[k] + 10'd2;
                            endcase
                        end
                    end
                end
            end

            // ---- eat a pellet : +10 points ----
            if (p_aligned && pellet[pidx]) begin
                pellet[pidx] <= 1'b0;
                add = add + 7'd1;
                if (pcount != 8'hFF) pcount <= pcount + 8'd1;
            end

            // ---- evolution (Feature 2) : a small Moore FSM on "form" ----
            if (form == 2'd1 && pcount >= N_EVOLVE) form <= 2'd2;          // 1 -> 2

            if (form == 2'd2 && !crown_on && tick) begin                    // crown appears
                if (cdelay != 8'd0) cdelay <= cdelay - 8'd1;
                else                crown_on <= 1'b1;
            end

            if (crown_hit && form == 2'd2) begin                            // 2 -> 3
                form     <= 2'd3;
                crown_on <= 1'b0;
                cidx     <= cidx + 2'd1;
                ksec     <= KING_SECONDS;
                kframe   <= 6'd0;
            end

            if (form == 2'd3 && tick) begin                                 // king timer
                if (kframe == 6'd59) begin
                    kframe <= 6'd0;
                    ksec   <= ksec - 4'd1;
                    if (ksec == 4'd1) begin                                 // 3 -> 2
                        form   <= 2'd2;
                        cdelay <= CROWN_DELAY;
                    end
                end else
                    kframe <= kframe + 6'd1;
            end

            // ---- touching a ghost (Feature 3) ----
            if (touch != 4'b0000) begin
                if (form == 2'd3) begin
                    galive <= galive & ~touch;                              // eat : +200 each
                    for (k = 0; k < 4; k = k + 1)
                        if (touch[k]) add = add + 7'd20;
                end else begin
                    lives  <= lives - 2'd1;
                    dtimer <= 7'd90;
                    state  <= S_DEAD;
                end
            end

            if (galive == 4'b0000) state <= S_WIN;                           // all ghosts eaten
            else if (start_press) state <= S_PAUSE;
        end
        //---------------------------------------------------------------------
        S_PAUSE: begin
            if (start_press) state <= S_PLAY;
        end
        //---------------------------------------------------------------------
        S_DEAD: begin                       // short freeze, then restart the round
            if (tick) begin
                if (dtimer != 7'd0) dtimer <= dtimer - 7'd1;
                else if (lives == 2'd0) state <= S_OVER;
                else begin
                    state <= S_PLAY;
                    px <= P_X0; py <= P_Y0; pdir <= LEFT; pmoving <= 1'b0; want_valid <= 1'b0;
                    gx[0] <= G0_X0; gy[0] <= G0_Y0; gdir[0] <= RIGHT;
                    gx[1] <= G1_X0; gy[1] <= G1_Y0; gdir[1] <= LEFT;
                    gx[2] <= G2_X0; gy[2] <= G2_Y0; gdir[2] <= LEFT;
                    gx[3] <= G3_X0; gy[3] <= G3_Y0; gdir[3] <= LEFT;
                end
            end
        end
        //---------------------------------------------------------------------
        S_WIN, S_OVER: begin
            if (start_press) state <= S_TITLE;
        end
        default: state <= S_TITLE;
        endcase

        // points won in this clock go to the waiting list
        if (state != S_TITLE)
            pend <= pend + add - ((pend != 7'd0) ? 7'd1 : 7'd0);

        if (rst) begin
            state    <= S_TITLE;
            form     <= 2'd1;
            lives    <= 2'd3;
            score    <= 16'h0000;
            pend     <= 7'd0;
            pcount   <= 8'd0;
            pellet   <= {300{1'b1}};
            galive   <= 4'b1111;
            crown_on <= 1'b0;
            cidx     <= 2'd0;
            cdelay   <= 8'd0;
            ksec     <= 4'd0;
            kframe   <= 6'd0;
            dtimer   <= 7'd0;
            frame    <= 6'd0;
            btnc_q   <= 1'b0;
            px <= P_X0; py <= P_Y0; pdir <= LEFT; pmoving <= 1'b0;
            want <= LEFT; want_valid <= 1'b0;
            gx[0] <= G0_X0; gy[0] <= G0_Y0; gdir[0] <= RIGHT;
            gx[1] <= G1_X0; gy[1] <= G1_Y0; gdir[1] <= LEFT;
            gx[2] <= G2_X0; gy[2] <= G2_Y0; gdir[2] <= LEFT;
            gx[3] <= G3_X0; gy[3] <= G3_Y0; gdir[3] <= LEFT;
        end
    end
endmodule
