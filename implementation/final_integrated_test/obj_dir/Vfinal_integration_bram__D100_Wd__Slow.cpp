// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfinal_integration.h for the primary calling header

#include "Vfinal_integration__pch.h"
#include "Vfinal_integration__Syms.h"
#include "Vfinal_integration_bram__D100_Wd.h"

void Vfinal_integration_bram__D100_Wd___ctor_var_reset(Vfinal_integration_bram__D100_Wd* vlSelf);

Vfinal_integration_bram__D100_Wd::Vfinal_integration_bram__D100_Wd(Vfinal_integration__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfinal_integration_bram__D100_Wd___ctor_var_reset(this);
}

void Vfinal_integration_bram__D100_Wd::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfinal_integration_bram__D100_Wd::~Vfinal_integration_bram__D100_Wd() {
}
