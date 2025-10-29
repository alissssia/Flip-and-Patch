// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_fallos.h for the primary calling header

#include "Vtestbench_fallos__pch.h"
#include "Vtestbench_fallos___024root.h"

void Vtestbench_fallos___024root___ico_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf);

void Vtestbench_fallos___024root___eval_ico(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtestbench_fallos___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtestbench_fallos__ConstPool__TABLE_h0d2d7aa8_0;

VL_INLINE_OPT void Vtestbench_fallos___024root___ico_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->start) << 6U) 
                    | (((IData)(vlSelf->testbench_fallos__DOT__done_read1) 
                        << 5U) | (((IData)(vlSelf->testbench_fallos__DOT__done_read0) 
                                   << 4U) | (((IData)(vlSelf->reset) 
                                              << 3U) 
                                             | (IData)(vlSelf->testbench_fallos__DOT__current_state)))));
    vlSelf->testbench_fallos__DOT__next_state = Vtestbench_fallos__ConstPool__TABLE_h0d2d7aa8_0
        [__Vtableidx1];
}

void Vtestbench_fallos___024root___eval_triggers__ico(Vtestbench_fallos___024root* vlSelf);

bool Vtestbench_fallos___024root___eval_phase__ico(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtestbench_fallos___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtestbench_fallos___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtestbench_fallos___024root___eval_act(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_act\n"); );
}

void Vtestbench_fallos___024root___nba_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf);
void Vtestbench_fallos___024root___nba_sequent__TOP__1(Vtestbench_fallos___024root* vlSelf);
void Vtestbench_fallos___024root___nba_sequent__TOP__2(Vtestbench_fallos___024root* vlSelf);
void Vtestbench_fallos___024root___nba_comb__TOP__0(Vtestbench_fallos___024root* vlSelf);

