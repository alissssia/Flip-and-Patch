// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_bram__D100_Wd.h"

VL_ATTR_COLD void Vfinal_integration_bram__D100_Wd___ctor_var_reset(Vfinal_integration_bram__D100_Wd* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vfinal_integration_bram__D100_Wd___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resetn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_read = VL_RAND_RESET_I(8);
    vlSelf->__PVT__addr_write = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data_in = VL_RAND_RESET_I(13);
    vlSelf->__PVT__data_out = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(13);
    }
}
