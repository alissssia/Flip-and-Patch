`ifndef MECANISMO_FLIPPING_UNO_SV
`define MECANISMO_FLIPPING_UNO_SV

module mecanismo_flipping_uno 
    #(parameter N = 16)
        (   input [N - 1:0] a, input f,
            output [N - 1:0] b);

    genvar i;

    generate;
        for (i = 0; i < N; i++) begin
            mux u0 (.a(a[i]), .b(a[N - 1 - i]), .sel(f), .eleccion(b[i]));
        end
    endgenerate

endmodule

`endif // MECANISMO_FLIPPING_UNO_SV