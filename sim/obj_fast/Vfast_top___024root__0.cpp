// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfast_top.h for the primary calling header

#include "Vfast_top__pch.h"

void Vfast_top___024root___eval_sample(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_sample\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
bool Vfast_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in);
void Vfast_top___024root___ico_comb__TOP__2(Vfast_top___024root* vlSelf);
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_0;
void Vfast_top___024root___ico_comb__TOP__5(Vfast_top___024root* vlSelf);

bool Vfast_top___024root___eval_ico(Vfast_top___024root* vlSelf, ::CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_ico\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VicoExecute;
    // Body
    vlSelfRef.__VicoTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[1U]) 
                                     | (::IData)((::IData)(firstIteration)));
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (::QData)((::IData)(
                                                            (((((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                                != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__y__0)) 
                                                               << 6U) 
                                                              | ((((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__x__0)) 
                                                                  << 5U) 
                                                                 | (((::IData)(vlSelfRef.__VprimaryPorts.btn) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__btn__0)) 
                                                                    << 4U))) 
                                                             | (((((::IData)(vlSelfRef.__VprimaryPorts.tick2) 
                                                                   != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tick2__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.__VprimaryPorts.tick) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__tick__0)) 
                                                                    << 2U)) 
                                                                | ((((::IData)(vlSelfRef.__VprimaryPorts.rst) 
                                                                     != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.__VprimaryPorts.clk) 
                                                                      != (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.__VprimaryPorts.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.__VprimaryPorts.rst;
        vlSelfRef.__Vtrigprevexpr___TOP__tick__0 = vlSelfRef.__VprimaryPorts.tick;
        vlSelfRef.__Vtrigprevexpr___TOP__tick2__0 = vlSelfRef.__VprimaryPorts.tick2;
        vlSelfRef.__Vtrigprevexpr___TOP__btn__0 = vlSelfRef.__VprimaryPorts.btn;
        vlSelfRef.__Vtrigprevexpr___TOP__x__0 = vlSelfRef.__VprimaryPorts.x;
        vlSelfRef.__Vtrigprevexpr___TOP__y__0 = vlSelfRef.__VprimaryPorts.y;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vfast_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_body__ico
            if ((((0x0000000000000014ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.fast_top__DOT__u_logic__DOT__start_press 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
                           & ((~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__btnc_q)) 
                              & ((::IData)(vlSelfRef.__VprimaryPorts.btn) 
                                 >> 4U)));
                }
            }
            if ((((0x000000000000000cULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.fast_top__DOT__u_logic__DOT__ptick 
                        = ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
                           | ((::IData)(vlSelfRef.__VprimaryPorts.tick2) 
                              & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form))));
                }
            }
            if ((((0x0000000000000060ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                Vfast_top___024root___ico_comb__TOP__2(vlSelf);
            }
            if ((((0x0000000000000020ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__3
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__sx 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)));
                }
            }
            if ((((0x0000000000000040ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                {
                    // Inlined CFunc: _ico_comb__TOP__4
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)));
                    vlSelfRef.fast_top__DOT__u_draw__DOT__u_m__DOT__row 
                        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
                           [(0x0000000fU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                            >> 5U))]);
                    vlSelfRef.fast_top__DOT__u_draw__DOT__sy 
                        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)));
                }
            }
            if ((((0x0000000000000060ULL & vlSelfRef.__VicoTriggered[0U])) != 0ULL)) {
                Vfast_top___024root___ico_comb__TOP__5(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___dump_triggers__act(const ::VlUnpacked<::QData/*63:0*/, 1> &triggers, const ::std::string &tag);
#endif  // VL_DEBUG
void Vfast_top___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in);

bool Vfast_top___024root___eval_act(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_act\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (::QData)((::IData)(
                                                            ((::IData)(vlSelfRef.__VprimaryPorts.clk) 
                                                             & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.__VprimaryPorts.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfast_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfast_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

bool Vfast_top___024root___eval_inact(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_inact\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vfast_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in);
void Vfast_top___024root___nba_sequent__TOP__0(Vfast_top___024root* vlSelf);
void Vfast_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out);

bool Vfast_top___024root___eval_nba(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_nba\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfast_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((((1ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
                Vfast_top___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vfast_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vfast_top___024root___eval_obs(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_obs\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vfast_top___024root___eval_react(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_react\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vfast_top___024root___eval_postponed(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_postponed\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vfast_top___024root___trigger_anySet__ico(const ::VlUnpacked<::QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___trigger_anySet__ico\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const ::VlWide<32>/*1023:0*/ Vfast_top__ConstPool__CONST_8;
extern const ::VlWide<160>/*5119:0*/ Vfast_top__ConstPool__CONST_7;
extern const ::VlWide<160>/*5119:0*/ Vfast_top__ConstPool__CONST_10;
extern const ::VlWide<640>/*20479:0*/ Vfast_top__ConstPool__CONST_9;

void Vfast_top___024root___ico_comb__TOP__2(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___ico_comb__TOP__2\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __VExpandSel_Lsb_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_2;
    ::IData/*31:0*/ __VExpandSel_Lsb_3;
    ::IData/*31:0*/ __VExpandSel_Lsb_4;
    // Body
    vlSelfRef.fast_top__DOT__u_draw__DOT__in_line1 
        = ((0x0050U <= (::IData)(vlSelfRef.__VprimaryPorts.x)) 
           & ((0x0230U > (::IData)(vlSelfRef.__VprimaryPorts.x)) 
              & ((0x00a0U <= (::IData)(vlSelfRef.__VprimaryPorts.y)) 
                 & (0x00d8U > (::IData)(vlSelfRef.__VprimaryPorts.y)))));
    __VExpandSel_Lsb_1 = (((((0x0000001fU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                             >> 5U)) 
                             >= (::IData)(vlSelfRef.__VprimaryPorts.lives)) 
                            << 9U) | (0x000001c0U & 
                                      (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                        - (::IData)(8U)) 
                                       << 5U))) + (0x0000003fU 
                                                   & ((::IData)(5U) 
                                                      * 
                                                      ((::IData)(7U) 
                                                       - 
                                                       (7U 
                                                        & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                            - (::IData)(8U)) 
                                                           >> 1U))))));
    __VExpandSel_Lsb_2 = (((::IData)(0x000000a0U) * 
                           (0x0000001fU & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                          + (0x000000ffU & ((::IData)(5U) 
                                            * ((::IData)(0x0000001fU) 
                                               - (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.x))))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__icon_ci = 
        (0x0000001fU & ((::IData)(((0U == (0x01e0U 
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
                         ? ((0x27U >= (0x0000003fU 
                                       & ((::IData)(5U) 
                                          * ((::IData)(7U) 
                                             - (7U 
                                                & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                    - (::IData)(8U)) 
                                                   >> 1U))))))
                             ? (((0U == (0x0000001fU 
                                         & __VExpandSel_Lsb_1))
                                  ? 0U : (Vfast_top__ConstPool__CONST_8
                                          [(((::IData)(4U) 
                                             + __VExpandSel_Lsb_1) 
                                            >> 5U)] 
                                          << ((::IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & __VExpandSel_Lsb_1)))) 
                                | (Vfast_top__ConstPool__CONST_8
                                   [(__VExpandSel_Lsb_1 
                                     >> 5U)] >> (0x0000001fU 
                                                 & __VExpandSel_Lsb_1)))
                             : 0U) : ((::IData)((((
                                                   ((0U 
                                                     == 
                                                     (0x01e0U 
                                                      & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                                                    & (3U 
                                                       == (::IData)(vlSelfRef.__VprimaryPorts.form))) 
                                                   & (~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending))) 
                                                  & (0x0260U 
                                                     == 
                                                     (0x03e0U 
                                                      & (::IData)(vlSelfRef.__VprimaryPorts.x)))) 
                                                 & (0x9fU 
                                                    >= 
                                                    (0x000000ffU 
                                                     & ((::IData)(5U) 
                                                        * 
                                                        ((::IData)(0x0000001fU) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (::IData)(vlSelfRef.__VprimaryPorts.x))))))))
                                       ? (((0U == (0x0000001fU 
                                                   & __VExpandSel_Lsb_2))
                                            ? 0U : 
                                           (Vfast_top__ConstPool__CONST_7
                                            [(((::IData)(4U) 
                                               + __VExpandSel_Lsb_2) 
                                              >> 5U)] 
                                            << ((::IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & __VExpandSel_Lsb_2)))) 
                                          | (Vfast_top__ConstPool__CONST_7
                                             [(__VExpandSel_Lsb_2 
                                               >> 5U)] 
                                             >> (0x0000001fU 
                                                 & __VExpandSel_Lsb_2)))
                                       : 0U)));
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
    __VExpandSel_Lsb_3 = (((::IData)(0x000000a0U) * 
                           (0x0000001fU & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                          + (0x000000ffU & ((::IData)(5U) 
                                            * ((::IData)(0x0000001fU) 
                                               - (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.x))))));
    __VExpandSel_Lsb_4 = (((::IData)(0x000000a0U) * 
                           ((((3U == (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                            >> 3U)))
                               ? 1U : (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                             >> 3U))) 
                             << 5U) | (0x0000001fU 
                                       & (::IData)(vlSelfRef.__VprimaryPorts.y)))) 
                          + (0x000000ffU & ((::IData)(5U) 
                                            * ((::IData)(0x0000001fU) 
                                               - (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.x))))));
    if ((0x9fU >= (0x000000ffU & ((::IData)(5U) * ((::IData)(0x0000001fU) 
                                                   - 
                                                   (0x0000001fU 
                                                    & (::IData)(vlSelfRef.__VprimaryPorts.x))))))) {
        vlSelfRef.fast_top__DOT__u_draw__DOT__u_ball__DOT__ci 
            = (0x0000001fU & (((0U == (0x0000001fU 
                                       & __VExpandSel_Lsb_3))
                                ? 0U : (Vfast_top__ConstPool__CONST_10
                                        [(((::IData)(4U) 
                                           + __VExpandSel_Lsb_3) 
                                          >> 5U)] << 
                                        ((::IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & __VExpandSel_Lsb_3)))) 
                              | (Vfast_top__ConstPool__CONST_10
                                 [(__VExpandSel_Lsb_3 
                                   >> 5U)] >> (0x0000001fU 
                                               & __VExpandSel_Lsb_3))));
        vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci 
            = (0x0000001fU & (((0U == (0x0000001fU 
                                       & __VExpandSel_Lsb_4))
                                ? 0U : (Vfast_top__ConstPool__CONST_9
                                        [(((::IData)(4U) 
                                           + __VExpandSel_Lsb_4) 
                                          >> 5U)] << 
                                        ((::IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & __VExpandSel_Lsb_4)))) 
                              | (Vfast_top__ConstPool__CONST_9
                                 [(__VExpandSel_Lsb_4 
                                   >> 5U)] >> (0x0000001fU 
                                               & __VExpandSel_Lsb_4))));
    } else {
        vlSelfRef.fast_top__DOT__u_draw__DOT__u_ball__DOT__ci = 0U;
        vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci = 0U;
    }
    vlSelfRef.__Vdfg_Regularize_338 = (0x0000003fU 
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
}

extern const ::VlWide<1024>/*32767:0*/ Vfast_top__ConstPool__CONST_2;
extern const ::VlUnpacked<::CData/*2:0*/, 64> Vfast_top__ConstPool__CONSARRAY_2;
extern const ::VlWide<938>/*30015:0*/ Vfast_top__ConstPool__CONST_6;
extern const ::VlUnpacked<::VlWide<5>/*159:0*/, 469> Vfast_top__ConstPool__CONSARRAY_0;
extern const ::VlWide<32>/*1023:0*/ Vfast_top__ConstPool__CONST_3;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_1;
extern const ::VlWide<256>/*8191:0*/ Vfast_top__ConstPool__CONST_4;
extern const ::VlWide<16>/*511:0*/ Vfast_top__ConstPool__CONST_5;

void Vfast_top___024root___ico_comb__TOP__5(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___ico_comb__TOP__5\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    ::CData/*4:0*/ fast_top__DOT__u_draw__DOT__u_slime__DOT__ci;
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_339;
    __Vdfg_Regularize_339 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_340;
    __Vdfg_Regularize_340 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_341;
    __Vdfg_Regularize_341 = 0;
    ::IData/*31:0*/ __Vtemp_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_2;
    ::IData/*31:0*/ __VExpandSel_Lsb_3;
    ::IData/*31:0*/ __VExpandSel_Lsb_4;
    ::CData/*31:0*/ __VExpandSel_Lsb_5;
    ::IData/*31:0*/ __VExpandSel_Lsb_6;
    ::IData/*31:0*/ __VExpandSel_Lsb_7;
    ::IData/*31:0*/ __VExpandSel_Lsb_8;
    // Body
    __VExpandSel_Lsb_1 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                              ? 4U : 3U) << 0x0000000cU) 
                           | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy) 
                                             << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_1))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_1) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_1)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_1 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_1))));
    __VExpandSel_Lsb_2 = ((((::IData)(vlSelfRef.__Vdfg_Regularize_313) 
                            << 0x0000000eU) | (0x00000f80U 
                                               & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy) 
                                                  << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_2))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_2) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_2)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_2 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_2))));
    __VExpandSel_Lsb_3 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                              ? 4U : 1U) << 0x0000000cU) 
                           | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy) 
                                             << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_3))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_3) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_3)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_3 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_3))));
    __VExpandSel_Lsb_4 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                              ? 4U : 2U) << 0x0000000cU) 
                           | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy) 
                                             << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_4))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_4) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_4)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_4 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_4))));
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
    __Vtemp_1 = VL_MATCHMASKED_I(10, ((0x00000300U 
                                       & (((((3U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                             & ((3U 
                                                 != Vfast_top__ConstPool__CONSARRAY_2
                                                 [(
                                                   ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir) 
                                                    << 4U) 
                                                   | (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                       << 3U) 
                                                      | (::IData)(vlSelfRef.__VprimaryPorts.state)))]) 
                                                & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending)))
                                             ? 2U : (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                           - (::IData)(1U)) 
                                          << 8U)) | 
                                      (((::IData)(Vfast_top__ConstPool__CONSARRAY_2
                                                  [
                                                  (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir) 
                                                    << 4U) 
                                                   | (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                       << 3U) 
                                                      | (::IData)(vlSelfRef.__VprimaryPorts.state)))]) 
                                        << 5U) | (0x0000001fU 
                                                  & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sy)))), Vfast_top__ConstPool__CONST_6);
    __VExpandSel_Lsb_5 = (0x000000ffU & ((::IData)(5U) 
                                         * ((::IData)(0x0000001fU) 
                                            - (0x0000001fU 
                                               & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx)))));
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 
        ((0x9fU >= (0x000000ffU & ((::IData)(5U) * 
                                   ((::IData)(0x0000001fU) 
                                    - (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx))))))
          ? (0x0000001fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_5))
                              ? 0U : (Vfast_top__ConstPool__CONSARRAY_0
                                      [__Vtemp_1][(
                                                   ((::IData)(4U) 
                                                    + __VExpandSel_Lsb_5) 
                                                   >> 5U)] 
                                      << ((::IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & __VExpandSel_Lsb_5)))) 
                            | (Vfast_top__ConstPool__CONSARRAY_0
                               [__Vtemp_1][(__VExpandSel_Lsb_5 
                                            >> 5U)] 
                               >> (0x0000001fU & __VExpandSel_Lsb_5))))
          : 0U);
    __Vdfg_Regularize_339 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)) 
                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                    >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)) 
                                   & ((0x0020U > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                      & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)) 
                                         & (0x0020U 
                                            > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy)))))));
    __Vdfg_Regularize_340 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 1U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy)))))));
    __Vdfg_Regularize_341 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 2U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy)))))));
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
    __VExpandSel_Lsb_6 = (((((0x31U >= (0x0000003fU 
                                        & ((::IData)(5U) 
                                           * ((::IData)(9U) 
                                              - (0x0000000fU 
                                                 & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))))))
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
                                                                & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))))))))
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
                                   VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))));
    __VExpandSel_Lsb_7 = ((0x000001e0U & ((((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                            >> 5U) 
                                           - (::IData)(1U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                             >> 5U))));
    __VExpandSel_Lsb_8 = ((0x000001e0U & (((::IData)(1U) 
                                           + ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                              >> 5U)) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
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
                                               VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))) 
                                             & ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((::IData)(4U) 
                                                     - 
                                                     VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U))))) 
                                                && (1U 
                                                    & (Vfast_top__ConstPool__CONST_4
                                                       [
                                                       (__VExpandSel_Lsb_6 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & __VExpandSel_Lsb_6)))))))
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
                                            : (((::IData)(__Vdfg_Regularize_339) 
                                                | ((::IData)(__Vdfg_Regularize_340) 
                                                   | ((::IData)(__Vdfg_Regularize_341) 
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
                                                 & ((::IData)(__Vdfg_Regularize_339)
                                                     ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)
                                                     : 
                                                    ((::IData)(__Vdfg_Regularize_340)
                                                      ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)
                                                      : 
                                                     ((::IData)(__Vdfg_Regularize_341)
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
                                                                        (__VExpandSel_Lsb_7 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & __VExpandSel_Lsb_7))))))) 
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
                                                                         (__VExpandSel_Lsb_8 
                                                                          >> 5U)] 
                                                                         >> 
                                                                         (0x0000001fU 
                                                                          & __VExpandSel_Lsb_8)))) 
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

