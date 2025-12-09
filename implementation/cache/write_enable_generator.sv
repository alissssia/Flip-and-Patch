`ifndef WRITE_ENABLE_GENERATOR_SV
`define WRITE_ENABLE_GENERATOR_SV
/*
* Module write_enable_generator: generates write masks per way
*/

module write_enable_generator #(
    parameter int NWAYS = 5 // Number of ways
)(
    input wire enable_write,
    input wire [$clog2(NWAYS) - 1:0] way_to_write, // Selected valid way to write
    output logic [NWAYS - 1:0] write_enable_tag,
    output logic [NWAYS - 1:0] write_enable_data
);

    always_comb begin
        write_enable_tag = '0;
        write_enable_data = '0;

        if (enable_write) begin
            write_enable_tag[way_to_write] = 1'b1; // Enable write on the selected way
            write_enable_data[way_to_write] = 1'b1; // Enable write on the selected way
        end
    end
endmodule

`endif // WRITE_ENABLE_GENERATOR_SV