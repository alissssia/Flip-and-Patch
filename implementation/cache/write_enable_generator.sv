`ifndef WRITE_ENABLE_GENERATOR_SV
`define WRITE_ENABLE_GENERATOR_SV
/*
* Módulo write_enable_generator: genera las máscaras de escritura por vía
*/

module write_enable_generator #(
    parameter int NWAYS = 5 // Número de vías
)(
    input wire enable_write,
    input wire [$clog2(NWAYS) - 1:0] way_to_write, // Vía válida seleccionada a escribir
    output logic [NWAYS - 1:0] write_enable_tag,
    output logic [NWAYS - 1:0] write_enable_data
);

    always_comb begin
        write_enable_tag = '0;
        write_enable_data = '0;

        if (enable_write) begin
            write_enable_tag[way_to_write] = 1'b1; // Habilitar escritura en la vía seleccionada
            write_enable_data[way_to_write] = 1'b1; // Habilitar escritura en la vía seleccionada
        end
    end
endmodule

`endif // WRITE_ENABLE_GENERATOR_SV