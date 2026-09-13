%------------------------------------------------------------------------------
% File     : SWV866-1 : TPTP v9.3.1. Released v4.1.0.
% Domain   : Software Verification
% Problem  : Hoare logic with procedures 321_1
% Version  : Especial.
% English  : Completeness is taken relative to completeness of the underlying
%            logic. Two versions of completeness proof: nested single recursion
%            and simultaneous recursion in call rule.

% Refs     : [Nip10] Nipkow (2010), Email to Geoff Sutcliffe
%          : [BN10]  Boehme & Nipkow (2010), Sledgehammer: Judgement Day
% Source   : [Nip10]
% Names    : Hoare-321_1 [Nip10]

% Status   : Unsatisfiable
% Rating   : 0.00 v8.2.0, 0.05 v7.4.0, 0.06 v7.3.0, 0.00 v5.5.0, 0.05 v5.4.0, 0.10 v5.3.0, 0.06 v5.2.0, 0.00 v5.1.0, 0.06 v5.0.0, 0.07 v4.1.0
% Syntax   : Number of clauses     :   26 (   7 unt;   1 nHn;  22 RR)
%            Number of literals    :   48 (  14 equ;  27 neg)
%            Maximal clause size   :    3 (   1 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    4 (   3 usr;   1 prp; 0-4 aty)
%            Number of functors    :   14 (  14 usr;   8 con; 0-5 aty)
%            Number of variables   :   72 (  16 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments :
%------------------------------------------------------------------------------
cnf(cls_evaln__elim__cases_I1_J_0,axiom,
    ( V_t = V_s
    | ~ c_Natural_Oevaln(c_Com_Ocom_OSKIP,V_s,V_n,V_t) ) ).

cnf(cls_evalc__elim__cases_I4_J_1,axiom,
    ( c_Natural_Oevalc(V_c2,c_Natural_Osko__Natural__Xevalc__elim__cases__4__1(V_c1,V_c2,V_s,V_t),V_t)
    | ~ c_Natural_Oevalc(c_Com_Ocom_OSemi(V_c1,V_c2),V_s,V_t) ) ).

cnf(cls_evalc__elim__cases_I4_J_0,axiom,
    ( c_Natural_Oevalc(V_c1,V_s,c_Natural_Osko__Natural__Xevalc__elim__cases__4__1(V_c1,V_c2,V_s,V_t))
    | ~ c_Natural_Oevalc(c_Com_Ocom_OSemi(V_c1,V_c2),V_s,V_t) ) ).

cnf(cls_evaln_OSemi_0,axiom,
    ( c_Natural_Oevaln(c_Com_Ocom_OSemi(V_c0,V_c1),V_s0,V_n,V_s2)
    | ~ c_Natural_Oevaln(V_c1,V_s1,V_n,V_s2)
    | ~ c_Natural_Oevaln(V_c0,V_s0,V_n,V_s1) ) ).

cnf(cls_eval__eq_0,axiom,
    ( c_Natural_Oevaln(V_c,V_s,c_Natural_Osko__Natural__Xeval__eq__1__1(V_c,V_s,V_t),V_t)
    | ~ c_Natural_Oevalc(V_c,V_s,V_t) ) ).

cnf(cls_com_Osimps_I3_J_1,axiom,
    ( c_Com_Ocom_OSemi(V_com1,V_com2) != c_Com_Ocom_OSemi(V_com1_H,V_com2_H)
    | V_com2 = V_com2_H ) ).

cnf(cls_com_Osimps_I3_J_0,axiom,
    ( c_Com_Ocom_OSemi(V_com1,V_com2) != c_Com_Ocom_OSemi(V_com1_H,V_com2_H)
    | V_com1 = V_com1_H ) ).

cnf(cls_evaln__elim__cases_I4_J_1,axiom,
    ( c_Natural_Oevaln(V_c2,c_Natural_Osko__Natural__Xevaln__elim__cases__4__1(V_c1,V_c2,V_n,V_s,V_t),V_n,V_t)
    | ~ c_Natural_Oevaln(c_Com_Ocom_OSemi(V_c1,V_c2),V_s,V_n,V_t) ) ).

cnf(cls_evaln__elim__cases_I4_J_0,axiom,
    ( c_Natural_Oevaln(V_c1,V_s,V_n,c_Natural_Osko__Natural__Xevaln__elim__cases__4__1(V_c1,V_c2,V_n,V_s,V_t))
    | ~ c_Natural_Oevaln(c_Com_Ocom_OSemi(V_c1,V_c2),V_s,V_n,V_t) ) ).

cnf(cls_evaln_OSkip_0,axiom,
    c_Natural_Oevaln(c_Com_Ocom_OSKIP,V_s,V_n,V_s) ).

cnf(cls_com_Osimps_I13_J_0,axiom,
    c_Com_Ocom_OSemi(V_com1_H,V_com2_H) != c_Com_Ocom_OSKIP ).

cnf(cls_evalc__evaln_0,axiom,
    ( c_Natural_Oevaln(V_c,V_s,c_Natural_Osko__Natural__Xevalc__evaln__1__1(V_c,V_s,V_t),V_t)
    | ~ c_Natural_Oevalc(V_c,V_s,V_t) ) ).

cnf(cls_com_Osimps_I12_J_0,axiom,
    c_Com_Ocom_OSKIP != c_Com_Ocom_OSemi(V_com1_H,V_com2_H) ).

cnf(cls_com__det_0,axiom,
    ( V_u = V_t
    | ~ c_Natural_Oevalc(V_c,V_s,V_u)
    | ~ c_Natural_Oevalc(V_c,V_s,V_t) ) ).

cnf(cls_evalc_OSkip_0,axiom,
    c_Natural_Oevalc(c_Com_Ocom_OSKIP,V_s,V_s) ).

cnf(cls_state__not__singleton__def__raw_0,axiom,
    ( v_sko__Hoare__Mirabelle__Xstate__not__singleton__def__raw__1 != v_sko__Hoare__Mirabelle__Xstate__not__singleton__def__raw__2
    | ~ c_Hoare__Mirabelle_Ostate__not__singleton ) ).

cnf(cls_state__not__singleton__def_1,axiom,
    ( c_Hoare__Mirabelle_Ostate__not__singleton
    | V_x = V_xa ) ).

cnf(cls_single__stateE_0,axiom,
    ( v_sko__Hoare__Mirabelle__Xsingle__stateE__1(V_t) != V_t
    | ~ c_Hoare__Mirabelle_Ostate__not__singleton ) ).

cnf(cls_evalc_OSemi_0,axiom,
    ( c_Natural_Oevalc(c_Com_Ocom_OSemi(V_c0,V_c1),V_s0,V_s2)
    | ~ c_Natural_Oevalc(V_c1,V_s1,V_s2)
    | ~ c_Natural_Oevalc(V_c0,V_s0,V_s1) ) ).

cnf(cls_state__not__singleton__def_0,axiom,
    ( v_sko__Hoare__Mirabelle__Xstate__not__singleton__def__1 != v_sko__Hoare__Mirabelle__Xstate__not__singleton__def__2
    | ~ c_Hoare__Mirabelle_Ostate__not__singleton ) ).

cnf(cls_evalc__elim__cases_I1_J_0,axiom,
    ( V_t = V_s
    | ~ c_Natural_Oevalc(c_Com_Ocom_OSKIP,V_s,V_t) ) ).

cnf(cls_evaln__evalc_0,axiom,
    ( c_Natural_Oevalc(V_c,V_s,V_t)
    | ~ c_Natural_Oevaln(V_c,V_s,V_n,V_t) ) ).

cnf(cls_eval__eq_1,axiom,
    ( c_Natural_Oevalc(V_c,V_s,V_t)
    | ~ c_Natural_Oevaln(V_c,V_s,V_x,V_t) ) ).

cnf(cls_conjecture_0,negated_conjecture,
    c_Hoare__Mirabelle_Ostate__not__singleton ).

cnf(cls_conjecture_1,negated_conjecture,
    V_Z_H = v_s_H ).

cnf(cls_conjecture_2,negated_conjecture,
    ~ c_Natural_Oevalc(v_c,v_Z,V_x) ).

%------------------------------------------------------------------------------
