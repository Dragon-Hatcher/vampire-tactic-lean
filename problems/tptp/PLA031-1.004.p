%------------------------------------------------------------------------------
% File     : PLA031-1.004 : TPTP v9.3.1. Released v3.5.0.
% Domain   : Planning
% Problem  : Driver's log k=04
% Version  : Especial.
% English  : A planning domain that involves driving trucks around
%            delivering packages between locations. The complication is
%            that the trucks require drivers who must walk between trucks
%            in order to drive them. The paths for walking and the roads
%            for driving form different maps on the locations.
%            Instances were semi-automatically translated from the basic
%            Strips instances used in the 2002 Planning Competition.

% Refs     : [LF03] Long & Fox (2003), The 3rd International Planning Compe
%          : [NV07a] Navarro (2007), Email to Geoff Sutcliffe
%          : [NV07b] Navarro & Voronkov (2007), Encoding Problems and Reaso
% Source   : [NV07a]
% Names    : driverlog04 [NV07a]

% Status   : Unsatisfiable
% Rating   : 0.33 v8.1.0, 0.00 v7.3.0, 0.40 v7.2.0, 0.33 v7.1.0, 0.29 v7.0.0, 0.14 v6.4.0, 0.33 v6.3.0, 0.50 v6.2.0, 0.25 v6.0.0, 0.00 v5.5.0, 0.20 v5.4.0, 0.33 v5.0.0, 0.50 v4.1.0, 0.40 v4.0.1, 0.60 v3.7.0, 0.75 v3.5.0
% Syntax   : Number of clauses     :  138 ( 101 unt;   0 nHn; 138 RR)
%            Number of literals    :  196 (   0 equ;  68 neg)
%            Maximal clause size   :    4 (   1 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    4 (   4 usr;   0 prp; 2-9 aty)
%            Number of functors    :    9 (   9 usr;   9 con; 0-0 aty)
%            Number of variables   :  310 (   2 sgn)
% SPC      : CNF_UNS_EPR_NEQ_HRN

% Comments : Only instances 1-4 are within reach of current provers. (2007)
%          : Translated from [LF03] using [NV07b]
%------------------------------------------------------------------------------
cnf(load1,axiom,
    ( ~ s(L,O2,O3,O4,D1,D2,D3,L,T2)
    | s(truck1,O2,O3,O4,D1,D2,D3,L,T2) ) ).

cnf(load2,axiom,
    ( s(L,O2,O3,O4,D1,D2,D3,L,T2)
    | ~ s(truck1,O2,O3,O4,D1,D2,D3,L,T2) ) ).

cnf(load3,axiom,
    ( ~ s(L,O2,O3,O4,D1,D2,D3,T1,L)
    | s(truck2,O2,O3,O4,D1,D2,D3,T1,L) ) ).

cnf(load4,axiom,
    ( s(L,O2,O3,O4,D1,D2,D3,T1,L)
    | ~ s(truck2,O2,O3,O4,D1,D2,D3,T1,L) ) ).

cnf(load5,axiom,
    ( ~ s(O1,L,O3,O4,D1,D2,D3,L,T2)
    | s(O1,truck1,O3,O4,D1,D2,D3,L,T2) ) ).

cnf(load6,axiom,
    ( s(O1,L,O3,O4,D1,D2,D3,L,T2)
    | ~ s(O1,truck1,O3,O4,D1,D2,D3,L,T2) ) ).

cnf(load7,axiom,
    ( ~ s(O1,L,O3,O4,D1,D2,D3,T1,L)
    | s(O1,truck2,O3,O4,D1,D2,D3,T1,L) ) ).

cnf(load8,axiom,
    ( s(O1,L,O3,O4,D1,D2,D3,T1,L)
    | ~ s(O1,truck2,O3,O4,D1,D2,D3,T1,L) ) ).

cnf(load9,axiom,
    ( ~ s(O1,O2,L,O4,D1,D2,D3,L,T2)
    | s(O1,O2,truck1,O4,D1,D2,D3,L,T2) ) ).

cnf(load10,axiom,
    ( s(O1,O2,L,O4,D1,D2,D3,L,T2)
    | ~ s(O1,O2,truck1,O4,D1,D2,D3,L,T2) ) ).

cnf(load11,axiom,
    ( ~ s(O1,O2,L,O4,D1,D2,D3,T1,L)
    | s(O1,O2,truck2,O4,D1,D2,D3,T1,L) ) ).

cnf(load12,axiom,
    ( s(O1,O2,L,O4,D1,D2,D3,T1,L)
    | ~ s(O1,O2,truck2,O4,D1,D2,D3,T1,L) ) ).

cnf(load13,axiom,
    ( ~ s(O1,O2,O3,L,D1,D2,D3,L,T2)
    | s(O1,O2,O3,truck1,D1,D2,D3,L,T2) ) ).

cnf(load14,axiom,
    ( s(O1,O2,O3,L,D1,D2,D3,L,T2)
    | ~ s(O1,O2,O3,truck1,D1,D2,D3,L,T2) ) ).

cnf(load15,axiom,
    ( ~ s(O1,O2,O3,L,D1,D2,D3,T1,L)
    | s(O1,O2,O3,truck2,D1,D2,D3,T1,L) ) ).

cnf(load16,axiom,
    ( s(O1,O2,O3,L,D1,D2,D3,T1,L)
    | ~ s(O1,O2,O3,truck2,D1,D2,D3,T1,L) ) ).

cnf(board1,axiom,
    ( ~ s(O1,O2,O3,O4,L,D2,D3,L,T2)
    | ~ neq(D2,truck1)
    | ~ neq(D3,truck1)
    | s(O1,O2,O3,O4,truck1,D2,D3,L,T2) ) ).

cnf(board2,axiom,
    ( s(O1,O2,O3,O4,L,D2,D3,L,T2)
    | ~ s(O1,O2,O3,O4,truck1,D2,D3,L,T2) ) ).

cnf(board3,axiom,
    ( ~ s(O1,O2,O3,O4,L,D2,D3,T1,L)
    | ~ neq(D2,truck2)
    | ~ neq(D3,truck2)
    | s(O1,O2,O3,O4,truck2,D2,D3,T1,L) ) ).

cnf(board4,axiom,
    ( s(O1,O2,O3,O4,L,D2,D3,T1,L)
    | ~ s(O1,O2,O3,O4,truck2,D2,D3,T1,L) ) ).

cnf(board5,axiom,
    ( ~ s(O1,O2,O3,O4,D1,L,D3,L,T2)
    | ~ neq(D1,truck1)
    | ~ neq(D3,truck1)
    | s(O1,O2,O3,O4,D1,truck1,D3,L,T2) ) ).

cnf(board6,axiom,
    ( s(O1,O2,O3,O4,D1,L,D3,L,T2)
    | ~ s(O1,O2,O3,O4,D1,truck1,D3,L,T2) ) ).

cnf(board7,axiom,
    ( ~ s(O1,O2,O3,O4,D1,L,D3,T1,L)
    | ~ neq(D1,truck2)
    | ~ neq(D3,truck2)
    | s(O1,O2,O3,O4,D1,truck2,D3,T1,L) ) ).

cnf(board8,axiom,
    ( s(O1,O2,O3,O4,D1,L,D3,T1,L)
    | ~ s(O1,O2,O3,O4,D1,truck2,D3,T1,L) ) ).

cnf(board9,axiom,
    ( ~ s(O1,O2,O3,O4,D1,D2,L,L,T2)
    | ~ neq(D1,truck1)
    | ~ neq(D2,truck1)
    | s(O1,O2,O3,O4,D1,D2,truck1,L,T2) ) ).

cnf(board10,axiom,
    ( s(O1,O2,O3,O4,D1,D2,L,L,T2)
    | ~ s(O1,O2,O3,O4,D1,D2,truck1,L,T2) ) ).

cnf(board11,axiom,
    ( ~ s(O1,O2,O3,O4,D1,D2,L,T1,L)
    | ~ neq(D1,truck2)
    | ~ neq(D2,truck2)
    | s(O1,O2,O3,O4,D1,D2,truck2,T1,L) ) ).

cnf(board12,axiom,
    ( s(O1,O2,O3,O4,D1,D2,L,T1,L)
    | ~ s(O1,O2,O3,O4,D1,D2,truck2,T1,L) ) ).

cnf(drive1,axiom,
    ( ~ s(O1,O2,O3,O4,truck1,D2,D3,S,T2)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,truck1,D2,D3,D,T2) ) ).

