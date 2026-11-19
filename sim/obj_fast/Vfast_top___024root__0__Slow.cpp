// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_top.h for the primary calling header

#include "Vfast_top__pch.h"

VL_ATTR_COLD void Vfast_top___024root___eval_static(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_static\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1 = 0;
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2 = 0;
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3 = 0;
        vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr = 0xace1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.__VprimaryPorts.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.__VprimaryPorts.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tick__0 = vlSelfRef.__VprimaryPorts.tick;
    vlSelfRef.__Vtrigprevexpr___TOP__tick2__0 = vlSelfRef.__VprimaryPorts.tick2;
    vlSelfRef.__Vtrigprevexpr___TOP__btn__0 = vlSelfRef.__VprimaryPorts.btn;
    vlSelfRef.__Vtrigprevexpr___TOP__x__0 = vlSelfRef.__VprimaryPorts.x;
    vlSelfRef.__Vtrigprevexpr___TOP__y__0 = vlSelfRef.__VprimaryPorts.y;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.__VprimaryPorts.clk;
}

VL_ATTR_COLD void Vfast_top___024root___eval_initial(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_initial\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfast_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vfast_top___024root___stl_comb__TOP__0(Vfast_top___024root* vlSelf);

VL_ATTR_COLD bool Vfast_top___024root___eval_stl(Vfast_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_stl\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (::IData)((::IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vfast_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((((1ULL & vlSelfRef.__VstlTriggered[0U])) != 0ULL)) {
                Vfast_top___024root___stl_comb__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__stl(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__stl\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vfast_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__ico(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__ico\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vfast_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__act(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__act\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vfast_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__nba(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__nba\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vfast_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__obs(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__obs\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__react(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_dump_triggers__react\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfast_top___024root___eval_final(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_final\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (::IData)(Vfast_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfast_top___024root___trigger_anySet__stl(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___trigger_anySet__stl\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_0;
extern const ::VlWide<128>/*4095:0*/ Vfast_top__ConstPool__CONST_10;
extern const ::VlWide<512>/*16383:0*/ Vfast_top__ConstPool__CONST_9;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_8;
extern const ::VlWide<128>/*4095:0*/ Vfast_top__ConstPool__CONST_7;
extern const ::VlWide<2048>/*65535:0*/ Vfast_top__ConstPool__CONST_6;
extern const ::VlWide<1024>/*32767:0*/ Vfast_top__ConstPool__CONST_2;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_3;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_1;
extern const ::VlWide<256>/*8191:0*/ Vfast_top__ConstPool__CONST_4;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_5;

VL_ATTR_COLD void Vfast_top___024root___stl_comb__TOP__0(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___stl_comb__TOP__0\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*4:0*/ fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx;
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx = 0;
    ::CData/*4:0*/ fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx;
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx = 0;
    ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__ok;
    fast_top__DOT__u_logic__DOT__ok = 0;
    ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__h;
    fast_top__DOT__u_logic__DOT__h = 0;
    ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__v;
    fast_top__DOT__u_logic__DOT__v = 0;
    ::CData/*1:0*/ fast_top__DOT__u_logic__DOT__rnd;
    fast_top__DOT__u_logic__DOT__rnd = 0;
    ::CData/*4:0*/ fast_top__DOT__u_logic__DOT__gtx;
    fast_top__DOT__u_logic__DOT__gtx = 0;
    ::CData/*4:0*/ fast_top__DOT__u_logic__DOT__adx;
    fast_top__DOT__u_logic__DOT__adx = 0;
    ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__gty;
    fast_top__DOT__u_logic__DOT__gty = 0;
    ::CData/*3:0*/ fast_top__DOT__u_logic__DOT__ady;
    fast_top__DOT__u_logic__DOT__ady = 0;
    ::CData/*0:0*/ fast_top__DOT__u_logic__DOT__use_rnd;
    fast_top__DOT__u_logic__DOT__use_rnd = 0;
    ::IData/*19:0*/ fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row;
    fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row = 0;
    ::IData/*19:0*/ fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row;
    fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row = 0;
    ::IData/*19:0*/ fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row;
    fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row = 0;
    ::IData/*19:0*/ fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row;
    fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row = 0;
    ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__pellet_on;
    fast_top__DOT__u_draw__DOT__pellet_on = 0;
    ::CData/*0:0*/ fast_top__DOT__u_draw__DOT__p_pix;
    fast_top__DOT__u_draw__DOT__p_pix = 0;
    ::CData/*3:0*/ fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__;
    fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__ = 0;
    ::CData/*3:0*/ fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__;
    fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__ = 0;
    ::CData/*3:0*/ fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__;
    fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__ = 0;
    ::CData/*3:0*/ fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__;
    fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__ = 0;
    ::SData/*11:0*/ fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb;
    fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb = 0;
    ::CData/*3:0*/ fast_top__DOT__u_draw__DOT__u_slime__DOT__ci;
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_336;
    __Vdfg_Regularize_336 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_337;
    __Vdfg_Regularize_337 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_338;
    __Vdfg_Regularize_338 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_339;
    __Vdfg_Regularize_339 = 0;
    ::IData/*31:0*/ __VExpandSel_Lsb_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_2;
    ::IData/*31:0*/ __VExpandSel_Lsb_3;
    ::IData/*31:0*/ __VExpandSel_Lsb_4;
    ::IData/*31:0*/ __VExpandSel_Lsb_5;
    ::IData/*31:0*/ __VExpandSel_Lsb_6;
    ::IData/*31:0*/ __VExpandSel_Lsb_7;
    ::IData/*31:0*/ __VExpandSel_Lsb_8;
    ::IData/*31:0*/ __VExpandSel_Lsb_9;
    ::IData/*31:0*/ __VExpandSel_Lsb_10;
    ::IData/*31:0*/ __VExpandSel_Lsb_11;
    ::IData/*31:0*/ __VExpandSel_Lsb_12;
    ::IData/*31:0*/ __VExpandSel_Lsb_13;
    ::IData/*31:0*/ __VExpandSel_Lsb_14;
    ::IData/*31:0*/ __VExpandSel_Lsb_15;
    ::IData/*31:0*/ __VExpandSel_Lsb_16;
    ::IData/*31:0*/ __VExpandSel_Lsb_17;
    ::IData/*31:0*/ __VExpandSel_Lsb_18;
    ::IData/*31:0*/ __VExpandSel_Lsb_19;
    ::IData/*31:0*/ __VExpandSel_Lsb_20;
    ::IData/*31:0*/ __VExpandSel_Lsb_21;
    ::IData/*31:0*/ __VExpandSel_Lsb_22;
    // Body
    vlSelfRef.fast_top__DOT__u_logic__DOT__pidx = (0x000001ffU 
                                                   & ((0x000000f0U 
                                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                          >> 1U)) 
                                                      + 
                                                      ((0x0000001fU 
                                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                           >> 5U)) 
                                                       + 
                                                       (0x0000003cU 
                                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                           >> 3U)))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__start_press 
        = ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
           & ((~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__btnc_q)) 
              & ((::IData)(vlSelfRef.__VprimaryPorts.btn) 
                 >> 4U)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__ptick = 
        ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
         | ((::IData)(vlSelfRef.__VprimaryPorts.tick2) 
            & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__crown_hit 
        = ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_on) 
           & ((((1U & VL_REDXOR_2(vlSelfRef.fast_top__DOT__u_logic__DOT__cidx))
                 ? 1U : 0x0dU) == (0x0000000fU & (((::IData)(0x0010U) 
                                                   + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)) 
                                                  >> 5U))) 
              & (((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cidx))
                   ? 0x12U : 1U) == (0x0000001fU & 
                                     (((::IData)(0x0010U) 
                                       + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)) 
                                      >> 5U)))));
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx 
        = (0x0000001fU & ((2U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))
                           ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) - (::IData)(1U))
                           : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) + (3U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__touch = 
        ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
         & (((((0x0014U > (0x000003ffU & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                           > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__))
                                           ? ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))))) 
               & (0x0014U > (0x000003ffU & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                             > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__))
                                             ? ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__))
                                             : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                                - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)))))) 
              << 3U) | (((0x0014U > (0x000003ffU & 
                                     (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                       > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__))
                                       ? ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__))
                                       : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))))) 
                         & (0x0014U > (0x000003ffU 
                                       & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                           > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__))
                                           ? ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)))))) 
                        << 2U)) | ((((0x0014U > (0x000003ffU 
                                                 & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                     > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__))
                                                     ? 
                                                    ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                     - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__))
                                                     : 
                                                    ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                     - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))))) 
                                     & (0x0014U > (0x000003ffU 
                                                   & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                       > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__))
                                                       ? 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                       - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__))
                                                       : 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                                       - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)))))) 
                                    << 1U) | ((0x0014U 
                                               > (0x000003ffU 
                                                  & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                      > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__))
                                                      ? 
                                                     ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                      - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__))
                                                      : 
                                                     ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                      - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))))) 
                                              & (0x0014U 
                                                 > 
                                                 (0x000003ffU 
                                                  & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                      > (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__))
                                                      ? 
                                                     ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                      - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__))
                                                      : 
                                                     ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                                      - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)))))))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned 
        = ((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))) 
           & (0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py))));
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx 
        = (0x0000001fU & ((2U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want))
                           ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) - (::IData)(1U))
                           : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) + (3U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want)))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__show_msg 
        = ((2U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
           | ((4U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
              | ((0U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
                 | (5U == (::IData)(vlSelfRef.__VprimaryPorts.state)))));
    fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                            >> 5U))]);
    fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                            >> 5U))]);
    fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                            >> 5U))]);
    fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1 
        = ((0x0050U <= (::IData)(vlSelfRef.__VprimaryPorts.x)) 
           & ((0x0230U > (::IData)(vlSelfRef.__VprimaryPorts.x)) 
              & ((0x00a0U <= (::IData)(vlSelfRef.__VprimaryPorts.y)) 
                 & (0x00d8U > (::IData)(vlSelfRef.__VprimaryPorts.y)))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__tidx = (0x000001ffU 
                                                  & ((0x000000f0U 
                                                      & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                         >> 1U)) 
                                                     + 
                                                     ((0x0000001fU 
                                                       & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                          >> 5U)) 
                                                      + 
                                                      (0x0000003cU 
                                                       & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                          >> 3U)))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)));
    __VExpandSel_Lsb_1 = ((0x00000f80U & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          << 7U)) + 
                          (0x0000007cU & (((::IData)(0x1fU) 
                                           - (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                          << 2U)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__u_ball__DOT__ci 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_1))
                            ? 0U : (Vfast_top__ConstPool__CONST_10
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_1) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_1)))) 
                          | (Vfast_top__ConstPool__CONST_10
                             [(__VExpandSel_Lsb_1 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_1))));
    __VExpandSel_Lsb_2 = (((((3U == (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                           >> 3U)))
                              ? 1U : (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                            >> 3U))) 
                            << 0x0000000cU) | (0x00000f80U 
                                               & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                            << 2U)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_2))
                            ? 0U : (Vfast_top__ConstPool__CONST_9
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_2) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_2)))) 
                          | (Vfast_top__ConstPool__CONST_9
                             [(__VExpandSel_Lsb_2 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_2))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__pose = (3U 
                                                   & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                        & (2U 
                                                           == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)))
                                                        ? 1U
                                                        : 
                                                       (2U 
                                                        & (- (::IData)(
                                                                       ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                                        & (3U 
                                                                           == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))))))) 
                                                      | (- (::IData)(
                                                                     (3U 
                                                                      == (::IData)(vlSelfRef.__VprimaryPorts.state))))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__sx = (0x000003ffU 
                                                & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                   - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__sy = (0x000003ffU 
                                                & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                   - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending 
        = ((2U >= (::IData)(vlSelfRef.__VprimaryPorts.ksec)) 
           & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
              >> 3U));
    __VExpandSel_Lsb_3 = ((0x000001e0U & (((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               - (::IData)(1U))
                                            : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               + (1U 
                                                  == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want)))) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx))));
    __Vdfg_Regularize_339 = ((~ ((0x13U < (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx)) 
                                 | ((0x13U >= (0x0000001fU 
                                               & ((::IData)(0x13U) 
                                                  - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx)))) 
                                    && (1U & (Vfast_top__ConstPool__CONST_0
                                              [(__VExpandSel_Lsb_3 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & __VExpandSel_Lsb_3)))))) 
                             & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid));
    fast_top__DOT__u_logic__DOT__gtx = (0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                           >> 5U));
    fast_top__DOT__u_logic__DOT__gty = (0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                           >> 5U));
    __VExpandSel_Lsb_4 = ((0x000001e0U & (((::IData)(1U) 
                                           + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                              >> 5U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                             >> 5U))));
    __VExpandSel_Lsb_5 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                            >> 5U) 
                                           - (::IData)(1U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                             >> 5U))));
    fast_top__DOT__u_logic__DOT__ok = (0x0000000fU 
                                       & (~ ((((0x13U 
                                                < (0x0000001fU 
                                                   & ((::IData)(1U) 
                                                      + 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                       >> 5U)))) 
                                               | ((0x13U 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((::IData)(0x13U) 
                                                       - 
                                                       ((::IData)(1U) 
                                                        + 
                                                        ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                         >> 5U))))) 
                                                  && (1U 
                                                      & (fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((::IData)(0x13U) 
                                                             - 
                                                             ((::IData)(1U) 
                                                              + 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                               >> 5U)))))))) 
                                              << 3U) 
                                             | ((((0x13U 
                                                   < 
                                                   (0x0000001fU 
                                                    & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                        >> 5U) 
                                                       - (::IData)(1U)))) 
                                                  | ((0x13U 
                                                      >= 
                                                      (0x0000001fU 
                                                       & ((::IData)(0x13U) 
                                                          - 
                                                          (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                            >> 5U) 
                                                           - (::IData)(1U))))) 
                                                     && (1U 
                                                         & (fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((::IData)(0x13U) 
                                                                - 
                                                                (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                                  >> 5U) 
                                                                 - (::IData)(1U)))))))) 
                                                 << 2U) 
                                                | (3U 
                                                   & (((((0x13U 
                                                          >= 
                                                          (0x0000001fU 
                                                           & ((::IData)(0x13U) 
                                                              - 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                               >> 5U)))) 
                                                         && (1U 
                                                             & (Vfast_top__ConstPool__CONST_0
                                                                [
                                                                (__VExpandSel_Lsb_4 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_4)))) 
                                                        << 1U) 
                                                       | ((0x13U 
                                                           >= 
                                                           (0x0000001fU 
                                                            & ((::IData)(0x13U) 
                                                               - 
                                                               ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                                >> 5U)))) 
                                                          && (1U 
                                                              & (Vfast_top__ConstPool__CONST_0
                                                                 [
                                                                 (__VExpandSel_Lsb_5 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_5))))) 
                                                      | (- (::IData)(
                                                                     (0x13U 
                                                                      < 
                                                                      (0x0000001fU 
                                                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                                          >> 5U)))))))))));
    fast_top__DOT__u_logic__DOT__ok = ((~ ((::IData)(1U) 
                                           << (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__)))) 
                                       & (::IData)(fast_top__DOT__u_logic__DOT__ok));
    fast_top__DOT__u_logic__DOT__h = (((0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                       ? 3U : 2U);
    fast_top__DOT__u_logic__DOT__v = (((0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                       ? 1U : 0U);
    fast_top__DOT__u_logic__DOT__adx = (0x0000001fU 
                                        & (((0x0000001fU 
                                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                >> 5U)) 
                                            > (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                            : ((::IData)(fast_top__DOT__u_logic__DOT__gtx) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                  >> 5U))));
    fast_top__DOT__u_logic__DOT__ady = (0x0000000fU 
                                        & (((0x0000000fU 
                                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U)) 
                                            > (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                            : ((::IData)(fast_top__DOT__u_logic__DOT__gty) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                  >> 5U))));
    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
        fast_top__DOT__u_logic__DOT__h = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        fast_top__DOT__u_logic__DOT__v = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    if (((::IData)(fast_top__DOT__u_logic__DOT__adx) 
         >= (::IData)(fast_top__DOT__u_logic__DOT__ady))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
    } else {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    fast_top__DOT__u_logic__DOT__gtx = (0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                           >> 5U));
    fast_top__DOT__u_logic__DOT__gty = (0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                           >> 5U));
    __VExpandSel_Lsb_6 = ((0x000001e0U & (((::IData)(1U) 
                                           + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                              >> 5U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                             >> 5U))));
    __VExpandSel_Lsb_7 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                            >> 5U) 
                                           - (::IData)(1U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                             >> 5U))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__ 
        = ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                  >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)))
            ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)
            : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                      >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)))
                ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)
                : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                          >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)))
                    ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)
                    : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                              >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)))
                        ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)
                        : (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__))))));
    fast_top__DOT__u_logic__DOT__ok = (0x0000000fU 
                                       & (~ ((((0x13U 
                                                < (0x0000001fU 
                                                   & ((::IData)(1U) 
                                                      + 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                       >> 5U)))) 
                                               | ((0x13U 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((::IData)(0x13U) 
                                                       - 
                                                       ((::IData)(1U) 
                                                        + 
                                                        ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                         >> 5U))))) 
                                                  && (1U 
                                                      & (fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((::IData)(0x13U) 
                                                             - 
                                                             ((::IData)(1U) 
                                                              + 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                               >> 5U)))))))) 
                                              << 3U) 
                                             | ((((0x13U 
                                                   < 
                                                   (0x0000001fU 
                                                    & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                        >> 5U) 
                                                       - (::IData)(1U)))) 
                                                  | ((0x13U 
                                                      >= 
                                                      (0x0000001fU 
                                                       & ((::IData)(0x13U) 
                                                          - 
                                                          (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                            >> 5U) 
                                                           - (::IData)(1U))))) 
                                                     && (1U 
                                                         & (fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((::IData)(0x13U) 
                                                                - 
                                                                (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                                  >> 5U) 
                                                                 - (::IData)(1U)))))))) 
                                                 << 2U) 
                                                | (3U 
                                                   & (((((0x13U 
                                                          >= 
                                                          (0x0000001fU 
                                                           & ((::IData)(0x13U) 
                                                              - 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                               >> 5U)))) 
                                                         && (1U 
                                                             & (Vfast_top__ConstPool__CONST_0
                                                                [
                                                                (__VExpandSel_Lsb_6 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_6)))) 
                                                        << 1U) 
                                                       | ((0x13U 
                                                           >= 
                                                           (0x0000001fU 
                                                            & ((::IData)(0x13U) 
                                                               - 
                                                               ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                                >> 5U)))) 
                                                          && (1U 
                                                              & (Vfast_top__ConstPool__CONST_0
                                                                 [
                                                                 (__VExpandSel_Lsb_7 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_7))))) 
                                                      | (- (::IData)(
                                                                     (0x13U 
                                                                      < 
                                                                      (0x0000001fU 
                                                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                                          >> 5U)))))))))));
    fast_top__DOT__u_logic__DOT__ok = ((~ ((::IData)(1U) 
                                           << (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__)))) 
                                       & (::IData)(fast_top__DOT__u_logic__DOT__ok));
    fast_top__DOT__u_logic__DOT__rnd = (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                              >> 4U));
    fast_top__DOT__u_logic__DOT__use_rnd = (1U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                                  >> 0x0cU));
    fast_top__DOT__u_logic__DOT__h = (((0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                       ? 3U : 2U);
    fast_top__DOT__u_logic__DOT__v = (((0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                       ? 1U : 0U);
    fast_top__DOT__u_logic__DOT__adx = (0x0000001fU 
                                        & (((0x0000001fU 
                                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                >> 5U)) 
                                            > (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                            : ((::IData)(fast_top__DOT__u_logic__DOT__gtx) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                  >> 5U))));
    fast_top__DOT__u_logic__DOT__ady = (0x0000000fU 
                                        & (((0x0000000fU 
                                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U)) 
                                            > (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                            : ((::IData)(fast_top__DOT__u_logic__DOT__gty) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                  >> 5U))));
    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
        fast_top__DOT__u_logic__DOT__h = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        fast_top__DOT__u_logic__DOT__v = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    fast_top__DOT__u_logic__DOT__gtx = (0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                           >> 5U));
    fast_top__DOT__u_logic__DOT__gty = (0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                           >> 5U));
    if (fast_top__DOT__u_logic__DOT__use_rnd) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__rnd;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = 
            (3U & ((::IData)(1U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (3U & ((::IData)(2U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (3U & ((::IData)(3U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
    } else if (((::IData)(fast_top__DOT__u_logic__DOT__adx) 
                >= (::IData)(fast_top__DOT__u_logic__DOT__ady))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
    } else {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    fast_top__DOT__u_logic__DOT__h = (((0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gtx))
                                       ? 3U : 2U);
    fast_top__DOT__u_logic__DOT__v = (((0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                           >> 5U)) 
                                       > (::IData)(fast_top__DOT__u_logic__DOT__gty))
                                       ? 1U : 0U);
    __VExpandSel_Lsb_8 = ((0x000001e0U & (((::IData)(1U) 
                                           + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                              >> 5U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                             >> 5U))));
    __VExpandSel_Lsb_9 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                            >> 5U) 
                                           - (::IData)(1U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                             >> 5U))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__ 
        = ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                  >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)))
            ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)
            : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                      >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)))
                ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)
                : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                          >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)))
                    ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)
                    : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                              >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)))
                        ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)
                        : (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__))))));
    fast_top__DOT__u_logic__DOT__ok = (0x0000000fU 
                                       & (~ ((((0x13U 
                                                < (0x0000001fU 
                                                   & ((::IData)(1U) 
                                                      + 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                       >> 5U)))) 
                                               | ((0x13U 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((::IData)(0x13U) 
                                                       - 
                                                       ((::IData)(1U) 
                                                        + 
                                                        ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                         >> 5U))))) 
                                                  && (1U 
                                                      & (fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((::IData)(0x13U) 
                                                             - 
                                                             ((::IData)(1U) 
                                                              + 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                               >> 5U)))))))) 
                                              << 3U) 
                                             | ((((0x13U 
                                                   < 
                                                   (0x0000001fU 
                                                    & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                        >> 5U) 
                                                       - (::IData)(1U)))) 
                                                  | ((0x13U 
                                                      >= 
                                                      (0x0000001fU 
                                                       & ((::IData)(0x13U) 
                                                          - 
                                                          (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                            >> 5U) 
                                                           - (::IData)(1U))))) 
                                                     && (1U 
                                                         & (fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((::IData)(0x13U) 
                                                                - 
                                                                (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                                  >> 5U) 
                                                                 - (::IData)(1U)))))))) 
                                                 << 2U) 
                                                | (3U 
                                                   & (((((0x13U 
                                                          >= 
                                                          (0x0000001fU 
                                                           & ((::IData)(0x13U) 
                                                              - 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                               >> 5U)))) 
                                                         && (1U 
                                                             & (Vfast_top__ConstPool__CONST_0
                                                                [
                                                                (__VExpandSel_Lsb_8 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_8)))) 
                                                        << 1U) 
                                                       | ((0x13U 
                                                           >= 
                                                           (0x0000001fU 
                                                            & ((::IData)(0x13U) 
                                                               - 
                                                               ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                                >> 5U)))) 
                                                          && (1U 
                                                              & (Vfast_top__ConstPool__CONST_0
                                                                 [
                                                                 (__VExpandSel_Lsb_9 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_9))))) 
                                                      | (- (::IData)(
                                                                     (0x13U 
                                                                      < 
                                                                      (0x0000001fU 
                                                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                                          >> 5U)))))))))));
    fast_top__DOT__u_logic__DOT__ok = ((~ ((::IData)(1U) 
                                           << (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__)))) 
                                       & (::IData)(fast_top__DOT__u_logic__DOT__ok));
    fast_top__DOT__u_logic__DOT__rnd = (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                              >> 8U));
    vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__rnd;
    vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = (3U 
                                                 & ((::IData)(1U) 
                                                    + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = (3U 
                                                 & ((::IData)(2U) 
                                                    + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = (3U 
                                                 & ((::IData)(3U) 
                                                    + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
    fast_top__DOT__u_logic__DOT__gtx = (0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                           >> 5U));
    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
        fast_top__DOT__u_logic__DOT__h = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        fast_top__DOT__u_logic__DOT__v = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    if (((0x0000001fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                         >> 5U)) > (::IData)(fast_top__DOT__u_logic__DOT__gtx))) {
        fast_top__DOT__u_logic__DOT__h = 3U;
        fast_top__DOT__u_logic__DOT__adx = (0x0000001fU 
                                            & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gtx)));
    } else {
        fast_top__DOT__u_logic__DOT__h = 2U;
        fast_top__DOT__u_logic__DOT__adx = (0x0000001fU 
                                            & ((::IData)(fast_top__DOT__u_logic__DOT__gtx) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                  >> 5U)));
    }
    fast_top__DOT__u_logic__DOT__gty = (0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                           >> 5U));
    if (((0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                         >> 5U)) > (::IData)(fast_top__DOT__u_logic__DOT__gty))) {
        fast_top__DOT__u_logic__DOT__v = 1U;
        fast_top__DOT__u_logic__DOT__ady = (0x0000000fU 
                                            & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               - (::IData)(fast_top__DOT__u_logic__DOT__gty)));
    } else {
        fast_top__DOT__u_logic__DOT__v = 0U;
        fast_top__DOT__u_logic__DOT__ady = (0x0000000fU 
                                            & ((::IData)(fast_top__DOT__u_logic__DOT__gty) 
                                               - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                  >> 5U)));
    }
    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
        fast_top__DOT__u_logic__DOT__h = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        fast_top__DOT__u_logic__DOT__v = (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    __VExpandSel_Lsb_10 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                >> 5U))));
    __VExpandSel_Lsb_11 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                >> 5U))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__ 
        = ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                  >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)))
            ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)
            : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                      >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)))
                ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)
                : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                          >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)))
                    ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)
                    : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                              >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)))
                        ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)
                        : (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__))))));
    fast_top__DOT__u_logic__DOT__ok = (0x0000000fU 
                                       & (~ ((((0x13U 
                                                < (0x0000001fU 
                                                   & ((::IData)(1U) 
                                                      + 
                                                      ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                       >> 5U)))) 
                                               | ((0x13U 
                                                   >= 
                                                   (0x0000001fU 
                                                    & ((::IData)(0x13U) 
                                                       - 
                                                       ((::IData)(1U) 
                                                        + 
                                                        ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                         >> 5U))))) 
                                                  && (1U 
                                                      & (fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row 
                                                         >> 
                                                         (0x0000001fU 
                                                          & ((::IData)(0x13U) 
                                                             - 
                                                             ((::IData)(1U) 
                                                              + 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                               >> 5U)))))))) 
                                              << 3U) 
                                             | ((((0x13U 
                                                   < 
                                                   (0x0000001fU 
                                                    & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                        >> 5U) 
                                                       - (::IData)(1U)))) 
                                                  | ((0x13U 
                                                      >= 
                                                      (0x0000001fU 
                                                       & ((::IData)(0x13U) 
                                                          - 
                                                          (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                            >> 5U) 
                                                           - (::IData)(1U))))) 
                                                     && (1U 
                                                         & (fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((::IData)(0x13U) 
                                                                - 
                                                                (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                                  >> 5U) 
                                                                 - (::IData)(1U)))))))) 
                                                 << 2U) 
                                                | (3U 
                                                   & (((((0x13U 
                                                          >= 
                                                          (0x0000001fU 
                                                           & ((::IData)(0x13U) 
                                                              - 
                                                              ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                               >> 5U)))) 
                                                         && (1U 
                                                             & (Vfast_top__ConstPool__CONST_0
                                                                [
                                                                (__VExpandSel_Lsb_10 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_10)))) 
                                                        << 1U) 
                                                       | ((0x13U 
                                                           >= 
                                                           (0x0000001fU 
                                                            & ((::IData)(0x13U) 
                                                               - 
                                                               ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                                >> 5U)))) 
                                                          && (1U 
                                                              & (Vfast_top__ConstPool__CONST_0
                                                                 [
                                                                 (__VExpandSel_Lsb_11 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_11))))) 
                                                      | (- (::IData)(
                                                                     (0x13U 
                                                                      < 
                                                                      (0x0000001fU 
                                                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                                          >> 5U)))))))))));
    fast_top__DOT__u_logic__DOT__ok = ((~ ((::IData)(1U) 
                                           << (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__)))) 
                                       & (::IData)(fast_top__DOT__u_logic__DOT__ok));
    fast_top__DOT__u_logic__DOT__rnd = (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                              >> 0x0dU));
    fast_top__DOT__u_logic__DOT__use_rnd = (1U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                                  >> 3U));
    if (fast_top__DOT__u_logic__DOT__use_rnd) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__rnd;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = 
            (3U & ((::IData)(1U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (3U & ((::IData)(2U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (3U & ((::IData)(3U) + (::IData)(fast_top__DOT__u_logic__DOT__rnd)));
    } else if (((::IData)(fast_top__DOT__u_logic__DOT__adx) 
                >= (::IData)(fast_top__DOT__u_logic__DOT__ady))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
    } else {
        vlSelfRef.fast_top__DOT__u_logic__DOT__d0 = fast_top__DOT__u_logic__DOT__v;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d1 = fast_top__DOT__u_logic__DOT__h;
        vlSelfRef.fast_top__DOT__u_logic__DOT__d2 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__h));
        vlSelfRef.fast_top__DOT__u_logic__DOT__d3 = 
            (1U ^ (::IData)(fast_top__DOT__u_logic__DOT__v));
    }
    vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__ 
        = ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                  >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)))
            ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d0)
            : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                      >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)))
                ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d1)
                : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                          >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)))
                    ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d2)
                    : ((1U & ((::IData)(fast_top__DOT__u_logic__DOT__ok) 
                              >> (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)))
                        ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__d3)
                        : (1U ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__))))));
    vlSelfRef.__Vdfg_Regularize_335 = (0x0000003fU 
                                       & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1)
                                           ? (0x0000003fU 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                  - (::IData)(0x0050U)) 
                                                 >> 3U))
                                           : (0x0000003fU 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                  - (::IData)(0x00c8U)) 
                                                 >> 2U))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__crown_pix 
        = ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_on) 
           & ((((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cidx))
                 ? 0x12U : 1U) == (0x0000001fU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                  >> 5U))) 
              & ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci)) 
                 & (((1U & VL_REDXOR_2(vlSelfRef.fast_top__DOT__u_logic__DOT__cidx))
                      ? 1U : 0x0dU) == (0x0000000fU 
                                        & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                           >> 5U))))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__wall 
        = ((0x13U < (0x0000001fU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                    >> 5U))) | ((0x13U 
                                                 >= 
                                                 (0x0000001fU 
                                                  & ((::IData)(0x13U) 
                                                     - 
                                                     ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                      >> 5U)))) 
                                                && (1U 
                                                    & (vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__row 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((::IData)(0x13U) 
                                                           - 
                                                           ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                            >> 5U)))))));
    __VExpandSel_Lsb_12 = (((((0x0000001fU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                              >> 5U)) 
                              >= (::IData)(vlSelfRef.__VprimaryPorts.lives)) 
                             << 8U) | (0x000000e0U 
                                       & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                           - (::IData)(8U)) 
                                          << 4U))) 
                           + (0x0000001cU & (((::IData)(7U) 
                                              - (7U 
                                                 & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                     - (::IData)(8U)) 
                                                    >> 1U))) 
                                             << 2U)));
    __VExpandSel_Lsb_13 = ((0x00000f80U & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                           << 7U)) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                             << 2U)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__icon_ci = 
        (0x0000000fU & ((::IData)(((0U == (0x01e0U 
                                           & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                                   & (((((3U > (0x0000001fU 
                                                & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                   >> 5U))) 
                                         & (8U <= (0x0000001fU 
                                                   & (::IData)(vlSelfRef.__VprimaryPorts.x)))) 
                                        & (0x18U > 
                                           (0x0000001fU 
                                            & (::IData)(vlSelfRef.__VprimaryPorts.x)))) 
                                       & (8U <= (0x0000001fU 
                                                 & (::IData)(vlSelfRef.__VprimaryPorts.y)))) 
                                      & (0x18U > (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.y))))))
                         ? (((0U == (0x0000001fU & __VExpandSel_Lsb_12))
                              ? 0U : (Vfast_top__ConstPool__CONST_8
                                      [(((::IData)(3U) 
                                         + __VExpandSel_Lsb_12) 
                                        >> 5U)] << 
                                      ((::IData)(0x00000020U) 
                                       - (0x0000001fU 
                                          & __VExpandSel_Lsb_12)))) 
                            | (Vfast_top__ConstPool__CONST_8
                               [(__VExpandSel_Lsb_12 
                                 >> 5U)] >> (0x0000001fU 
                                             & __VExpandSel_Lsb_12)))
                         : ((::IData)(((((0U == (0x01e0U 
                                                 & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                                         & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) 
                                        & (~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending))) 
                                       & (0x0260U == 
                                          (0x03e0U 
                                           & (::IData)(vlSelfRef.__VprimaryPorts.x)))))
                             ? (((0U == (0x0000001fU 
                                         & __VExpandSel_Lsb_13))
                                  ? 0U : (Vfast_top__ConstPool__CONST_7
                                          [(((::IData)(3U) 
                                             + __VExpandSel_Lsb_13) 
                                            >> 5U)] 
                                          << ((::IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & __VExpandSel_Lsb_13)))) 
                                | (Vfast_top__ConstPool__CONST_7
                                   [(__VExpandSel_Lsb_13 
                                     >> 5U)] >> (0x0000001fU 
                                                 & __VExpandSel_Lsb_13)))
                             : 0U)));
    __VExpandSel_Lsb_14 = (((((0x0000000cU & (((((3U 
                                                  == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                                 & ((3U 
                                                     != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pose)) 
                                                    & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending)))
                                                 ? 2U
                                                 : (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                               - (::IData)(1U)) 
                                              << 2U)) 
                              | (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pose)) 
                             << 0x0000000cU) | (0x00000f80U 
                                                & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sy) 
                                                   << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 
        (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_14))
                          ? 0U : (Vfast_top__ConstPool__CONST_6
                                  [(((::IData)(3U) 
                                     + __VExpandSel_Lsb_14) 
                                    >> 5U)] << ((::IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & __VExpandSel_Lsb_14)))) 
                        | (Vfast_top__ConstPool__CONST_6
                           [(__VExpandSel_Lsb_14 >> 5U)] 
                           >> (0x0000001fU & __VExpandSel_Lsb_14))));
    vlSelfRef.__Vdfg_Regularize_311 = ((~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending)) 
                                       & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd = ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned)
                                                    ? 
                                                   ((::IData)(__Vdfg_Regularize_339)
                                                     ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want)
                                                     : (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))
                                                    : 
                                                   (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid) 
                                                     & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want) 
                                                        == 
                                                        (1U 
                                                         ^ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))))
                                                     ? (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want)
                                                     : (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)));
    __VExpandSel_Lsb_15 = ((0x000001e0U & (((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))
                                             ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                 >> 5U) 
                                                - (::IData)(1U))
                                             : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                 >> 5U) 
                                                + (1U 
                                                   == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)))) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_go = (1U 
                                                   & ((::IData)(__Vdfg_Regularize_339) 
                                                      | ((~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned)) 
                                                         | ((~ 
                                                             ((0x13U 
                                                               < (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx)) 
                                                              | ((0x13U 
                                                                  >= 
                                                                  (0x0000001fU 
                                                                   & ((::IData)(0x13U) 
                                                                      - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx)))) 
                                                                 && (1U 
                                                                     & (Vfast_top__ConstPool__CONST_0
                                                                        [
                                                                        (__VExpandSel_Lsb_15 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & __VExpandSel_Lsb_15)))))) 
                                                            & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving)))));
    fast_top__DOT__u_draw__DOT__pellet_on = ((~ ((0U 
                                                  == (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_ball__DOT__ci)) 
                                                 | (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__wall))) 
                                             & ((0x012bU 
                                                 >= (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__tidx)) 
                                                && (1U 
                                                    & (vlSelfRef.fast_top__DOT__u_logic__DOT__pellet
                                                       [
                                                       ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__tidx) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__tidx))))));
    fast_top__DOT__u_draw__DOT__p_pix = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__u_slime__DOT__ci)) 
                                         & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                             >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)) 
                                            & ((0x0020U 
                                                > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx)) 
                                               & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                   >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)) 
                                                  & (0x0020U 
                                                     > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sy))))));
    __VExpandSel_Lsb_16 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_311)
                               ? 4U : 3U) << 0x0000000cU) 
                            | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy) 
                                              << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_16))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_16) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_16)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_16 
                               >> 5U)] >> (0x0000001fU 
                                           & __VExpandSel_Lsb_16))));
    __VExpandSel_Lsb_17 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_311)
                               ? 4U : 2U) << 0x0000000cU) 
                            | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy) 
                                              << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_17))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_17) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_17)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_17 
                               >> 5U)] >> (0x0000001fU 
                                           & __VExpandSel_Lsb_17))));
    __VExpandSel_Lsb_18 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_311)
                               ? 4U : 1U) << 0x0000000cU) 
                            | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy) 
                                              << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_18))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_18) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_18)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_18 
                               >> 5U)] >> (0x0000001fU 
                                           & __VExpandSel_Lsb_18))));
    __VExpandSel_Lsb_19 = ((((::IData)(vlSelfRef.__Vdfg_Regularize_311) 
                             << 0x0000000eU) | (0x00000f80U 
                                                & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy) 
                                                   << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_19))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_19) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_19)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_19 
                               >> 5U)] >> (0x0000001fU 
                                           & __VExpandSel_Lsb_19))));
    fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb = (0x00000fffU 
                                                   & Vfast_top__ConstPool__CONST_3
                                                   [
                                                   (0x07ffffffU 
                                                    & ((::IData)(fast_top__DOT__u_draw__DOT__p_pix)
                                                        ? (::IData)(fast_top__DOT__u_draw__DOT__u_slime__DOT__ci)
                                                        : 
                                                       ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__crown_pix)
                                                         ? (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci)
                                                         : 
                                                        ((::IData)(fast_top__DOT__u_draw__DOT__pellet_on)
                                                          ? (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_ball__DOT__ci)
                                                          : (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__icon_ci)))))]);
    __Vdfg_Regularize_338 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 2U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy)))))));
    __Vdfg_Regularize_337 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 1U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy)))))));
    __Vdfg_Regularize_336 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)) 
                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                    >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)) 
                                   & ((0x0020U > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                      & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)) 
                                         & (0x0020U 
                                            > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy)))))));
    __VExpandSel_Lsb_20 = (((((0x31U >= (0x0000003fU 
                                         & ((::IData)(5U) 
                                            * ((::IData)(9U) 
                                               - (0x0000000fU 
                                                  & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_335, (::IData)(6U)))))))
                               ? (0x0000001fU & (::IData)(
                                                          (((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1)
                                                             ? 
                                                            (0x0003ffffffffffffULL 
                                                             & (((::QData)((::IData)(Vfast_top__ConstPool__CONST_1
                                                                                [
                                                                                (((::IData)(0x00000031U) 
                                                                                + 
                                                                                ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                                                                                << 6U)) 
                                                                                >> 5U)])) 
                                                                 << 0x00000020U) 
                                                                | (::QData)((::IData)(Vfast_top__ConstPool__CONST_1
                                                                                [
                                                                                (0x07fffffeU 
                                                                                & ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                                                                                << 1U))]))))
                                                             : 0x00016c235a013923ULL) 
                                                           >> 
                                                           (0x0000003fU 
                                                            & ((::IData)(5U) 
                                                               * 
                                                               ((::IData)(9U) 
                                                                - 
                                                                (0x0000000fU 
                                                                 & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_335, (::IData)(6U)))))))))
                               : 0U) << 8U) | (0x000000e0U 
                                               & (((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1)
                                                    ? 
                                                   (7U 
                                                    & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                        - (::IData)(0x00a0U)) 
                                                       >> 3U))
                                                    : 
                                                   (7U 
                                                    & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                        - (::IData)(0x0100U)) 
                                                       >> 2U))) 
                                                  << 5U))) 
                           + (7U & ((::IData)(4U) - 
                                    VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_335, (::IData)(6U)))));
    __VExpandSel_Lsb_21 = ((0x000001e0U & ((((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                >> 5U))));
    __VExpandSel_Lsb_22 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                >> 5U))));
    vlSelfRef.__VprimaryPorts.rgb = (0x00000fffU & 
                                     (((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__show_msg) 
                                       & (((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                             >> 4U) 
                                            & ((0x00c8U 
                                                <= (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                               & ((0x01b8U 
                                                   > (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                                  & ((0x0100U 
                                                      <= (::IData)(vlSelfRef.__VprimaryPorts.y)) 
                                                     & ((0x011cU 
                                                         > (::IData)(vlSelfRef.__VprimaryPorts.y)) 
                                                        & (2U 
                                                           != (::IData)(vlSelfRef.__VprimaryPorts.state))))))) 
                                           | (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1)) 
                                          & ((5U > 
                                              (7U & 
                                               VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_335, (::IData)(6U)))) 
                                             & ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((::IData)(4U) 
                                                     - 
                                                     VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_335, (::IData)(6U))))) 
                                                && (1U 
                                                    & (Vfast_top__ConstPool__CONST_4
                                                       [
                                                       (__VExpandSel_Lsb_20 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & __VExpandSel_Lsb_20)))))))
                                       ? (((4U == (::IData)(vlSelfRef.__VprimaryPorts.state))
                                            ? 0x04f4U
                                            : ((5U 
                                                == (::IData)(vlSelfRef.__VprimaryPorts.state))
                                                ? 0x0f44U
                                                : 0x0fd0U)) 
                                          | (- (::IData)(
                                                         (1U 
                                                          & (~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1))))))
                                       : (((::IData)(fast_top__DOT__u_draw__DOT__p_pix)
                                            ? (::IData)(fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb)
                                            : (((::IData)(__Vdfg_Regularize_336) 
                                                | ((::IData)(__Vdfg_Regularize_337) 
                                                   | ((::IData)(__Vdfg_Regularize_338) 
                                                      | ((0U 
                                                          != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__)) 
                                                         & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                                             >> 3U) 
                                                            & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__)) 
                                                               & ((0x0020U 
                                                                   > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx)) 
                                                                  & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                                      >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__)) 
                                                                     & (0x0020U 
                                                                        > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy))))))))))
                                                ? Vfast_top__ConstPool__CONST_5
                                               [(0x07ffffffU 
                                                 & ((::IData)(__Vdfg_Regularize_336)
                                                     ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)
                                                     : 
                                                    ((::IData)(__Vdfg_Regularize_337)
                                                      ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)
                                                      : 
                                                     ((::IData)(__Vdfg_Regularize_338)
                                                       ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__)
                                                       : (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__)))))]
                                                : ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__crown_pix)
                                                    ? (::IData)(fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb)
                                                    : 
                                                   ((::IData)(fast_top__DOT__u_draw__DOT__pellet_on)
                                                     ? (::IData)(fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb)
                                                     : 
                                                    ((0U 
                                                      == (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__icon_ci))
                                                      ? 
                                                     ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__wall)
                                                       ? 
                                                      ((((~ 
                                                          ((0U 
                                                            == 
                                                            (0x0000000fU 
                                                             & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                                >> 5U))) 
                                                           | ((0x13U 
                                                               < 
                                                               (0x0000001fU 
                                                                & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                   >> 5U))) 
                                                              | ((0x13U 
                                                                  >= 
                                                                  (0x0000001fU 
                                                                   & ((::IData)(0x13U) 
                                                                      - 
                                                                      ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                       >> 5U)))) 
                                                                 && (1U 
                                                                     & (Vfast_top__ConstPool__CONST_0
                                                                        [
                                                                        (__VExpandSel_Lsb_21 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & __VExpandSel_Lsb_21))))))) 
                                                         & (3U 
                                                            > 
                                                            (0x0000001fU 
                                                             & (::IData)(vlSelfRef.__VprimaryPorts.y)))) 
                                                        | (((~ 
                                                             ((0x13U 
                                                               < 
                                                               (0x0000001fU 
                                                                & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                   >> 5U))) 
                                                              | (((0x13U 
                                                                   >= 
                                                                   (0x0000001fU 
                                                                    & ((::IData)(0x13U) 
                                                                       - 
                                                                       ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                        >> 5U)))) 
                                                                  && (1U 
                                                                      & (Vfast_top__ConstPool__CONST_0
                                                                         [
                                                                         (__VExpandSel_Lsb_22 
                                                                          >> 5U)] 
                                                                         >> 
                                                                         (0x0000001fU 
                                                                          & __VExpandSel_Lsb_22)))) 
                                                                 | (0x0eU 
                                                                    == 
                                                                    (0x0000000fU 
                                                                     & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                                        >> 5U)))))) 
                                                            & (0x1cU 
                                                               < 
                                                               (0x0000001fU 
                                                                & (::IData)(vlSelfRef.__VprimaryPorts.y)))) 
                                                           | (((~ 
                                                                ((0x13U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                      >> 5U))) 
                                                                 | ((0x13U 
                                                                     < 
                                                                     (0x0000001fU 
                                                                      & ((::IData)(1U) 
                                                                         + 
                                                                         ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                          >> 5U)))) 
                                                                    | ((0x13U 
                                                                        >= 
                                                                        (0x0000001fU 
                                                                         & ((::IData)(0x13U) 
                                                                            - 
                                                                            ((::IData)(1U) 
                                                                             + 
                                                                             ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                              >> 5U))))) 
                                                                       && (1U 
                                                                           & (vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__row 
                                                                              >> 
                                                                              (0x0000001fU 
                                                                               & ((::IData)(0x13U) 
                                                                                - 
                                                                                ((::IData)(1U) 
                                                                                + 
                                                                                ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                                >> 5U)))))))))) 
                                                               & (0x1cU 
                                                                  < 
                                                                  (0x0000001fU 
                                                                   & (::IData)(vlSelfRef.__VprimaryPorts.x)))) 
                                                              | ((~ 
                                                                  ((0U 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                        >> 5U))) 
                                                                   | ((0x13U 
                                                                       < 
                                                                       (0x0000001fU 
                                                                        & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                            >> 5U) 
                                                                           - (::IData)(1U)))) 
                                                                      | ((0x13U 
                                                                          >= 
                                                                          (0x0000001fU 
                                                                           & ((::IData)(0x13U) 
                                                                              - 
                                                                              (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                                >> 5U) 
                                                                               - (::IData)(1U))))) 
                                                                         && (1U 
                                                                             & (vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__row 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((::IData)(0x13U) 
                                                                                - 
                                                                                (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                                >> 5U) 
                                                                                - (::IData)(1U)))))))))) 
                                                                 & (3U 
                                                                    > 
                                                                    (0x0000001fU 
                                                                     & (::IData)(vlSelfRef.__VprimaryPorts.x)))))))
                                                        ? 0x0b96U
                                                        : 0x0321U)
                                                       : 0x0011U)
                                                      : (::IData)(fast_top__DOT__u_draw__DOT__u_pal__DOT__rgb)))))) 
                                          & (- (::IData)(
                                                         (1U 
                                                          & (~ 
                                                             ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__show_msg) 
                                                              & ((0x0040U 
                                                                  <= (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                                                 & ((0x0240U 
                                                                     > (::IData)(vlSelfRef.__VprimaryPorts.x)) 
                                                                    & ((0x0090U 
                                                                        <= (::IData)(vlSelfRef.__VprimaryPorts.y)) 
                                                                       & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                                          < 
                                                                          ((2U 
                                                                            == (::IData)(vlSelfRef.__VprimaryPorts.state))
                                                                            ? 0x00e8U
                                                                            : 0x012cU)))))))))))));
}

