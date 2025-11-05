// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_final_integration.h"

VL_ATTR_COLD void Vfinal_integration_final_integration___ctor_var_reset(Vfinal_integration_final_integration* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vfinal_integration_final_integration___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->addr[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->start_reading = VL_RAND_RESET_I(1);
    vlSelf->start_scan = VL_RAND_RESET_I(1);
    vlSelf->scan_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->f[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->p[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->flipped_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->patched_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->activation_final[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__all_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__PVT__flipping_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__PVT__patching_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__Vcellout__rellenar_fallos__patching_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__Vcellout__rellenar_fallos__flipping_bit[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__rellenar_fallos__DOT__mem_write_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__mem_addr = VL_RAND_RESET_I(20);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__stuck0_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->__PVT__rellenar_fallos__DOT__stuck1_mask[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__rellenar_fallos__DOT__done_read1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__error_type1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__done_read0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__write_enable0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__error_type0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rellenar_fallos__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__keep_mask = VL_RAND_RESET_I(16);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk3__DOT__forced1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter = VL_RAND_RESET_I(20);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter = VL_RAND_RESET_I(20);
}
