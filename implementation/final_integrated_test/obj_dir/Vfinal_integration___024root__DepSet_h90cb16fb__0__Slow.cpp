// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration___024root.h"

VL_ATTR_COLD void Vfinal_integration___024root___eval_initial__TOP(Vfinal_integration___024root* vlSelf);
VL_ATTR_COLD void Vfinal_integration_final_integration___eval_initial__TOP__final_integration(Vfinal_integration_final_integration* vlSelf);

VL_ATTR_COLD void Vfinal_integration___024root___eval_initial(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_initial\n"); );
    // Body
    Vfinal_integration___024root___eval_initial__TOP(vlSelf);
    Vfinal_integration_final_integration___eval_initial__TOP__final_integration((&vlSymsp->TOP__final_integration));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vfinal_integration_final_integration___eval_final__TOP__final_integration(Vfinal_integration_final_integration* vlSelf);

VL_ATTR_COLD void Vfinal_integration___024root___eval_final(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_final\n"); );
    // Body
    Vfinal_integration_final_integration___eval_final__TOP__final_integration((&vlSymsp->TOP__final_integration));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfinal_integration___024root___dump_triggers__stl(Vfinal_integration___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfinal_integration___024root___eval_triggers__stl(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfinal_integration___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__0(Vfinal_integration___024root* vlSelf);
VL_ATTR_COLD void Vfinal_integration_test_ensemble___stl_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf);
VL_ATTR_COLD void Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
VL_ATTR_COLD void Vfinal_integration_cache_tfg___stl_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__ensemble__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble* vlSelf);

VL_ATTR_COLD void Vfinal_integration___024root___eval_stl(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfinal_integration___024root___stl_sequent__TOP__0(vlSelf);
        Vfinal_integration_test_ensemble___stl_sequent__TOP__final_integration__ensemble__0((&vlSymsp->TOP__final_integration__ensemble));
        Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_cache_tfg___stl_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache));
        Vfinal_integration___024root___stl_sequent__TOP__1(vlSelf);
        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0((&vlSymsp->TOP__final_integration__ensemble));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__ensemble__patch_inst__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst));
        Vfinal_integration___024root___ico_sequent__TOP__1(vlSelf);
        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1((&vlSymsp->TOP__final_integration__ensemble));
    }
}

VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->scan_done = vlSymsp->TOP__final_integration.__PVT__all_done;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSymsp->TOP__final_integration.activation_cache_full[__Vilp1] 
            = vlSelf->activation_cache_full[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSymsp->TOP__final_integration.activation_org[__Vilp2] 
            = vlSelf->activation_org[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}

VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->count_p = vlSymsp->TOP__final_integration.count_p;
    vlSelf->count_f = vlSymsp->TOP__final_integration.count_f;
    vlSelf->dbg_idx[3U] = vlSymsp->TOP__final_integration.dbg_idx
        [3U];
    vlSelf->dbg_idx[2U] = vlSymsp->TOP__final_integration.dbg_idx
        [2U];
    vlSelf->dbg_idx[1U] = vlSymsp->TOP__final_integration.dbg_idx
        [1U];
    vlSelf->dbg_idx[0U] = vlSymsp->TOP__final_integration.dbg_idx
        [0U];
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->activation_final[__Vilp1] = vlSymsp->TOP__final_integration.activation_final
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelf->patched_out[__Vilp2] = vlSymsp->TOP__final_integration.patched_out
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelf->flipped_out[__Vilp3] = vlSymsp->TOP__final_integration.flipped_out
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3fU)) {
        vlSelf->f[__Vilp4] = vlSymsp->TOP__final_integration.f
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3fU)) {
        vlSelf->p[__Vilp5] = vlSymsp->TOP__final_integration.p
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
}
