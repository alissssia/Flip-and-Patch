ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I.. -I../cache -I../mecanismo_patching -I../mecanismo_flipping

SRCS = mux_selector_final.sv \
	   test_mechanisms_fpga_bueno.sv \
	   ../cache/cache_tfg.sv \
	   ../mecanismo_patching/top_patching_uno.sv \
	   ../mecanismo_flipping/mecanismo_flipping_uno_flipflop.sv \
	   test_mechanisms_fpga.cpp

fpga:
	@echo "-- Prueba de la version combinada del mecanismo de patching y flipping para fpga"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module test_mechanisms_fpga_bueno test_mechanisms_fpga_bueno.sv test_mechanisms_fpga.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtest_mechanisms_fpga_bueno
	@echo "-- DONE --------------------"