cnf(drive2,axiom,
    ( ~ s(O1,O2,O3,O4,truck2,D2,D3,T1,S)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,truck2,D2,D3,T1,D) ) ).

cnf(drive3,axiom,
    ( ~ s(O1,O2,O3,O4,D1,truck1,D3,S,T2)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,D1,truck1,D3,D,T2) ) ).

cnf(drive4,axiom,
    ( ~ s(O1,O2,O3,O4,D1,truck2,D3,T1,S)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,D1,truck2,D3,T1,D) ) ).

cnf(drive5,axiom,
    ( ~ s(O1,O2,O3,O4,D1,D2,truck1,S,T2)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,D1,D2,truck1,D,T2) ) ).

cnf(drive6,axiom,
    ( ~ s(O1,O2,O3,O4,D1,D2,truck2,T1,S)
    | ~ link(S,D)
    | s(O1,O2,O3,O4,D1,D2,truck2,T1,D) ) ).

cnf(walk1,axiom,
    ( ~ s(O1,O2,O3,O4,S,D2,D3,T1,T2)
    | ~ path(S,D)
    | s(O1,O2,O3,O4,D,D2,D3,T1,T2) ) ).

cnf(walk2,axiom,
    ( ~ s(O1,O2,O3,O4,D1,S,D3,T1,T2)
    | ~ path(S,D)
    | s(O1,O2,O3,O4,D1,D,D3,T1,T2) ) ).

