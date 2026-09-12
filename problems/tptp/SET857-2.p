%------------------------------------------------------------------------------
% File     : SET857-2 : TPTP v9.3.1. Released v3.2.0.
% Domain   : Set Theory
% Problem  : Problem about Zorn's lemma
% Version  : [Pau06] axioms : Reduced > Especial.
% English  :

% Refs     : [Pau06] Paulson (2006), Email to G. Sutcliffe
% Source   : [Pau06]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.17 v9.3.0, 0.09 v9.1.0, 0.05 v9.0.0, 0.10 v8.1.0, 0.00 v7.5.0, 0.05 v7.4.0, 0.06 v7.3.0, 0.08 v7.1.0, 0.00 v7.0.0, 0.13 v6.3.0, 0.09 v6.2.0, 0.00 v6.1.0, 0.07 v6.0.0, 0.00 v5.5.0, 0.10 v5.4.0, 0.15 v5.3.0, 0.22 v5.2.0, 0.06 v5.0.0, 0.07 v4.1.0, 0.15 v4.0.1, 0.09 v4.0.0, 0.00 v3.4.0, 0.08 v3.3.0, 0.29 v3.2.0
% Syntax   : Number of clauses     :   14 (   6 unt;   6 nHn;  12 RR)
%            Number of literals    :   38 (   2 equ;  18 neg)
%            Maximal clause size   :    5 (   2 avg)
%            Maximal term depth    :    4 (   2 avg)
%            Number of predicates  :    3 (   2 usr;   0 prp; 2-3 aty)
%            Number of functors    :   10 (  10 usr;   5 con; 0-3 aty)
%            Number of variables   :   31 (   1 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments : The problems in the [Pau06] collection each have very many axioms,
%            of which only a small selection are required for the refutation.
%            The mission is to find those few axioms, after which a refutation
%            can be quite easily found. This version has only the necessary
%            axioms.
%------------------------------------------------------------------------------
cnf(cls_Set_OsubsetD_0,axiom,
    ( ~ c_in(V_c,V_A,T_a)
    | ~ c_lessequals(V_A,V_B,tc_set(T_a))
    | c_in(V_c,V_B,T_a) ) ).

cnf(cls_Set_OsubsetI_0,axiom,
    ( c_in(c_Main_OsubsetI__1(V_A,V_B,T_a),V_A,T_a)
    | c_lessequals(V_A,V_B,tc_set(T_a)) ) ).

cnf(cls_Set_OsubsetI_1,axiom,
    ( ~ c_in(c_Main_OsubsetI__1(V_A,V_B,T_a),V_B,T_a)
    | c_lessequals(V_A,V_B,tc_set(T_a)) ) ).

cnf(cls_Zorn_OAbrial__axiom1_0,axiom,
    c_lessequals(V_x,c_Zorn_Osucc(V_S,V_x,T_a),tc_set(tc_set(T_a))) ).

cnf(cls_Zorn_OTFin__linear__lemma1_0,axiom,
    ( ~ c_in(V_m,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | ~ c_in(V_n,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | c_in(c_Zorn_OTFin__linear__lemma1__1(V_S,V_m,T_a),c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | c_lessequals(V_n,V_m,tc_set(tc_set(T_a)))
    | c_lessequals(c_Zorn_Osucc(V_S,V_m,T_a),V_n,tc_set(tc_set(T_a))) ) ).

cnf(cls_Zorn_OTFin__linear__lemma1_1,axiom,
    ( ~ c_in(V_m,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | ~ c_in(V_n,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | c_lessequals(V_n,V_m,tc_set(tc_set(T_a)))
    | c_lessequals(c_Zorn_OTFin__linear__lemma1__1(V_S,V_m,T_a),V_m,tc_set(tc_set(T_a)))
    | c_lessequals(c_Zorn_Osucc(V_S,V_m,T_a),V_n,tc_set(tc_set(T_a))) ) ).

cnf(cls_Zorn_OTFin__linear__lemma1_2,axiom,
    ( ~ c_in(V_m,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | ~ c_in(V_n,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | c_Zorn_OTFin__linear__lemma1__1(V_S,V_m,T_a) != V_m
    | c_lessequals(V_n,V_m,tc_set(tc_set(T_a)))
    | c_lessequals(c_Zorn_Osucc(V_S,V_m,T_a),V_n,tc_set(tc_set(T_a))) ) ).

cnf(cls_Zorn_OTFin__linear__lemma1_3,axiom,
    ( ~ c_in(V_m,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | ~ c_in(V_n,c_Zorn_OTFin(V_S,T_a),tc_set(tc_set(T_a)))
    | ~ c_lessequals(c_Zorn_Osucc(V_S,c_Zorn_OTFin__linear__lemma1__1(V_S,V_m,T_a),T_a),V_m,tc_set(tc_set(T_a)))
    | c_lessequals(V_n,V_m,tc_set(tc_set(T_a)))
    | c_lessequals(c_Zorn_Osucc(V_S,V_m,T_a),V_n,tc_set(tc_set(T_a))) ) ).

cnf(cls_conjecture_0,negated_conjecture,
    c_lessequals(v_Y,c_Zorn_OTFin(v_S,t_a),tc_set(tc_set(tc_set(t_a)))) ).

cnf(cls_conjecture_1,negated_conjecture,
    c_in(v_n,c_Zorn_OTFin(v_S,t_a),tc_set(tc_set(t_a))) ).

cnf(cls_conjecture_3,negated_conjecture,
    c_in(v_x,v_Y,tc_set(tc_set(t_a))) ).

cnf(cls_conjecture_4,negated_conjecture,
    ~ c_lessequals(v_x,v_n,tc_set(tc_set(t_a))) ).

cnf(cls_conjecture_5,negated_conjecture,
    ~ c_lessequals(c_Zorn_Osucc(v_S,v_n,t_a),v_x,tc_set(tc_set(t_a))) ).

cnf(cls_conjecture_6,negated_conjecture,
    ( c_lessequals(c_Zorn_Osucc(v_S,V_V,t_a),V_U,tc_set(tc_set(t_a)))
    | V_V = V_U
    | ~ c_lessequals(V_V,V_U,tc_set(tc_set(t_a)))
    | ~ c_in(V_V,c_Zorn_OTFin(v_S,t_a),tc_set(tc_set(t_a)))
    | ~ c_in(V_U,v_Y,tc_set(tc_set(t_a))) ) ).

%------------------------------------------------------------------------------