void Vtestbench_fallos___024root___eval_nba(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench_fallos___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench_fallos___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench_fallos___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench_fallos___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench_fallos___024root___nba_sequent__TOP__0(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i;
    testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i = 0;
    IData/*31:0*/ testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i;
    testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i = 0;
    IData/*19:0*/ __VdlyDim0__patching_bit__v0;
    __VdlyDim0__patching_bit__v0 = 0;
    IData/*19:0*/ __VdlyDim0__patching_bit__v1;
    __VdlyDim0__patching_bit__v1 = 0;
    IData/*19:0*/ __VdlyDim0__patching_bit__v2;
    __VdlyDim0__patching_bit__v2 = 0;
    IData/*19:0*/ __VdlyDim0__flipping_bit__v0;
    __VdlyDim0__flipping_bit__v0 = 0;
    IData/*19:0*/ __VdlyDim0__flipping_bit__v1;
    __VdlyDim0__flipping_bit__v1 = 0;
    IData/*19:0*/ __VdlyDim0__flipping_bit__v2;
    __VdlyDim0__flipping_bit__v2 = 0;
    IData/*19:0*/ __VdlyDim0__flipping_bit__v3;
    __VdlyDim0__flipping_bit__v3 = 0;
    IData/*19:0*/ __VdlyDim0__flipping_bit__v4;
    __VdlyDim0__flipping_bit__v4 = 0;
    IData/*19:0*/ __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
    __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter = 0;
    IData/*19:0*/ __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
    __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter = 0;
    // Body
    __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter 
        = vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
    __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter 
        = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
    if (vlSelf->reset) {
        testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i = 0U;
        while (VL_GTES_III(32, 0xfffffU, testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i)) {
            __VdlyDim0__patching_bit__v0 = (0xfffffU 
                                            & testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i);
            vlSelf->__VdlyCommitQueue__patching_bit__v0.enqueue(0U, __VdlyDim0__patching_bit__v0);
            testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i 
                = ((IData)(1U) + testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_4__DOT__i);
        }
    } else if (((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)))) {
        if ((2U == (IData)(vlSelf->testbench_fallos__DOT__error_type1))) {
            __VdlyDim0__patching_bit__v1 = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
            vlSelf->__VdlyCommitQueue__patching_bit__v0.enqueue(1U, __VdlyDim0__patching_bit__v1);
        }
    } else if (((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)))) {
        if ((2U == (IData)(vlSelf->testbench_fallos__DOT__error_type0))) {
            __VdlyDim0__patching_bit__v2 = vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
            vlSelf->__VdlyCommitQueue__patching_bit__v0.enqueue(1U, __VdlyDim0__patching_bit__v2);
        }
    }
    if (vlSelf->reset) {
        testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i = 0U;
        while (VL_GTES_III(32, 0xfffffU, testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i)) {
            __VdlyDim0__flipping_bit__v0 = (0xfffffU 
                                            & testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i);
            vlSelf->__VdlyCommitQueue__flipping_bit__v0.enqueue(0U, __VdlyDim0__flipping_bit__v0);
            testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i 
                = ((IData)(1U) + testbench_fallos__DOT__unnamedblk4__DOT__unnamedblk2_3__DOT__i);
        }
    } else if (((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)))) {
        if ((2U == (IData)(vlSelf->testbench_fallos__DOT__error_type1))) {
            __VdlyDim0__flipping_bit__v1 = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
            vlSelf->__VdlyCommitQueue__flipping_bit__v0.enqueue(0U, __VdlyDim0__flipping_bit__v1);
        } else if ((1U == (IData)(vlSelf->testbench_fallos__DOT__error_type1))) {
            if ((1U & (~ vlSelf->patching_bit[vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter]))) {
                __VdlyDim0__flipping_bit__v2 = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
                vlSelf->__VdlyCommitQueue__flipping_bit__v0.enqueue(1U, __VdlyDim0__flipping_bit__v2);
            }
        }
    } else if (((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)))) {
        if ((2U == (IData)(vlSelf->testbench_fallos__DOT__error_type0))) {
            __VdlyDim0__flipping_bit__v3 = vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
            vlSelf->__VdlyCommitQueue__flipping_bit__v0.enqueue(0U, __VdlyDim0__flipping_bit__v3);
        } else if ((1U == (IData)(vlSelf->testbench_fallos__DOT__error_type0))) {
            if ((1U & (~ vlSelf->patching_bit[vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter]))) {
                __VdlyDim0__flipping_bit__v4 = vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
                vlSelf->__VdlyCommitQueue__flipping_bit__v0.enqueue(1U, __VdlyDim0__flipping_bit__v4);
            }
        }
    }
    vlSelf->all_done = ((1U & (~ (IData)(vlSelf->reset))) 
                        && (3U == (IData)(vlSelf->testbench_fallos__DOT__next_state)));
    if (vlSelf->reset) {
        __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
    } else {
        if ((((1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)) 
              & (1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state))) 
             | ((2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state))))) {
            __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter));
        } else if (((1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)) 
                    & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state)))) {
            __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        } else if ((0U == (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))) {
            __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter = 0U;
        }
        if ((((1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)) 
              & (1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state))) 
             | ((2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)) 
                & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state))))) {
            __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter 
                = (0xfffffU & ((IData)(1U) + vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter));
        } else if (((1U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)) 
                    & (2U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state)))) {
            __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
        } else if ((0U == (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))) {
            __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter = 0U;
        }
    }
    vlSelf->__VdlyCommitQueue__flipping_bit__v0.commit(vlSelf->flipping_bit);
    vlSelf->__VdlyCommitQueue__patching_bit__v0.commit(vlSelf->patching_bit);
    if (vlSelf->reset) {
        vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state = 0U;
        vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state = 0U;
    } else {
        vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state 
            = vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state;
        vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state 
            = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state;
    }
    vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter 
        = __Vdly__testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
    vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter 
        = __Vdly__testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
    vlSelf->testbench_fallos__DOT__write_enable0 = 0U;
    vlSelf->testbench_fallos__DOT__done_read0 = 0U;
    if ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state)))) {
            vlSelf->testbench_fallos__DOT__write_enable0 = 0U;
            if ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)) {
                vlSelf->testbench_fallos__DOT__done_read0 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__write_enable0 = 1U;
    }
    vlSelf->testbench_fallos__DOT__write_enable1 = 0U;
    vlSelf->testbench_fallos__DOT__done_read1 = 0U;
    if ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state)))) {
            vlSelf->testbench_fallos__DOT__write_enable1 = 0U;
            if ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)) {
                vlSelf->testbench_fallos__DOT__done_read1 = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__write_enable1 = 1U;
    }
}

