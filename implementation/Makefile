ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I. -I./cache -I./mecanismo_patching -I./mecanismo_flipping

SRCS = mux_selector_final.sv \
	   top_test_mechanisms.sv \
	   cache/cache_tfg.sv \
	   mecanismo_patching/mecanismo_patching.sv \
	   mecanismo_flipping/mecanismo_flipping.sv \
	   test_top_mechanisms.cpp

combinated:
	@echo "-- Prueba de la version combinada del mecanismo de patching y flipping"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_test_mechanisms top_test_mechanisms.sv test_top_mechanisms.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_test_mechanisms
	@echo "-- DONE --------------------"
