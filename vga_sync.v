`timescale 1ns / 1ps
// vga_sync : copied unchanged from our LAB08 (lab08.v, Part A)
//=============================================================================
// PART A : VGA 640 x 480 @ 60 Hz timing generator
//   clk = 25 MHz pixel clock.  One clock = one pixel.
//   x counts 0 .. 799 along a line, y counts 0 .. 524 lines.
//   hsync and vsync are active LOW.  video_on = 1 inside the 640 x 480 picture.
//=============================================================================
module vga_sync (
    input  wire       clk,
    input  wire       rst,             // synchronous, active HIGH
    output reg  [9:0] x = 10'd0,       // 0 .. 799
    output reg  [9:0] y = 10'd0,       // 0 .. 524
    output wire       hsync,
    output wire       vsync,
    output wire       video_on
);
    localparam H_VISIBLE = 640, H_FP = 16, H_SYNC = 96, H_BP = 48;
    localparam V_VISIBLE = 480, V_FP = 10, V_SYNC = 2,  V_BP = 33;
    localparam H_TOTAL = H_VISIBLE + H_FP + H_SYNC + H_BP;   // 800
    localparam V_TOTAL = V_VISIBLE + V_FP + V_SYNC + V_BP;   // 525

    //========== Part A : WRITE YOUR CODE HERE ==========================
    // Replace each value with an expression.  You may use the localparam
    // names above, e.g.  wire x_end = (x == H_TOTAL - 1);
    wire       x_end    = (x == H_TOTAL - 1);               // x is at the last pixel of a line (799)
    wire       y_end    = (y == V_TOTAL - 1);               // y is at the last line of a frame (524)
    wire [9:0] x_next   = x_end ? 10'd0 : x + 10'd1;        // MOD-800 counter
    wire [9:0] y_next   = x_end ? (y_end ? 10'd0 : y + 10'd1) : y;  // MOD-525, enabled by x_end

    assign hsync    = ~((x >= H_VISIBLE + H_FP) && (x < H_VISIBLE + H_FP + H_SYNC));  // LOW for 656..751
    assign vsync    = ~((y >= V_VISIBLE + V_FP) && (y < V_VISIBLE + V_FP + V_SYNC));  // LOW for 490..491
    assign video_on = (x < H_VISIBLE) && (y < V_VISIBLE);   // HIGH inside the 640 x 480 picture
    //==================================================================

    always @(posedge clk) begin
        if (rst) begin
            x <= 10'd0;
            y <= 10'd0;
        end else begin
            x <= x_next;
            y <= y_next;
        end
    end
endmodule
