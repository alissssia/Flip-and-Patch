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
SRCS1 = top_patching_one.sv \
    ../cache/cache_tfg.sv \
    mux_nbits.sv \
    patching_mecanism_one.sv

SRCS16 = top_patching_16.sv \
	../cache/cache_tfg.sv \
	mux_nbits.sv \
	patching_mecanism_16.sv

patching_one:
	@echo "-- Test of the version one of the patching mechanism (just one activation at a time)"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_patching_one ${SRCS1} test_top_patching_one.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_patching_one
	@echo "-- DONE --------------------"

patching_16:
	@echo "-- Test of the version two of the patching mechanism (16 activations at a time)"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module top_patching_16 ${SRCS16} top_patching_16.sv test_top_patching_16.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtop_patching_16
	@echo "-- DONE --------------------"