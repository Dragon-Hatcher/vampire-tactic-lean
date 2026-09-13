%------------------------------------------------------------------------------
% File     : LAT269-2 : TPTP v9.3.1. Released v3.2.0.
% Domain   : Analysis
% Problem  : Problem about Tarski's fixed point theorem
% Version  : [Pau06] axioms : Reduced > Especial.
% English  :

% Refs     : [Pau06] Paulson (2006), Email to G. Sutcliffe
% Source   : [Pau06]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.17 v9.3.0, 0.14 v9.1.0, 0.05 v9.0.0, 0.10 v8.1.0, 0.00 v7.5.0, 0.05 v7.4.0, 0.06 v7.3.0, 0.08 v7.1.0, 0.00 v7.0.0, 0.07 v6.4.0, 0.00 v6.1.0, 0.07 v6.0.0, 0.00 v5.5.0, 0.15 v5.3.0, 0.17 v5.2.0, 0.00 v4.0.0, 0.18 v3.7.0, 0.10 v3.5.0, 0.18 v3.4.0, 0.25 v3.3.0, 0.21 v3.2.0
% Syntax   : Number of clauses     :    6 (   4 unt;   1 nHn;   6 RR)
%            Number of literals    :   10 (   3 equ;   5 neg)
%            Maximal clause size   :    4 (   1 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :    2 (   1 usr;   0 prp; 2-3 aty)
%            Number of functors    :   16 (  16 usr;  10 con; 0-5 aty)
%            Number of variables   :    3 (   0 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments : The problems in the [Pau06] collection each have very many axioms,
%            of which only a small selection are required for the refutation.
%            The mission is to find those few axioms, after which a refutation
%            can be quite easily found. This version has only the necessary
%            axioms.
%------------------------------------------------------------------------------
cnf(cls_conjecture_0,negated_conjecture,
    ~ c_in(c_Tarski_Opotype_Opotype__ext(v_intY1,c_Tarski_Oinduced(v_intY1,v_r,t_a),c_Product__Type_OUnity,t_a,tc_Product__Type_Ounit),c_Tarski_OCompleteLattice,tc_Tarski_Opotype_Opotype__ext__type(t_a,tc_Product__Type_Ounit)) ).

cnf(cls_Tarski_OTop_Acl_A_58_AA_A_61_61_ATrue_0,axiom,
    c_in(c_Tarski_OTop(v_cl,t_a),v_A,t_a) ).

cnf(cls_Tarski_O_91_124_Aa2_A_58_AA_59_Ab2_A_58_AA_59_Ainterval_Ar_Aa2_Ab2_A_126_61_A_123_125_A_124_93_A_61_61_62_A_I_124_Apset_A_61_Ainterval_Ar_Aa2_Ab2_M_Aorder_A_61_Ainduced_A_Iinterval_Ar_Aa2_Ab2_J_Ar_A_124_J_A_58_ACompleteLattice_A_61_61_ATrue_0,axiom,
    ( ~ c_in(V_b,v_A,t_a)
    | ~ c_in(V_a,v_A,t_a)
    | c_in(c_Tarski_Opotype_Opotype__ext(c_Tarski_Ointerval(v_r,V_a,V_b,t_a),c_Tarski_Oinduced(c_Tarski_Ointerval(v_r,V_a,V_b,t_a),v_r,t_a),c_Product__Type_OUnity,t_a,tc_Product__Type_Ounit),c_Tarski_OCompleteLattice,tc_Tarski_Opotype_Opotype__ext__type(t_a,tc_Product__Type_Ounit))
    | c_Tarski_Ointerval(v_r,V_a,V_b,t_a) = c_emptyset ) ).

cnf(cls_Tarski_OintY1_A_61_61_Ainterval_Ar_A_Ilub_AY_Acl_J_A_ITop_Acl_J_0,axiom,
    v_intY1 = c_Tarski_Ointerval(v_r,c_Tarski_Olub(v_Y,v_cl,t_a),c_Tarski_OTop(v_cl,t_a),t_a) ).

cnf(cls_Tarski_Olub_AY_Acl_A_58_AA_A_61_61_ATrue_0,axiom,
    c_in(c_Tarski_Olub(v_Y,v_cl,t_a),v_A,t_a) ).

cnf(cls_Tarski_Ox1_A_58_AA_A_61_61_62_Ainterval_Ar_Ax1_A_ITop_Acl_J_A_61_A_123_125_A_61_61_AFalse_0,axiom,
    ( ~ c_in(V_x,v_A,t_a)
    | c_Tarski_Ointerval(v_r,V_x,c_Tarski_OTop(v_cl,t_a),t_a) != c_emptyset ) ).

%------------------------------------------------------------------------------
