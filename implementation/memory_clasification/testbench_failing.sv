module testbench_failing #(
    parameter int N_WORDS = (1 << 20), // number of words in RAM
    parameter int DATA_W  = 16, // word width
    parameter int ADDR_W  = $clog2(N_WORDS), // address width

    // ---- Fault injection parameters ----
    parameter int STUCK_PCT = 300000,//569,             // % of defective bits
    parameter int SEED      = 32'hC0FFEE      // seed
) (
    input  logic clk,
    input  logic reset,
    input  logic start,

    output logic [1:0] rd_data,   // error (informative only)
    output logic       all_done,

    // error memories (outputs for inspection)
    //output logic [1:0] error_0 [0:N_WORDS-1], // errors detected in the sweep of 0s
    //output logic [1:0] error_1 [0:N_WORDS-1]  // errors detected in the sweep of 1s
    //output logic error_map [0:N_WORDS-1],  // // indicates if there is an error or not at that address
    output logic flipping_bit [N_WORDS-1:0],    // indicates if there is a high order type error
    output logic patching_bit [N_WORDS-1:0]     // indicates if there is a low&high order type error
);

    // RAM
    logic mem_write_enable;
    logic [ADDR_W-1:0] mem_addr;
    logic [DATA_W-1:0] mem_wdata;
    logic [DATA_W-1:0] mem_rdata;

    logic [DATA_W-1:0] memory [0:N_WORDS-1];

    // Fault masks per bit: 1 = defective bit
    logic [DATA_W-1:0] stuck0_mask [0:N_WORDS-1];  // bits stucked a 0
    logic [DATA_W-1:0] stuck1_mask [0:N_WORDS-1];  // bits stucked a 1

    // initialization of defective bits in each bit of each memory address
    initial begin
        void'($urandom(SEED));
        foreach (memory[i]) memory[i] = '0;
        foreach (stuck0_mask[i]) begin
            stuck0_mask[i] = '0;
            stuck1_mask[i] = '0;
            for (int b = 0; b < DATA_W; b++) begin
                if ($urandom_range(0,999999) < STUCK_PCT) begin
                    if ($urandom_range(0,1) == 0)
                        stuck0_mask[i][b] = 1'b1;  // stuck-at-0
                    else
                        stuck1_mask[i][b] = 1'b1;  // stuck-at-1
                end
            end
        end
    end

    // so that defective bits ignore what is written during write
    always_ff @(posedge clk) begin
        if (mem_write_enable) begin
            logic [DATA_W-1:0] keep_mask = ~(stuck0_mask[mem_addr] | stuck1_mask[mem_addr]);
            logic [DATA_W-1:0] forced1   =  stuck1_mask[mem_addr]; // stuck-at-1 bits force 1
            memory[mem_addr] <= (mem_wdata & keep_mask) | forced1;
        end
    end

    assign mem_rdata = memory[mem_addr];

    // instance of the sweep of 1s
    logic start1, done_write1, done_read1;
    logic write_enable1;
    logic [ADDR_W-1:0] addr1, addr_out1;
    logic [1:0] error_type1;
    logic [DATA_W-1:0] write_data1;
    logic read_phase1;
    logic all_done1;

    barrido #(
        .N_WORDS(N_WORDS),
        .DATA_W (DATA_W),
        .ADDR_W (ADDR_W),
        .STUCK_VALUE(16'hFFFF)
    ) barrido_1s (
        .clk(clk),
        .rst(reset),
        .start(start1),

        .mem_dout(mem_rdata),
        .mem_write_enable(write_enable1),
        .mem_din(write_data1),
        .mem_addr(addr1),

        .done_write(done_write1),
        .done_read(done_read1),
        .read_phase(read_phase1),
        .all_done(all_done1),

        .addr_out(addr_out1),
        .error_type(error_type1)
    );

    // instance of the sweep of 0s
    logic start0, done_write0, done_read0;
    logic write_enable0;
    logic [ADDR_W-1:0] addr0, addr_out0;
    logic [1:0] error_type0;
    logic [DATA_W-1:0] write_data0;
    logic read_phase0;
    logic all_done0;

    barrido #(
        .N_WORDS(N_WORDS),
        .DATA_W (DATA_W),
        .ADDR_W (ADDR_W),
        .STUCK_VALUE(16'h0000)
    ) barrido_0s (
        .clk(clk),
        .rst(reset),
        .start(start0),

        .mem_dout(mem_rdata),
        .mem_write_enable(write_enable0),
        .mem_din(write_data0),
        .mem_addr(addr0),

        .done_write(done_write0),
        .done_read(done_read0),
        .read_phase(read_phase0),
        .all_done(all_done0),

        .addr_out(addr_out0),
        .error_type(error_type0)
    );

    // states
    typedef enum logic [2:0] {
        IDLE,
        RUN_ONES,
        RUN_ZEROS,
        DONE
    } state_t;
    state_t current_state, next_state;

    // control of the RAM
    always_comb begin
        if (current_state == RUN_ONES) begin
            mem_write_enable = write_enable1;
            mem_addr = addr1;
            mem_wdata = write_data1;
        end else if (current_state == RUN_ZEROS) begin
            mem_write_enable = write_enable0;
            mem_addr = addr0;
            mem_wdata = write_data0;
        end else begin
            mem_write_enable = 1'b0;
            mem_addr = '0;
            mem_wdata = '0;
        end
    end

    // management of starts
    always_comb begin
        start1 = (current_state == RUN_ONES);
        start0 = (current_state == RUN_ZEROS);
    end

    // capture of errors in the readings
    // in a single memory + bits flipping and patching
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // we initialize the error memories to 0 (no error)
            //foreach (error_map[i]) error_map[i] <= 2'b00;
            foreach (flipping_bit[i]) flipping_bit[i] <= 1'b0;
            foreach (patching_bit[i]) patching_bit[i] <= 1'b0;
        end else begin
            if (current_state == RUN_ONES && read_phase1) begin
                //error_map[addr_out1][1] <= error_type1;
                case (error_type1)
                    2'b10: begin
                        patching_bit[addr_out1] <= 1'b1;
                        flipping_bit[addr_out1] <= 1'b0;
                    end
                    2'b01: begin
                        if (!patching_bit[addr_out1]) begin
                            flipping_bit[addr_out1] <= 1'b1;
                        end
                    end
                    default: ;
                endcase
            end else if (current_state == RUN_ZEROS && read_phase0) begin
                //error_map[addr_out0][0] <= error_type0;
                case (error_type0)
                    2'b10: begin
                        patching_bit[addr_out0] <= 1'b1;
                        flipping_bit[addr_out0] <= 1'b0;
                    end
                    2'b01: begin
                        if (!patching_bit[addr_out0]) begin
                            flipping_bit[addr_out0] <= 1'b1;
                        end
                    end
                    default: ;
                endcase
            end
        end
    end

    // error counters (for larger memories)
    int unsigned ok_ones, high_only_ones, both_ones;
    int unsigned ok_zeros, high_only_zeros, both_zeros;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            ok_ones <= 0; high_only_ones <= 0; both_ones <= 0;
            ok_zeros <= 0; high_only_zeros <= 0; both_zeros <= 0;
        end else begin
            // SWEEP 1s
            if (current_state == RUN_ONES && read_phase1) begin
            // 11 shouldn't happen
            assert (error_type1 != 2'b11)
                else $error("sweep_1s: error_type=11 at addr %0d", addr_out1);
            unique case (error_type1)
                2'b00: ok_ones         <= ok_ones         + 1;
                2'b01: high_only_ones  <= high_only_ones  + 1; // high only
                2'b10: both_ones       <= both_ones       + 1; // high and low
                default: ; // 11
            endcase
            end

            // SWEEP 0s
            if (current_state == RUN_ZEROS && read_phase0) begin
            assert (error_type0 != 2'b11)
                else $error("sweep_0s: error_type=11 at addr %0d", addr_out0);

            unique case (error_type0)
                2'b00: ok_zeros        <= ok_zeros        + 1;
                2'b01: high_only_zeros <= high_only_zeros + 1; // high only
                2'b10: both_zeros      <= both_zeros      + 1; // high and low
                default: ; // 11
            endcase
            end
        end
    end

    // next state
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= IDLE;
            all_done <= 1'b0;
        end else begin
            current_state <= next_state;
            if (next_state == DONE) begin
                all_done <= 1'b1;
            end else begin
                all_done <= 1'b0;
            end
        end
    end

    always_comb begin
        next_state = current_state;
        case (current_state)
            IDLE: begin
                if (start) begin
                    next_state = RUN_ONES;
                end else begin
                    next_state = IDLE;
                end
            end
            RUN_ONES: begin
                if (done_read1) begin
                    next_state = RUN_ZEROS;
                end else begin
                    next_state = RUN_ONES;
                end
            end
            RUN_ZEROS: begin
                if (done_read0) begin
                    next_state = DONE;
                end else begin
                    next_state = RUN_ZEROS;
                end
            end
            DONE: begin
                if (reset) begin
                    next_state = IDLE;
                end else begin
                    next_state = DONE;
                end
            end
            default: next_state = IDLE;
        endcase
    end


    // error type in each cycle
    always_comb begin
        case (current_state)
            RUN_ONES: rd_data = error_type1;
            RUN_ZEROS: rd_data = error_type0;
            default: rd_data = 2'b00;
        endcase
    end

    // error summary printout
    final begin
        int unsigned ok_total = 0, ones_only = 0, zeros_only = 0;
        int unsigned err_words;
        real porcentaje_total;
        real porcentaje_ones;
        real porcentaje_zeros;

        foreach (flipping_bit[i]) begin
            logic fi = flipping_bit[i];
            logic pi = patching_bit[i];

            unique case ({pi,fi}) // {p,f}
                2'b00: ok_total++;
                2'b01: ones_only++;   // only f
                2'b10: zeros_only++;  // only p
                2'b11: ; // can't happen
            endcase
        end

        err_words = ones_only + zeros_only;

        porcentaje_total  = (err_words  * 100.0) / N_WORDS;
        porcentaje_ones  = (ones_only  * 100.0) / N_WORDS;
        porcentaje_zeros = (zeros_only * 100.0) / N_WORDS;

        $display("\n================= RESULTS (p/f) =================");
        $display("N_WORDS        : %0d", N_WORDS);
        $display("OK             : %0d", ok_total);
        $display("Bit f (01)    : %0d", ones_only);
        $display("Bit p (10)    : %0d", zeros_only);
        $display("%%ERR total    : %.2f%%", porcentaje_total);
        $display("  - %% Bit f  : %.2f%%", porcentaje_ones);
        $display("  - %% Bit p  : %.6f%%", porcentaje_zeros);
        $display("====================================================\n");
    end


endmodule
