`ifndef BRAM_SV
`define BRAM_SV
module bram #(
    parameter int unsigned DEPTH,
    parameter int unsigned WIDTH_BITS,
    // Derived parameters
    parameter int unsigned NBITS_ADDR = int'(unsigned'($clog2(DEPTH)))
) (
    input logic clk, resetn,
    input logic read_en, write_en,
    input logic [NBITS_ADDR - 1:0] addr_read, addr_write,
    input logic [WIDTH_BITS - 1:0] data_in,
    output logic [WIDTH_BITS - 1:0] data_out
);

typedef logic [WIDTH_BITS - 1:0] _data_t;
_data_t ram [DEPTH] /* verilator public */;

always_ff @(posedge clk) begin
    // Reset only affects the registers
    if (!resetn) begin
        data_out <= '0; // Use '0 for better compatibility
    end else begin
        if (read_en) data_out <= ram[addr_read];
        if (write_en) ram[addr_write] <= data_in;
    end
end

endmodule

`endif // BRAM_SV
