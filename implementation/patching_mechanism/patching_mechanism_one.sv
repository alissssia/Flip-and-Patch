`ifndef PATCHING_MECHANISM_ONE_SV
`define PATCHING_MECHANISM_ONE_SV

module patching_mechanism_one #(
    parameter N = 16
) (
    input [N - 1:0] a_org, // original activation
    input [N - 1:0] a_cache, // cached activation
    input p, // patching bit
    output [N - 1:0] b // patched activation output
);

    mux_nbits #(.N(N)) mux_patching (
        .a(a_org),
        .b(a_cache),
        .sel(p),
        .eleccion(b)
    );


endmodule

`endif
