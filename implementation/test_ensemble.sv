module test_ensemble #(
    parameter int N = 16,
    parameter int M = 4,
    parameter int ADDR_WIDTH = 21,
    parameter int N_WORDS = 64
) (
    input logic clk,
    input logic reset,

    // output of the ram (possibly incorrect)
    input logic [N - 1:0] activation_org [N_WORDS - 1:0],

    // content of the cache (if that activation is incorrect in the ram)
    input logic [N - 1:0] activation_cache_full [N_WORDS - 1:0],

    // f and p bits
    input logic f [N_WORDS - 1:0],
    input logic p [N_WORDS - 1:0],

    // signals from testbench to process blocks
    input logic start_reading,

    // outputs
    output logic [N-1:0] flipped_global [N_WORDS-1:0],
    output logic [N-1:0] patched_global [N_WORDS-1:0],
    output logic [N-1:0] final_global [N_WORDS-1:0],
    output logic [N - 1:0] original_activation [M - 1:0],
    output logic cache_write_finished,
    output logic finished,
    output logic [$clog2(N_WORDS)-1:0] dbg_idx [M - 1:0]
);


    logic f_block [M - 1:0];
    logic p_block [M - 1:0];
    logic [N - 1:0] activation_org_block [M - 1:0];
    logic [N - 1:0] flipped_block [M - 1:0];
    logic [N - 1:0] patched_block [M - 1:0];
    logic [N - 1:0] final_choice [M - 1:0];

    // cache control FSM for patching
    typedef enum logic [1:0] {
        P_ST_RESET,
        P_ST_FILL,
        P_ST_READ
    } p_state_t;

    p_state_t p_state, p_next_state;

    // counter to fill the patching cache
    int unsigned p_fill_addr, p_next_fill_addr;  // 0..N_WORDS-1

    // counter to read the patching cache
    int unsigned p_read_addr, p_next_read_addr;  // 0..N_WORDS-1

    // interface signals to top_patching_final
    logic              p_request;
    logic              p_read_write;     // 0 = write, 1 = read
    logic [ADDR_WIDTH-1:0] p_address;
    logic [N-1:0]      p_activation_in;
    logic [$clog2(M)-1:0] p_index;
    logic              p_store_enable;
    logic              p_valid; // indicates that the output of the patching mechanism is valid, doesn't have an output in this module but it could be added
    logic              p_error; // error signal from patching module, doesn't have an output in this module but it could be added

    // patching output
    logic [N-1:0] patched_from_cache [M - 1:0];

    // internal memory to store patched activations (patching output)
    logic [N-1:0] patched_mem [N_WORDS-1:0];

    // activation block and p bits to feed the patching module
    logic [N-1:0] activation_org_patch [M - 1:0];
    logic         p_patch             [M - 1:0];

    // assign original activation output (to help debug in testbench)
    for (genvar i = 0; i < M; i++) begin : GEN_ORIG_OUT
        assign original_activation[i] = activation_org_block[i];
    end

    localparam int N_BLOCK = N_WORDS / M;
    int unsigned base_idx;
    logic reading;

    // reset and control of reading process
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            reading <= 1'b0;
            base_idx <= '0;
        end else begin
            if (start_reading) begin
                reading <= 1'b1;
                base_idx <= '0;
            end else if (reading) begin
                if (base_idx + M < N_WORDS) begin
                    base_idx <= base_idx + M;
                end else begin
                    reading <= 1'b0;
                end
            end
        end
    end

    // patching state registers
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            p_state      <= P_ST_RESET;
            p_fill_addr  <= '0;
            p_read_addr  <= '0;
        end else begin
            p_state      <= p_next_state;
            p_fill_addr  <= p_next_fill_addr;
            p_read_addr  <= p_next_read_addr;
        end
    end

    

    for (genvar i = 0; i < M; i++) begin
        assign activation_org_block[i] = activation_org[base_idx + i];
        assign f_block[i] = f[base_idx + i];
        assign p_block[i] = p[base_idx + i];

        // patched_block comes from the internal memory filled by the patching mechanism
        assign patched_block[i] = patched_mem[base_idx + i];

        // output of the mechanism -> we store it in flipped_global
        always_ff @(posedge clk or posedge reset) begin
            if (reset) begin
                flipped_global[base_idx + i] <= '0;
                patched_global[base_idx + i] <= '0;
                final_global  [base_idx + i] <= '0;
                dbg_idx[i] <= '0;
            end else if (reading) begin
                flipped_global[base_idx + i] <= flipped_block[i];
                patched_global[base_idx + i] <= patched_block[i];
                final_global  [base_idx + i] <= final_choice[i];
                dbg_idx[i] <= base_idx[$clog2(N_WORDS)-1:0] + i[$clog2(N_WORDS)-1:0];  // para debug
            end
        end
    end

    // patching FSM (it fills the cache and then reads it)
    always_comb begin
        // default values
        p_next_state      = p_state;
        p_next_fill_addr  = p_fill_addr;
        p_next_read_addr  = p_read_addr;

        p_request       = 1'b0;
        p_read_write    = 1'b1;      // default to read
        p_address       = '0;
        p_activation_in = '0;
        p_index         = '0;
        p_store_enable  = 1'b0;

        case (p_state)
            // reset state
            P_ST_RESET: begin
                p_next_state     = P_ST_FILL;
                p_next_fill_addr = '0;
                p_next_read_addr = '0;
            end

            // step one: fill the patching cache with activation_cache_full
            P_ST_FILL: begin
                p_request       = 1'b1;
                p_read_write    = 1'b0; // write
                p_address       = p_fill_addr[ADDR_WIDTH-1:0];
                p_activation_in = activation_cache_full[p_fill_addr];

                if (p_fill_addr == N_WORDS-1) begin
                    p_next_state = P_ST_READ;
                end else begin
                    p_next_fill_addr = p_fill_addr + 1;
                end
            end

            // step 2: read the patching cache sequentially
            P_ST_READ: begin
                p_request    = 1'b1;
                p_read_write = 1'b1; // read
                p_address    = p_read_addr[ADDR_WIDTH-1:0];

                p_store_enable = 1'b1;
                p_index        = p_read_addr[$clog2(M)-1:0]; // p_read_addr % M

                if (p_read_addr == N_WORDS-1) begin
                    p_next_state     = P_ST_READ;    // we stay here frozen
                    p_next_read_addr = p_read_addr;
                end else begin
                    p_next_read_addr = p_read_addr + 1;
                end
            end

            // default case
            default: begin
                p_next_state      = P_ST_RESET;
                p_next_fill_addr  = '0;
                p_next_read_addr  = '0;
            end
        endcase
    end

    // build activation_org_patch and p_patch for the current p_read_addr
    always_comb begin
        // global address we are processing in patching
        int unsigned gaddr;
        logic [$clog2(M)-1:0] lane;

        gaddr = p_read_addr;
        lane  = gaddr[$clog2(M)-1:0];  // gaddr % M (M power of 2) 
        // default all to zero
        for (int ch = 0; ch < M; ch++) begin
            activation_org_patch[ch] = '0;
            p_patch[ch]             = 1'b0;
        end

        if (gaddr < N_WORDS) begin
            // only one lane is active at a time
            activation_org_patch[lane] = activation_org[gaddr];
            p_patch[lane]              = p[gaddr];
        end
    end

    // finished signal
    assign finished = ~reading & cache_write_finished;

    // first we do flipping
    flipping_mechanism_block #(
        .N(N),
        .M(M)
    ) flip_inst (
        .a(activation_org_block),  // input block activations 
        .f(f_block),               // bits f per block
        .b(flipped_block)          // flipped activations
    );


    // then we do patching
    top_patching_final #(
        .N(N),
        .M(M)
    ) patch_inst (
        .clk              (clk),
        .reset            (reset),
        .request          (p_request),
        .read_write       (p_read_write),
        .address          (p_address),
        .activation_in    (p_activation_in),
        .p                (p_patch),
        .activation_org   (activation_org_patch),
        .index            (p_index),
        .store_enable     (p_store_enable),
        .chosen_activation(patched_from_cache),
        .valid            (p_valid),
        .error            (p_error)
    );
    

    // final choice
    mux_selector_final #(
        .N(N),
        .M(M)
    ) final_mux_inst (
        .a_original(activation_org_block),
        .a_flipped(flipped_block),
        .a_patched(patched_block),
        .f(f_block),
        .p(p_block),
        .selected(final_choice)
    );

    // writing patched_mem from top_patching_final
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            for (int i = 0; i < N_WORDS; i++) begin
                patched_mem[i] <= '0;
            end
        end
        else begin
            // The patching FSM activates p_store_enable when p_valid=1
            //if (p_store_enable && p_valid) begin
            if (p_store_enable) begin
                // p_read_addr = global address we are reading from the cache
                // p_index     = lane within the block (0..M-1)
                patched_mem[p_read_addr] <= patched_from_cache[p_index];
            end
        end
    end



endmodule