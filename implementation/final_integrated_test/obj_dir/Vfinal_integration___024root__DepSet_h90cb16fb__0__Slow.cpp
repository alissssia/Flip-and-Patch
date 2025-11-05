// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration___024root.h"

VL_ATTR_COLD void Vfinal_integration_final_integration___eval_initial__TOP__final_integration(Vfinal_integration_final_integration* vlSelf);

VL_ATTR_COLD void Vfinal_integration___024root___eval_initial(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_initial\n"); );
    // Body
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
VL_ATTR_COLD void Vfinal_integration_test_mechanisms___stl_sequent__TOP__final_integration__test_mechanisms__0(Vfinal_integration_test_mechanisms* vlSelf);
VL_ATTR_COLD void Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
VL_ATTR_COLD void Vfinal_integration_cache_tfg___stl_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
VL_ATTR_COLD void Vfinal_integration_test_mechanisms___stl_sequent__TOP__final_integration__test_mechanisms__1(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf);

VL_ATTR_COLD void Vfinal_integration___024root___eval_stl(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfinal_integration___024root___stl_sequent__TOP__0(vlSelf);
        Vfinal_integration_test_mechanisms___stl_sequent__TOP__final_integration__test_mechanisms__0((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_final_integration___stl_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_cache_tfg___stl_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache));
        Vfinal_integration___024root___stl_sequent__TOP__1(vlSelf);
        Vfinal_integration_test_mechanisms___stl_sequent__TOP__final_integration__test_mechanisms__1((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst));
        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->scan_done = vlSymsp->TOP__final_integration.__PVT__all_done;
    vlSymsp->TOP__final_integration.activation_cache[3U] 
        = vlSelf->activation_cache[3U];
    vlSymsp->TOP__final_integration.activation_cache[2U] 
        = vlSelf->activation_cache[2U];
    vlSymsp->TOP__final_integration.activation_cache[1U] 
        = vlSelf->activation_cache[1U];
    vlSymsp->TOP__final_integration.activation_cache[0U] 
        = vlSelf->activation_cache[0U];
    vlSymsp->TOP__final_integration.activation_org[3U] 
        = vlSelf->activation_org[3U];
    vlSymsp->TOP__final_integration.activation_org[2U] 
        = vlSelf->activation_org[2U];
    vlSymsp->TOP__final_integration.activation_org[1U] 
        = vlSelf->activation_org[1U];
    vlSymsp->TOP__final_integration.activation_org[0U] 
        = vlSelf->activation_org[0U];
}

VL_ATTR_COLD void Vfinal_integration___024root___stl_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->count_p = vlSymsp->TOP__final_integration.count_p;
    vlSelf->count_f = vlSymsp->TOP__final_integration.count_f;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->f[__Vilp1] = vlSymsp->TOP__final_integration.f
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelf->p[__Vilp2] = vlSymsp->TOP__final_integration.p
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelf->flipped_out[3U] = vlSymsp->TOP__final_integration.flipped_out
        [3U];
    vlSelf->flipped_out[2U] = vlSymsp->TOP__final_integration.flipped_out
        [2U];
    vlSelf->flipped_out[1U] = vlSymsp->TOP__final_integration.flipped_out
        [1U];
    vlSelf->flipped_out[0U] = vlSymsp->TOP__final_integration.flipped_out
        [0U];
    vlSelf->f_m[3U] = vlSymsp->TOP__final_integration.f_m
        [3U];
    vlSelf->f_m[2U] = vlSymsp->TOP__final_integration.f_m
        [2U];
    vlSelf->f_m[1U] = vlSymsp->TOP__final_integration.f_m
        [1U];
    vlSelf->f_m[0U] = vlSymsp->TOP__final_integration.f_m
        [0U];
    vlSelf->p_m[3U] = vlSymsp->TOP__final_integration.p_m
        [3U];
    vlSelf->p_m[2U] = vlSymsp->TOP__final_integration.p_m
        [2U];
    vlSelf->p_m[1U] = vlSymsp->TOP__final_integration.p_m
        [1U];
    vlSelf->p_m[0U] = vlSymsp->TOP__final_integration.p_m
        [0U];
}
