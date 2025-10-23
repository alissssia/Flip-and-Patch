`ifndef FLIPFLOP_BLOQUE_SV
`define FLIPFLOP_BLOQUE_SV

module flipflop_bloque
        #(parameter N = 16, M = 16)
    (   input clk, rst,
        input [N - 1:0] d [M - 1:0],
        output [N - 1:0] q [M - 1:0]);
    genvar i;
    generate
        for (i = 0; i < M; i++) begin
            flipflop_uno_nbits #(.N(N)) u0 (.clk(clk), .rst(rst), .d(d[i]), .q(q[i]));
        end
    endgenerate
endmodule

`endif // FLIPFLOP_BLOQUE_SV