cnf(walk3,axiom,
    ( ~ s(O1,O2,O3,O4,D1,D2,S,T1,T2)
    | ~ path(S,D)
    | s(O1,O2,O3,O4,D1,D2,D,T1,T2) ) ).

cnf(neq1,axiom,
    ~ neq(truck1,truck1) ).

cnf(neq2,axiom,
    neq(truck1,truck2) ).

cnf(neq3,axiom,
    neq(truck1,s0) ).

cnf(neq4,axiom,
    neq(truck1,s1) ).

cnf(neq5,axiom,
    neq(truck1,s2) ).

cnf(neq6,axiom,
    neq(truck1,p0_1) ).

cnf(neq7,axiom,
    neq(truck1,p1_2) ).

cnf(neq8,axiom,
    neq(truck1,p2_0) ).

cnf(neq9,axiom,
    neq(truck1,p2_1) ).

cnf(neq10,axiom,
    neq(truck2,truck1) ).

cnf(neq11,axiom,
    ~ neq(truck2,truck2) ).

cnf(neq12,axiom,
    neq(truck2,s0) ).

cnf(neq13,axiom,
    neq(truck2,s1) ).

cnf(neq14,axiom,
    neq(truck2,s2) ).

cnf(neq15,axiom,
    neq(truck2,p0_1) ).

cnf(neq16,axiom,
    neq(truck2,p1_2) ).

cnf(neq17,axiom,
    neq(truck2,p2_0) ).

cnf(neq18,axiom,
    neq(truck2,p2_1) ).

cnf(neq19,axiom,
    neq(s0,truck1) ).

cnf(neq20,axiom,
    neq(s0,truck2) ).

cnf(neq21,axiom,
    ~ neq(s0,s0) ).

cnf(neq22,axiom,
    neq(s0,s1) ).

cnf(neq23,axiom,
    neq(s0,s2) ).

cnf(neq24,axiom,
    neq(s0,p0_1) ).

cnf(neq25,axiom,
    neq(s0,p1_2) ).

cnf(neq26,axiom,
    neq(s0,p2_0) ).

cnf(neq27,axiom,
    neq(s0,p2_1) ).

cnf(neq28,axiom,
    neq(s1,truck1) ).

cnf(neq29,axiom,
    neq(s1,truck2) ).

cnf(neq30,axiom,
    neq(s1,s0) ).

cnf(neq31,axiom,
    ~ neq(s1,s1) ).

cnf(neq32,axiom,
    neq(s1,s2) ).

cnf(neq33,axiom,
    neq(s1,p0_1) ).

cnf(neq34,axiom,
    neq(s1,p1_2) ).

cnf(neq35,axiom,
    neq(s1,p2_0) ).

cnf(neq36,axiom,
    neq(s1,p2_1) ).

cnf(neq37,axiom,
    neq(s2,truck1) ).

cnf(neq38,axiom,
    neq(s2,truck2) ).

cnf(neq39,axiom,
    neq(s2,s0) ).

cnf(neq40,axiom,
    neq(s2,s1) ).

cnf(neq41,axiom,
    ~ neq(s2,s2) ).

