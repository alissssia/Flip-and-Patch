// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_test_ensemble__A6.h"

VL_ATTR_COLD void Vfinal_integration_test_ensemble__A6___stl_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___stl_sequent__TOP__final_integration__ensemble__0\n"); );
    // Body
    vlSelf->__PVT__next_fill_addr = vlSelf->__PVT__fill_addr;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state) >> 1U)))) {
        vlSelf->__PVT__next_fill_addr = ((1U & (IData)(vlSelf->__PVT__state))
                                          ? (0x3fU 
                                             & ((0x3fU 
                                                 == (IData)(vlSelf->__PVT__fill_addr))
                                                 ? (IData)(vlSelf->__PVT__fill_addr)
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__fill_addr))))
                                          : 0U);
    }
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
    vlSelf->__PVT__flipped_out[0U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[1U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[2U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    vlSelf->__PVT__flipped_out[3U] = vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    vlSelf->__PVT__request = 0U;
    vlSelf->__PVT__original_activation[0U] = vlSelf->__PVT__activation_org_block
        [0U];
    vlSelf->__PVT__original_activation[1U] = vlSelf->__PVT__activation_org_block
        [1U];
    vlSelf->__PVT__original_activation[2U] = vlSelf->__PVT__activation_org_block
        [2U];
    vlSelf->__PVT__original_activation[3U] = vlSelf->__PVT__activation_org_block
        [3U];
    vlSelf->__PVT__address = 0U;
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[3U] 
        = vlSelf->__PVT__activation_org_block[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[2U] 
        = vlSelf->__PVT__activation_org_block[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[1U] 
        = vlSelf->__PVT__activation_org_block[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[0U] 
        = vlSelf->__PVT__activation_org_block[0U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[3U] 
        = vlSelf->__PVT__p_block[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[2U] 
        = vlSelf->__PVT__p_block[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[1U] 
        = vlSelf->__PVT__p_block[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[0U] 
        = vlSelf->__PVT__p_block[0U];
    vlSelf->__PVT__read_write = 1U;
    if ((2U & (IData)(vlSelf->__PVT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__request = 1U;
            vlSelf->__PVT__address = (0x3fU & (VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__PVT__block_idk), 2U) 
                                               + (IData)(vlSelf->__PVT__index_counter)));
            vlSelf->__PVT__read_write = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state))) {
        vlSelf->__PVT__request = 1U;
        vlSelf->__PVT__address = vlSelf->__PVT__fill_addr;
        vlSelf->__PVT__read_write = 0U;
    }
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelf->__PVT__flipped_global[__Vilp1] = vlSelf->__PVT__flipped_all
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelf->__PVT__patched_global[__Vilp2] = vlSelf->__PVT__patched_all
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3fU)) {
        vlSelf->__PVT__final_global[__Vilp3] = vlSelf->__PVT__final_all
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
}

VL_ATTR_COLD void Vfinal_integration_test_ensemble__A6___stl_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble__A6* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble__A6___stl_sequent__TOP__final_integration__ensemble__1\n"); );
    // Body
    vlSelf->__PVT__activation_in = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state) >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            vlSelf->__PVT__activation_in = vlSelf->__PVT__activation_cache_full
                [vlSelf->__PVT__fill_addr];
        }
    }
    vlSelf->__PVT__store_enable = 0U;
    vlSelf->__PVT__index = vlSelf->__PVT__index_counter;
    vlSelf->__PVT__block_done = 0U;
    vlSelf->__PVT__finished_everything = 0U;
    vlSelf->__PVT__next_state = vlSelf->__PVT__state;
    vlSelf->__PVT__next_index = vlSelf->__PVT__index_counter;
    vlSelf->__PVT__next_block_idk = vlSelf->__PVT__block_idk;
    if ((2U & (IData)(vlSelf->__PVT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            if (vlSymsp->TOP__final_integration__ensemble__patch_inst__patch_cache.__PVT__valid) {
                vlSelf->__PVT__store_enable = 1U;
                vlSelf->__PVT__index = vlSelf->__PVT__index_counter;
                if ((3U == (IData)(vlSelf->__PVT__index_counter))) {
                    vlSelf->__PVT__block_done = 1U;
                    if ((0xfU == (IData)(vlSelf->__PVT__block_idk))) {
                        vlSelf->__PVT__finished_everything = 1U;
                        vlSelf->__PVT__next_block_idk 
                            = (0xfU & (IData)(vlSelf->__PVT__block_idk));
                    } else {
                        vlSelf->__PVT__next_block_idk 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->__PVT__block_idk)));
                    }
                    vlSelf->__PVT__next_index = 0U;
                } else {
                    vlSelf->__PVT__next_index = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__index_counter)));
                }
                vlSelf->__PVT__next_state = 3U;
            }
        } else if (((IData)(vlSymsp->TOP.start_reading) 
                    & (IData)(vlSelf->__PVT__cache_write_finished))) {
            vlSelf->__PVT__next_state = 3U;
            vlSelf->__PVT__next_index = 0U;
            vlSelf->__PVT__next_block_idk = 0U;
        }
    } else {
        if ((1U & (IData)(vlSelf->__PVT__state))) {
            if ((0x3fU == (IData)(vlSelf->__PVT__fill_addr))) {
                vlSelf->__PVT__next_state = 2U;
            }
        } else {
            vlSelf->__PVT__next_state = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__state)))) {
            vlSelf->__PVT__next_index = 0U;
            vlSelf->__PVT__next_block_idk = 0U;
        }
    }
    vlSelf->__PVT__patched_out[3U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [3U];
    vlSelf->__PVT__patched_out[2U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [2U];
    vlSelf->__PVT__patched_out[1U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [1U];
    vlSelf->__PVT__patched_out[0U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [0U];
    vlSelf->__PVT__final_choice[0U] = (vlSelf->__PVT__p_block
                                       [0U] ? vlSelf->__PVT__patched_out
                                       [0U] : (vlSelf->__PVT__f_block
                                               [0U]
                                                ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q)
                                                : (
                                                   (vlSelf->__PVT__f_block
                                                    [0U] 
                                                    | vlSelf->__PVT__p_block
                                                    [0U])
                                                    ? 0xffffU
                                                    : 
                                                   vlSelf->__PVT__activation_org_block
                                                   [0U])));
    vlSelf->__PVT__final_choice[1U] = (vlSelf->__PVT__p_block
                                       [1U] ? vlSelf->__PVT__patched_out
                                       [1U] : (vlSelf->__PVT__f_block
                                               [1U]
                                                ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q)
                                                : (
                                                   (vlSelf->__PVT__f_block
                                                    [1U] 
                                                    | vlSelf->__PVT__p_block
                                                    [1U])
                                                    ? 0xffffU
                                                    : 
                                                   vlSelf->__PVT__activation_org_block
                                                   [1U])));
    vlSelf->__PVT__final_choice[2U] = (vlSelf->__PVT__p_block
                                       [2U] ? vlSelf->__PVT__patched_out
                                       [2U] : (vlSelf->__PVT__f_block
                                               [2U]
                                                ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q)
                                                : (
                                                   (vlSelf->__PVT__f_block
                                                    [2U] 
                                                    | vlSelf->__PVT__p_block
                                                    [2U])
                                                    ? 0xffffU
                                                    : 
                                                   vlSelf->__PVT__activation_org_block
                                                   [2U])));
    vlSelf->__PVT__final_choice[3U] = (vlSelf->__PVT__p_block
                                       [3U] ? vlSelf->__PVT__patched_out
                                       [3U] : (vlSelf->__PVT__f_block
                                               [3U]
                                                ? (IData)(vlSelf->flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q)
                                                : (
                                                   (vlSelf->__PVT__f_block
                                                    [3U] 
                                                    | vlSelf->__PVT__p_block
                                                    [3U])
                                                    ? 0xffffU
                                                    : 
                                                   vlSelf->__PVT__activation_org_block
                                                   [3U])));
}