bool Vfast_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (::IData)(Vfast_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tick)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tick2)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( btn)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( x)\n");
    }
    if ((1U & (::IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( y)\n");
    }
    if ((1U & (::IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vfast_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (::IData)(Vfast_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (::IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfast_top___024root___ctor_var_reset(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___ctor_var_reset\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VprimaryPorts.clk = 0;
    vlSelf->__VprimaryPorts.rst = 0;
    vlSelf->__VprimaryPorts.tick = 0;
    vlSelf->__VprimaryPorts.tick2 = 0;
    vlSelf->__VprimaryPorts.btn = 0;
    vlSelf->__VprimaryPorts.x = 0;
    vlSelf->__VprimaryPorts.y = 0;
    vlSelf->__VprimaryPorts.rgb = 0;
    vlSelf->__VprimaryPorts.state = 0;
    vlSelf->__VprimaryPorts.form = 0;
    vlSelf->__VprimaryPorts.lives = 0;
    vlSelf->__VprimaryPorts.score = 0;
    vlSelf->__VprimaryPorts.ksec = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__px = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__py = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__galive = 0;
    VL_ZERO_W(300, vlSelf->fast_top__DOT__u_logic__DOT__pellet);
    vlSelf->fast_top__DOT__u_logic__DOT__crown_on = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__frame = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pose = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pdir = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__want = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pmoving = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__want_valid = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__p_aligned = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__p_nd = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__p_go = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__ = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__d0 = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__d1 = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__d2 = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__d3 = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__cidx = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__crown_hit = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__touch = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__btnc_q = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pcount = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__cdelay = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__kframe = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__dtimer = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pend = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__start_press = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__pidx = 0;
    vlSelf->fast_top__DOT__u_logic__DOT__ptick = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__tidx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__crown_pix = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__king_ending = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__icon_ci = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__sx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__sy = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__show_msg = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__in_line1 = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__u_m__DOT__wall = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__u_m__DOT__row = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__u_crown__DOT__ci = 0;
    vlSelf->fast_top__DOT__u_draw__DOT__u_ball__DOT__ci = 0;
    vlSelf->__Vdfg_Regularize_311 = 0;
    vlSelf->__Vdfg_Regularize_335 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tick__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tick2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__btn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__x__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__y__0 = 0;
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 1);
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 1);
}
