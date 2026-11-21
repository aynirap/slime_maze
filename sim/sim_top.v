`timescale 1ns / 1ps
// Simulation-only top : same wiring as slime_top.v but without clk_gen (the MMCM
// cannot be simulated here), so "clk" is the 25 MHz pixel clock directly.
module sim_top (
    input  wire        clk,
    input  wire        rst,
    input  wire [4:0]  btn,             // {C, R, L, D, U}
    output wire [11:0] rgb,
    output wire [9:0]  x,
    output wire [9:0]  y,
    output wire        video_on,
    output wire [2:0]  state,
    output wire [1:0]  form,
    output wire [1:0]  lives,
    output wire [15:0] score,
    output wire [3:0]  ksec
);
    wire hsync, vsync;
    vga_sync u_sync (.clk(clk), .rst(rst), .x(x), .y(y),
                     .hsync(hsync), .vsync(vsync), .video_on(video_on));

    wire tick  = (x == 10'd0) && (y == 10'd480);
    wire tick2 = (x == 10'd0) && (y == 10'd500);

    wire [9:0]   px, py;
    wire [39:0]  gx_flat, gy_flat;
    wire [3:0]   galive;
    wire [299:0] pellet;
    wire         crown_on;
    wire [4:0]   crown_tx;
    wire [3:0]   crown_ty;
    wire [5:0]   frame;
    wire [2:0]   pose;

    slime_logic u_logic (
        .clk(clk), .rst(rst), .tick(tick), .tick2(tick2),
        .btn_u(btn[0]), .btn_d(btn[1]), .btn_l(btn[2]), .btn_r(btn[3]), .btn_c(btn[4]),
        .state(state), .form(form), .px(px), .py(py),
        .gx_flat(gx_flat), .gy_flat(gy_flat), .galive(galive),
        .pellet(pellet), .crown_on(crown_on), .crown_tx(crown_tx), .crown_ty(crown_ty),
        .score(score), .lives(lives), .ksec(ksec), .frame(frame), .pose(pose));

    slime_draw u_draw (
        .x(x), .y(y), .state(state), .form(form), .px(px), .py(py),
        .gx_flat(gx_flat), .gy_flat(gy_flat), .galive(galive),
        .pellet(pellet), .crown_on(crown_on), .crown_tx(crown_tx), .crown_ty(crown_ty),
        .ksec(ksec), .frame(frame), .pose(pose), .lives(lives), .rgb(rgb));
endmodule
