# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vfinal_integration.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vfinal_integration \
	Vfinal_integration___024root__DepSet_h90cb16fb__0 \
	Vfinal_integration___024root__DepSet_hf0b79f51__0 \
	Vfinal_integration_final_integration__DepSet_h24c8f7b1__0 \
	Vfinal_integration_final_integration__DepSet_h64b57e87__0 \
	Vfinal_integration_test_mechanisms__DepSet_h055c041c__0 \
	Vfinal_integration_top_patching_final__M4__DepSet_h51fe4aeb__0 \
	Vfinal_integration_cache_tfg__DepSet_h2e3d1573__0 \
	Vfinal_integration_bram__D100_Wd__DepSet_h340193f2__0 \
	Vfinal_integration_bram__D100_W10__DepSet_hc934e9f1__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vfinal_integration__ConstPool_0 \
	Vfinal_integration___024root__Slow \
	Vfinal_integration___024root__DepSet_h90cb16fb__0__Slow \
	Vfinal_integration___024root__DepSet_hf0b79f51__0__Slow \
	Vfinal_integration_final_integration__Slow \
	Vfinal_integration_final_integration__DepSet_h24c8f7b1__0__Slow \
	Vfinal_integration_final_integration__DepSet_h64b57e87__0__Slow \
	Vfinal_integration_test_mechanisms__Slow \
	Vfinal_integration_test_mechanisms__DepSet_h055c041c__0__Slow \
	Vfinal_integration_test_mechanisms__DepSet_h86208e2c__0__Slow \
	Vfinal_integration_top_patching_final__M4__Slow \
	Vfinal_integration_top_patching_final__M4__DepSet_hb1c2c361__0__Slow \
	Vfinal_integration_cache_tfg__Slow \
	Vfinal_integration_cache_tfg__DepSet_h2e3d1573__0__Slow \
	Vfinal_integration_cache_tfg__DepSet_h6b019cc9__0__Slow \
	Vfinal_integration_cache_way__Td_D10_S8__Slow \
	Vfinal_integration_cache_way__Td_D10_S8__DepSet_h7885075d__0__Slow \
	Vfinal_integration_bram__D100_Wd__Slow \
	Vfinal_integration_bram__D100_Wd__DepSet_h54ee1a4a__0__Slow \
	Vfinal_integration_bram__D100_W10__Slow \
	Vfinal_integration_bram__D100_W10__DepSet_h49f96047__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vfinal_integration__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vfinal_integration__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
