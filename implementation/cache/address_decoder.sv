`ifndef ADDRESS_DECODER_SV
`define ADDRESS_DECODER_SV
/*
* MModule address_decoder: divides the address into tag and set_index
*/
module address_decoder #(
    parameter unsigned TAG_WIDTH = 13, // width of the tag
    parameter unsigned SET_WIDTH = 8 // width of the set index
)(
    input  wire [TAG_WIDTH + SET_WIDTH - 1:0] address,
    output wire [TAG_WIDTH - 1:0] tag,
    output wire [SET_WIDTH - 1:0]  set_index
);
    assign tag = address[TAG_WIDTH + SET_WIDTH - 1:SET_WIDTH];
    assign set_index = address[SET_WIDTH - 1:0];
endmodule

`endif // ADDRESS_DECODER_SV