`timescale 1ns / 1ps
// Simulation-only top for the fast simulator : slime_logic + slime_draw.
// The C++ program plays the role of vga_sync : it gives tick / tick2 and asks
// for the colour of each pixel (x, y).
module fast_top (
    input  wire        clk,
    input  wire        rst,
    input  wire        tick,
    input  wire        tick2,
    input  wire [4:0]  btn,             // {C, R, L, D, U}
    input  wire [9:0]  x,
    input  wire [9:0]  y,
    output wire [11:0] rgb,
    output wire [2:0]  state,
    output wire [1:0]  form,
    output wire [1:0]  lives,
    output wire [15:0] score,
    output wire [3:0]  ksec
);
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
