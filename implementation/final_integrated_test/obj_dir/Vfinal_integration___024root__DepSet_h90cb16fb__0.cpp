// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfinal_integration___024root___dump_triggers__ico(Vfinal_integration___024root* vlSelf);
#endif  // VL_DEBUG

void Vfinal_integration___024root___eval_triggers__ico(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfinal_integration___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__0(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__0(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__1(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf);

void Vfinal_integration___024root___eval_ico(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__0((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration___024root___ico_sequent__TOP__0(vlSelf);
        Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__1((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst));
        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vfinal_integration___024root___ico_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___ico_sequent__TOP__0\n"); );
    // Body
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

VL_INLINE_OPT void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->patched_out[3U] = vlSymsp->TOP__final_integration.patched_out
        [3U];
    vlSelf->patched_out[2U] = vlSymsp->TOP__final_integration.patched_out
        [2U];
    vlSelf->patched_out[1U] = vlSymsp->TOP__final_integration.patched_out
        [1U];
    vlSelf->patched_out[0U] = vlSymsp->TOP__final_integration.patched_out
        [0U];
    vlSelf->activation_final[3U] = vlSymsp->TOP__final_integration.activation_final
        [3U];
    vlSelf->activation_final[2U] = vlSymsp->TOP__final_integration.activation_final
        [2U];
    vlSelf->activation_final[1U] = vlSymsp->TOP__final_integration.activation_final
        [1U];
    vlSelf->activation_final[0U] = vlSymsp->TOP__final_integration.activation_final
        [0U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfinal_integration___024root___dump_triggers__act(Vfinal_integration___024root* vlSelf);
#endif  // VL_DEBUG

void Vfinal_integration___024root___eval_triggers__act(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfinal_integration___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__0(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration___024root___nba_sequent__TOP__0(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration___024root___nba_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__3(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__1(Vfinal_integration_test_mechanisms* vlSelf);
void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__1(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);

void Vfinal_integration___024root___eval_nba(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache));
        Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__0((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration___024root___nba_sequent__TOP__0(vlSelf);
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1((&vlSymsp->TOP__final_integration));
        Vfinal_integration___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__3((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__1((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__test_mechanisms__patch_inst__patch_cache__1((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst__patch_cache));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__test_mechanisms__patch_inst__0((&vlSymsp->TOP__final_integration__test_mechanisms__patch_inst));
        Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2((&vlSymsp->TOP__final_integration__test_mechanisms));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vfinal_integration___024root___nba_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->count_f = vlSymsp->TOP__final_integration.count_f;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->f[__Vilp1] = vlSymsp->TOP__final_integration.f
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelf->count_p = vlSymsp->TOP__final_integration.count_p;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelf->p[__Vilp2] = vlSymsp->TOP__final_integration.p
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelf->scan_done = vlSymsp->TOP__final_integration.__PVT__all_done;
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

VL_INLINE_OPT void Vfinal_integration___024root___nba_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->flipped_out[3U] = vlSymsp->TOP__final_integration.flipped_out
        [3U];
    vlSelf->flipped_out[2U] = vlSymsp->TOP__final_integration.flipped_out
        [2U];
    vlSelf->flipped_out[1U] = vlSymsp->TOP__final_integration.flipped_out
        [1U];
    vlSelf->flipped_out[0U] = vlSymsp->TOP__final_integration.flipped_out
        [0U];
}