bool Vfast_top___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___trigger_anySet__act\n"); );
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

extern const ::VlWide<10>/*319:0*/ Vfast_top__ConstPool__CONST_11;

void Vfast_top___024root___nba_sequent__TOP__0(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___nba_sequent__TOP__0\n"); );
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
    ::CData/*6:0*/ fast_top__DOT__u_logic__DOT__add;
    fast_top__DOT__u_logic__DOT__add = 0;
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
    ::CData/*4:0*/ fast_top__DOT__u_draw__DOT__u_slime__DOT__ci;
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 0;
    ::SData/*15:0*/ __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__Vfuncout_12;
    __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__Vfuncout_12 = 0;
    ::SData/*15:0*/ __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13;
    __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_339;
    __Vdfg_Regularize_339 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_340;
    __Vdfg_Regularize_340 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_341;
    __Vdfg_Regularize_341 = 0;
    ::CData/*0:0*/ __Vdfg_Regularize_342;
    __Vdfg_Regularize_342 = 0;
    ::CData/*6:0*/ __Vdly__fast_top__DOT__u_logic__DOT__pend_5;
    __Vdly__fast_top__DOT__u_logic__DOT__pend_5 = 0;
    ::CData/*2:0*/ __Vdly__state_7;
    __Vdly__state_7 = 0;
    ::CData/*6:0*/ __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8;
    __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__px_9;
    __Vdly__fast_top__DOT__u_logic__DOT__px_9 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__py_10;
    __Vdly__fast_top__DOT__u_logic__DOT__py_10 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 = 0;
    ::SData/*9:0*/ __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 = 0;
    ::VlWide<10>/*299:0*/ __Vdly__fast_top__DOT__u_logic__DOT__pellet_25;
    VL_ZERO_W(300, __Vdly__fast_top__DOT__u_logic__DOT__pellet_25);
    ::CData/*7:0*/ __Vdly__fast_top__DOT__u_logic__DOT__pcount_26;
    __Vdly__fast_top__DOT__u_logic__DOT__pcount_26 = 0;
    ::CData/*1:0*/ __Vdly__form_27;
    __Vdly__form_27 = 0;
    ::CData/*0:0*/ __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29;
    __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 = 0;
    ::CData/*3:0*/ __Vdly__ksec_31;
    __Vdly__ksec_31 = 0;
    ::CData/*5:0*/ __Vdly__fast_top__DOT__u_logic__DOT__kframe_32;
    __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 = 0;
    ::CData/*3:0*/ __Vdly__fast_top__DOT__u_logic__DOT__galive_33;
    __Vdly__fast_top__DOT__u_logic__DOT__galive_33 = 0;
    ::CData/*1:0*/ __Vdly__lives_34;
    __Vdly__lives_34 = 0;
    ::IData/*31:0*/ __Vtemp_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_1;
    ::IData/*31:0*/ __VExpandSel_Lsb_2;
    ::IData/*31:0*/ __VExpandSel_Lsb_3;
    ::IData/*31:0*/ __VExpandSel_Lsb_4;
    ::CData/*31:0*/ __VExpandSel_Lsb_5;
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
    // Body
    __Vdly__fast_top__DOT__u_logic__DOT__pcount_26 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pcount;
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[0U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[0U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[1U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[1U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[2U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[2U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[3U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[3U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[4U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[4U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[5U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[5U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[6U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[6U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[7U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[7U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[8U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[8U];
    __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[9U] 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[9U];
    __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8 = vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer;
    __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__kframe;
    __Vdly__fast_top__DOT__u_logic__DOT__pend_5 = vlSelfRef.fast_top__DOT__u_logic__DOT__pend;
    __Vdly__lives_34 = vlSelfRef.__VprimaryPorts.lives;
    __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__crown_on;
    __Vdly__fast_top__DOT__u_logic__DOT__galive_33 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__galive;
    __Vdly__state_7 = vlSelfRef.__VprimaryPorts.state;
    __Vdly__fast_top__DOT__u_logic__DOT__py_10 = vlSelfRef.fast_top__DOT__u_logic__DOT__py;
    __Vdly__fast_top__DOT__u_logic__DOT__px_9 = vlSelfRef.fast_top__DOT__u_logic__DOT__px;
    __Vdly__ksec_31 = vlSelfRef.__VprimaryPorts.ksec;
    __Vdly__form_27 = vlSelfRef.__VprimaryPorts.form;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__;
    __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 
        = vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__;
    vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr = (
                                                   (0x0000fffeU 
                                                    & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_16(
                                                                     (0xb400U 
                                                                      & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__lfsr)))));
    if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pend))) {
        __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13 
            = vlSelfRef.__VprimaryPorts.score;
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1 
            = (0x0000000fU & ((::IData)(__Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13) 
                              >> 4U));
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2 
            = (0x0000000fU & ((::IData)(__Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13) 
                              >> 8U));
        vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3 
            = (0x0000000fU & ((::IData)(__Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13) 
                              >> 0x0cU));
        if ((9U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1))) {
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1 
                = (0x0000000fU & ((::IData)(1U) + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1)));
        } else if ((9U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2))) {
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2 
                = (0x0000000fU & ((::IData)(1U) + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2)));
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1 = 0U;
        } else if ((9U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3))) {
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3 
                = (0x0000000fU & ((::IData)(1U) + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3)));
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1 = 0U;
            vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2 = 0U;
        }
        __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__Vfuncout_12 
            = ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d3) 
                 << 0x0000000cU) | ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d2) 
                                    << 8U)) | (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__bcd_add10__Vstatic__d1) 
                                                << 4U) 
                                               | (0x0000000fU 
                                                  & (::IData)(__Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__s_13))));
        vlSelfRef.__VprimaryPorts.score = __Vfunc_fast_top__DOT__u_logic__DOT__bcd_add10__Vfuncout_12;
    }
    fast_top__DOT__u_logic__DOT__add = 0U;
    if ((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                  >> 2U)))) {
        if ((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                      >> 1U)))) {
            if ((1U & (~ (::IData)(vlSelfRef.__VprimaryPorts.state)))) {
                if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
                    vlSelfRef.__VprimaryPorts.score = 0U;
                }
            }
            if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
                if (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned) 
                     & ((0x012bU >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx)) 
                        && (1U & (vlSelfRef.fast_top__DOT__u_logic__DOT__pellet
                                  [((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx) 
                                    >> 5U)] >> (0x0000001fU 
                                                & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx))))))) {
                    if ((0xffU != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pcount))) {
                        __Vdly__fast_top__DOT__u_logic__DOT__pcount_26 
                            = (0x000000ffU & ((::IData)(1U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pcount)));
                    }
                    if ((0x012bU >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx))) {
                        __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx) 
                                                                        >> 5U)] 
                            = ((~ ((::IData)(1U) << 
                                   (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx)))) 
                               & __Vdly__fast_top__DOT__u_logic__DOT__pellet_25
                               [((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pidx) 
                                 >> 5U)]);
                    }
                    fast_top__DOT__u_logic__DOT__add 
                        = (0x0000007fU & ((::IData)(1U) 
                                          + (::IData)(fast_top__DOT__u_logic__DOT__add)));
                }
                if (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_hit) 
                     & (2U == (::IData)(vlSelfRef.__VprimaryPorts.form)))) {
                    __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 = 0U;
                }
                if (((3U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                     & (::IData)(vlSelfRef.__VprimaryPorts.tick))) {
                    __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 
                        = ((0x3bU == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__kframe))
                            ? 0U : (0x0000003fU & ((::IData)(1U) 
                                                   + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__kframe))));
                }
                if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
                        if ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                            fast_top__DOT__u_logic__DOT__add 
                                = (0x0000007fU & ((::IData)(0x14U) 
                                                  + (::IData)(fast_top__DOT__u_logic__DOT__add)));
                        }
                        if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                            fast_top__DOT__u_logic__DOT__add 
                                = (0x0000007fU & ((::IData)(0x14U) 
                                                  + (::IData)(fast_top__DOT__u_logic__DOT__add)));
                        }
                        if ((4U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                            fast_top__DOT__u_logic__DOT__add 
                                = (0x0000007fU & ((::IData)(0x14U) 
                                                  + (::IData)(fast_top__DOT__u_logic__DOT__add)));
                        }
                        if ((8U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                            fast_top__DOT__u_logic__DOT__add 
                                = (0x0000007fU & ((::IData)(0x14U) 
                                                  + (::IData)(fast_top__DOT__u_logic__DOT__add)));
                        }
                    }
                }
            } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
                __Vdly__fast_top__DOT__u_logic__DOT__pcount_26 = 0U;
                VL_ASSIGN_W(300, __Vdly__fast_top__DOT__u_logic__DOT__pellet_25, Vfast_top__ConstPool__CONST_11);
                __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 = 0U;
                __Vdly__fast_top__DOT__u_logic__DOT__pend_5 = 0U;
            }
        }
        if ((2U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
            if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
                if (vlSelfRef.__VprimaryPorts.tick) {
                    if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer))) {
                        __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8 
                            = (0x0000007fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer) 
                                              - (::IData)(1U)));
                    }
                }
            }
        } else if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
            if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                if ((3U != (::IData)(vlSelfRef.__VprimaryPorts.form))) {
                    __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8 = 0x5aU;
                }
            }
        }
    }
    if ((0U != (::IData)(vlSelfRef.__VprimaryPorts.state))) {
        __Vdly__fast_top__DOT__u_logic__DOT__pend_5 
            = (0x0000007fU & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pend) 
                               + (::IData)(fast_top__DOT__u_logic__DOT__add)) 
                              - ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pend))
                                  ? 1U : 0U)));
    }
    if ((4U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
        if ((2U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
            __Vdly__state_7 = 0U;
        } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
            __Vdly__state_7 = 0U;
        }
    } else if ((2U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
        if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
            if (vlSelfRef.__VprimaryPorts.tick) {
                if ((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer))) {
                    __Vdly__state_7 = ((0U == (::IData)(vlSelfRef.__VprimaryPorts.lives))
                                        ? 5U : 1U);
                }
            }
        } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
            __Vdly__state_7 = 1U;
        }
    } else if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
        if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
            if ((3U != (::IData)(vlSelfRef.__VprimaryPorts.form))) {
                __Vdly__state_7 = 3U;
            }
        }
        if ((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive))) {
            __Vdly__state_7 = 4U;
        } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
            __Vdly__state_7 = 2U;
        }
    } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
        __Vdly__state_7 = 1U;
    }
    if (vlSelfRef.__VprimaryPorts.tick) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__frame 
            = (0x0000003fU & ((::IData)(1U) + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame)));
        vlSelfRef.fast_top__DOT__u_logic__DOT__btnc_q 
            = (1U & ((::IData)(vlSelfRef.__VprimaryPorts.btn) 
                     >> 4U));
    }
    if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.btn))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__want = 0U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 1U;
    } else if ((2U & (::IData)(vlSelfRef.__VprimaryPorts.btn))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__want = 1U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 1U;
    } else if ((4U & (::IData)(vlSelfRef.__VprimaryPorts.btn))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__want = 2U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 1U;
    } else if ((8U & (::IData)(vlSelfRef.__VprimaryPorts.btn))) {
        vlSelfRef.fast_top__DOT__u_logic__DOT__want = 3U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 1U;
    }
    if ((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                  >> 2U)))) {
        if ((1U & (~ ((::IData)(vlSelfRef.__VprimaryPorts.state) 
                      >> 1U)))) {
            if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
                if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch))) {
                    if ((3U != (::IData)(vlSelfRef.__VprimaryPorts.form))) {
                        __Vdly__lives_34 = (3U & ((::IData)(vlSelfRef.__VprimaryPorts.lives) 
                                                  - (::IData)(1U)));
                    }
                    if ((3U == (::IData)(vlSelfRef.__VprimaryPorts.form))) {
                        __Vdly__fast_top__DOT__u_logic__DOT__galive_33 
                            = ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                               & (~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__touch)));
                    }
                }
                if ((((2U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                      & (~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_on))) 
                     & (::IData)(vlSelfRef.__VprimaryPorts.tick))) {
                    if ((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay))) {
                        __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 = 1U;
                    }
                    if ((0U != (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay))) {
                        vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay 
                            = (0x000000ffU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay) 
                                              - (::IData)(1U)));
                    }
                }
                if (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_hit) 
                     & (2U == (::IData)(vlSelfRef.__VprimaryPorts.form)))) {
                    vlSelfRef.fast_top__DOT__u_logic__DOT__cidx 
                        = (3U & ((::IData)(1U) + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__cidx)));
                    __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 = 0U;
                    __Vdly__ksec_31 = 0x0aU;
                }
                if (((1U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                     & (0x1eU <= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pcount)))) {
                    __Vdly__form_27 = 2U;
                }
                if (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__crown_hit) 
                     & (2U == (::IData)(vlSelfRef.__VprimaryPorts.form)))) {
                    __Vdly__form_27 = 3U;
                }
                if (((3U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                     & (::IData)(vlSelfRef.__VprimaryPorts.tick))) {
                    if ((0x3bU == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__kframe))) {
                        if ((1U == (::IData)(vlSelfRef.__VprimaryPorts.ksec))) {
                            vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay = 0xb4U;
                            __Vdly__form_27 = 2U;
                        }
                        __Vdly__ksec_31 = (0x0000000fU 
                                           & ((::IData)(vlSelfRef.__VprimaryPorts.ksec) 
                                              - (::IData)(1U)));
                    }
                }
            } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
                __Vdly__lives_34 = 3U;
                __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 = 0U;
                __Vdly__fast_top__DOT__u_logic__DOT__galive_33 = 0x0fU;
                vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay = 0U;
                __Vdly__ksec_31 = 0U;
                __Vdly__form_27 = 1U;
            }
        }
        if ((2U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
            if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
                if (vlSelfRef.__VprimaryPorts.tick) {
                    if ((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer))) {
                        if ((0U != (::IData)(vlSelfRef.__VprimaryPorts.lives))) {
                            __Vdly__fast_top__DOT__u_logic__DOT__py_10 = 0x0160U;
                            __Vdly__fast_top__DOT__u_logic__DOT__px_9 = 0x0140U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 = 0x0240U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 = 0x01a0U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 = 0x0020U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 = 0x0240U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 = 0x0140U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 = 0x0020U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 = 0x0020U;
                            __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 = 0x0060U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 0U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving = 0U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__pdir = 2U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__ = 2U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__ = 3U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__ = 2U;
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__ = 2U;
                        }
                    }
                }
            }
        } else {
            if ((1U & (::IData)(vlSelfRef.__VprimaryPorts.state))) {
                if (vlSelfRef.fast_top__DOT__u_logic__DOT__ptick) {
                    if (vlSelfRef.fast_top__DOT__u_logic__DOT__p_go) {
                        if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd) 
                                      >> 1U)))) {
                            __Vdly__fast_top__DOT__u_logic__DOT__py_10 
                                = (0x000003ffU & ((1U 
                                                   & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd))
                                                   ? 
                                                  ((::IData)(2U) 
                                                   + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py))
                                                   : 
                                                  ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                   - (::IData)(2U))));
                        }
                        if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd))) {
                            __Vdly__fast_top__DOT__u_logic__DOT__px_9 
                                = (0x000003ffU & ((1U 
                                                   & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd))
                                                   ? 
                                                  ((::IData)(2U) 
                                                   + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))
                                                   : 
                                                  ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                                                   - (::IData)(2U))));
                        }
                        vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving = 1U;
                    } else {
                        vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving = 0U;
                    }
                    vlSelfRef.fast_top__DOT__u_logic__DOT__pdir 
                        = vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd;
                }
                if (vlSelfRef.__VprimaryPorts.tick) {
                    if ((8U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive))) {
                        if (((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__))) 
                             & (0U == (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__))))) {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                              - (::IData)(2U))));
                            }
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__ 
                                = vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__3__KET__;
                        } else {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                              - (::IData)(2U))));
                            }
                        }
                    }
                    if ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive))) {
                        if (((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__))) 
                             & (0U == (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__))))) {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                              - (::IData)(2U))));
                            }
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__ 
                                = vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__0__KET__;
                        } else {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                              - (::IData)(2U))));
                            }
                        }
                    }
                    if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive))) {
                        if (((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__))) 
                             & (0U == (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__))))) {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                              - (::IData)(2U))));
                            }
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__ 
                                = vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__1__KET__;
                        } else {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                              - (::IData)(2U))));
                            }
                        }
                    }
                    if ((4U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive))) {
                        if (((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__))) 
                             & (0U == (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__))))) {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                              - (::IData)(2U))));
                            }
                            vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__ 
                                = vlSelfRef.fast_top__DOT__u_logic__DOT__gnd__BRA__2__KET__;
                        } else {
                            if ((2U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                              - (::IData)(2U))));
                            }
                            if ((1U & (~ ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__) 
                                          >> 1U)))) {
                                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 
                                    = (0x000003ffU 
                                       & ((1U & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__))
                                           ? ((::IData)(2U) 
                                              + (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__))
                                           : ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                              - (::IData)(2U))));
                            }
                        }
                    }
                }
            } else if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
                __Vdly__fast_top__DOT__u_logic__DOT__py_10 = 0x0160U;
                __Vdly__fast_top__DOT__u_logic__DOT__px_9 = 0x0140U;
                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 = 0x0240U;
                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 = 0x01a0U;
                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 = 0x0020U;
                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 = 0x0240U;
                __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 = 0x0140U;
                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 = 0x0020U;
                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 = 0x0020U;
                __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 = 0x0060U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving = 0U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__pdir = 2U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__ = 2U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__ = 3U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__ = 2U;
                vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__ = 2U;
            }
            if ((1U & (~ (::IData)(vlSelfRef.__VprimaryPorts.state)))) {
                if (vlSelfRef.fast_top__DOT__u_logic__DOT__start_press) {
                    vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 0U;
                }
            }
        }
    }
    if (vlSelfRef.__VprimaryPorts.rst) {
        vlSelfRef.__VprimaryPorts.score = 0U;
        __Vdly__fast_top__DOT__u_logic__DOT__pcount_26 = 0U;
        VL_ASSIGN_W(300, __Vdly__fast_top__DOT__u_logic__DOT__pellet_25, Vfast_top__ConstPool__CONST_11);
        __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8 = 0U;
        __Vdly__fast_top__DOT__u_logic__DOT__kframe_32 = 0U;
        __Vdly__fast_top__DOT__u_logic__DOT__pend_5 = 0U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__cidx = 0U;
        __Vdly__lives_34 = 3U;
        __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29 = 0U;
        __Vdly__fast_top__DOT__u_logic__DOT__galive_33 = 0x0fU;
        vlSelfRef.fast_top__DOT__u_logic__DOT__cdelay = 0U;
        __Vdly__state_7 = 0U;
        __Vdly__fast_top__DOT__u_logic__DOT__py_10 = 0x0160U;
        __Vdly__fast_top__DOT__u_logic__DOT__px_9 = 0x0140U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__frame = 0U;
        __Vdly__ksec_31 = 0U;
        __Vdly__form_27 = 1U;
        __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22 = 0x0240U;
        __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23 = 0x01a0U;
        __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13 = 0x0020U;
        __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16 = 0x0240U;
        __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19 = 0x0140U;
        __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14 = 0x0020U;
        __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17 = 0x0020U;
        __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20 = 0x0060U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__btnc_q = 0U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want = 2U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid = 0U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving = 0U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__pdir = 2U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__3__KET__ = 2U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__0__KET__ = 3U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__1__KET__ = 2U;
        vlSelfRef.fast_top__DOT__u_logic__DOT__gdir__BRA__2__KET__ = 2U;
    }
    vlSelfRef.fast_top__DOT__u_logic__DOT__pend = __Vdly__fast_top__DOT__u_logic__DOT__pend_5;
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[0U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[0U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[1U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[1U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[2U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[2U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[3U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[3U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[4U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[4U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[5U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[5U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[6U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[6U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[7U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[7U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[8U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[8U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__pellet[9U] 
        = __Vdly__fast_top__DOT__u_logic__DOT__pellet_25[9U];
    vlSelfRef.fast_top__DOT__u_logic__DOT__crown_on 
        = __Vdly__fast_top__DOT__u_logic__DOT__crown_on_29;
    vlSelfRef.fast_top__DOT__u_logic__DOT__py = __Vdly__fast_top__DOT__u_logic__DOT__py_10;
    vlSelfRef.fast_top__DOT__u_logic__DOT__px = __Vdly__fast_top__DOT__u_logic__DOT__px_9;
    vlSelfRef.fast_top__DOT__u_logic__DOT__pcount = __Vdly__fast_top__DOT__u_logic__DOT__pcount_26;
    vlSelfRef.fast_top__DOT__u_logic__DOT__kframe = __Vdly__fast_top__DOT__u_logic__DOT__kframe_32;
    vlSelfRef.__VprimaryPorts.ksec = __Vdly__ksec_31;
    vlSelfRef.__VprimaryPorts.form = __Vdly__form_27;
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
    vlSelfRef.fast_top__DOT__u_draw__DOT__sy = (0x000003ffU 
                                                & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                   - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)));
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
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned 
        = ((0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px))) 
           & (0U == (0x0000001fU & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__sx = (0x000003ffU 
                                                & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                   - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)));
    __VExpandSel_Lsb_1 = (((::IData)(0x000000a0U) * 
                           ((((3U == (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                            >> 3U)))
                               ? 1U : (3U & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
                                             >> 3U))) 
                             << 5U) | (0x0000001fU 
                                       & (::IData)(vlSelfRef.__VprimaryPorts.y)))) 
                          + (0x000000ffU & ((::IData)(5U) 
                                            * ((::IData)(0x0000001fU) 
                                               - (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.x))))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__u_crown__DOT__ci 
        = ((0x9fU >= (0x000000ffU & ((::IData)(5U) 
                                     * ((::IData)(0x0000001fU) 
                                        - (0x0000001fU 
                                           & (::IData)(vlSelfRef.__VprimaryPorts.x))))))
            ? (0x0000001fU & (((0U == (0x0000001fU 
                                       & __VExpandSel_Lsb_1))
                                ? 0U : (Vfast_top__ConstPool__CONST_9
                                        [(((::IData)(4U) 
                                           + __VExpandSel_Lsb_1) 
                                          >> 5U)] << 
                                        ((::IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & __VExpandSel_Lsb_1)))) 
                              | (Vfast_top__ConstPool__CONST_9
                                 [(__VExpandSel_Lsb_1 
                                   >> 5U)] >> (0x0000001fU 
                                               & __VExpandSel_Lsb_1))))
            : 0U);
    vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending 
        = ((2U >= (::IData)(vlSelfRef.__VprimaryPorts.ksec)) 
           & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__frame) 
              >> 3U));
    vlSelfRef.fast_top__DOT__u_logic__DOT__ptick = 
        ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
         | ((::IData)(vlSelfRef.__VprimaryPorts.tick2) 
            & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form))));
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx 
        = (0x0000001fU & ((2U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want))
                           ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) - (::IData)(1U))
                           : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) + (3U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want)))));
    fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx 
        = (0x0000001fU & ((2U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))
                           ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) - (::IData)(1U))
                           : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px) 
                               >> 5U) + (3U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)))));
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
    vlSelfRef.__Vdfg_Regularize_313 = ((~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending)) 
                                       & (3U == (::IData)(vlSelfRef.__VprimaryPorts.form)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__3__KET___22;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__3__KET___23;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__0__KET___13;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__0__KET___14;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__1__KET___16;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__1__KET___17;
    vlSelfRef.fast_top__DOT__u_logic__DOT__dtimer = __Vdly__fast_top__DOT__u_logic__DOT__dtimer_8;
    vlSelfRef.fast_top__DOT__u_logic__DOT__start_press 
        = ((::IData)(vlSelfRef.__VprimaryPorts.tick) 
           & ((~ (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__btnc_q)) 
              & ((::IData)(vlSelfRef.__VprimaryPorts.btn) 
                 >> 4U)));
    vlSelfRef.__VprimaryPorts.lives = __Vdly__lives_34;
    vlSelfRef.fast_top__DOT__u_logic__DOT__galive = __Vdly__fast_top__DOT__u_logic__DOT__galive_33;
    vlSelfRef.__VprimaryPorts.state = __Vdly__state_7;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gx__BRA__2__KET___19;
    vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__ 
        = __Vdly__fast_top__DOT__u_logic__DOT__gy__BRA__2__KET___20;
    __VExpandSel_Lsb_2 = ((0x000001e0U & (((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want))
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
    __Vdfg_Regularize_342 = ((~ ((0x13U < (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx)) 
                                 | ((0x13U >= (0x0000001fU 
                                               & ((::IData)(0x13U) 
                                                  - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mw__tx)))) 
                                    && (1U & (Vfast_top__ConstPool__CONST_0
                                              [(__VExpandSel_Lsb_2 
                                                >> 5U)] 
                                              >> (0x0000001fU 
                                                  & __VExpandSel_Lsb_2)))))) 
                             & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__want_valid));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__)));
    fast_top__DOT__u_logic__DOT__g_walls__BRA__3__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)));
    fast_top__DOT__u_logic__DOT__g_walls__BRA__0__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)));
    fast_top__DOT__u_logic__DOT__g_walls__BRA__1__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)));
    __VExpandSel_Lsb_3 = (((((0x0000001fU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                             >> 5U)) 
                             >= (::IData)(vlSelfRef.__VprimaryPorts.lives)) 
                            << 9U) | (0x000001c0U & 
                                      (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                        - (::IData)(8U)) 
                                       << 5U))) + (0x0000003fU 
                                                   & ((::IData)(5U) 
                                                      * 
                                                      ((::IData)(7U) 
                                                       - 
                                                       (7U 
                                                        & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                            - (::IData)(8U)) 
                                                           >> 1U))))));
    __VExpandSel_Lsb_4 = (((::IData)(0x000000a0U) * 
                           (0x0000001fU & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                          + (0x000000ffU & ((::IData)(5U) 
                                            * ((::IData)(0x0000001fU) 
                                               - (0x0000001fU 
                                                  & (::IData)(vlSelfRef.__VprimaryPorts.x))))));
    vlSelfRef.fast_top__DOT__u_draw__DOT__icon_ci = 
        (0x0000001fU & ((::IData)(((0U == (0x01e0U 
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
                         ? ((0x27U >= (0x0000003fU 
                                       & ((::IData)(5U) 
                                          * ((::IData)(7U) 
                                             - (7U 
                                                & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                    - (::IData)(8U)) 
                                                   >> 1U))))))
                             ? (((0U == (0x0000001fU 
                                         & __VExpandSel_Lsb_3))
                                  ? 0U : (Vfast_top__ConstPool__CONST_8
                                          [(((::IData)(4U) 
                                             + __VExpandSel_Lsb_3) 
                                            >> 5U)] 
                                          << ((::IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & __VExpandSel_Lsb_3)))) 
                                | (Vfast_top__ConstPool__CONST_8
                                   [(__VExpandSel_Lsb_3 
                                     >> 5U)] >> (0x0000001fU 
                                                 & __VExpandSel_Lsb_3)))
                             : 0U) : ((::IData)((((
                                                   ((0U 
                                                     == 
                                                     (0x01e0U 
                                                      & (::IData)(vlSelfRef.__VprimaryPorts.y))) 
                                                    & (3U 
                                                       == (::IData)(vlSelfRef.__VprimaryPorts.form))) 
                                                   & (~ (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending))) 
                                                  & (0x0260U 
                                                     == 
                                                     (0x03e0U 
                                                      & (::IData)(vlSelfRef.__VprimaryPorts.x)))) 
                                                 & (0x9fU 
                                                    >= 
                                                    (0x000000ffU 
                                                     & ((::IData)(5U) 
                                                        * 
                                                        ((::IData)(0x0000001fU) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (::IData)(vlSelfRef.__VprimaryPorts.x))))))))
                                       ? (((0U == (0x0000001fU 
                                                   & __VExpandSel_Lsb_4))
                                            ? 0U : 
                                           (Vfast_top__ConstPool__CONST_7
                                            [(((::IData)(4U) 
                                               + __VExpandSel_Lsb_4) 
                                              >> 5U)] 
                                            << ((::IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & __VExpandSel_Lsb_4)))) 
                                          | (Vfast_top__ConstPool__CONST_7
                                             [(__VExpandSel_Lsb_4 
                                               >> 5U)] 
                                             >> (0x0000001fU 
                                                 & __VExpandSel_Lsb_4)))
                                       : 0U)));
    vlSelfRef.fast_top__DOT__u_draw__DOT__show_msg 
        = ((2U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
           | ((4U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
              | ((0U == (::IData)(vlSelfRef.__VprimaryPorts.state)) 
                 | (5U == (::IData)(vlSelfRef.__VprimaryPorts.state)))));
    __Vtemp_1 = VL_MATCHMASKED_I(10, ((0x00000300U 
                                       & (((((3U == (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                             & ((3U 
                                                 != Vfast_top__ConstPool__CONSARRAY_2
                                                 [(
                                                   ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir) 
                                                    << 4U) 
                                                   | (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                       << 3U) 
                                                      | (::IData)(vlSelfRef.__VprimaryPorts.state)))]) 
                                                & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__king_ending)))
                                             ? 2U : (::IData)(vlSelfRef.__VprimaryPorts.form)) 
                                           - (::IData)(1U)) 
                                          << 8U)) | 
                                      (((::IData)(Vfast_top__ConstPool__CONSARRAY_2
                                                  [
                                                  (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir) 
                                                    << 4U) 
                                                   | (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving) 
                                                       << 3U) 
                                                      | (::IData)(vlSelfRef.__VprimaryPorts.state)))]) 
                                        << 5U) | (0x0000001fU 
                                                  & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sy)))), Vfast_top__ConstPool__CONST_6);
    __VExpandSel_Lsb_5 = (0x000000ffU & ((::IData)(5U) 
                                         * ((::IData)(0x0000001fU) 
                                            - (0x0000001fU 
                                               & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx)))));
    fast_top__DOT__u_draw__DOT__u_slime__DOT__ci = 
        ((0x9fU >= (0x000000ffU & ((::IData)(5U) * 
                                   ((::IData)(0x0000001fU) 
                                    - (0x0000001fU 
                                       & (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx))))))
          ? (0x0000001fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_5))
                              ? 0U : (Vfast_top__ConstPool__CONSARRAY_0
                                      [__Vtemp_1][(
                                                   ((::IData)(4U) 
                                                    + __VExpandSel_Lsb_5) 
                                                   >> 5U)] 
                                      << ((::IData)(0x00000020U) 
                                          - (0x0000001fU 
                                             & __VExpandSel_Lsb_5)))) 
                            | (Vfast_top__ConstPool__CONSARRAY_0
                               [__Vtemp_1][(__VExpandSel_Lsb_5 
                                            >> 5U)] 
                               >> (0x0000001fU & __VExpandSel_Lsb_5))))
          : 0U);
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)));
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
    fast_top__DOT__u_logic__DOT__g_walls__BRA__2__KET____DOT__u_l__DOT__row 
        = (0x000fffffU & Vfast_top__ConstPool__CONST_0
           [(0x0000000fU & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                            >> 5U))]);
    vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy 
        = (0x000003ffU & ((::IData)(vlSelfRef.__VprimaryPorts.y) 
                          - (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)));
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_nd = ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__p_aligned)
                                                    ? 
                                                   ((::IData)(__Vdfg_Regularize_342)
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
    __VExpandSel_Lsb_6 = ((0x000001e0U & (((0U == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir))
                                            ? (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               - (::IData)(1U))
                                            : (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py) 
                                                >> 5U) 
                                               + (1U 
                                                  == (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pdir)))) 
                                          << 5U)) + 
                          (0x0000001fU & ((::IData)(0x13U) 
                                          - (::IData)(fast_top__DOT__u_logic__DOT____Vcellinp__u_mc__tx))));
    vlSelfRef.fast_top__DOT__u_logic__DOT__p_go = (1U 
                                                   & ((::IData)(__Vdfg_Regularize_342) 
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
                                                                        (__VExpandSel_Lsb_6 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & __VExpandSel_Lsb_6)))))) 
                                                            & (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__pmoving)))));
    __VExpandSel_Lsb_7 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                              ? 4U : 3U) << 0x0000000cU) 
                           | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dy) 
                                             << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__3__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__3__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_7))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_7) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_7)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_7 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_7))));
    __VExpandSel_Lsb_8 = ((((::IData)(vlSelfRef.__Vdfg_Regularize_313) 
                            << 0x0000000eU) | (0x00000f80U 
                                               & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy) 
                                                  << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_8))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_8) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_8)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_8 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_8))));
    __VExpandSel_Lsb_9 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                              ? 4U : 1U) << 0x0000000cU) 
                           | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy) 
                                             << 7U))) 
                          + (0x0000007cU & (((::IData)(0x1fU) 
                                             - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                            << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__ 
        = (0x0000000fU & (((0U == (0x0000001fU & __VExpandSel_Lsb_9))
                            ? 0U : (Vfast_top__ConstPool__CONST_2
                                    [(((::IData)(3U) 
                                       + __VExpandSel_Lsb_9) 
                                      >> 5U)] << ((::IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & __VExpandSel_Lsb_9)))) 
                          | (Vfast_top__ConstPool__CONST_2
                             [(__VExpandSel_Lsb_9 >> 5U)] 
                             >> (0x0000001fU & __VExpandSel_Lsb_9))));
    fast_top__DOT__u_draw__DOT__p_pix = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__u_slime__DOT__ci)) 
                                         & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                             >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__px)) 
                                            & ((0x0020U 
                                                > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sx)) 
                                               & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                   >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__py)) 
                                                  & (0x0020U 
                                                     > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__sy))))));
    fast_top__DOT__u_logic__DOT__gtx = (0x0000001fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                           >> 5U));
    fast_top__DOT__u_logic__DOT__gty = (0x0000000fU 
                                        & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                           >> 5U));
    __VExpandSel_Lsb_10 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
                                                >> 5U))));
    __VExpandSel_Lsb_11 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
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
                                                               ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__) 
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
    __VExpandSel_Lsb_12 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__) 
                                                >> 5U))));
    __VExpandSel_Lsb_13 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
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
                                                                (__VExpandSel_Lsb_12 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_12)))) 
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
                                                                 (__VExpandSel_Lsb_13 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_13))))) 
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
    __VExpandSel_Lsb_14 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__) 
                                                >> 5U))));
    __VExpandSel_Lsb_15 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
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
                                                                (__VExpandSel_Lsb_14 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_14)))) 
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
                                                                 (__VExpandSel_Lsb_15 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_15))))) 
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
    __VExpandSel_Lsb_16 = ((0x000001e0U & (((::IData)(1U) 
                                            + ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
                                               >> 5U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__3__KET__) 
                                                >> 5U))));
    __VExpandSel_Lsb_17 = ((0x000001e0U & ((((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__3__KET__) 
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
                                                                (__VExpandSel_Lsb_16 
                                                                 >> 5U)] 
                                                                >> 
                                                                (0x0000001fU 
                                                                 & __VExpandSel_Lsb_16)))) 
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
                                                                 (__VExpandSel_Lsb_17 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x0000001fU 
                                                                  & __VExpandSel_Lsb_17))))) 
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
    __VExpandSel_Lsb_18 = (((((::IData)(vlSelfRef.__Vdfg_Regularize_313)
                               ? 4U : 2U) << 0x0000000cU) 
                            | (0x00000f80U & ((::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy) 
                                              << 7U))) 
                           + (0x0000007cU & (((::IData)(0x1fU) 
                                              - (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                             << 2U)));
    fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__ 
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
    __Vdfg_Regularize_339 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)) 
                             & ((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                    >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__0__KET__)) 
                                   & ((0x0020U > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dx)) 
                                      & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                          >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__0__KET__)) 
                                         & (0x0020U 
                                            > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__0__KET____DOT__dy)))))));
    __Vdfg_Regularize_340 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 1U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__1__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__1__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__1__KET____DOT__dy)))))));
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
    __Vdfg_Regularize_341 = ((0U != (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__2__KET__)) 
                             & (((::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__galive) 
                                 >> 2U) & (((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                            >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gx__BRA__2__KET__)) 
                                           & ((0x0020U 
                                               > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dx)) 
                                              & (((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                                  >= (::IData)(vlSelfRef.fast_top__DOT__u_logic__DOT__gy__BRA__2__KET__)) 
                                                 & (0x0020U 
                                                    > (::IData)(vlSelfRef.fast_top__DOT__u_draw__DOT__g_ghost__BRA__2__KET____DOT__dy)))))));
    __VExpandSel_Lsb_19 = (((((0x31U >= (0x0000003fU 
                                         & ((::IData)(5U) 
                                            * ((::IData)(9U) 
                                               - (0x0000000fU 
                                                  & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))))))
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
                                                                 & VL_DIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))))))))
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
                                    VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))));
    __VExpandSel_Lsb_20 = ((0x000001e0U & ((((::IData)(vlSelfRef.__VprimaryPorts.y) 
                                             >> 5U) 
                                            - (::IData)(1U)) 
                                           << 5U)) 
                           + (0x0000001fU & ((::IData)(0x13U) 
                                             - ((::IData)(vlSelfRef.__VprimaryPorts.x) 
                                                >> 5U))));
    __VExpandSel_Lsb_21 = ((0x000001e0U & (((::IData)(1U) 
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
                                               VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U)))) 
                                             & ((4U 
                                                 >= 
                                                 (7U 
                                                  & ((::IData)(4U) 
                                                     - 
                                                     VL_MODDIV_III(32, vlSelfRef.__Vdfg_Regularize_338, (::IData)(6U))))) 
                                                && (1U 
                                                    & (Vfast_top__ConstPool__CONST_4
                                                       [
                                                       (__VExpandSel_Lsb_19 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & __VExpandSel_Lsb_19)))))))
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
                                            : (((::IData)(__Vdfg_Regularize_339) 
                                                | ((::IData)(__Vdfg_Regularize_340) 
                                                   | ((::IData)(__Vdfg_Regularize_341) 
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
                                                 & ((::IData)(__Vdfg_Regularize_339)
                                                     ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__0__KET__)
                                                     : 
                                                    ((::IData)(__Vdfg_Regularize_340)
                                                      ? (::IData)(fast_top__DOT__u_draw__DOT__g_ci__BRA__1__KET__)
                                                      : 
                                                     ((::IData)(__Vdfg_Regularize_341)
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
                                                                        (__VExpandSel_Lsb_20 
                                                                         >> 5U)] 
                                                                        >> 
                                                                        (0x0000001fU 
                                                                         & __VExpandSel_Lsb_20))))))) 
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
                                                                         (__VExpandSel_Lsb_21 
                                                                          >> 5U)] 
                                                                         >> 
                                                                         (0x0000001fU 
                                                                          & __VExpandSel_Lsb_21)))) 
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

void Vfast_top___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 1> &out, const ::VlUnpacked<::QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((0U >= n));
}

void Vfast_top___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vfast_top___024root___eval_debug_assertions(Vfast_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfast_top___024root___eval_debug_assertions\n"); );
    Vfast_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.clk 
                      & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.rst 
                      & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.tick 
                      & 0xfeU)))) {
        Verilated::overWidthError("tick");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.tick2 
                      & 0xfeU)))) {
        Verilated::overWidthError("tick2");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.btn 
                      & 0xe0U)))) {
        Verilated::overWidthError("btn");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.x & 0xfc00U)))) {
        Verilated::overWidthError("x");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.y & 0xfc00U)))) {
        Verilated::overWidthError("y");
    }
}
#endif  // VL_DEBUG
