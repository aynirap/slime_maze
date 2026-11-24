`timescale 1ns / 1ps
//=============================================================================
// SLIME MAZE : picture generator (combinational, like pattern_gen in Lab 8)
//   For the screen pixel (x, y) give its colour rgb = {R[3:0], G[3:0], B[3:0]}.
//   Layers, top first:  message text > slime > ghosts > crown > pellet > icons > wall > floor
//   The slime, ghosts, crown, pellet and icons are colour sprites from slime_art.v.
//   This is one big priority multiplexer.
//=============================================================================
module slime_draw (
    input  wire [9:0]   x,
    input  wire [9:0]   y,
    input  wire [2:0]   state,
    input  wire [1:0]   form,
    input  wire [9:0]   px, py,
    input  wire [39:0]  gx_flat, gy_flat,
    input  wire [3:0]   galive,
    input  wire [299:0] pellet,
    input  wire         crown_on,
    input  wire [4:0]   crown_tx,
    input  wire [3:0]   crown_ty,
    input  wire [3:0]   ksec,
    input  wire [5:0]   frame,
    input  wire [2:0]   pose,           // 0 idle, 1 left, 2 right, 3 died, 4 down, 5 up
    input  wire [1:0]   lives,
    output reg  [11:0]  rgb
);
    localparam S_TITLE = 3'd0, S_PLAY = 3'd1, S_PAUSE = 3'd2,
               S_DEAD  = 3'd3, S_WIN  = 3'd4, S_OVER  = 3'd5;

    //---------------- colours ----------------
    localparam [11:0] C_FLOOR  = 12'h011, C_WALL   = 12'h321, C_EDGE = 12'hB96,
                      C_WHITE  = 12'hFFF;

    //=========================================================================
    // Maze : which tile is this pixel in, and where inside the tile
    //=========================================================================
    wire [4:0] tx = x[9:5];
    wire [3:0] ty = y[8:5];
    wire [4:0] fx = x[4:0];
    wire [4:0] fy = y[4:0];

    wire wall, wall_u, wall_d, wall_l, wall_r;
    maze_rom u_m  (.tx(tx),        .ty(ty),        .wall(wall));
    maze_rom u_mu (.tx(tx),        .ty(ty - 4'd1), .wall(wall_u));
    maze_rom u_md (.tx(tx),        .ty(ty + 4'd1), .wall(wall_d));
    maze_rom u_ml (.tx(tx - 5'd1), .ty(ty),        .wall(wall_l));
    maze_rom u_mr (.tx(tx + 5'd1), .ty(ty),        .wall(wall_r));

    // bright line on the sides of a wall that face a path
    wire wall_edge = (fy < 5'd3  && !wall_u && ty != 4'd0)  || (fy > 5'd28 && !wall_d && ty != 4'd14) ||
                     (fx < 5'd3  && !wall_l && tx != 5'd0)  || (fx > 5'd28 && !wall_r && tx != 5'd19);

    // pellet : the "ball" picture, one in every path tile not eaten yet
    wire [8:0] tidx = {ty, 4'b0} + {ty, 2'b0} + tx;                     // ty*20 + tx
    wire [4:0] ball_ci;
    art_ball u_ball (.row(fy), .col(fx), .ci(ball_ci));
    wire       pellet_on = pellet[tidx] && !wall && (ball_ci != 5'd0);

    // crown item : 3 pictures, played 0 1 2 1 0 1 2 1 ... (about 8 per second)
    wire [1:0] crown_anim = (frame[4:3] == 2'd3) ? 2'd1 : frame[4:3];
    wire [4:0] crown_ci;
    art_crown u_crown (.id(crown_anim), .row(fy), .col(fx), .ci(crown_ci));
    wire crown_pix = crown_on && (tx == crown_tx) && (ty == crown_ty) && (crown_ci != 5'd0);

    // icons on the top wall row :
    //   tiles 0, 1, 2 : one life icon each (8 x 8 picture drawn 2x, in the middle of the tile)
    //                   "life_alive" for the lives left, "life_died" for the lives lost
    //   tile 19       : king-mode icon while in form 3
    wire       king_ending = (ksec <= 4'd2) && frame[3];                // blink near the end
    wire       icon_life   = (ty == 4'd0) && (tx < 5'd3) && (fx >= 5'd8) && (fx < 5'd24) &&
                                                          (fy >= 5'd8) && (fy < 5'd24);
    wire       life_lost   = (tx >= {3'b000, lives});
    wire [4:0] lx = fx - 5'd8, ly = fy - 5'd8;
    wire [4:0] life_ci, king_ci;
    art_life u_life (.id(life_lost), .row(ly[3:1]), .col(lx[3:1]), .ci(life_ci));
    art_icon u_icon (.row(fy), .col(fx), .ci(king_ci));
    wire       icon_king   = (ty == 4'd0) && (tx == 5'd19) && (form == 2'd3) && !king_ending;
    wire [4:0] icon_ci     = icon_life ? life_ci : icon_king ? king_ci : 5'd0;
    wire       icon_pix    = (icon_ci != 5'd0);

    //=========================================================================
    // Slime : 32 x 32 colour sprite.  The picture depends on the form and pose.
    //   form 3 flashes form 2 pictures in its last 2 seconds
    //=========================================================================
    wire [9:0] sx   = x - px;
    wire [9:0] sy   = y - py;
    wire       p_in = (x >= px) && (sx < 10'd32) && (y >= py) && (sy < 10'd32);
    wire [1:0] p_form = (form == 2'd3 && king_ending && pose != 3'd3) ? 2'd2 : form;
    wire [4:0] p_ci;
    art_slime u_slime (.id({p_form - 2'd1, pose}), .row(sy[4:0]), .col(sx[4:0]), .ci(p_ci));
    wire       p_pix = p_in && (p_ci != 5'd0);

    //=========================================================================
    // Ghosts : 32 x 32 colour sprites, 4 ghosts
    //   normal    : ghost_0, ghost_1, ghost_2, ghost_3
    //   king mode : all ghosts use ghost_scared
    //   last 2 seconds of king mode : blink between ghost_scared and the normal picture
    //=========================================================================
    wire       scared = (form == 2'd3);
    wire [3:0] g_in;
    wire [3:0] g_ci [0:3];
    genvar gi;
    generate
        for (gi = 0; gi < 4; gi = gi + 1) begin : g_ghost
            wire [9:0] gx = gx_flat[gi*10 +: 10];
            wire [9:0] gy = gy_flat[gi*10 +: 10];
            wire [9:0] dx = x - gx;
            wire [9:0] dy = y - gy;
            wire [2:0] gid  = (scared && !king_ending) ? 3'd4 : gi;
            assign g_in[gi] = galive[gi] && (x >= gx) && (dx < 10'd32) && (y >= gy) && (dy < 10'd32);
            art_ghost u_g (.id(gid), .row(dy[4:0]), .col(dx[4:0]), .ci(g_ci[gi]));
        end
    endgenerate
    wire [3:0] g_pix = {g_in[3] && g_ci[3] != 4'd0, g_in[2] && g_ci[2] != 4'd0,
                        g_in[1] && g_ci[1] != 4'd0, g_in[0] && g_ci[0] != 4'd0};
    // the ghosts have their own palette : pick the top ghost, then look up its colour
    wire [3:0]  ghost_ci = g_pix[0] ? g_ci[0] : g_pix[1] ? g_ci[1] : g_pix[2] ? g_ci[2] : g_ci[3];
    wire [11:0] ghost_rgb;
    ghost_palette u_gpal (.ci(ghost_ci), .rgb(ghost_rgb));

    //=========================================================================
    // Messages : 10 letters per line, 5 x 7 font
    //   line 1 : 8x size at (80, 160)     line 2 : 4x size at (200, 256)
    //=========================================================================
    wire show_msg  = (state == S_TITLE) || (state == S_PAUSE) || (state == S_WIN) || (state == S_OVER);
    wire in_line1  = (x >= 10'd80)  && (x < 10'd560) && (y >= 10'd160) && (y < 10'd216);
    wire in_line2  = (x >= 10'd200) && (x < 10'd440) && (y >= 10'd256) && (y < 10'd284) && (state != S_PAUSE);
    wire in_panel  = (x >= 10'd64)  && (x < 10'd576) && (y >= 10'd144) &&
                     (y < ((state == S_PAUSE) ? 10'd232 : 10'd300));

    wire [9:0] l1x = x - 10'd80,  l1y = y - 10'd160;
    wire [9:0] l2x = x - 10'd200, l2y = y - 10'd256;
    wire [5:0] fu  = in_line1 ? l1x[8:3] : l2x[7:2];    // font column 0 .. 59
    wire [2:0] fv  = in_line1 ? l1y[5:3] : l2y[4:2];    // font row    0 .. 6
    wire [3:0] ci  = fu / 6;                            // which letter 0 .. 9
    wire [2:0] cc  = fu % 6;                            // column inside the letter

    // letter codes : A1 B2 C3 E4 G5 I6 L7 M8 N9 O10 P11 R12 S13 T14 U15 V16 W17 Y18 Z19, 0 = space
    reg [49:0] text;                                    // 10 letters x 5 bits, first letter on the left
    always @* begin
        if (in_line1) begin
            case (state)
                S_TITLE: text = {5'd13, 5'd7, 5'd6, 5'd8, 5'd4, 5'd0, 5'd8, 5'd1, 5'd19, 5'd4};      // SLIME MAZE
                S_WIN:   text = {5'd0, 5'd18, 5'd10, 5'd15, 5'd0, 5'd17, 5'd6, 5'd9, 5'd0, 5'd0};    //  YOU WIN
                S_OVER:  text = {5'd5, 5'd1, 5'd8, 5'd4, 5'd0, 5'd10, 5'd16, 5'd4, 5'd12, 5'd0};     // GAME OVER
                default: text = {5'd0, 5'd0, 5'd11, 5'd1, 5'd15, 5'd13, 5'd4, 5'd0, 5'd0, 5'd0};     //   PAUSE
            endcase
        end else
            text = {5'd11, 5'd12, 5'd4, 5'd13, 5'd13, 5'd0, 5'd2, 5'd14, 5'd9, 5'd3};                // PRESS BTNC
    end
    wire [4:0] ch = text[(4'd9 - ci) * 5 +: 5];
    wire       font_on;
    font_rom u_font (.ch(ch), .row(fv), .col(cc), .on(font_on));

    wire text_pix = show_msg && font_on && (in_line1 || (in_line2 && frame[4]));   // line 2 blinks
    wire [11:0] text_col = !in_line1          ? C_WHITE :
                           (state == S_WIN)   ? 12'h4F4 :
                           (state == S_OVER)  ? 12'hF44 : 12'hFD0;

    //=========================================================================
    // Priority multiplexer : the first layer that has a pixel here wins
    //=========================================================================
    // the colour sprite layers share one palette : pick the top one, then look it up
    wire [4:0]  art_ci = p_pix     ? p_ci     :
                         crown_pix ? crown_ci :
                         pellet_on ? ball_ci  : icon_ci;
    wire [11:0] art_rgb;
    art_palette u_pal (.ci(art_ci), .rgb(art_rgb));

    always @* begin
        if      (text_pix)                    rgb = text_col;
        else if (show_msg && in_panel)        rgb = 12'h000;
        else if (p_pix)                       rgb = art_rgb;
        else if (g_pix != 4'b0000)            rgb = ghost_rgb;
        else if (crown_pix)                   rgb = art_rgb;
        else if (pellet_on)                   rgb = art_rgb;
        else if (icon_pix)                    rgb = art_rgb;
        else if (wall)                        rgb = wall_edge ? C_EDGE : C_WALL;
        else                                  rgb = C_FLOOR;
    end
endmodule
