module testbench #(
    parameter int N_WORDS = 64, // para asegurar que funciona con un numero mas pequeño
    parameter int DATA_W = 16, // ancho de palabra
    parameter int ADDR_W = $clog2(N_WORDS) // ancho de direccion
) (
    input logic clk,
    input logic reset,
    input logic start,

    //input logic [ADDR_W-1:0] rd_addr,
    output logic [1:0] rd_data, // para leer el tipo de error en una direccion

    output logic all_done,

    // memorias de error
    output logic [1:0] error_0 [0:N_WORDS-1], // errores en el barrido de 0s
    output logic [1:0] error_1 [0:N_WORDS-1]
);

// RAM
logic mem_write_enable;
logic [ADDR_W-1:0] mem_addr;
logic [DATA_W-1:0] mem_wdata;
logic [DATA_W-1:0] mem_rdata;

logic [DATA_W-1:0] memory [0:N_WORDS-1];
always_ff @(posedge clk) begin
    if (mem_write_enable) begin
        memory[mem_addr] <= mem_wdata;
    end
end
assign mem_rdata = memory[mem_addr];


// memorias para guardar los errores
/*logic [1:0] error_0 [0:N_WORDS-1]; 
logic [1:0] error_1 [0:N_WORDS-1];*/


// instancia del barrido de 1s
logic start1, done_write1, done_read1;
logic write_enable1;
logic [ADDR_W-1:0] addr1, addr_out1;
logic [1:0] error_type1;
logic [DATA_W-1:0] write_data1;
logic read_phase1;
logic all_done1;

barrido #(
    .N_WORDS(N_WORDS),
    .DATA_W(DATA_W),
    .ADDR_W(ADDR_W),
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

// instancia del barrido de 0s
logic start0, done_write0, done_read0;
logic write_enable0;
logic [ADDR_W-1:0] addr0, addr_out0;
logic [1:0] error_type0;
logic [DATA_W-1:0] write_data0;
logic read_phase0;
logic all_done0;

barrido #(
    .N_WORDS(N_WORDS),
    .DATA_W(DATA_W),
    .ADDR_W(ADDR_W),
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

// estados
typedef enum logic [2:0] {
    IDLE,
    RUN_ONES,
    RUN_ZEROS,
    DONE
} state_t;
state_t current_state, next_state;


// control de la ram
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

// gestion de starts
always_comb begin
    start1 = (current_state == RUN_ONES);
    start0 = (current_state == RUN_ZEROS);
end

// captura de errores en las lecturas
// cambiar a una sola memoria cuando funcione
always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
        // inicializamos las memorias de error a 0 (sin error)
        foreach (error_0[i]) error_0[i] <= 2'b00;
        foreach (error_1[i]) error_1[i] <= 2'b00;
    end else begin
        if (current_state == RUN_ONES && read_phase1) begin
            error_1[addr_out1] <= error_type1;
        end else if (current_state == RUN_ZEROS && read_phase0) begin
            error_0[addr_out0] <= error_type0;
        end
    end
end

// estado siguiente
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


endmodule