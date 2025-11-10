`ifndef FLIPFLOP_BLOCK_SV
`define FLIPFLOP_BLOCK_SV
/* flipflop for a block of M components of N bits */

module flipflop_block
        #(parameter N = 16, M = 16)
    (   input clk, rst,
        input [N - 1:0] d [M - 1:0],
        output [N - 1:0] q [M - 1:0]);
    genvar i;
    generate
        for (i = 0; i < M; i++) begin
            flipflop_one_nbits #(.N(N)) u0 (.clk(clk), .rst(rst), .d(d[i]), .q(q[i]));
        end
    endgenerate
endmodule

`endif // FLIPFLOP_BLOCK_SV

