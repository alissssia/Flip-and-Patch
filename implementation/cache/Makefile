ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

SRCS = mux5_1.sv \
	activation_output_selector.sv \
    address_decoder.sv \
    bram.sv \
    cache_way.sv \
    hit_logic.sv \
    mux.sv \
    write_enable_generator.sv \
    write_way_selector.sv \
    cache_tfg.sv


v1:
	@echo "-- Prueba de la memoria cache"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --cc --exe --build --timing -j 0 -top-module cache_tfg $(SRCS) test_cache.cpp -I. -CFLAGS "-fcoroutines"
	
	@echo "-- RUN ---------------------"
	obj_dir/Vcache_tfg
	@echo "-- DONE --------------------"