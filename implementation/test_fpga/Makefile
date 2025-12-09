ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I.. -I../cache -I../patching_mechanism -I../flipping_mechanism

SRCS = mux_selector_final.sv \
	   test_mechanisms_fpga_good.sv \
	   ../cache/cache_tfg.sv \
	   ../patching_mechanism/top_patching_one.sv \
	   ../flipping_mechanism/flipping_mechanism_one_flipflop.sv \
	   test_mechanisms_fpga.cpp

fpga:
	@echo "-- Test of the combined version of the patching and flipping mechanism for FPGA --"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module test_mechanisms_fpga_good test_mechanisms_fpga_good.sv test_mechanisms_fpga.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vtest_mechanisms_fpga_good
	@echo "-- DONE --------------------"
