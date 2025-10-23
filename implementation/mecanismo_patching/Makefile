ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I. -I../cache
SRCS1 = top_patching_uno.sv \
    ../cache/cache_tfg.sv \
    mux_nbits.sv \
    mecanismo_patching_uno.sv

SRCS16 = top_patching_16.sv \
	../cache/cache_tfg.sv \
	mux_nbits.sv \
	mecanismo_patching_16.sv

patching_uno:
	@echo "-- Prueba de la version uno del mecanismo de patching"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_patching_uno ${SRCS1} test_top_patching_uno.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_patching_uno
	@echo "-- DONE --------------------"

patching_16:
	@echo "-- Prueba de la version dos del mecanismo de patching"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_patching_16 ${SRCS16} top_patching_16.sv test_top_patching_16.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_patching_16
	@echo "-- DONE --------------------"