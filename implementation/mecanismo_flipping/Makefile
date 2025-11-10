
ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

SRCS1= mux.sv flipping_mechanism_one.sv\
		testbench_flipping_one.cpp

SRCS2= mux.sv flipping_mechanism_one.sv \
		flipping_mechanism_block.sv testbench_flipping_block.cpp

SRCS3= flipflop_one.sv flipflop_one_nbits.sv \
		flipflop_vector.sv flipflop_block.sv \
		testbench_flipflops.cpp

SRCSTestbench= flipflop_one.sv flipflop_vector.sv \
		flipflop_block.sv flipping_mechanism_block.sv \
		flipping_mechanism_flipflop.sv testbench_flipping_flipflop.cpp


v1:
	@echo "-- Test of version 1 of the flipping mechanism in which a mux is used to select the output value and only one activation is processed"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module flipping_mechanism_one ${SRCS1} flipping_mechanism_one.sv testbench_flipping_one.cpp -I. -CFLAGS "-fcoroutines"
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vflipping_mechanism_one
	@echo "-- DONE --------------------"

v2:
	@echo "-- Test of version 2 of the flipping mechanism in which the flipping module of one activation is used to process a block"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module flipping_mechanism_block ${SRCS2} flipping_mechanism_block.sv testbench_flipping_block.cpp -I. -CFLAGS "-fcoroutines"

	@echo "-- RUN ---------------------"
	obj_dir/Vflipping_mechanism_block
	@echo "-- DONE --------------------"

flipflop:
	@echo "-- Test of the different flip-flop modules"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 ${SRCS3} -I. -Wno-MULTITOP -CFLAGS "-fcoroutines" 
 	
	@echo "-- RUN ---------------------"
	obj_dir/Vtestbench_flipflops
	@echo "-- DONE --------------------"

v3:
	@echo "-- Test of version 3 of the flipping mechanism in which the flipping module of one activation is used to process a block and flip-flops that store the data are used"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module flipping_mechanism_flipflop ${SRCSTestbench} flipping_mechanism_flipflop.sv testbench_flipping_flipflop.cpp -I. -CFLAGS "-fcoroutines"

	@echo "-- RUN ---------------------"
	obj_dir/Vflipping_mechanism_flipflop
	@echo "-- DONE --------------------"

testbench:
	@echo "-- Testbench of the flipping mechanism with flip-flops"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module final_testbench_flipping ${SRCSTestbench} flipping_mechanism_flipflop.sv final_testbench_flipping.cpp -I. -CFLAGS "-fcoroutines"

	@echo "-- RUN ---------------------"
	obj_dir/Vfinal_testbench_flipping
	@echo "-- DONE --------------------"

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
