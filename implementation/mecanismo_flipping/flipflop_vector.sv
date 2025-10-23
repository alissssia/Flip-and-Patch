`ifndef FLIPFLOP_VECTOR_SV
`define FLIPFLOP_VECTOR_SV

/* flipflop de un vector de 16 componentes de 1 bit cada una*/

module flipflop_vector
        #(parameter N = 16)
        (   input clk, rst,
            input d [N - 1:0],
            output q [N - 1:0]);
    genvar i;
    generate
        for (i = 0; i < N; i++) begin
            flipflop_uno u0 (.clk(clk), .rst(rst), .d(d[i]), .q(q[i]));
        end
    endgenerate

endmodule

`endif // FLIPFLOP_VECTOR_SV