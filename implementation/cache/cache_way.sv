`ifndef CACHE_WAY_SV
`define CACHE_WAY_SV
/*
* MModule cache_way: encapsulates the tag and data BRAMs for each way
*/
module cache_way #(
    parameter TAG_WIDTH = 13, // Width of the tag
    parameter DATA_WIDTH = 16, // Width of the data
    parameter SET_WIDTH = 8
) (
    input wire clk,
    input wire resetn,
    input wire enable_read,
    input wire write_enable_tag,
    input wire write_enable_data,
    input wire [SET_WIDTH-1:0] set_index,
    input wire [TAG_WIDTH-1:0] tag_in,
    input wire [DATA_WIDTH-1:0] data_in,
    output wire [TAG_WIDTH-1:0] tag_out,
    output wire [DATA_WIDTH-1:0] data_out
);
    // Declaration of the tag BRAM
    bram #(
        .DEPTH(1 << SET_WIDTH),
        .WIDTH_BITS(TAG_WIDTH)
    ) tag_bram (
        .clk(clk),
        .resetn(resetn),
        .read_en(enable_read),
        .write_en(write_enable_tag),
        .addr_read(set_index),
        .addr_write(set_index),
        .data_in(tag_in),
        .data_out(tag_out)
    );

    // Declaration of the data BRAM
    bram #(
        .DEPTH(1 << SET_WIDTH),
        .WIDTH_BITS(DATA_WIDTH)
    ) data_bram (
        .clk(clk),
        .resetn(resetn),
        .read_en(enable_read),
        .write_en(write_enable_data),
        .addr_read(set_index),
        .addr_write(set_index),
        .data_in(data_in),
        .data_out(data_out)
    );
endmodule

`endif // CACHE_WAY_SV