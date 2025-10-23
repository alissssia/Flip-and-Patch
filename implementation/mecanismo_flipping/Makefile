
ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

SRCS1= mux.sv mecanismo_flipping_uno.sv \
		probar_flipping_uno.cpp

SRCS2= mux.sv mecanismo_flipping_uno.sv \
		mecanismo_flipping_bloque.sv probar_flipping_bloque.cpp

SRCS3= flipflop_uno.sv flipflop_uno_nbits.sv \
		flipflop_vector.sv flipflop_bloque.sv \
		probar_flipflops.cpp

SRCSTestbench= flipflop_uno.sv flipflop_vector.sv \
		flipflop_bloque.sv mecanismo_flipping_bloque.sv \
		mecanismo_flipping_flipflop.sv probar_flipping_flipflop.cpp


v1:
	@echo "-- Prueba de la version 1 del mecanismo flipping en la que se usa un mux para seleccionar el valor de la salida y solo se procesa una activacion"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_uno ${SRCS1} mecanismo_flipping_uno.sv probar_flipping_uno.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vmecanismo_flipping_uno
	@echo "-- DONE --------------------"

v2:
	@echo "-- Prueba de la version 2 del mecanismo flipping en la que se usa el modulo de flipping de una activacion para procesar un bloque"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_bloque ${SRCS2} mecanismo_flipping_bloque.sv probar_flipping_bloque.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vmecanismo_flipping_bloque
	@echo "-- DONE --------------------"

v3:
	@echo "-- Prueba de la version 3 del mecanismo flipping en la que se usa el modulo de flipping de una activacion para procesar un bloque y se usan flip-flops que almacenan los datos"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 ${SRCS3} -I. -Wno-MULTITOP -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vprobar_flipflops
	@echo "-- DONE --------------------"

testbench:
	@echo "-- Testbench"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module mecanismo_flipping_flipflop ${SRCSTestbench} mecanismo_flipping_flipflop.sv probar_flipping_flipflop.cpp -I. -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vmecanismo_flipping_flipflop
	@echo "-- DONE --------------------"

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
