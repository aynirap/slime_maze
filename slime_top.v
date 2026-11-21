`timescale 1ns / 1ps
// ============================================================================
//  CPE222 Final Project : SLIME MAZE on the Nexys A7-100T
//
//  BTNU BTND BTNL BTNR : walk          BTNC : start / pause
//  7-segment           : right 4 digits = score
//                        digits 5,4     = seconds of king mode left
//                        left digit     = form (1, 2, 3)
//  LD2 .. LD0          : lives         LD15 .. LD6 : king-mode time bar
//  CPU RESET           : restart
//
//  clk_gen -> vga_sync (Lab 8) -> slime_logic -> slime_draw -> output register -> VGA pins
// ============================================================================
module slime_top (
    input  wire        CLK100MHZ,
    input  wire        CPU_RESETN,
    input  wire        BTNU, BTND, BTNL, BTNR, BTNC,
    output wire [15:0] LED,
    output wire [6:0]  SEG,             // {CG, CF, CE, CD, CC, CB, CA}
    output wire        DP,
    output wire [7:0]  AN,
    output reg  [3:0]  VGA_R,
    output reg  [3:0]  VGA_G,
    output reg  [3:0]  VGA_B,
    output reg         VGA_HS,
    output reg         VGA_VS
);
    // ---------------- clock and reset (same as Lab 8) ----------------
    wire clk, locked;
    clk_gen u_clk (.clk100(CLK100MHZ), .clk25(clk), .locked(locked));

    reg rst_1 = 1'b1, rst = 1'b1;                 // reset, moved to the 25 MHz clock
    always @(posedge clk) {rst, rst_1} <= {rst_1, ~(locked & CPU_RESETN)};

    // ---------------- buttons, moved to the 25 MHz clock (2 flip-flops) ----------------
    reg [4:0] btn_1 = 0, btn = 0;                 // {C, R, L, D, U}
    always @(posedge clk) {btn, btn_1} <= {btn_1, {BTNC, BTNR, BTNL, BTND, BTNU}};

    // ---------------- VGA timing : vga_sync from Lab 8 ----------------
    wire [9:0] x, y;
    wire       hsync, vsync, video_on;
    vga_sync u_sync (.clk(clk), .rst(rst), .x(x), .y(y),
                     .hsync(hsync), .vsync(vsync), .video_on(video_on));

    // game ticks : once per frame, just after the picture has been drawn,
    // so nothing moves while it is on the screen
    wire tick  = (x == 10'd0) && (y == 10'd480);
    wire tick2 = (x == 10'd0) && (y == 10'd500);

    // ---------------- game logic ----------------
    wire [2:0]   state;
    wire [1:0]   form, lives;
    wire [9:0]   px, py;
    wire [39:0]  gx_flat, gy_flat;
    wire [3:0]   galive;
    wire [299:0] pellet;
    wire         crown_on;
    wire [4:0]   crown_tx;
    wire [3:0]   crown_ty;
    wire [15:0]  score;
    wire [3:0]   ksec;
    wire [5:0]   frame;
    wire [2:0]   pose;

    slime_logic u_logic (
        .clk(clk), .rst(rst), .tick(tick), .tick2(tick2),
        .btn_u(btn[0]), .btn_d(btn[1]), .btn_l(btn[2]), .btn_r(btn[3]), .btn_c(btn[4]),
        .state(state), .form(form), .px(px), .py(py),
        .gx_flat(gx_flat), .gy_flat(gy_flat), .galive(galive),
        .pellet(pellet), .crown_on(crown_on), .crown_tx(crown_tx), .crown_ty(crown_ty),
        .score(score), .lives(lives), .ksec(ksec), .frame(frame), .pose(pose));

    // ---------------- picture ----------------
    wire [11:0] rgb;
    slime_draw u_draw (
        .x(x), .y(y), .state(state), .form(form), .px(px), .py(py),
        .gx_flat(gx_flat), .gy_flat(gy_flat), .galive(galive),
        .pellet(pellet), .crown_on(crown_on), .crown_tx(crown_tx), .crown_ty(crown_ty),
        .ksec(ksec), .frame(frame), .pose(pose), .lives(lives), .rgb(rgb));

    // ---------------- output registers : black outside the picture ----------------
    always @(posedge clk) begin
        {VGA_R, VGA_G, VGA_B} <= video_on ? rgb : 12'h000;
        VGA_HS <= hsync;
        VGA_VS <= vsync;
    end

    // ---------------- LEDs : lives and king-mode time bar ----------------
    assign LED[0]   = (lives >= 2'd1);
    assign LED[1]   = (lives >= 2'd2);
    assign LED[2]   = (lives >= 2'd3);
    assign LED[5:3] = 3'b000;
    genvar i;
    generate
        for (i = 0; i < 10; i = i + 1) begin : g_bar
            assign LED[15 - i] = (ksec > i);
        end
    endgenerate

    // ---------------- seven-segment display ----------------
    wire [3:0] k_tens = (ksec >= 4'd10) ? 4'd1 : 4'd0;
    wire [3:0] k_ones = (ksec >= 4'd10) ? ksec - 4'd10 : ksec;
    wire       king   = (form == 2'd3);

    seg7x8 u_seg (
        .clk(clk),
        .digits({2'b00, form, 4'd0, k_tens, k_ones, score}),
        .blank({1'b0, 1'b1, ~king | (k_tens == 4'd0), ~king, 4'b0000}),
        .seg(SEG), .an(AN));
    assign DP = 1'b1;                             // decimal point off
endmodule
