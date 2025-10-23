module test_mechanisms_fpga_bueno #(
    parameter N = 16 // tamaño activaciones
    // parameter M = 2 // numero de activaciones
) (
    input  logic clk,
    input  logic reset,

    // Activacion de entrada
    input  logic [N-1:0] activation_org,
    input  logic [N-1:0] activation_cache,

    // Bits de control
    input  logic f,
    input  logic p,

    // Señales externas de control de patching
    input  logic request,
    input  logic read_write,
    input  logic [20:0] address,
    input  logic [N-1:0] activation_in,

    /*input  logic [$clog2(M)-1:0] index,
    input  logic store_enable,*/

    // Salidas
    output logic [N-1:0] flipped_out,
    output logic [N-1:0] patched_out,
    output logic [N-1:0] activation_final,
    output logic valid,
    output logic error
);

    // Instancia del mecanismo de flipping
    mecanismo_flipping_uno_flipflop #(
        .N(N)
    ) flip_inst (
        .clk(clk),
        .rst(reset),
        .input_f_bits(f),
        .input_activaciones(activation_org),
        .salida_flip_flop_con_activaciones_procesadas(flipped_out)
    );

    // Instancia del mecanismo de patching final
    top_patching_uno #(
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

    // Instancia del selector final
    mux_selector_uno #(
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
