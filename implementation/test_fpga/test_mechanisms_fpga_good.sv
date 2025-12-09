module test_mechanisms_fpga_bueno #(
    parameter N = 16 // size of activations
    // parameter M = 2 // number of activations
) (
    input  logic clk,
    input  logic reset,

    // Input activation
    input  logic [N-1:0] activation_org,
    input  logic [N-1:0] activation_cache,

    // Control bits
    input  logic f,
    input  logic p,

    // External control signals for patching
    input  logic request,
    input  logic read_write,
    input  logic [20:0] address,
    input  logic [N-1:0] activation_in,

    /*input  logic [$clog2(M)-1:0] index,
    input  logic store_enable,*/

    // Outputs
    output logic [N-1:0] flipped_out,
    output logic [N-1:0] patched_out,
    output logic [N-1:0] activation_final,
    output logic valid,
    output logic error
);

    // Instance of the flipping mechanism
    mecanismo_flipping_uno_flipflop #(
        .N(N)
    ) flip_inst (
        .clk(clk),
        .rst(reset),
        .input_f_bits(f),
        .input_activaciones(activation_org),
        .flipflop_output_processed_activations(flipped_out)
    );

    // Instance of the final patching mechanism
    top_patching_one #(
        .N(N)
    ) patch_inst (
        .clk(clk),
        .reset(reset),
        .request(request),
        .read_write(read_write),
        .address(address),
        .activation_in(activation_in),
        .p(p),
        .activation_org(activation_org),
        .chosen_activation(patched_out),
        .valid(valid),
        .error(error)
    );

    // final selector instance
    mux_selector_one #(
        .N(N)
    ) selector_inst (
        .a_original(activation_org),
        .a_flipped(flipped_out),
        .a_patched(patched_out),
        .f(f),
        .p(p),
        .selected(activation_final)
    );

endmodule
