`ifndef MECANISMO_PATCHING_16_SV
`define MECANISMO_PATCHING_16_SV
`include "mecanismo_patching_uno.sv"

module mecanismo_patching_16 #(
    parameter int N = 16, // N bits
    parameter int M = 16 // M activaciones
) (
    input  logic [N-1:0] a_org [M-1:0], // activacion original
    input  logic [N-1:0] a_cache [M-1:0], // activacion cacheada
    input  logic p [M-1:0], // bit de patching
    output logic [N-1:0] b [M-1:0]// devolucion de la activacion patchada
);

    genvar i;
    generate
        for (i = 0; i < M; i++) begin : patching_units
            mecanismo_patching_uno #(.N(N)) u0 (
                .a_org(a_org[i]),
                .a_cache(a_cache[i]),
                .p(p[i]),
                .b(b[i])
            );
        end
    endgenerate

endmodule

`endif // MECANISMO_PATCHING_16_SV