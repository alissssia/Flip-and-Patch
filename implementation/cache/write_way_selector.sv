`ifndef WRITE_WAY_SELECTOR_SV
`define WRITE_WAY_SELECTOR_SV
/*
* Módulo write_way_selector: selecciona primera vía libre a escribir y marca su
* bit de validez si se activa el bit de escritura.
*/
module write_way_selector #(
    parameter NWAYS = 5 // Número de vías
) (
    input wire [NWAYS - 1:0] valid_bits_in, // Vías válidas antes de la escritura
    input wire enable_write_way_bit, // Habilita la escritura del bit de validez
    output logic [$clog2(NWAYS) - 1:0] way_to_write, // Vía seleccionada para escribir
    output logic [NWAYS - 1:0] valid_bits_out // Vías válidas después de la escritura
);

   logic [NWAYS-1:0] tmp_valid_bits;
    
    always_comb begin
        tmp_valid_bits = valid_bits_in;
        way_to_write = '0;

        if (enable_write_way_bit) begin
            for (int i = 0; i < NWAYS; i++) begin
                if (!valid_bits_in[i]) begin
                    way_to_write = $clog2(NWAYS)'(i);
                    tmp_valid_bits[i] = 1'b1;
                    break;
                end
            end
        end
        valid_bits_out = tmp_valid_bits;
    end
endmodule

`endif // WRITE_WAY_SELECTOR_SV