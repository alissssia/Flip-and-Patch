`ifndef MECANISMO_FLIPPING_BLOQUE_SV
`define MECANISMO_FLIPPING_BLOQUE_SV
module mecanismo_flipping_bloque
    #(parameter N = 16, M = 16)
        (   input [N - 1:0] a [M - 1:0], input f [M - 1:0],
            output [N - 1:0] b [M - 1:0]);
    genvar i;

    generate;
        for (i = 0; i < M; i++) begin
            mecanismo_flipping_uno #(.N(N)) u0 (.a(a[i]), .f(f[i]), .b(b[i]));
        end
    endgenerate
endmodule

`endif // MECANISMO_FLIPPING_BLOQUE_SV