
module top_patching_one #(
    parameter int N = 16,
    parameter int ADDR_WIDTH = 21
) (
    input logic clk,
    input logic reset,
    input logic request,
    input logic read_write, // 1 = read, 0 = write
    input logic [ADDR_WIDTH-1:0] address,
    input logic [N-1:0] activation_in, // input data to write
    input logic p,
    input logic [N-1:0] activation_org, // cache data
    output logic [N-1:0] chosen_activation, // output data for reading
    output logic valid,
    output logic error
);

    logic [N-1:0] activation_out;

    // cache instance
    cache_tfg patch_cache (
        .clk(clk),
        .reset(reset),
        .address(address),
        .read_write(read_write),
        .activation_in(activation_in),
        .request(request),
        .activation_out(activation_out),
        .valid(valid),
        .error(error)
    );

    // patching mechanism instance
    mecanismo_patching_one #(
        .N(N)
    ) patching_unit (
        .a_org(activation_org), // original activation
        .a_cache(activation_out), // cached activation
        .p(p), // patching bit
        .b(chosen_activation) // patched activation output
    );

endmodule