`timescale 1ns / 1ps
//=============================================================================
// 8-digit seven-segment driver for the Nexys A7 (common anode, active LOW)
//   All 8 digits share the segment wires, so we light one digit at a time
//   and switch about 1500 times per second (time multiplexing).
//   digits = 8 x 4-bit values, digit 0 is the right-most one.
//   blank[i] = 1 turns digit i off.
//=============================================================================
module seg7x8 (
    input  wire        clk,             // 25 MHz
    input  wire [31:0] digits,
    input  wire [7:0]  blank,
    output reg  [6:0]  seg,             // {CG, CF, CE, CD, CC, CB, CA}, LOW = on
    output reg  [7:0]  an               // LOW = digit on
);
    reg [16:0] cnt = 17'd0;             // counter : the top 3 bits choose the digit
    always @(posedge clk) cnt <= cnt + 17'd1;
    wire [2:0] sel = cnt[16:14];

    wire [3:0] val = digits[sel*4 +: 4];                    // 8-to-1 multiplexer

    always @* begin
        an = 8'hFF;
        if (!blank[sel]) an[sel] = 1'b0;                    // 3-to-8 decoder, active LOW
        case (val)                                          // BCD to 7-segment decoder
            4'd0: seg = 7'b1000000;
            4'd1: seg = 7'b1111001;
            4'd2: seg = 7'b0100100;
            4'd3: seg = 7'b0110000;
            4'd4: seg = 7'b0011001;
            4'd5: seg = 7'b0010010;
            4'd6: seg = 7'b0000010;
            4'd7: seg = 7'b1111000;
            4'd8: seg = 7'b0000000;
            4'd9: seg = 7'b0010000;
            default: seg = 7'b1111111;
        endcase
    end
endmodule
