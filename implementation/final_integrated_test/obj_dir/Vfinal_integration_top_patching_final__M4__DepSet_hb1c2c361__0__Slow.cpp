// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_top_patching_final__M4.h"

VL_ATTR_COLD void Vfinal_integration_top_patching_final__M4___ctor_var_reset(Vfinal_integration_top_patching_final__M4* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vfinal_integration_top_patching_final__M4___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__address = VL_RAND_RESET_I(21);
    vlSelf->__PVT__activation_in = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__p[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__store_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__chosen_activation[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__error = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
}
