`include "test_mechanisms.sv"

module top_test_mechanisms #(
    parameter int N = 16,
    parameter int M = 16
)(
    input logic clk,
    input logic reset,

    input  logic [N-1:0] activation_org    [M-1:0],
    input  logic [N-1:0] activation_cache  [M-1:0],
    input  logic f                 [M-1:0],
    input  logic p                 [M-1:0],
    input  logic start_reading,
    output logic [N-1:0] activation_final  [M-1:0],
    output logic [N-1:0] flipped_out       [M-1:0],
    output logic [N-1:0] patched_out       [M-1:0]
);

    test_mechanisms #(
        .N(N), .M(M)
    ) dut (
        .clk(clk),
        .reset(reset),
        .activation_org(activation_org),
        .activation_cache(activation_cache),
        .f(f),
        .p(p),
        .start_reading(start_reading),
        .activation_final(activation_final),
        .flipped_out(flipped_out),
        .patched_out(patched_out)
    );

endmodule