VL_INLINE_OPT void Vtestbench_fallos___024root___nba_sequent__TOP__1(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __VdlyVal__testbench_fallos__DOT__memory__v0;
    __VdlyVal__testbench_fallos__DOT__memory__v0 = 0;
    IData/*19:0*/ __VdlyDim0__testbench_fallos__DOT__memory__v0;
    __VdlyDim0__testbench_fallos__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__testbench_fallos__DOT__memory__v0;
    __VdlySet__testbench_fallos__DOT__memory__v0 = 0;
    // Body
    __VdlySet__testbench_fallos__DOT__memory__v0 = 0U;
    if (vlSelf->testbench_fallos__DOT__mem_write_enable) {
        vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__keep_mask 
            = (0xffffU & (~ (vlSelf->testbench_fallos__DOT__stuck0_mask
                             [vlSelf->testbench_fallos__DOT__mem_addr] 
                             | vlSelf->testbench_fallos__DOT__stuck1_mask
                             [vlSelf->testbench_fallos__DOT__mem_addr])));
        vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__forced1 
            = vlSelf->testbench_fallos__DOT__stuck1_mask
            [vlSelf->testbench_fallos__DOT__mem_addr];
        __VdlyVal__testbench_fallos__DOT__memory__v0 
            = ((((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                  ? 0xffffU : 0U) & (IData)(vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__keep_mask)) 
               | (IData)(vlSelf->testbench_fallos__DOT__unnamedblk3__DOT__forced1));
        __VdlyDim0__testbench_fallos__DOT__memory__v0 
            = vlSelf->testbench_fallos__DOT__mem_addr;
        __VdlySet__testbench_fallos__DOT__memory__v0 = 1U;
    }
    if (__VdlySet__testbench_fallos__DOT__memory__v0) {
        vlSelf->testbench_fallos__DOT__memory[__VdlyDim0__testbench_fallos__DOT__memory__v0] 
            = __VdlyVal__testbench_fallos__DOT__memory__v0;
    }
}

VL_INLINE_OPT void Vtestbench_fallos___024root___nba_sequent__TOP__2(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->testbench_fallos__DOT__current_state = 
        ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->testbench_fallos__DOT__next_state));
    vlSelf->testbench_fallos__DOT__barrido_1s__DOT__next_state 
        = ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))
            ? ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))
                ? ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)
                                   ? 3U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->testbench_fallos__DOT__barrido_1s__DOT__current_state))
                                                   ? 
                                                  ((0xfffffU 
                                                    == vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->testbench_fallos__DOT__barrido_0s__DOT__next_state 
        = ((2U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))
            ? ((1U & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))
                ? ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                    ? 3U : 0U) : ((0xfffffU == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)
                                   ? 3U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->testbench_fallos__DOT__barrido_0s__DOT__current_state))
                                                   ? 
                                                  ((0xfffffU 
                                                    == vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter)
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                                                    ? 1U
                                                    : 0U)));
    if ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))) {
        vlSelf->testbench_fallos__DOT__mem_addr = vlSelf->testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
        vlSelf->testbench_fallos__DOT__mem_write_enable 
            = vlSelf->testbench_fallos__DOT__write_enable1;
    } else {
        vlSelf->testbench_fallos__DOT__mem_addr = (
                                                   (2U 
                                                    == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                                                    ? vlSelf->testbench_fallos__DOT__barrido_0s__DOT__addr_counter
                                                    : 0U);
        vlSelf->testbench_fallos__DOT__mem_write_enable 
            = ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state)) 
               && (IData)(vlSelf->testbench_fallos__DOT__write_enable0));
    }
    __Vtableidx1 = (((IData)(vlSelf->start) << 6U) 
                    | (((IData)(vlSelf->testbench_fallos__DOT__done_read1) 
                        << 5U) | (((IData)(vlSelf->testbench_fallos__DOT__done_read0) 
                                   << 4U) | (((IData)(vlSelf->reset) 
                                              << 3U) 
                                             | (IData)(vlSelf->testbench_fallos__DOT__current_state)))));
    vlSelf->testbench_fallos__DOT__next_state = Vtestbench_fallos__ConstPool__TABLE_h0d2d7aa8_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtestbench_fallos___024root___nba_comb__TOP__0(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*15:0*/ testbench_fallos__DOT__barrido_1s__DOT__not_expected_value;
    testbench_fallos__DOT__barrido_1s__DOT__not_expected_value = 0;
    CData/*0:0*/ testbench_fallos__DOT__barrido_0s__DOT__has_high_order;
    testbench_fallos__DOT__barrido_0s__DOT__has_high_order = 0;
    CData/*0:0*/ testbench_fallos__DOT__barrido_0s__DOT__has_low_order;
    testbench_fallos__DOT__barrido_0s__DOT__has_low_order = 0;
    // Body
    testbench_fallos__DOT__barrido_1s__DOT__not_expected_value 
        = (0xffffU & (~ vlSelf->testbench_fallos__DOT__memory
                      [vlSelf->testbench_fallos__DOT__mem_addr]));
    testbench_fallos__DOT__barrido_0s__DOT__has_low_order 
        = (0U != (0xffU & vlSelf->testbench_fallos__DOT__memory
                  [vlSelf->testbench_fallos__DOT__mem_addr]));
    testbench_fallos__DOT__barrido_0s__DOT__has_high_order 
        = (0U != (0xffU & (vlSelf->testbench_fallos__DOT__memory
                           [vlSelf->testbench_fallos__DOT__mem_addr] 
                           >> 8U)));
    vlSelf->testbench_fallos__DOT__error_type1 = ((
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xffU 
                                                                & (IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value))))) 
                                                   & (0U 
                                                      != 
                                                      (0xffU 
                                                       & ((IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                                                          >> 8U))))
                                                   ? 1U
                                                   : 
                                                  (((0U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value) 
                                                         >> 8U))) 
                                                    & (0U 
                                                       != 
                                                       (0xffU 
                                                        & (IData)(testbench_fallos__DOT__barrido_1s__DOT__not_expected_value))))
                                                    ? 2U
                                                    : 0U));
    vlSelf->testbench_fallos__DOT__error_type0 = ((
                                                   (~ (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_low_order)) 
                                                   & (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_high_order))
                                                   ? 1U
                                                   : 
                                                  (((IData)(testbench_fallos__DOT__barrido_0s__DOT__has_high_order) 
                                                    & (IData)(testbench_fallos__DOT__barrido_0s__DOT__has_low_order))
                                                    ? 2U
                                                    : 0U));
    vlSelf->rd_data = ((1U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                        ? (IData)(vlSelf->testbench_fallos__DOT__error_type1)
                        : ((2U == (IData)(vlSelf->testbench_fallos__DOT__current_state))
                            ? (IData)(vlSelf->testbench_fallos__DOT__error_type0)
                            : 0U));
}

void Vtestbench_fallos___024root___eval_triggers__act(Vtestbench_fallos___024root* vlSelf);

bool Vtestbench_fallos___024root___eval_phase__act(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench_fallos___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench_fallos___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench_fallos___024root___eval_phase__nba(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench_fallos___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__ico(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__nba(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench_fallos___024root___dump_triggers__act(Vtestbench_fallos___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench_fallos___024root___eval(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtestbench_fallos___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("testbench_fallos.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtestbench_fallos___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench_fallos___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench_fallos.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench_fallos___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench_fallos.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench_fallos___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench_fallos___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench_fallos___024root___eval_debug_assertions(Vtestbench_fallos___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestbench_fallos__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench_fallos___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
