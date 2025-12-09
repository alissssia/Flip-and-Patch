`ifndef FLIPPING_MECHANISM_FLIPFLOP_SV
`define FLIPPING_MECHANISM_FLIPFLOP_SV

module flipping_mechanism_flipflop
    #(parameter N = 16, M = 16)
        (   input clk, rst, input_f_bits [M - 1:0],
            input [N - 1:0] input_activaciones [M - 1:0],
            output [N - 1:0] flipflop_output_processed_activations [M - 1:0]
        );
    wire flipflop_output_with_bit_f [M -1:0];
    wire [N - 1:0] flipflop_output_non_processed_activations [M - 1:0];
    wire [N - 1:0] salida_mecanismo_flipping [M - 1:0];
    flipflop_vector #(M) u1 (
        .clk(clk),
        .rst(rst),
        .d(input_f_bits),
        .q(flipflop_output_with_bit_f)); // f_bits flip-flop
    flipflop_block #(N, M) u0 (
        .clk(clk),
        .rst(rst),
        .d(input_activaciones),
        .q(flipflop_output_non_processed_activations)); // a_bits flip-flop

    flipping_mechanism_block #(N, M) u2 (.a(flipflop_output_non_processed_activations), .f(flipflop_output_with_bit_f), .b(salida_mecanismo_flipping)); // llamada al mecanismo flipping

    flipflop_block #(N, M) u3 (
        .clk(clk),
        .rst(rst),
        .d(salida_mecanismo_flipping),
        .q(flipflop_output_processed_activations)); // get the result in b with another flipflop

endmodule

`endif // FLIPPING_MECHANISM_FLIPFLOP_SV


    