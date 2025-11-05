// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_top_patching_final__M4.h"

void Vfinal_integration_top_patching_final__M4___ctor_var_reset(Vfinal_integration_top_patching_final__M4* vlSelf);

Vfinal_integration_top_patching_final__M4::Vfinal_integration_top_patching_final__M4(Vfinal_integration__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfinal_integration_top_patching_final__M4___ctor_var_reset(this);
}

void Vfinal_integration_top_patching_final__M4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfinal_integration_top_patching_final__M4::~Vfinal_integration_top_patching_final__M4() {
}
