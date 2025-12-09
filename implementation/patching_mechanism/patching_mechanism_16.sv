`ifndef PATCHING_MECHANISM_16_SV
`define PATCHING_MECHANISM_16_SV
`include "patching_mechanism_one.sv"

module patching_mechanism_16 #(
    parameter int N = 16, // N bits
    parameter int M = 16 // M activations
) (
    input  logic [N-1:0] a_org [M-1:0], // original activation
    input  logic [N-1:0] a_cache [M-1:0], // cached activation
    input  logic p [M-1:0], // patching bit
    output logic [N-1:0] b [M-1:0]// patched activation output
);

    genvar i;
    generate
        for (i = 0; i < M; i++) begin : patching_units
            patching_mechanism_one #(.N(N)) u0 (
                .a_org(a_org[i]),
                .a_cache(a_cache[i]),
                .p(p[i]),
                .b(b[i])
            );
        end
    endgenerate

endmodule

`endif // PATCHING_MECHANISM_16_SV