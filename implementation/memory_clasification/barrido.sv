// Barrido de memoria de N palabras x 16 bits
// se ponen todos los bits a 0 y se vuelven a leer para guardarnos los que tienen valor 1.
// Memoria de tamaño 2MiB => 2^20 palabras x 16 bits

module barrido #(
    parameter int N_WORDS = (1 << 20),
    parameter int DATA_W = 16, // ancho de palabra
    parameter int ADDR_W = $clog2(N_WORDS), // ancho de direccion
    parameter logic [DATA_W-1:0] STUCK_VALUE = '0 // valor con el que se rellena toda la memoria
) (
    input logic clk,
    input logic rst,
    input logic start, // inicia el barrido

    // memoria externa
    input logic [DATA_W-1:0] mem_dout,
    output logic mem_write_enable,
    output logic [DATA_W-1:0] mem_din,
    output logic [ADDR_W-1:0] mem_addr,


    output logic done_write, // indica que ha terminado la escritura
    output logic done_read, // indica que ha terminado la lectura
    output logic read_phase, // indica si estamos en la fase de lectura
    output logic all_done, // indica que ha terminado todo el barrido

    // salida cada ciclo de READ
    output logic [ADDR_W-1:0] addr_out, // direccion actual
    output logic [1:0] error_type // 00 si ok, 01 si HighOrder, 10 si LowAndHighOrder, 11 no posible
);

    initial assert (DATA_W % 2 == 0) else $error("DATA_W debe ser par");
    localparam logic [ADDR_W-1:0] LAST = ADDR_W'(N_WORDS - 1);


    // estados
    typedef enum logic [1:0] {
        RESET,
        WRITE,
        READ,
        DONE
    } state_t;

    state_t current_state, next_state;

    // contador de palabras
    logic [ADDR_W-1:0] addr_counter;

    // logica para el estado actual y el contador
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            current_state <= RESET;
            addr_counter <= '0;
        end else begin
            current_state <= next_state;
            if (current_state == WRITE && next_state == WRITE || current_state == READ && next_state == READ) begin
                addr_counter <= addr_counter + 1; // si se mantiene escribiendo o leyendo, incrementamos el contador
            end else if (current_state == WRITE && next_state == READ) begin
                addr_counter <= '0; // reiniciamos el contador para la lectura
            end else if (current_state == RESET) begin
                addr_counter <= '0;
            end
        end
    end


    // logica para los tipos de error
    logic [DATA_W-1:0] not_expected_value;
    assign not_expected_value = mem_dout ^ STUCK_VALUE; // algun bit de la memoria no tiene el valor que deberia

    logic has_high_order, has_low_order;

    assign has_low_order = | not_expected_value[DATA_W/2-1:0]; // si alguno de los bits bajos es lo contrario
    assign has_high_order = | not_expected_value[DATA_W-1:DATA_W/2]; // si alguno de los bits altos es lo contrario


    logic HighOrder, LowAndHighOrder;
    assign HighOrder = has_high_order && !has_low_order; // bits incorrectos solo en la mitad alta
    assign LowAndHighOrder = has_high_order && has_low_order; // bits incorrectos en ambas mitades

    always_comb begin
        if (HighOrder) begin
            error_type = 2'b01; // HighOrder error
        end else if (LowAndHighOrder) begin
            error_type = 2'b10; // LowAndHighOrder error
        end else begin
            error_type = 2'b00; // No error
        end
    end


        // señales de control de memoria
    /*logic write_enable; // write enable
    logic [DATA_W-1:0] mem_din; // datos de entrada SIEMPRE STUCK_VALUE
    logic [DATA_W-1:0] mem_dout; // datos de salida
    logic [ADDR_W-1:0] mem_addr; // direccion

    // memoria (2MiB)
    logic [DATA_W-1:0] memory [0:N_WORDS-1];
    always_ff @(posedge clk) begin
        if (write_enable) begin
            memory[mem_addr] <= mem_din;
        end
        mem_dout <= memory[mem_addr];
    end*/

    // salida si estamos en la fase de lectura
    assign read_phase = (current_state == READ);
    assign addr_out = addr_counter;


    // logica combinacional para el siguiente estado y señales de control
    always_comb begin
        // valores por defecto
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
                //mem_din = STUCK_VALUE; // Escribimos STUCK_VALUE en la memoria

                if (addr_counter == LAST) begin
                    next_state = READ;
                    done_write = 1'b1;
                end else begin
                    next_state = WRITE;
                end
            end

            READ: begin
                mem_write_enable = 1'b0; // Lectura
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
                    next_state = RESET; // Esperamos a que start vuelva a 0 para reiniciar
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