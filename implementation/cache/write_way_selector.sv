`ifndef WRITE_WAY_SELECTOR_SV
`define WRITE_WAY_SELECTOR_SV
/*
* Module write_way_selector: selects the first free way to write and marks its
* validity bit if the write bit is enabled.
*/
module write_way_selector #(
    parameter NWAYS = 5 // Number of ways
) (
    input wire [NWAYS - 1:0] valid_bits_in, // Valid ways before writing
    input wire enable_write_way_bit, // Enables writing the validity bit
    output logic [$clog2(NWAYS) - 1:0] way_to_write, // Selected way to write
    output logic [NWAYS - 1:0] valid_bits_out // Valid ways after writing
);

   logic [NWAYS-1:0] tmp_valid_bits;
    
    always_comb begin
        tmp_valid_bits = valid_bits_in;
        way_to_write = '0;

        if (enable_write_way_bit) begin
            for (int i = 0; i < NWAYS; i++) begin
                if (!valid_bits_in[i]) begin
                    way_to_write = $clog2(NWAYS)'(i);
                    tmp_valid_bits[i] = 1'b1;
                    break;
                end
            end
        end
        valid_bits_out = tmp_valid_bits;
    end
endmodule

`endif // WRITE_WAY_SELECTOR_SV