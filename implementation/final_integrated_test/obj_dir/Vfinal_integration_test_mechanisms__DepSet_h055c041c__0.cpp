// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_test_mechanisms.h"

VL_INLINE_OPT void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__0(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__0\n"); );
    // Body
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__state))
                                  ? 1U : ((1U == (IData)(vlSelf->__PVT__state))
                                           ? ((3U > (IData)(vlSelf->__PVT__index_counter))
                                               ? 1U
                                               : (((IData)(vlSymsp->TOP.start_reading) 
                                                   & (~ (IData)(vlSelf->__PVT__done_loading)))
                                                   ? 2U
                                                   : 1U))
                                           : ((2U == (IData)(vlSelf->__PVT__state))
                                               ? 2U
                                               : 0U)));
}

VL_INLINE_OPT void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__1(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__1\n"); );
    // Body
    vlSelf->__PVT__activation_in = 0U;
    if ((0U != (IData)(vlSelf->__PVT__state))) {
        if ((1U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__activation_in = vlSelf->__PVT__activation_cache
                [vlSelf->__PVT__index_counter];
        }
    }
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__activation_org[3U] 
        = vlSelf->__PVT__activation_org[3U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__activation_org[2U] 
        = vlSelf->__PVT__activation_org[2U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__activation_org[1U] 
        = vlSelf->__PVT__activation_org[1U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__activation_org[0U] 
        = vlSelf->__PVT__activation_org[0U];
}

VL_INLINE_OPT void Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___ico_sequent__TOP__final_integration__test_mechanisms__2\n"); );
    // Body
    vlSelf->__PVT__patched_out[3U] = vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__chosen_activation
        [3U];
    vlSelf->__PVT__patched_out[2U] = vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__chosen_activation
        [2U];
    vlSelf->__PVT__patched_out[1U] = vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__chosen_activation
        [1U];
    vlSelf->__PVT__patched_out[0U] = vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__chosen_activation
        [0U];
    vlSelf->__PVT__activation_final[0U] = (vlSelf->__PVT__p
                                           [0U] ? vlSelf->__PVT__patched_out
                                           [0U] : (
                                                   vlSelf->__PVT__f
                                                   [0U]
                                                    ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                    : 
                                                   ((vlSelf->__PVT__f
                                                     [0U] 
                                                     | vlSelf->__PVT__p
                                                     [0U])
                                                     ? 0xffffU
                                                     : 
                                                    vlSelf->__PVT__activation_org
                                                    [0U])));
    vlSelf->__PVT__activation_final[1U] = (vlSelf->__PVT__p
                                           [1U] ? vlSelf->__PVT__patched_out
                                           [1U] : (
                                                   vlSelf->__PVT__f
                                                   [1U]
                                                    ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                    : 
                                                   ((vlSelf->__PVT__f
                                                     [1U] 
                                                     | vlSelf->__PVT__p
                                                     [1U])
                                                     ? 0xffffU
                                                     : 
                                                    vlSelf->__PVT__activation_org
                                                    [1U])));
    vlSelf->__PVT__activation_final[2U] = (vlSelf->__PVT__p
                                           [2U] ? vlSelf->__PVT__patched_out
                                           [2U] : (
                                                   vlSelf->__PVT__f
                                                   [2U]
                                                    ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                    : 
                                                   ((vlSelf->__PVT__f
                                                     [2U] 
                                                     | vlSelf->__PVT__p
                                                     [2U])
                                                     ? 0xffffU
                                                     : 
                                                    vlSelf->__PVT__activation_org
                                                    [2U])));
    vlSelf->__PVT__activation_final[3U] = (vlSelf->__PVT__p
                                           [3U] ? vlSelf->__PVT__patched_out
                                           [3U] : (
                                                   vlSelf->__PVT__f
                                                   [3U]
                                                    ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                    : 
                                                   ((vlSelf->__PVT__f
                                                     [3U] 
                                                     | vlSelf->__PVT__p
                                                     [3U])
                                                     ? 0xffffU
                                                     : 
                                                    vlSelf->__PVT__activation_org
                                                    [3U])));
}

VL_INLINE_OPT void Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__0(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__0\n"); );
    // Body
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__p[3U] 
        = vlSelf->__PVT__p[3U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__p[2U] 
        = vlSelf->__PVT__p[2U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__p[1U] 
        = vlSelf->__PVT__p[1U];
    vlSymsp->TOP__final_integration__test_mechanisms__patch_inst.__PVT__p[0U] 
        = vlSelf->__PVT__p[0U];
    if (vlSymsp->TOP.reset) {
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = 0U;
        vlSelf->__PVT__done_loading = 0U;
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q = 0U;
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q = 0U;
        vlSelf->__PVT__state = 0U;
    } else {
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
            = vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__d;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
            = vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__d;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
            = vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__d;
        vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
            = vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__d;
        if (((1U == (IData)(vlSelf->__PVT__state)) 
             & (2U == (IData)(vlSelf->__PVT__next_state)))) {
            vlSelf->__PVT__done_loading = 1U;
        }
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
            = vlSelf->__PVT__activation_org[3U];
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
            = vlSelf->__PVT__activation_org[2U];
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
            = vlSelf->__PVT__activation_org[1U];
        vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
            = vlSelf->__PVT__activation_org[0U];
        vlSelf->__PVT__state = vlSelf->__PVT__next_state;
    }
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           vlSelf->__PVT__f[3U]);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           vlSelf->__PVT__f[2U]);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           vlSelf->__PVT__f[1U]);
    vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q 
        = ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
           vlSelf->__PVT__f[0U]);
    vlSelf->__PVT__flipped_out[3U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[2U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[1U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[0U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__d 
        = ((0x8000U & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                         ? (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                         : ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                            >> 0xfU)) << 0xfU)) | (
                                                   (0x4000U 
                                                    & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                         >> 0xeU)) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                            >> 0xdU)) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                               >> 0xcU)) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                  >> 4U)
                                                                  : 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                  >> 0xbU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                     >> 5U)
                                                                     : 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                     >> 0xaU)) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                        >> 6U)
                                                                        : 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                        >> 9U)) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                           >> 7U)
                                                                           : 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                           >> 8U)) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                              >> 8U)
                                                                              : 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                              >> 7U)) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 6U)) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q))))))))))))))))));
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__d 
        = ((0x8000U & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                         ? (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                         : ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                            >> 0xfU)) << 0xfU)) | (
                                                   (0x4000U 
                                                    & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                         >> 0xeU)) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                            >> 0xdU)) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                               >> 0xcU)) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                  >> 4U)
                                                                  : 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                  >> 0xbU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                     >> 5U)
                                                                     : 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                     >> 0xaU)) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                        >> 6U)
                                                                        : 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                        >> 9U)) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                           >> 7U)
                                                                           : 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                           >> 8U)) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                              >> 8U)
                                                                              : 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                              >> 7U)) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 6U)) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q))))))))))))))))));
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__d 
        = ((0x8000U & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                         ? (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                         : ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                            >> 0xfU)) << 0xfU)) | (
                                                   (0x4000U 
                                                    & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                         >> 0xeU)) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                            >> 0xdU)) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                               >> 0xcU)) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                  >> 4U)
                                                                  : 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                  >> 0xbU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                     >> 5U)
                                                                     : 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                     >> 0xaU)) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                        >> 6U)
                                                                        : 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                        >> 9U)) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                           >> 7U)
                                                                           : 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                           >> 8U)) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                              >> 8U)
                                                                              : 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                              >> 7U)) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 6U)) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q))))))))))))))))));
    vlSelf->flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__d 
        = ((0x8000U & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                         ? (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                         : ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                            >> 0xfU)) << 0xfU)) | (
                                                   (0x4000U 
                                                    & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                         ? 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                         >> 1U)
                                                         : 
                                                        ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                         >> 0xeU)) 
                                                       << 0xeU)) 
                                                   | ((0x2000U 
                                                       & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                            ? 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                            >> 0xdU)) 
                                                          << 0xdU)) 
                                                      | ((0x1000U 
                                                          & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                               ? 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                               >> 3U)
                                                               : 
                                                              ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                               >> 0xcU)) 
                                                             << 0xcU)) 
                                                         | ((0x800U 
                                                             & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                  ? 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                  >> 4U)
                                                                  : 
                                                                 ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                  >> 0xbU)) 
                                                                << 0xbU)) 
                                                            | ((0x400U 
                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                     ? 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                     >> 5U)
                                                                     : 
                                                                    ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                     >> 0xaU)) 
                                                                   << 0xaU)) 
                                                               | ((0x200U 
                                                                   & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                        ? 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                        >> 6U)
                                                                        : 
                                                                       ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                        >> 9U)) 
                                                                      << 9U)) 
                                                                  | ((0x100U 
                                                                      & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                           ? 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                           >> 7U)
                                                                           : 
                                                                          ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                           >> 8U)) 
                                                                         << 8U)) 
                                                                     | ((0x80U 
                                                                         & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                              ? 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                              >> 8U)
                                                                              : 
                                                                             ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                              >> 7U)) 
                                                                            << 7U)) 
                                                                        | ((0x40U 
                                                                            & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 6U)) 
                                                                               << 6U)) 
                                                                           | ((0x20U 
                                                                               & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                              | ((0x10U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                                                 ? 
                                                                                ((IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q) 
                                                                                >> 0xfU)
                                                                                 : (IData)(vlSelf->flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q))))))))))))))))));
    vlSelf->__PVT__read_write = 0U;
    if ((0U != (IData)(vlSelf->__PVT__state))) {
        if ((1U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__read_write = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__read_write = 1U;
        }
    }
}

