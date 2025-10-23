`ifndef FLIPFLOP_UNO_NBITS_SV
`define FLIPFLOP_UNO_NBITS_SV
/* una sola componente de 16 bits */

module flipflop_uno_nbits
    #(parameter N = 16)
    (   input clk, rst, [N - 1:0] d,
        output logic [N - 1:0] q);
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            q <= 16'b0000000000000000;
        end else begin
            q <= d;
        end
    end
endmodule

`endif // FLIPFLOP_UNO_NBITS_SV