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

void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__0(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf);
void Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__ensemble__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble* vlSelf);

void Vfinal_integration___024root___eval_ico(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_cache_tfg___ico_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache));
        Vfinal_integration___024root___ico_sequent__TOP__0(vlSelf);
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__1((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0((&vlSymsp->TOP__final_integration__ensemble));
        Vfinal_integration_final_integration___ico_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__ensemble__patch_inst__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst));
        Vfinal_integration___024root___ico_sequent__TOP__1(vlSelf);
        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1((&vlSymsp->TOP__final_integration__ensemble));
    }
}

VL_INLINE_OPT void Vfinal_integration___024root___ico_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___ico_sequent__TOP__0\n"); );
    // Body
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

VL_INLINE_OPT void Vfinal_integration___024root___ico_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->original_activation[3U] = vlSymsp->TOP__final_integration.original_activation
        [3U];
    vlSelf->original_activation[2U] = vlSymsp->TOP__final_integration.original_activation
        [2U];
    vlSelf->original_activation[1U] = vlSymsp->TOP__final_integration.original_activation
        [1U];
    vlSelf->original_activation[0U] = vlSymsp->TOP__final_integration.original_activation
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfinal_integration___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0(Vfinal_integration_bram__D100_Wd* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0(Vfinal_integration_bram__D100_W10* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__ensemble__patch_inst__0(Vfinal_integration_top_patching_final__M4* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf);
void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration___024root___nba_sequent__TOP__0(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__2(Vfinal_integration_final_integration* vlSelf);
void Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble* vlSelf);
void Vfinal_integration___024root___nba_sequent__TOP__1(Vfinal_integration___024root* vlSelf);
void Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__1(Vfinal_integration_cache_tfg* vlSelf);
void Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0(Vfinal_integration_final_integration* vlSelf);

void Vfinal_integration___024root___eval_nba(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_Wd___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__tag_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__0__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__1__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__2__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__3__KET____DOT__way_instance__data_bram));
        Vfinal_integration_bram__D100_W10___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache__ways__BRA__4__KET____DOT__way_instance__data_bram));
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_top_patching_final__M4___nba_sequent__TOP__final_integration__ensemble__patch_inst__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__1((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__0((&vlSymsp->TOP__final_integration__ensemble));
        Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache));
        Vfinal_integration___024root___nba_sequent__TOP__0(vlSelf);
        Vfinal_integration_final_integration___nba_sequent__TOP__final_integration__2((&vlSymsp->TOP__final_integration));
        Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__1((&vlSymsp->TOP__final_integration__ensemble));
        Vfinal_integration___024root___nba_sequent__TOP__1(vlSelf);
        Vfinal_integration_cache_tfg___nba_sequent__TOP__final_integration__ensemble__patch_inst__patch_cache__1((&vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfinal_integration_final_integration___nba_comb__TOP__final_integration__0((&vlSymsp->TOP__final_integration));
        Vfinal_integration_top_patching_final__M4___ico_sequent__TOP__final_integration__ensemble__patch_inst__0((&vlSymsp->TOP__final_integration__ensemble__patch_inst));
        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1((&vlSymsp->TOP__final_integration__ensemble));
    }
}

VL_INLINE_OPT void Vfinal_integration___024root___nba_sequent__TOP__0(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->scan_done = vlSymsp->TOP__final_integration.__PVT__all_done;
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
}

VL_INLINE_OPT void Vfinal_integration___024root___nba_sequent__TOP__1(Vfinal_integration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfinal_integration___024root___nba_sequent__TOP__1\n"); );
    // Body
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
        vlSelf->flipped_out[__Vilp1] = vlSymsp->TOP__final_integration.flipped_out
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
        vlSelf->activation_final[__Vilp3] = vlSymsp->TOP__final_integration.activation_final
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    vlSelf->original_activation[3U] = vlSymsp->TOP__final_integration.original_activation
        [3U];
    vlSelf->original_activation[2U] = vlSymsp->TOP__final_integration.original_activation
        [2U];
    vlSelf->original_activation[1U] = vlSymsp->TOP__final_integration.original_activation
        [1U];
    vlSelf->original_activation[0U] = vlSymsp->TOP__final_integration.original_activation
        [0U];
}
