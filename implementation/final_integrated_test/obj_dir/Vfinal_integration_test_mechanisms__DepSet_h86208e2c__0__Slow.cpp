// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_test_mechanisms.h"

VL_ATTR_COLD void Vfinal_integration_test_mechanisms___ctor_var_reset(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__f[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__p[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__start_reading = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__flipped_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__patched_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_final[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__read_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__activation_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__store_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__index_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__done_loading = VL_RAND_RESET_I(1);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(1);
    vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__d = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__d = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__d = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = VL_RAND_RESET_I(16);
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__d = VL_RAND_RESET_I(16);
}
