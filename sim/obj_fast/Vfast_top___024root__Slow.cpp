// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_top.h for the primary calling header

#include "Vfast_top__pch.h"

void Vfast_top___024root___ctor_var_reset(Vfast_top___024root* vlSelf);

void Vfast_top___024root__ctor(Vfast_top___024root* vlSelf, Vfast_top__Syms* symsp, const char* namep) {
    vlSelf->vlSymsp = symsp;
    vlSelf->vlNamep = strdup(namep);
    // Construct members
    // Reset structure values
    Vfast_top___024root___ctor_var_reset(vlSelf);
}

Vfast_top___024root::Vfast_top___024root(Vfast_top__Syms* symsp, const char* namep) {
    Vfast_top___024root__ctor(this, symsp, namep);
}

void Vfast_top___024root__dtor(Vfast_top___024root* vlSelf) {
    // Destroy members
    VL_DO_DANGLING(std::free(const_cast<char*>(vlSelf->vlNamep)), vlSelf->vlNamep);
}

Vfast_top___024root::~Vfast_top___024root() {
    Vfast_top___024root__dtor(this);
}
