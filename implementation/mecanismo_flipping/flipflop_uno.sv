`ifndef FLIPFLOP_UNO_SV
`define FLIPFLOP_UNO_SV

module flipflop_uno (input clk, rst, d,
                     output reg q);
    //a_reqack: assert property (@(posedge clk) )
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            q <= 1'b0;
        end else begin
            q <= d;
        end
    end
endmodule

`endif
