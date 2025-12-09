// Sweep memory of N words x 16 bits
// all bits are set to 0 and then read again to store those that have value
// Memory size 2MiB => 2^20 words x 16 bits

module barrido #(
    parameter int N_WORDS = (1 << 20),
    parameter int DATA_W = 16, // word width
    parameter int ADDR_W = $clog2(N_WORDS), // address width
    parameter logic [DATA_W-1:0] STUCK_VALUE = '0 // value with which the entire memory is filled
) (
    input logic clk,
    input logic rst,
    input logic start, // start the sweep
    // external memory
    input logic [DATA_W-1:0] mem_dout,
    output logic mem_write_enable,
    output logic [DATA_W-1:0] mem_din,
    output logic [ADDR_W-1:0] mem_addr,


    output logic done_write, // indicates that writing has finished
    output logic done_read, // indicates that reading has finished
    output logic read_phase, // indicates if we are in the reading phase
    output logic all_done, // indicates that the entire sweep has finished

    // output each cycle of READ
    output logic [ADDR_W-1:0] addr_out, // current address
    output logic [1:0] error_type // 00 if ok, 01 if HighOrder, 10 if LowAndHighOrder, 11 not possible
);

    initial assert (DATA_W % 2 == 0) else $error("DATA_W must be even");
    localparam logic [ADDR_W-1:0] LAST = ADDR_W'(N_WORDS - 1);


    // states
    typedef enum logic [1:0] {
        RESET,
        WRITE,
        READ,
        DONE
    } state_t;

    state_t current_state, next_state;

    // word counter
    logic [ADDR_W-1:0] addr_counter;

    // logic for the current state and the counter
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            current_state <= RESET;
            addr_counter <= '0;
        end else begin
            current_state <= next_state;
            if (current_state == WRITE && next_state == WRITE || current_state == READ && next_state == READ) begin
                addr_counter <= addr_counter + 1; // if it remains writing or reading, increment the counter
            end else if (current_state == WRITE && next_state == READ) begin
                addr_counter <= '0; // reset the counter for reading
            end else if (current_state == RESET) begin
                addr_counter <= '0;
            end
        end
    end


    // logic for the error types
    logic [DATA_W-1:0] not_expected_value;
    assign not_expected_value = mem_dout ^ STUCK_VALUE; // some bit of the memory does not have the value it should

    logic has_high_order, has_low_order;

    assign has_low_order = | not_expected_value[DATA_W/2-1:0]; // if any of the low bits is the opposite
    assign has_high_order = | not_expected_value[DATA_W-1:DATA_W/2]; // if any of the high bits is the opposite


    logic HighOrder, LowAndHighOrder;
    assign HighOrder = has_high_order && !has_low_order; // bits incorrect only in the high half
    assign LowAndHighOrder = has_high_order && has_low_order; // bits incorrect in both halves

    always_comb begin
        if (HighOrder) begin
            error_type = 2'b01; // HighOrder error
        end else if (LowAndHighOrder) begin
            error_type = 2'b10; // LowAndHighOrder error
        end else begin
            error_type = 2'b00; // No error
        end
    end

    // output if we are in the reading phase
    assign read_phase = (current_state == READ);
    assign addr_out = addr_counter;


    // combinational logic for the next state and control signals
    always_comb begin
        // default values
        next_state = current_state;
        mem_write_enable = 1'b0;
        mem_din = STUCK_VALUE;
        mem_addr = addr_counter;
        done_write = 1'b0;
        done_read = 1'b0;
        all_done = 1'b0;

        case (current_state)
            RESET: begin
                if (start) begin
                    next_state = WRITE;
                end else begin
                    next_state = RESET;
                end
            end

            WRITE: begin
                mem_write_enable = 1'b1;

                if (addr_counter == LAST) begin
                    next_state = READ;
                    done_write = 1'b1;
                end else begin
                    next_state = WRITE;
                end
            end

            READ: begin
                mem_write_enable = 1'b0; // Reading
                if (addr_counter == LAST) begin
                    next_state = DONE;
                    all_done = 1'b1;
                    done_read = 1'b1;
                end else begin
                    next_state = READ;
                end
            end

            DONE: begin
                if (!start) begin
                    next_state = RESET; // Wait for start to go back to 0 to reset
                end else begin
                    next_state = DONE;
                end
            end
            default: begin
                next_state = RESET;
            end
        endcase
    end

endmodule