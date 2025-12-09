`ifndef HIT_LOGIC_SV
`define HIT_LOGIC_SV
/*
* MModule hit_logic: calculates the hit_mask and the valid way by comparing tags
*/

module hit_logic #(
    parameter int NWAYS = 5, // Number of ways
    parameter int TAG_WIDTH = 13 // Width of the tag
) (
    input logic [NWAYS - 1:0] valid_bits, // Valid ways
    input logic [TAG_WIDTH - 1:0] tags_outs [NWAYS -1:0], // outputs of the tags of each way
    input logic [TAG_WIDTH - 1:0] address_tag, // tag of the access address
    output logic [NWAYS - 1:0] hit_mask, // Hit mask
    output logic [$clog2(NWAYS) - 1:0] valid_way // Way that hit
);

    always_comb begin
        valid_way = 3'b111; // Initialize valid way
        for (int i = 0; i < NWAYS; i++) begin
            hit_mask[i] = valid_bits[i] && (tags_outs[i] == address_tag); // Compare tag and valid way
            if (hit_mask[i]) begin
                valid_way = $clog2(NWAYS)'(i); // Assign valid way if there is a hit
            end
        end
        if (valid_way == 3'b111) begin
            // should never happen, but if there is no hit, return an invalid way
        end
    end
endmodule

`endif // HIT_LOGIC_SV