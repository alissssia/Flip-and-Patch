// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench_fallos.h for the primary calling header

#include "Vtestbench_fallos__pch.h"
#include "Vtestbench_fallos__Syms.h"
#include "Vtestbench_fallos___024root.h"

void Vtestbench_fallos___024root___ctor_var_reset(Vtestbench_fallos___024root* vlSelf);

Vtestbench_fallos___024root::Vtestbench_fallos___024root(Vtestbench_fallos__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_fallos___024root___ctor_var_reset(this);
}

void Vtestbench_fallos___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtestbench_fallos___024root::~Vtestbench_fallos___024root() {
}
