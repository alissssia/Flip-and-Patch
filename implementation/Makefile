ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I. -I./cache -I./patching_mechanism -I./flipping_mechanism

SRCS = mux_selector_final.sv \
	   top_test_mechanisms.sv \
	   cache/cache_tfg.sv \
	   patching_mechanism/patching_mechanism.sv \
	   mecanismo_flipping/mecanismo_flipping.sv \
	   test_top_mechanisms.cpp

combinated:
	@echo "-- Test of the combined version of the patching and flipping mechanism --"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_test_mechanisms top_test_mechanisms.sv test_top_mechanisms.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_test_mechanisms
	@echo "-- DONE --------------------"