cnf(neq42,axiom,
    neq(s2,p0_1) ).

cnf(neq43,axiom,
    neq(s2,p1_2) ).

cnf(neq44,axiom,
    neq(s2,p2_0) ).

cnf(neq45,axiom,
    neq(s2,p2_1) ).

cnf(neq46,axiom,
    neq(p0_1,truck1) ).

cnf(neq47,axiom,
    neq(p0_1,truck2) ).

cnf(neq48,axiom,
    neq(p0_1,s0) ).

cnf(neq49,axiom,
    neq(p0_1,s1) ).

cnf(neq50,axiom,
    neq(p0_1,s2) ).

cnf(neq51,axiom,
    ~ neq(p0_1,p0_1) ).

cnf(neq52,axiom,
    neq(p0_1,p1_2) ).

cnf(neq53,axiom,
    neq(p0_1,p2_0) ).

cnf(neq54,axiom,
    neq(p0_1,p2_1) ).

cnf(neq55,axiom,
    neq(p1_2,truck1) ).

cnf(neq56,axiom,
    neq(p1_2,truck2) ).

cnf(neq57,axiom,
    neq(p1_2,s0) ).

cnf(neq58,axiom,
    neq(p1_2,s1) ).

cnf(neq59,axiom,
    neq(p1_2,s2) ).

cnf(neq60,axiom,
    neq(p1_2,p0_1) ).

cnf(neq61,axiom,
    ~ neq(p1_2,p1_2) ).

cnf(neq62,axiom,
    neq(p1_2,p2_0) ).

cnf(neq63,axiom,
    neq(p1_2,p2_1) ).

cnf(neq64,axiom,
    neq(p2_0,truck1) ).

cnf(neq65,axiom,
    neq(p2_0,truck2) ).

cnf(neq66,axiom,
    neq(p2_0,s0) ).

cnf(neq67,axiom,
    neq(p2_0,s1) ).

cnf(neq68,axiom,
    neq(p2_0,s2) ).

cnf(neq69,axiom,
    neq(p2_0,p0_1) ).

cnf(neq70,axiom,
    neq(p2_0,p1_2) ).

cnf(neq71,axiom,
    ~ neq(p2_0,p2_0) ).

cnf(neq72,axiom,
    neq(p2_0,p2_1) ).

cnf(neq73,axiom,
    neq(p2_1,truck1) ).

cnf(neq74,axiom,
    neq(p2_1,truck2) ).

cnf(neq75,axiom,
    neq(p2_1,s0) ).

cnf(neq76,axiom,
    neq(p2_1,s1) ).

cnf(neq77,axiom,
    neq(p2_1,s2) ).

cnf(neq78,axiom,
    neq(p2_1,p0_1) ).

cnf(neq79,axiom,
    neq(p2_1,p1_2) ).

cnf(neq80,axiom,
    neq(p2_1,p2_0) ).

cnf(neq81,axiom,
    ~ neq(p2_1,p2_1) ).

cnf(map1,axiom,
    path(s0,p0_1) ).

cnf(map2,axiom,
    path(p0_1,s0) ).

cnf(map3,axiom,
    path(s1,p0_1) ).

cnf(map4,axiom,
    path(p0_1,s1) ).

cnf(map5,axiom,
    path(s1,p1_2) ).

cnf(map6,axiom,
    path(p1_2,s1) ).

cnf(map7,axiom,
    path(s2,p1_2) ).

cnf(map8,axiom,
    path(p1_2,s2) ).

cnf(map9,axiom,
    path(s2,p2_0) ).

cnf(map10,axiom,
    path(p2_0,s2) ).

cnf(map11,axiom,
    path(s0,p2_0) ).

cnf(map12,axiom,
    path(p2_0,s0) ).

cnf(map13,axiom,
    link(s0,s2) ).

cnf(map14,axiom,
    link(s2,s0) ).

cnf(map15,axiom,
    link(s1,s0) ).

cnf(map16,axiom,
    link(s0,s1) ).

cnf(map17,axiom,
    link(s2,s1) ).

cnf(map18,axiom,
    link(s1,s2) ).

cnf(init,axiom,
    s(s1,s0,s2,s0,s1,s2,s2,s0,s1) ).

cnf(goal,negated_conjecture,
    ~ s(s0,s0,s1,s2,s2,X6,X7,s0,s1) ).

%------------------------------------------------------------------------------
