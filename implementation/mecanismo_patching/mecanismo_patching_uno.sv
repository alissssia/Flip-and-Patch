`ifndef MECANISMO_PATCHING_UNO_SV
`define MECANISMO_PATCHING_UNO_SV

module mecanismo_patching_uno #(
    parameter N = 16
) (
    input [N - 1:0] a_org, // activacion original
    input [N - 1:0] a_cache, // activacion cacheada
    input p, // bit de patching
    output [N - 1:0] b // devolucion de la activacion patchada
);

    mux_nbits #(.N(N)) mux_patching (
        .a(a_org),
        .b(a_cache),
        .sel(p),
        .eleccion(b)
    );


endmodule

`endif
