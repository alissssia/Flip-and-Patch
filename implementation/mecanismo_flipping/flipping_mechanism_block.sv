`ifndef FLIPPING_MECHANISM_BLOCK_SV
`define FLIPPING_MECHANISM_BLOCK_SV
module flipping_mechanism_block
    #(parameter N = 16, M = 16)
        (   input [N - 1:0] a [M - 1:0], input f [M - 1:0],
            output [N - 1:0] b [M - 1:0]);
    genvar i;

    generate;
        for (i = 0; i < M; i++) begin
            flipping_mechanism_one #(.N(N)) u0 (.a(a[i]), .f(f[i]), .b(b[i]));
        end
    endgenerate
endmodule

`endif // FLIPPING_MECHANISM_BLOCK_SV