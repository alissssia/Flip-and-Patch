`ifndef FLIPPING_MECHANISM_ONE_FLIPFLOP_SV
`define FLIPPING_MECHANISM_ONE_FLIPFLOP_SV

module flipping_mechanism_one_flipflop
    #(parameter N = 16)
        (   input clk, rst, input_f_bits,
            input [N - 1:0] input_activaciones,
            output [N - 1:0] flipflop_output_processed_activations);

    wire salida_flip_flop_con_bit_f;
    wire [N - 1:0] flipflop_output_non_processed_activations;
    wire [N - 1:0] salida_mecanismo_flipping;

    flipflop_uno u1 (
        .clk(clk),
        .rst(rst),
        .d(input_f_bits),
        .q(salida_flip_flop_con_bit_f)); // f_bit flip-flop 

    flipflop_uno_nbits #(N) u0 (
        .clk(clk),
        .rst(rst),
        .d(input_activaciones),
        .q(flipflop_output_non_processed_activations)); // activation flip-flop

    mecanismo_flipping_uno #(.N(N)) u2 (
        .a(flipflop_output_non_processed_activations),
        .f(salida_flip_flop_con_bit_f),
        .b(salida_mecanismo_flipping)); // calling flipping mechanism

    flipflop_uno_nbits #(N) u3 (
        .clk(clk),
        .rst(rst),
        .d(salida_mecanismo_flipping),
        .q(flipflop_output_processed_activations)); // get the result in b with another flipflop

endmodule

`endif // FLIPPING_MECHANISM_ONE_FLIPFLOP_SV