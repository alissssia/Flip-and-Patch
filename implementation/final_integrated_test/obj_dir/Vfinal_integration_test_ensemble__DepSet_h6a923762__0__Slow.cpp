// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_test_ensemble.h"

VL_ATTR_COLD void Vfinal_integration_test_ensemble___stl_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___stl_sequent__TOP__final_integration__ensemble__0\n"); );
    // Body
    vlSelf->__PVT__p_store_enable = 0U;
    vlSelf->__PVT__p_next_fill_addr = vlSelf->__PVT__p_fill_addr;
    vlSelf->__PVT__p_index = 0U;
    vlSelf->__PVT__p_next_read_addr = vlSelf->__PVT__p_read_addr;
    vlSelf->__PVT__p_next_state = vlSelf->__PVT__p_state;
    if ((0U == (IData)(vlSelf->__PVT__p_state))) {
        vlSelf->__PVT__p_next_fill_addr = 0U;
        vlSelf->__PVT__p_next_read_addr = 0U;
        vlSelf->__PVT__p_next_state = 1U;
    } else {
        if ((1U == (IData)(vlSelf->__PVT__p_state))) {
            if ((0x3fU != vlSelf->__PVT__p_fill_addr)) {
                vlSelf->__PVT__p_next_fill_addr = ((IData)(1U) 
                                                   + vlSelf->__PVT__p_fill_addr);
            }
            if ((0x3fU == vlSelf->__PVT__p_fill_addr)) {
                vlSelf->__PVT__p_next_state = 2U;
            }
        } else {
            if ((2U != (IData)(vlSelf->__PVT__p_state))) {
                vlSelf->__PVT__p_next_fill_addr = 0U;
            }
            if ((2U == (IData)(vlSelf->__PVT__p_state))) {
                if ((0x3fU == vlSelf->__PVT__p_read_addr)) {
                    vlSelf->__PVT__p_next_state = 2U;
                }
            } else {
                vlSelf->__PVT__p_next_state = 0U;
            }
        }
        if ((1U != (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_next_read_addr = ((2U 
                                                == (IData)(vlSelf->__PVT__p_state))
                                                ? (
                                                   (0x3fU 
                                                    == vlSelf->__PVT__p_read_addr)
                                                    ? vlSelf->__PVT__p_read_addr
                                                    : 
                                                   ((IData)(1U) 
                                                    + vlSelf->__PVT__p_read_addr))
                                                : 0U);
        }
    }
    vlSelf->__PVT__patched_block[0U] = vlSelf->__PVT__patched_mem
        [(0x3fU & vlSelf->__PVT__base_idx)];
    vlSelf->__PVT__patched_block[1U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(1U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__patched_block[2U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(2U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__patched_block[3U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(3U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__p_request = 0U;
    vlSelf->__PVT__p_address = 0U;
    vlSelf->__PVT__p_read_write = 1U;
    if ((0U != (IData)(vlSelf->__PVT__p_state))) {
        if ((1U != (IData)(vlSelf->__PVT__p_state))) {
            if ((2U == (IData)(vlSelf->__PVT__p_state))) {
                vlSelf->__PVT__p_store_enable = 1U;
                vlSelf->__PVT__p_index = (3U & vlSelf->__PVT__p_read_addr);
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_request = 1U;
            vlSelf->__PVT__p_address = (0x1fffffU & vlSelf->__PVT__p_fill_addr);
            vlSelf->__PVT__p_read_write = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_request = 1U;
            vlSelf->__PVT__p_address = (0x1fffffU & vlSelf->__PVT__p_read_addr);
            vlSelf->__PVT__p_read_write = 1U;
        }
    }
}

VL_ATTR_COLD void Vfinal_integration_test_ensemble___ctor_var_reset(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___ctor_var_reset\n"); );
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
        vlSelf->__PVT__dbg_idx[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__flipped_block[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__patched_block[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__final_choice[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__p_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__p_next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__p_fill_addr = 0;
    vlSelf->__PVT__p_next_fill_addr = 0;
    vlSelf->__PVT__p_read_addr = 0;
    vlSelf->__PVT__p_next_read_addr = 0;
    vlSelf->__PVT__p_request = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_read_write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__p_address = VL_RAND_RESET_I(21);
    vlSelf->__PVT__p_activation_in = VL_RAND_RESET_I(16);
    vlSelf->__PVT__p_index = VL_RAND_RESET_I(2);
    vlSelf->__PVT__p_store_enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__patched_from_cache[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__patched_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__activation_org_patch[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__p_patch[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__base_idx = 0;
    vlSelf->__PVT__reading = VL_RAND_RESET_I(1);
}
