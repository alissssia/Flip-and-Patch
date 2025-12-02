// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration_test_ensemble__A6.h"

VL_INLINE_OPT void Vfinal_integration_test_ensemble__A6___ico_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___ico_sequent__TOP__final_integration__ensemble__1\n"); );
    // Body
    vlSelf->__PVT__activation_in = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state) >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__activation_in = vlSelf->__PVT__activation_cache_full
                [vlSelf->__PVT__fill_addr];
        }
    }
}

VL_INLINE_OPT void Vfinal_integration_test_ensemble__A6___nba_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___nba_sequent__TOP__final_integration__ensemble__1\n"); );
    // Body
    vlSelf->__PVT__address = 0U;
    if ((2U & (IData)(vlSelf->__PVT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__address = (0x3fU & (VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__PVT__block_idk), 2U) 
                                               + (IData)(vlSelf->__PVT__index_counter)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__address = vlSelf->__PVT__fill_addr;
    }
}
