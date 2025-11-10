`ifndef FLIPFLOP_VECTOR_SV
`define FLIPFLOP_VECTOR_SV

/* flipflop for a vector of 16 components of 1 bit each */

module flipflop_vector
        #(parameter N = 16)
        (   input clk, rst,
            input d [N - 1:0],
            output q [N - 1:0]);
    genvar i;
    generate
        for (i = 0; i < N; i++) begin
            flipflop_one u0 (.clk(clk), .rst(rst), .d(d[i]), .q(q[i]));
        end
    endgenerate

endmodule

`endif // FLIPFLOP_VECTOR_SV