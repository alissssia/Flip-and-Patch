// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_test_ensemble__A6.h"

VL_ATTR_COLD void Vfinal_integration_test_ensemble__A6___eval_initial__TOP__final_integration__ensemble(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___eval_initial__TOP__final_integration__ensemble\n"); );
    // Body
    vlSelf->__PVT__activation_org_block[0U] = 0U;
    vlSelf->__PVT__f_block[0U] = 0U;
    vlSelf->__PVT__p_block[0U] = 0U;
    vlSelf->__PVT__activation_org_block[1U] = 0U;
    vlSelf->__PVT__f_block[1U] = 0U;
    vlSelf->__PVT__p_block[1U] = 0U;
    vlSelf->__PVT__activation_org_block[2U] = 0U;
    vlSelf->__PVT__f_block[2U] = 0U;
    vlSelf->__PVT__p_block[2U] = 0U;
    vlSelf->__PVT__activation_org_block[3U] = 0U;
    vlSelf->__PVT__f_block[3U] = 0U;
    vlSelf->__PVT__p_block[3U] = 0U;
}

VL_ATTR_COLD void Vfinal_integration_test_ensemble__A6___ctor_var_reset(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__activation_org[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__activation_cache_full[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__f[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__p[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__start_reading = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__flipped_global[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__patched_global[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__final_global[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__original_activation[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__cache_write_finished = VL_RAND_RESET_I(1);
    vlSelf->__PVT__finished = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__flipped_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__patched_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__final_choice[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__flipped_all[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__patched_all[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__final_all[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_org_block[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__f_block[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__p_block[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__address = VL_RAND_RESET_I(6);
    vlSelf->__PVT__activation_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__store_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__fill_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__next_fill_addr = VL_RAND_RESET_I(6);
    vlSelf->__PVT__block_idk = VL_RAND_RESET_I(4);
    vlSelf->__PVT__next_block_idk = VL_RAND_RESET_I(4);
    vlSelf->__PVT__index_counter = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__finished_everything = VL_RAND_RESET_I(1);
    vlSelf->__PVT__block_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT__idx_i = 0;
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
