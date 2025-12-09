`ifndef CACHE_TFG_SV
`define CACHE_TFG_SV

`include "activation_output_selector.sv"
`include "address_decoder.sv"
`include "bram.sv"
`include "cache_way.sv"
`include "hit_logic.sv"
`include "write_enable_generator.sv"
`include "write_way_selector.sv"

/*
* cache module
*/
`define TAG [20:8]      // position of the tag bits in the address
`define SET [7:0]    // position of the set bits in the address

module cache_tfg
    #(
        parameter int unsigned NWAYS = 5,
        parameter int unsigned ADDRESS_WIDTH = 21,
        parameter int unsigned WORD_SIZE = 16,
        localparam int unsigned TAG_WIDTH = 13,
        localparam int unsigned SET_WIDTH = 8
    ) (
        input wire clk,
        input wire reset,
        input wire [ADDRESS_WIDTH - 1:0] address,
        input wire read_write, // 1 read, 0 write
        input wire [15:0] activation_in, // for when writing
        input wire request, // whether to perform the action or not
        output wire [15:0] activation_out, // for when reading
        output wire valid,
        output logic error // in case it has reached the error state
    );

    //localparam int unsigned ADDR_ = ;
    
    logic enable_read, enable_write;
    
    // divided address
    wire [12:0] tag;
    wire [7:0] set_index;
    address_decoder addr_decoder_inst (
        .address(address),
        .tag(tag),
        .set_index(set_index)
    );

    // output of the tags / data of each way
    logic [TAG_WIDTH - 1:0] tag_out [NWAYS - 1:0];
    logic [WORD_SIZE - 1:0] data_out [NWAYS - 1:0];
    //logic valid_bits_out [NWAYS - 1:0];

    // mask with the way to write
    logic [NWAYS - 1:0] write_enable_tag;
    logic [NWAYS - 1:0] write_enable_data;

    // instance of the brams for each way (tags + data)
    generate;
        genvar i;
        for (i = 0; i < NWAYS; i++) begin : ways
            cache_way #(
                .TAG_WIDTH(TAG_WIDTH),
                .DATA_WIDTH(WORD_SIZE),
                .SET_WIDTH(SET_WIDTH)
            ) way_instance (
                .clk(clk),
                .resetn(~reset),
                .enable_read(enable_read),
                .write_enable_tag(write_enable_tag[i]),
                .write_enable_data(write_enable_data[i]),
                .set_index(set_index),
                .tag_in(tag),
                .data_in(activation_in),
                .tag_out(tag_out[i]),
                .data_out(data_out[i])
            );
        end
    endgenerate

    // for the valid bits
    /*logic [NWAYS - 1:0] valid_bits_in;
    logic [NWAYS - 1:0] valid_bits_out;
    // we instantiate the bram for the valid bits
    bram #(
        .DEPTH(256),
        .WIDTH_BITS(NWAYS)
    ) valid_bram (
        .clk(clk),
        .resetn(~reset), // NEGADO
        .read_en(enable_read_valid),
        .write_en(enable_write_valid),
        .addr_read(addr_decoder_inst.set_index),
        .addr_write(addr_decoder_inst.set_index),
        .data_in(valid_bits_in),
        .data_out(valid_bits_out)
    );*/
    // for the valid bits
    logic [NWAYS - 1:0] valid_bits_array [0:255]; // 256 sets, NWAYS bits per set
    logic [NWAYS - 1:0] valid_bits_out;
    logic [NWAYS - 1:0] valid_bits_in;

    // for the selection of the way to write and the writing of the new valid bits
    logic [$clog2(NWAYS)-1:0] way_to_write;
    logic [NWAYS-1:0] valid_bits_next;
    write_way_selector #(
        .NWAYS(NWAYS)
    ) write_way_selector_inst (
        .valid_bits_in(valid_bits_out),
        .enable_write_way_bit(enable_write_way_bit),
        .way_to_write(way_to_write),
        .valid_bits_out(valid_bits_next)
    );

    assign valid_bits_out = valid_bits_array[set_index];
    assign valid_bits_in = valid_bits_next;

    // output of valid
    assign valid = |(~valid_bits_array[set_index]);  // if 1 there is at least one free way



    // for the selection of the output of the correct way
    logic [2:0] valid_way;
    logic [NWAYS - 1:0] hit_mask;

    hit_logic #(
        .NWAYS(NWAYS),
        .TAG_WIDTH(TAG_WIDTH)
    ) hit_logic_inst (
        .valid_bits(valid_bits_out),
        .tags_outs(tag_out),
        .address_tag(tag),
        .hit_mask(hit_mask),
        .valid_way(valid_way)
    );


    // writing of the tag and data in the correct way
    write_enable_generator #(
        .NWAYS(NWAYS)
    ) write_enable_generator_inst (
        .enable_write(enable_write),
        .way_to_write(way_to_write),
        .write_enable_tag(write_enable_tag),
        .write_enable_data(write_enable_data)
    );

    // output of data from the correct way
    activation_output_selector #(
        .NWAYS(NWAYS),
        .WORD_SIZE(WORD_SIZE)
    ) activation_output_selector_inst (
        .data_out_0(data_out[0]),
        .data_out_1(data_out[1]),
        .data_out_2(data_out[2]),
        .data_out_3(data_out[3]),
        .data_out_4(data_out[4]),
        .valid_way(valid_way),
        .enable(enable_ram_output),
        .activation_out(activation_out)
    );

    // STATE MACHINE
    typedef enum logic [2:0] {
        RESET,
        ERROR,
        READ_VALID,
        WRITE,
        READING,
        GOT_DATA,
        NOTHING
    } state_t;
    state_t state, next_state;

    // outputs of the state machine
    logic enable_read_valid, enable_write_valid;
    logic enable_address, enable_address_valid;
    logic enable_ram_output;
    // logic L/E_ram, L/E_ram_valid;
    logic enable_write_way_bit;
    logic clear_ram;
    logic error_reg;

    assign error = error_reg;


    // state machine logic
    always_comb begin
        next_state = state;
        enable_read = 0;
        enable_write = 0;
        enable_read_valid = 0;
        enable_write_valid = 0;
        enable_address = 0;
        enable_address_valid = 0;
        enable_ram_output = 0;
        enable_write_way_bit = 0;
        clear_ram = 0;

        if (reset) begin
            clear_ram = 1;
            next_state = RESET;
        end else begin
            case (state)
                RESET: begin
                    if (request) begin
                        if (read_write) begin
                            next_state = ERROR;
                        end else begin
                            enable_read_valid = 1;
                            enable_address_valid = 1;
                            next_state = READ_VALID;
                        end
                    end else begin
                        if (read_write) begin
                            next_state = NOTHING;
                        end else begin
                            next_state = ERROR;
                        end
                    end
                end

                ERROR: begin
                    next_state = ERROR;
                end

                READ_VALID: begin
                    if (request && !read_write) begin
                        if (!valid) begin
                            next_state = ERROR;
                        end else begin
                            enable_write = 1;
                            enable_write_valid = 1;
                            enable_address = 1;
                            enable_address_valid = 1;
                            enable_ram_output = 1;
                            enable_write_way_bit = 1;

                            next_state = WRITE;
                        end
                    end else if (request && read_write) begin
                        next_state = ERROR;
                    end else if (!request) begin
                        // no hace falta?
                        next_state = NOTHING;
                    end
                end

                WRITE: begin
                    if (request && !read_write) begin
                        enable_read_valid = 1;
                        enable_address_valid = 1;

                        next_state = READ_VALID;

                    end else if (request && read_write) begin
                        enable_read = 1;
                        enable_read_valid = 1;
                        enable_address = 1;
                        enable_address_valid = 1;
                        next_state = READING;
                    end else if (!request) begin
                        // nothing
                        next_state = NOTHING;
                    end
                end

                READING: begin
                    if (request) begin
                        if (read_write) begin
                            enable_ram_output = 1;
                            next_state = GOT_DATA;

                        end else begin
                            next_state = ERROR;
                        end
                    end else begin
                        // nothing
                        next_state = NOTHING;
                    end
                end

                GOT_DATA: begin
                    if (request) begin
                        if (read_write) begin
                            enable_read = 1;
                            enable_read_valid = 1;
                            enable_address = 1;
                            enable_address_valid = 1;
                            enable_ram_output = 1;
                            next_state = READING;
                        end else begin
                            next_state = ERROR;
                        end
                    end else begin
                        // nothing
                        next_state = NOTHING;
                    end
                end

                NOTHING: begin // default state, do nothing, wait for a read/write request.
                    if (request) begin
                        if (read_write) begin
                            enable_read = 1;
                            enable_read_valid = 1;
                            enable_address = 1;
                            enable_address_valid = 1;
                            next_state = READING;
                        end else begin
                            enable_read_valid = 1;
                            enable_address_valid = 1;

                            next_state = READ_VALID;
                        end
                    end else begin
                        // nada
                        next_state = NOTHING;
                    end
                end

                default: begin
                    next_state = ERROR; // if an undefined state is reached, go to the error state.
                end

            endcase
        end
    end
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= RESET;
            error_reg <= 0;
            for (int i = 0; i < 256; i++) begin
                valid_bits_array[i] <= '0;
            end
        end else begin
            state <= next_state;

            error_reg <= (next_state == ERROR);
            /*if (enable_read_valid)
                valid_bits_reg <= valid_bits_out;*/

            if (enable_write_valid)
            valid_bits_array[set_index] <= valid_bits_next;
        end
    end
endmodule

`endif // CACHE_SV