VL_INLINE_OPT void Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__1(Vfinal_integration_test_mechanisms* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_mechanisms___nba_sequent__TOP__final_integration__test_mechanisms__1\n"); );
    // Body
    vlSelf->__PVT__store_enable = 0U;
    vlSelf->__PVT__index_counter = ((IData)(vlSymsp->TOP.reset)
                                     ? 0U : (IData)(vlSelf->__PVT__next_index));
    vlSelf->__PVT__next_index = vlSelf->__PVT__index_counter;
    vlSelf->__PVT__activation_in = 0U;
    if ((0U != (IData)(vlSelf->__PVT__state))) {
        if ((1U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__store_enable = 1U;
            vlSelf->__PVT__next_index = (3U & ((3U 
                                                > (IData)(vlSelf->__PVT__index_counter))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__index_counter))
                                                : 0U));
            vlSelf->__PVT__activation_in = vlSelf->__PVT__activation_cache
                [vlSelf->__PVT__index_counter];
        } else if ((2U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__store_enable = 0U;
            vlSelf->__PVT__next_index = (3U & ((3U 
                                                > (IData)(vlSelf->__PVT__index_counter))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__index_counter))
                                                : 0U));
        } else {
            vlSelf->__PVT__next_index = (3U & 0U);
        }
    }
    vlSelf->__PVT__next_state = ((0U == (IData)(vlSelf->__PVT__state))
                                  ? 1U : ((1U == (IData)(vlSelf->__PVT__state))
                                           ? ((3U > (IData)(vlSelf->__PVT__index_counter))
                                               ? 1U
                                               : (((IData)(vlSymsp->TOP.start_reading) 
                                                   & (~ (IData)(vlSelf->__PVT__done_loading)))
                                                   ? 2U
                                                   : 1U))
                                           : ((2U == (IData)(vlSelf->__PVT__state))
                                               ? 2U
                                               : 0U)));
}
