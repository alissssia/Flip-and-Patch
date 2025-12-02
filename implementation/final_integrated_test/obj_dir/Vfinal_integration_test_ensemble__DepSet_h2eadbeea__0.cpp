// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_test_ensemble.h"

VL_INLINE_OPT void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__0\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__gaddr;
    __PVT__unnamedblk1__DOT__gaddr = 0;
    CData/*1:0*/ __PVT__unnamedblk1__DOT__lane;
    __PVT__unnamedblk1__DOT__lane = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    // Body
    vlSelf->__PVT__p_activation_in = 0U;
    if ((0U != (IData)(vlSelf->__PVT__p_state))) {
        if ((1U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_activation_in = vlSelf->__PVT__activation_cache_full
                [(0x3fU & vlSelf->__PVT__p_fill_addr)];
        }
    }
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & vlSelf->__PVT__base_idx)]);
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    vlSelf->__PVT__original_activation[0U] = vlSelf->__PVT__activation_org
        [(0x3fU & vlSelf->__PVT__base_idx)];
    vlSelf->__PVT__original_activation[1U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(1U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__original_activation[2U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(2U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__original_activation[3U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(3U) + vlSelf->__PVT__base_idx))];
    __PVT__unnamedblk1__DOT__gaddr = vlSelf->__PVT__p_read_addr;
    __PVT__unnamedblk1__DOT__lane = (3U & __PVT__unnamedblk1__DOT__gaddr);
    vlSelf->__PVT__activation_org_patch[0U] = 0U;
    vlSelf->__PVT__p_patch[0U] = 0U;
    vlSelf->__PVT__activation_org_patch[1U] = 0U;
    vlSelf->__PVT__p_patch[1U] = 0U;
    vlSelf->__PVT__activation_org_patch[2U] = 0U;
    vlSelf->__PVT__p_patch[2U] = 0U;
    vlSelf->__PVT__activation_org_patch[3U] = 0U;
    vlSelf->__PVT__p_patch[3U] = 0U;
    if ((0x40U > __PVT__unnamedblk1__DOT__gaddr)) {
        vlSelf->__PVT__activation_org_patch[__PVT__unnamedblk1__DOT__lane] 
            = vlSelf->__PVT__activation_org[(0x3fU 
                                             & __PVT__unnamedblk1__DOT__gaddr)];
        vlSelf->__PVT__p_patch[__PVT__unnamedblk1__DOT__lane] 
            = vlSelf->__PVT__p[(0x3fU & __PVT__unnamedblk1__DOT__gaddr)];
    }
    flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & vlSelf->__PVT__base_idx)]
              ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & vlSelf->__PVT__base_idx)]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & vlSelf->__PVT__base_idx)]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & vlSelf->__PVT__base_idx)]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & vlSelf->__PVT__base_idx)]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & vlSelf->__PVT__base_idx)]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & vlSelf->__PVT__base_idx)]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & vlSelf->__PVT__base_idx)]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__base_idx)]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & vlSelf->__PVT__base_idx)]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & vlSelf->__PVT__base_idx)]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(1U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(1U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(1U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(1U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(1U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(1U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(2U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(2U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(2U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(2U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(2U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(2U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(2U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(3U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(3U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(3U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(3U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(3U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(3U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[3U] 
        = vlSelf->__PVT__activation_org_patch[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[2U] 
        = vlSelf->__PVT__activation_org_patch[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[1U] 
        = vlSelf->__PVT__activation_org_patch[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[0U] 
        = vlSelf->__PVT__activation_org_patch[0U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[3U] 
        = vlSelf->__PVT__p_patch[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[2U] 
        = vlSelf->__PVT__p_patch[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[1U] 
        = vlSelf->__PVT__p_patch[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[0U] 
        = vlSelf->__PVT__p_patch[0U];
    vlSelf->__PVT__flipped_block[0U] = flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[0U] = (vlSelf->__PVT__p
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & vlSelf->__PVT__base_idx)]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & vlSelf->__PVT__base_idx)] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & vlSelf->__PVT__base_idx)])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & vlSelf->__PVT__base_idx)])));
    vlSelf->__PVT__flipped_block[1U] = flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[1U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(1U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->__PVT__base_idx))])));
    vlSelf->__PVT__flipped_block[2U] = flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[2U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(2U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->__PVT__base_idx))])));
    vlSelf->__PVT__flipped_block[3U] = flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[3U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(3U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->__PVT__base_idx))])));
}

VL_INLINE_OPT void Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___ico_sequent__TOP__final_integration__ensemble__1\n"); );
    // Body
    vlSelf->__PVT__patched_from_cache[3U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [3U];
    vlSelf->__PVT__patched_from_cache[2U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [2U];
    vlSelf->__PVT__patched_from_cache[1U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [1U];
    vlSelf->__PVT__patched_from_cache[0U] = vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__chosen_activation
        [0U];
}

VL_INLINE_OPT void Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__0(Vfinal_integration_test_ensemble* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfinal_integration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vfinal_integration_test_ensemble___nba_sequent__TOP__final_integration__ensemble__0\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__gaddr;
    __PVT__unnamedblk1__DOT__gaddr = 0;
    CData/*1:0*/ __PVT__unnamedblk1__DOT__lane;
    __PVT__unnamedblk1__DOT__lane = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b = 0;
    SData/*15:0*/ flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b;
    flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a = 0;
    CData/*0:0*/ flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a;
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a = 0;
    CData/*0:0*/ __Vdly__reading;
    __Vdly__reading = 0;
    IData/*31:0*/ __Vdly__base_idx;
    __Vdly__base_idx = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v0;
    __VdlyDim0__final_global__v0 = 0;
    SData/*15:0*/ __VdlyVal__final_global__v1;
    __VdlyVal__final_global__v1 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v1;
    __VdlyDim0__final_global__v1 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v0;
    __VdlyDim0__patched_global__v0 = 0;
    SData/*15:0*/ __VdlyVal__patched_global__v1;
    __VdlyVal__patched_global__v1 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v1;
    __VdlyDim0__patched_global__v1 = 0;
    CData/*5:0*/ __VdlyVal__dbg_idx__v1;
    __VdlyVal__dbg_idx__v1 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v0;
    __VdlyDim0__flipped_global__v0 = 0;
    SData/*15:0*/ __VdlyVal__flipped_global__v1;
    __VdlyVal__flipped_global__v1 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v1;
    __VdlyDim0__flipped_global__v1 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v2;
    __VdlyDim0__final_global__v2 = 0;
    SData/*15:0*/ __VdlyVal__final_global__v3;
    __VdlyVal__final_global__v3 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v3;
    __VdlyDim0__final_global__v3 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v2;
    __VdlyDim0__patched_global__v2 = 0;
    SData/*15:0*/ __VdlyVal__patched_global__v3;
    __VdlyVal__patched_global__v3 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v3;
    __VdlyDim0__patched_global__v3 = 0;
    CData/*5:0*/ __VdlyVal__dbg_idx__v3;
    __VdlyVal__dbg_idx__v3 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v2;
    __VdlyDim0__flipped_global__v2 = 0;
    SData/*15:0*/ __VdlyVal__flipped_global__v3;
    __VdlyVal__flipped_global__v3 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v3;
    __VdlyDim0__flipped_global__v3 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v4;
    __VdlyDim0__final_global__v4 = 0;
    SData/*15:0*/ __VdlyVal__final_global__v5;
    __VdlyVal__final_global__v5 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v5;
    __VdlyDim0__final_global__v5 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v4;
    __VdlyDim0__patched_global__v4 = 0;
    SData/*15:0*/ __VdlyVal__patched_global__v5;
    __VdlyVal__patched_global__v5 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v5;
    __VdlyDim0__patched_global__v5 = 0;
    CData/*5:0*/ __VdlyVal__dbg_idx__v5;
    __VdlyVal__dbg_idx__v5 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v4;
    __VdlyDim0__flipped_global__v4 = 0;
    SData/*15:0*/ __VdlyVal__flipped_global__v5;
    __VdlyVal__flipped_global__v5 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v5;
    __VdlyDim0__flipped_global__v5 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v6;
    __VdlyDim0__final_global__v6 = 0;
    SData/*15:0*/ __VdlyVal__final_global__v7;
    __VdlyVal__final_global__v7 = 0;
    CData/*5:0*/ __VdlyDim0__final_global__v7;
    __VdlyDim0__final_global__v7 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v6;
    __VdlyDim0__patched_global__v6 = 0;
    SData/*15:0*/ __VdlyVal__patched_global__v7;
    __VdlyVal__patched_global__v7 = 0;
    CData/*5:0*/ __VdlyDim0__patched_global__v7;
    __VdlyDim0__patched_global__v7 = 0;
    CData/*5:0*/ __VdlyVal__dbg_idx__v7;
    __VdlyVal__dbg_idx__v7 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v6;
    __VdlyDim0__flipped_global__v6 = 0;
    SData/*15:0*/ __VdlyVal__flipped_global__v7;
    __VdlyVal__flipped_global__v7 = 0;
    CData/*5:0*/ __VdlyDim0__flipped_global__v7;
    __VdlyDim0__flipped_global__v7 = 0;
    SData/*15:0*/ __VdlyVal__patched_mem__v64;
    __VdlyVal__patched_mem__v64 = 0;
    CData/*5:0*/ __VdlyDim0__patched_mem__v64;
    __VdlyDim0__patched_mem__v64 = 0;
    CData/*0:0*/ __VdlySet__final_global__v0;
    __VdlySet__final_global__v0 = 0;
    CData/*0:0*/ __VdlySet__final_global__v1;
    __VdlySet__final_global__v1 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v0;
    __VdlySet__patched_global__v0 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v1;
    __VdlySet__patched_global__v1 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v0;
    __VdlySet__dbg_idx__v0 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v1;
    __VdlySet__dbg_idx__v1 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v0;
    __VdlySet__flipped_global__v0 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v1;
    __VdlySet__flipped_global__v1 = 0;
    CData/*0:0*/ __VdlySet__final_global__v2;
    __VdlySet__final_global__v2 = 0;
    CData/*0:0*/ __VdlySet__final_global__v3;
    __VdlySet__final_global__v3 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v2;
    __VdlySet__patched_global__v2 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v3;
    __VdlySet__patched_global__v3 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v2;
    __VdlySet__dbg_idx__v2 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v3;
    __VdlySet__dbg_idx__v3 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v2;
    __VdlySet__flipped_global__v2 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v3;
    __VdlySet__flipped_global__v3 = 0;
    CData/*0:0*/ __VdlySet__final_global__v4;
    __VdlySet__final_global__v4 = 0;
    CData/*0:0*/ __VdlySet__final_global__v5;
    __VdlySet__final_global__v5 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v4;
    __VdlySet__patched_global__v4 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v5;
    __VdlySet__patched_global__v5 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v4;
    __VdlySet__dbg_idx__v4 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v5;
    __VdlySet__dbg_idx__v5 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v4;
    __VdlySet__flipped_global__v4 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v5;
    __VdlySet__flipped_global__v5 = 0;
    CData/*0:0*/ __VdlySet__final_global__v6;
    __VdlySet__final_global__v6 = 0;
    CData/*0:0*/ __VdlySet__final_global__v7;
    __VdlySet__final_global__v7 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v6;
    __VdlySet__patched_global__v6 = 0;
    CData/*0:0*/ __VdlySet__patched_global__v7;
    __VdlySet__patched_global__v7 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v6;
    __VdlySet__dbg_idx__v6 = 0;
    CData/*0:0*/ __VdlySet__dbg_idx__v7;
    __VdlySet__dbg_idx__v7 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v6;
    __VdlySet__flipped_global__v6 = 0;
    CData/*0:0*/ __VdlySet__flipped_global__v7;
    __VdlySet__flipped_global__v7 = 0;
    CData/*0:0*/ __VdlySet__patched_mem__v0;
    __VdlySet__patched_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__patched_mem__v64;
    __VdlySet__patched_mem__v64 = 0;
    // Body
    __VdlySet__dbg_idx__v0 = 0U;
    __VdlySet__dbg_idx__v1 = 0U;
    __VdlySet__dbg_idx__v2 = 0U;
    __VdlySet__dbg_idx__v3 = 0U;
    __VdlySet__dbg_idx__v4 = 0U;
    __VdlySet__dbg_idx__v5 = 0U;
    __VdlySet__dbg_idx__v6 = 0U;
    __VdlySet__dbg_idx__v7 = 0U;
    __VdlySet__patched_mem__v0 = 0U;
    __VdlySet__patched_mem__v64 = 0U;
    __Vdly__reading = vlSelf->__PVT__reading;
    __Vdly__base_idx = vlSelf->__PVT__base_idx;
    __VdlySet__flipped_global__v0 = 0U;
    __VdlySet__flipped_global__v1 = 0U;
    __VdlySet__flipped_global__v2 = 0U;
    __VdlySet__flipped_global__v3 = 0U;
    __VdlySet__flipped_global__v4 = 0U;
    __VdlySet__flipped_global__v5 = 0U;
    __VdlySet__flipped_global__v6 = 0U;
    __VdlySet__flipped_global__v7 = 0U;
    __VdlySet__patched_global__v0 = 0U;
    __VdlySet__patched_global__v1 = 0U;
    __VdlySet__patched_global__v2 = 0U;
    __VdlySet__patched_global__v3 = 0U;
    __VdlySet__patched_global__v4 = 0U;
    __VdlySet__patched_global__v5 = 0U;
    __VdlySet__patched_global__v6 = 0U;
    __VdlySet__patched_global__v7 = 0U;
    __VdlySet__final_global__v0 = 0U;
    __VdlySet__final_global__v1 = 0U;
    __VdlySet__final_global__v2 = 0U;
    __VdlySet__final_global__v3 = 0U;
    __VdlySet__final_global__v4 = 0U;
    __VdlySet__final_global__v5 = 0U;
    __VdlySet__final_global__v6 = 0U;
    __VdlySet__final_global__v7 = 0U;
    if (vlSymsp->TOP.reset) {
        __VdlySet__dbg_idx__v0 = 1U;
        __VdlySet__dbg_idx__v2 = 1U;
        __VdlySet__dbg_idx__v4 = 1U;
        __VdlySet__dbg_idx__v6 = 1U;
        __VdlySet__patched_mem__v0 = 1U;
        __Vdly__reading = 0U;
        __Vdly__base_idx = 0U;
        __VdlyDim0__flipped_global__v0 = (0x3fU & vlSelf->__PVT__base_idx);
        __VdlySet__flipped_global__v0 = 1U;
        __VdlyDim0__flipped_global__v2 = (0x3fU & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__flipped_global__v2 = 1U;
        __VdlyDim0__flipped_global__v4 = (0x3fU & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__flipped_global__v4 = 1U;
        __VdlyDim0__flipped_global__v6 = (0x3fU & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__flipped_global__v6 = 1U;
        __VdlyDim0__patched_global__v0 = (0x3fU & vlSelf->__PVT__base_idx);
        __VdlySet__patched_global__v0 = 1U;
        __VdlyDim0__patched_global__v2 = (0x3fU & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__patched_global__v2 = 1U;
        __VdlyDim0__patched_global__v4 = (0x3fU & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__patched_global__v4 = 1U;
        __VdlyDim0__patched_global__v6 = (0x3fU & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx));
        __VdlySet__patched_global__v6 = 1U;
        __VdlyDim0__final_global__v0 = (0x3fU & vlSelf->__PVT__base_idx);
        __VdlySet__final_global__v0 = 1U;
        __VdlyDim0__final_global__v2 = (0x3fU & ((IData)(1U) 
                                                 + vlSelf->__PVT__base_idx));
        __VdlySet__final_global__v2 = 1U;
        __VdlyDim0__final_global__v4 = (0x3fU & ((IData)(2U) 
                                                 + vlSelf->__PVT__base_idx));
        __VdlySet__final_global__v4 = 1U;
        __VdlyDim0__final_global__v6 = (0x3fU & ((IData)(3U) 
                                                 + vlSelf->__PVT__base_idx));
        __VdlySet__final_global__v6 = 1U;
        vlSelf->__PVT__p_fill_addr = 0U;
        vlSelf->__PVT__p_state = 0U;
        vlSelf->__PVT__p_read_addr = 0U;
    } else {
        if (vlSelf->__PVT__reading) {
            __VdlyVal__dbg_idx__v1 = (0x3fU & vlSelf->__PVT__base_idx);
            __VdlySet__dbg_idx__v1 = 1U;
            __VdlyVal__dbg_idx__v3 = (0x3fU & ((IData)(1U) 
                                               + vlSelf->__PVT__base_idx));
            __VdlySet__dbg_idx__v3 = 1U;
            __VdlyVal__dbg_idx__v5 = (0x3fU & ((IData)(2U) 
                                               + vlSelf->__PVT__base_idx));
            __VdlySet__dbg_idx__v5 = 1U;
            __VdlyVal__dbg_idx__v7 = (0x3fU & ((IData)(3U) 
                                               + vlSelf->__PVT__base_idx));
            __VdlySet__dbg_idx__v7 = 1U;
            __VdlyVal__flipped_global__v1 = vlSelf->__PVT__flipped_block
                [0U];
            __VdlyDim0__flipped_global__v1 = (0x3fU 
                                              & vlSelf->__PVT__base_idx);
            __VdlySet__flipped_global__v1 = 1U;
            __VdlyVal__flipped_global__v3 = vlSelf->__PVT__flipped_block
                [1U];
            __VdlyDim0__flipped_global__v3 = (0x3fU 
                                              & ((IData)(1U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__flipped_global__v3 = 1U;
            __VdlyVal__flipped_global__v5 = vlSelf->__PVT__flipped_block
                [2U];
            __VdlyDim0__flipped_global__v5 = (0x3fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__flipped_global__v5 = 1U;
            __VdlyVal__flipped_global__v7 = vlSelf->__PVT__flipped_block
                [3U];
            __VdlyDim0__flipped_global__v7 = (0x3fU 
                                              & ((IData)(3U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__flipped_global__v7 = 1U;
            __VdlyVal__patched_global__v1 = vlSelf->__PVT__patched_block
                [0U];
            __VdlyDim0__patched_global__v1 = (0x3fU 
                                              & vlSelf->__PVT__base_idx);
            __VdlySet__patched_global__v1 = 1U;
            __VdlyVal__patched_global__v3 = vlSelf->__PVT__patched_block
                [1U];
            __VdlyDim0__patched_global__v3 = (0x3fU 
                                              & ((IData)(1U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__patched_global__v3 = 1U;
            __VdlyVal__patched_global__v5 = vlSelf->__PVT__patched_block
                [2U];
            __VdlyDim0__patched_global__v5 = (0x3fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__patched_global__v5 = 1U;
            __VdlyVal__patched_global__v7 = vlSelf->__PVT__patched_block
                [3U];
            __VdlyDim0__patched_global__v7 = (0x3fU 
                                              & ((IData)(3U) 
                                                 + vlSelf->__PVT__base_idx));
            __VdlySet__patched_global__v7 = 1U;
            __VdlyVal__final_global__v1 = vlSelf->__PVT__final_choice
                [0U];
            __VdlyDim0__final_global__v1 = (0x3fU & vlSelf->__PVT__base_idx);
            __VdlySet__final_global__v1 = 1U;
            __VdlyVal__final_global__v3 = vlSelf->__PVT__final_choice
                [1U];
            __VdlyDim0__final_global__v3 = (0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->__PVT__base_idx));
            __VdlySet__final_global__v3 = 1U;
            __VdlyVal__final_global__v5 = vlSelf->__PVT__final_choice
                [2U];
            __VdlyDim0__final_global__v5 = (0x3fU & 
                                            ((IData)(2U) 
                                             + vlSelf->__PVT__base_idx));
            __VdlySet__final_global__v5 = 1U;
            __VdlyVal__final_global__v7 = vlSelf->__PVT__final_choice
                [3U];
            __VdlyDim0__final_global__v7 = (0x3fU & 
                                            ((IData)(3U) 
                                             + vlSelf->__PVT__base_idx));
            __VdlySet__final_global__v7 = 1U;
        }
        if (vlSelf->__PVT__p_store_enable) {
            __VdlyVal__patched_mem__v64 = vlSelf->__PVT__patched_from_cache
                [vlSelf->__PVT__p_index];
            __VdlyDim0__patched_mem__v64 = (0x3fU & vlSelf->__PVT__p_read_addr);
            __VdlySet__patched_mem__v64 = 1U;
        }
        if (vlSymsp->TOP.start_reading) {
            __Vdly__reading = 1U;
            __Vdly__base_idx = 0U;
        } else if (vlSelf->__PVT__reading) {
            if ((0x40U > ((IData)(4U) + vlSelf->__PVT__base_idx))) {
                __Vdly__base_idx = ((IData)(4U) + vlSelf->__PVT__base_idx);
            } else {
                __Vdly__reading = 0U;
            }
        }
        vlSelf->__PVT__p_fill_addr = vlSelf->__PVT__p_next_fill_addr;
        vlSelf->__PVT__p_state = vlSelf->__PVT__p_next_state;
        vlSelf->__PVT__p_read_addr = vlSelf->__PVT__p_next_read_addr;
    }
    if (__VdlySet__dbg_idx__v0) {
        vlSelf->__PVT__dbg_idx[0U] = 0U;
    }
    if (__VdlySet__dbg_idx__v1) {
        vlSelf->__PVT__dbg_idx[0U] = __VdlyVal__dbg_idx__v1;
    }
    if (__VdlySet__dbg_idx__v2) {
        vlSelf->__PVT__dbg_idx[1U] = 0U;
    }
    if (__VdlySet__dbg_idx__v3) {
        vlSelf->__PVT__dbg_idx[1U] = __VdlyVal__dbg_idx__v3;
    }
    if (__VdlySet__dbg_idx__v4) {
        vlSelf->__PVT__dbg_idx[2U] = 0U;
    }
    if (__VdlySet__dbg_idx__v5) {
        vlSelf->__PVT__dbg_idx[2U] = __VdlyVal__dbg_idx__v5;
    }
    if (__VdlySet__dbg_idx__v6) {
        vlSelf->__PVT__dbg_idx[3U] = 0U;
    }
    if (__VdlySet__dbg_idx__v7) {
        vlSelf->__PVT__dbg_idx[3U] = __VdlyVal__dbg_idx__v7;
    }
    if (__VdlySet__patched_mem__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelf->__PVT__patched_mem[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__patched_mem__v64) {
        vlSelf->__PVT__patched_mem[__VdlyDim0__patched_mem__v64] 
            = __VdlyVal__patched_mem__v64;
    }
    if (__VdlySet__flipped_global__v0) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v0] = 0U;
    }
    if (__VdlySet__flipped_global__v1) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v1] 
            = __VdlyVal__flipped_global__v1;
    }
    if (__VdlySet__flipped_global__v2) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v2] = 0U;
    }
    if (__VdlySet__flipped_global__v3) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v3] 
            = __VdlyVal__flipped_global__v3;
    }
    if (__VdlySet__flipped_global__v4) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v4] = 0U;
    }
    if (__VdlySet__flipped_global__v5) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v5] 
            = __VdlyVal__flipped_global__v5;
    }
    if (__VdlySet__flipped_global__v6) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v6] = 0U;
    }
    if (__VdlySet__flipped_global__v7) {
        vlSelf->__PVT__flipped_global[__VdlyDim0__flipped_global__v7] 
            = __VdlyVal__flipped_global__v7;
    }
    if (__VdlySet__patched_global__v0) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v0] = 0U;
    }
    if (__VdlySet__patched_global__v1) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v1] 
            = __VdlyVal__patched_global__v1;
    }
    if (__VdlySet__patched_global__v2) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v2] = 0U;
    }
    if (__VdlySet__patched_global__v3) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v3] 
            = __VdlyVal__patched_global__v3;
    }
    if (__VdlySet__patched_global__v4) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v4] = 0U;
    }
    if (__VdlySet__patched_global__v5) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v5] 
            = __VdlyVal__patched_global__v5;
    }
    if (__VdlySet__patched_global__v6) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v6] = 0U;
    }
    if (__VdlySet__patched_global__v7) {
        vlSelf->__PVT__patched_global[__VdlyDim0__patched_global__v7] 
            = __VdlyVal__patched_global__v7;
    }
    vlSelf->__PVT__reading = __Vdly__reading;
    vlSelf->__PVT__base_idx = __Vdly__base_idx;
    if (__VdlySet__final_global__v0) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v0] = 0U;
    }
    if (__VdlySet__final_global__v1) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v1] 
            = __VdlyVal__final_global__v1;
    }
    if (__VdlySet__final_global__v2) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v2] = 0U;
    }
    if (__VdlySet__final_global__v3) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v3] 
            = __VdlyVal__final_global__v3;
    }
    if (__VdlySet__final_global__v4) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v4] = 0U;
    }
    if (__VdlySet__final_global__v5) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v5] 
            = __VdlyVal__final_global__v5;
    }
    if (__VdlySet__final_global__v6) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v6] = 0U;
    }
    if (__VdlySet__final_global__v7) {
        vlSelf->__PVT__final_global[__VdlyDim0__final_global__v7] 
            = __VdlyVal__final_global__v7;
    }
    vlSelf->__PVT__patched_block[0U] = vlSelf->__PVT__patched_mem
        [(0x3fU & vlSelf->__PVT__base_idx)];
    vlSelf->__PVT__patched_block[1U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(1U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__patched_block[2U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(2U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__patched_block[3U] = vlSelf->__PVT__patched_mem
        [(0x3fU & ((IData)(3U) + vlSelf->__PVT__base_idx))];
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & vlSelf->__PVT__base_idx)]);
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & vlSelf->__PVT__base_idx)] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(2U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a 
        = (1U & vlSelf->__PVT__activation_org[(0x3fU 
                                               & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]);
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 1U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 2U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 3U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 4U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 5U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 6U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 7U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 8U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 9U));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xaU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xbU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xcU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xdU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xeU));
    flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a 
        = (1U & (vlSelf->__PVT__activation_org[(0x3fU 
                                                & ((IData)(3U) 
                                                   + vlSelf->__PVT__base_idx))] 
                 >> 0xfU));
    vlSelf->__PVT__original_activation[0U] = vlSelf->__PVT__activation_org
        [(0x3fU & vlSelf->__PVT__base_idx)];
    vlSelf->__PVT__original_activation[1U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(1U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__original_activation[2U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(2U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__original_activation[3U] = vlSelf->__PVT__activation_org
        [(0x3fU & ((IData)(3U) + vlSelf->__PVT__base_idx))];
    vlSelf->__PVT__p_store_enable = 0U;
    vlSelf->__PVT__p_next_fill_addr = vlSelf->__PVT__p_fill_addr;
    vlSelf->__PVT__p_activation_in = 0U;
    vlSelf->__PVT__p_request = 0U;
    vlSelf->__PVT__p_read_write = 1U;
    flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & vlSelf->__PVT__base_idx)]
              ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & vlSelf->__PVT__base_idx)]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & vlSelf->__PVT__base_idx)]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & vlSelf->__PVT__base_idx)]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & vlSelf->__PVT__base_idx)]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & vlSelf->__PVT__base_idx)]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & vlSelf->__PVT__base_idx)]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & vlSelf->__PVT__base_idx)]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & vlSelf->__PVT__base_idx)]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & vlSelf->__PVT__base_idx)]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & vlSelf->__PVT__base_idx)]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & vlSelf->__PVT__base_idx)]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__0__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(1U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(1U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(1U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(1U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(1U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(1U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(1U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__1__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(2U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(2U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(2U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(2U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(2U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(2U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(2U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(2U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(2U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__2__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b 
        = (((vlSelf->__PVT__f[(0x3fU & ((IData)(3U) 
                                        + vlSelf->__PVT__base_idx))]
              ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)
              : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)) 
            << 0xfU) | (((vlSelf->__PVT__f[(0x3fU & 
                                            ((IData)(3U) 
                                             + vlSelf->__PVT__base_idx))]
                           ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)
                           : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)) 
                         << 0xeU) | (((vlSelf->__PVT__f
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)
                                        : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)) 
                                      << 0xdU) | ((
                                                   (vlSelf->__PVT__f
                                                    [
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        + vlSelf->__PVT__base_idx))]
                                                     ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)
                                                     : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)) 
                                                   << 0xcU) 
                                                  | (((vlSelf->__PVT__f
                                                       [
                                                       (0x3fU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->__PVT__base_idx))]
                                                        ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)
                                                        : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)) 
                                                      << 0xbU) 
                                                     | (((vlSelf->__PVT__f
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(3U) 
                                                              + vlSelf->__PVT__base_idx))]
                                                           ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)
                                                           : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)) 
                                                         << 0xaU) 
                                                        | (((vlSelf->__PVT__f
                                                             [
                                                             (0x3fU 
                                                              & ((IData)(3U) 
                                                                 + vlSelf->__PVT__base_idx))]
                                                              ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)
                                                              : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)) 
                                                            << 9U) 
                                                           | (((vlSelf->__PVT__f
                                                                [
                                                                (0x3fU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelf->__PVT__base_idx))]
                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)
                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)) 
                                                               << 8U) 
                                                              | (((vlSelf->__PVT__f
                                                                   [
                                                                   (0x3fU 
                                                                    & ((IData)(3U) 
                                                                       + vlSelf->__PVT__base_idx))]
                                                                    ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__u0__a)
                                                                    : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__u0__a)) 
                                                                  << 7U) 
                                                                 | (((vlSelf->__PVT__f
                                                                      [
                                                                      (0x3fU 
                                                                       & ((IData)(3U) 
                                                                          + vlSelf->__PVT__base_idx))]
                                                                       ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__u0__a)
                                                                       : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__u0__a)) 
                                                                     << 6U) 
                                                                    | (((vlSelf->__PVT__f
                                                                         [
                                                                         (0x3fU 
                                                                          & ((IData)(3U) 
                                                                             + vlSelf->__PVT__base_idx))]
                                                                          ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__u0__a)
                                                                          : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__u0__a)) 
                                                                        << 5U) 
                                                                       | (((vlSelf->__PVT__f
                                                                            [
                                                                            (0x3fU 
                                                                             & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                             ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__u0__a)
                                                                             : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__u0__a)) 
                                                                           << 4U) 
                                                                          | (((vlSelf->__PVT__f
                                                                               [
                                                                               (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__u0__a)
                                                                                : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__a)) 
                                                                              << 3U) 
                                                                             | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__a)) 
                                                                                << 2U) 
                                                                                | (((vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__a)) 
                                                                                << 1U) 
                                                                                | (vlSelf->__PVT__f
                                                                                [
                                                                                (0x3fU 
                                                                                & ((IData)(3U) 
                                                                                + vlSelf->__PVT__base_idx))]
                                                                                 ? (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__u0__a)
                                                                                 : (IData)(flip_inst__DOT__genblk1__BRA__3__KET____DOT__u0__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__a)))))))))))))))));
    vlSelf->__PVT__p_index = 0U;
    if ((0U != (IData)(vlSelf->__PVT__p_state))) {
        if ((1U != (IData)(vlSelf->__PVT__p_state))) {
            if ((2U == (IData)(vlSelf->__PVT__p_state))) {
                vlSelf->__PVT__p_store_enable = 1U;
                vlSelf->__PVT__p_index = (3U & vlSelf->__PVT__p_read_addr);
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_activation_in = vlSelf->__PVT__activation_cache_full
                [(0x3fU & vlSelf->__PVT__p_fill_addr)];
            vlSelf->__PVT__p_request = 1U;
            vlSelf->__PVT__p_read_write = 0U;
        } else if ((2U == (IData)(vlSelf->__PVT__p_state))) {
            vlSelf->__PVT__p_request = 1U;
            vlSelf->__PVT__p_read_write = 1U;
        }
    }
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
    __PVT__unnamedblk1__DOT__gaddr = vlSelf->__PVT__p_read_addr;
    __PVT__unnamedblk1__DOT__lane = (3U & __PVT__unnamedblk1__DOT__gaddr);
    vlSelf->__PVT__activation_org_patch[0U] = 0U;
    vlSelf->__PVT__p_patch[0U] = 0U;
    vlSelf->__PVT__activation_org_patch[1U] = 0U;
    vlSelf->__PVT__p_patch[1U] = 0U;
    vlSelf->__PVT__activation_org_patch[2U] = 0U;
    vlSelf->__PVT__p_patch[2U] = 0U;
    vlSelf->__PVT__activation_org_patch[3U] = 0U;
    vlSelf->__PVT__p_patch[3U] = 0U;
    if ((0x40U > __PVT__unnamedblk1__DOT__gaddr)) {
        vlSelf->__PVT__activation_org_patch[__PVT__unnamedblk1__DOT__lane] 
            = vlSelf->__PVT__activation_org[(0x3fU 
                                             & __PVT__unnamedblk1__DOT__gaddr)];
        vlSelf->__PVT__p_patch[__PVT__unnamedblk1__DOT__lane] 
            = vlSelf->__PVT__p[(0x3fU & __PVT__unnamedblk1__DOT__gaddr)];
    }
    vlSelf->__PVT__flipped_block[0U] = flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[0U] = (vlSelf->__PVT__p
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & vlSelf->__PVT__base_idx)]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & vlSelf->__PVT__base_idx)]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & vlSelf->__PVT__base_idx)] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & vlSelf->__PVT__base_idx)])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & vlSelf->__PVT__base_idx)])));
    vlSelf->__PVT__flipped_block[1U] = flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[1U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(1U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(1U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->__PVT__base_idx))])));
    vlSelf->__PVT__flipped_block[2U] = flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[2U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(2U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(2U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->__PVT__base_idx))])));
    vlSelf->__PVT__flipped_block[3U] = flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b;
    vlSelf->__PVT__final_choice[3U] = (vlSelf->__PVT__p
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        ? vlSelf->__PVT__patched_mem
                                       [(0x3fU & ((IData)(3U) 
                                                  + vlSelf->__PVT__base_idx))]
                                        : (vlSelf->__PVT__f
                                           [(0x3fU 
                                             & ((IData)(3U) 
                                                + vlSelf->__PVT__base_idx))]
                                            ? (IData)(flip_inst__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__b)
                                            : ((vlSelf->__PVT__f
                                                [(0x3fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->__PVT__base_idx))] 
                                                | vlSelf->__PVT__p
                                                [(0x3fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->__PVT__base_idx))])
                                                ? 0xffffU
                                                : vlSelf->__PVT__activation_org
                                               [(0x3fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->__PVT__base_idx))])));
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[3U] 
        = vlSelf->__PVT__activation_org_patch[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[2U] 
        = vlSelf->__PVT__activation_org_patch[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[1U] 
        = vlSelf->__PVT__activation_org_patch[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__activation_org[0U] 
        = vlSelf->__PVT__activation_org_patch[0U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[3U] 
        = vlSelf->__PVT__p_patch[3U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[2U] 
        = vlSelf->__PVT__p_patch[2U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[1U] 
        = vlSelf->__PVT__p_patch[1U];
    vlSymsp->TOP__final_integration__ensemble__patch_inst.__PVT__p[0U] 
        = vlSelf->__PVT__p_patch[0U];
}
