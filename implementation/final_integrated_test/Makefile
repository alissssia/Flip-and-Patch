ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

INCLUDES = -I. -I.. -I../memory_clasification -I../cache -I../mecanismo_patching -I../mecanismo_flipping

SRCS = mux_selector_final.sv \
	   top_test_mechanisms.sv \
	   memory_clasification/testbench_fallos.sv \
	   cache/cache_tfg.sv \
	   mecanismo_patching/mecanismo_patching.sv \
	   mecanismo_flipping/mecanismo_flipping.sv \
	   test_top_mechanisms.cpp

integration:
	@echo "-- Integracion de la clasificacion de memoria con los mecanismos"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module final_integration final_integration.sv main_integration.cpp $(INCLUDES) -CFLAGS "-fcoroutines" 
	
	@echo "-- RUN ---------------------"
	obj_dir/Vfinal_integration
	@echo "-- DONE --------------------"