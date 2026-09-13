%--------------------------------------------------------------------------
% File     : COL088-1 : TPTP v9.3.1. Released v2.7.0.
% Domain   : Combinatory Logic
% Problem  : ap_reduce1_2c1
% Version  : Reduced > Especial.
% English  : [| p ---> q;  r \<in> comb |] ==> p#r ---> q#r

% Refs     : [Men03] Meng (2003), Email to G. Sutcliffe
% Source   : [Men03]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.25 v9.3.0, 0.23 v9.1.0, 0.25 v8.2.0, 0.29 v8.1.0, 0.21 v7.5.0, 0.26 v7.4.0, 0.24 v7.3.0, 0.17 v7.1.0, 0.08 v7.0.0, 0.27 v6.3.0, 0.18 v6.2.0, 0.30 v6.1.0, 0.21 v6.0.0, 0.40 v5.5.0, 0.60 v5.3.0, 0.67 v5.2.0, 0.56 v5.1.0, 0.59 v5.0.0, 0.50 v4.1.0, 0.54 v4.0.1, 0.45 v4.0.0, 0.36 v3.7.0, 0.20 v3.5.0, 0.27 v3.4.0, 0.42 v3.3.0, 0.50 v3.2.0, 0.54 v3.1.0, 0.36 v2.7.0
% Syntax   : Number of clauses     :   44 (  14 unt;   1 nHn;  43 RR)
%            Number of literals    :   93 (  15 equ;  52 neg)
%            Maximal clause size   :    5 (   2 avg)
%            Maximal term depth    :    5 (   1 avg)
%            Number of predicates  :    7 (   6 usr;   0 prp; 1-3 aty)
%            Number of functors    :   15 (  15 usr;   8 con; 0-3 aty)
%            Number of variables   :   97 (  25 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments : Problem coming out of an Isabelle proof.
%--------------------------------------------------------------------------
%----axioms from CombZF.thy.
%----free algebra for K, S, comb_app(P,Q).

cnf(k_s,axiom,
    combK != combS ).

cnf(k_app,axiom,
    combK != comb_app(P,Q) ).

cnf(s_app,axiom,
    combS != comb_app(P,Q) ).

cnf(app_app1,axiom,
    ( comb_app(P1,Q1) != comb_app(P2,Q2)
    | P1 = P2 ) ).

cnf(app_app2,axiom,
    ( comb_app(P1,Q1) != comb_app(P2,Q2)
    | Q1 = Q2 ) ).

cnf(app_app3,axiom,
    ( P1 != P2
    | Q1 != Q2
    | comb_app(P1,Q1) = comb_app(P2,Q2) ) ).

%----add in Ap_E.
cnf(ap_E1,axiom,
    ( ~ member(comb_app(P,Q),comb)
    | member(P,comb) ) ).

cnf(ap_E2,axiom,
    ( ~ member(comb_app(P,Q),comb)
    | member(Q,comb) ) ).

%----add in comb.intros(three of them).
cnf(comb_intros1,axiom,
    member(combK,comb) ).

cnf(comb_intros2,axiom,
    member(combS,comb) ).

cnf(comb_intros3,axiom,
    ( ~ member(P,comb)
    | ~ member(Q,comb)
    | member(comb_app(P,Q),comb) ) ).

%----add in reduction_refl [intro!]:
cnf(reduction_refl,axiom,
    ( ~ member(A,comb)
    | member(pair(A,A),rtrancl(contract)) ) ).

%----add in contract.K
cnf(contract_K,axiom,
    ( ~ member(P,comb)
    | ~ member(Q,comb)
    | member(pair(comb_app(comb_app(combK,P),Q),P),contract) ) ).

%----add in contract.S
cnf(contract_S,axiom,
    ( ~ member(P,comb)
    | ~ member(Q,comb)
    | ~ member(R,comb)
    | member(pair(comb_app(comb_app(comb_app(combS,P),Q),R),comb_app(comb_app(P,R),comb_app(Q,R))),contract) ) ).

%----this manually rename the formula Ap_contractE
cnf(ap_contractE1,axiom,
    ( ~ member(pair(comb_app(P,Q),R),contract)
    | ap_contractE_c1(P,Q,R)
    | ap_contractE_c2(P,Q,R)
    | ap_contractE_c3(P,Q,R)
    | ap_contractE_c4(P,Q,R) ) ).

cnf(ap_contractE2,axiom,
    ( ~ ap_contractE_c1(P,Q,R)
    | member(R,comb) ) ).

cnf(ap_contractE3,axiom,
    ( ~ ap_contractE_c1(P,Q,R)
    | member(Q,comb) ) ).

cnf(ap_contractE4,axiom,
    ( ~ ap_contractE_c1(P,Q,R)
    | P = comb_app(combK,R) ) ).

cnf(ap_contractE5,axiom,
    ( ~ ap_contractE_c2(P,Q,R)
    | member(ap_contractE_sk1p(P,Q,R),comb) ) ).

cnf(ap_contractE6,axiom,
    ( ~ ap_contractE_c2(P,Q,R)
    | member(ap_contractE_sk1q(P,Q,R),comb) ) ).

cnf(ap_contractE7,axiom,
    ( ~ ap_contractE_c2(P,Q,R)
    | member(Q,comb) ) ).

cnf(ap_contractE8,axiom,
    ( ~ ap_contractE_c2(P,Q,R)
    | R = comb_app(comb_app(ap_contractE_sk1p(P,Q,R),Q),comb_app(ap_contractE_sk1q(P,Q,R),Q)) ) ).

cnf(ap_contractE9,axiom,
    ( ~ ap_contractE_c2(P,Q,R)
    | P = comb_app(comb_app(combS,ap_contractE_sk1p(P,Q,R)),ap_contractE_sk1q(P,Q,R)) ) ).

cnf(ap_contractE10,axiom,
    ( ~ ap_contractE_c3(P,Q,R)
    | member(pair(P,ap_contractE_sk2q(P,Q,R)),contract) ) ).

cnf(ap_contractE11,axiom,
    ( ~ ap_contractE_c3(P,Q,R)
    | member(Q,comb) ) ).

cnf(ap_contractE12,axiom,
    ( ~ ap_contractE_c3(P,Q,R)
    | R = comb_app(ap_contractE_sk2q(P,Q,R),Q) ) ).

cnf(ap_contractE13,axiom,
    ( ~ ap_contractE_c4(P,Q,R)
    | member(pair(Q,ap_contractE_sk3q(P,Q,R)),contract) ) ).

cnf(ap_contractE14,axiom,
    ( ~ ap_contractE_c4(P,Q,R)
    | member(P,comb) ) ).

cnf(ap_contractE15,axiom,
    ( ~ ap_contractE_c4(P,Q,R)
    | R = comb_app(P,ap_contractE_sk3q(P,Q,R)) ) ).

%----add in K_contractE[elim!]:
cnf(k_contractE,axiom,
    ~ member(pair(combK,R),contract) ).

%----add in S_contractE [elim!]:
%----converted by tptp2X(Ap_contractE+cls_otter.tptp)
cnf(s_contractE,axiom,
    ~ member(pair(combS,R),contract) ).

%----second subgoal
%----local axioms: transD,trans_rtrancl,contract_combD2,reduction_rls
cnf(transD,axiom,
    ( ~ trans(R)
    | ~ member(pair(A,B),R)
    | ~ member(pair(B,C),R)
    | member(pair(A,C),R) ) ).

cnf(trans_rtrancl,axiom,
    trans(rtrancl(R)) ).

cnf(contract_combD2,axiom,
    ( ~ member(pair(A,B),contract)
    | member(B,comb) ) ).

cnf(reduction_rls_1,axiom,
    ( ~ member(B,comb)
    | ~ member(Q3,comb)
    | ~ member(pair(B,C),rtrancl(contract))
    | member(pair(comb_app(comb_app(combK,B),Q3),C),rtrancl(contract)) ) ).

cnf(reduction_rls_2,axiom,
    ( ~ member(P3,comb)
    | ~ member(Q3,comb)
    | ~ member(R3,comb)
    | ~ member(pair(comb_app(comb_app(P3,R3),comb_app(Q3,R3)),C),rtrancl(contract))
    | member(pair(comb_app(comb_app(comb_app(combS,P3),Q3),R3),C),rtrancl(contract)) ) ).

cnf(reduction_rls_3,axiom,
    ( ~ member(pair(P3,Q3),contract)
    | ~ member(R3,comb)
    | ~ member(pair(comb_app(Q3,R3),C),rtrancl(contract))
    | member(pair(comb_app(P3,R3),C),rtrancl(contract)) ) ).

cnf(reduction_rls_4,axiom,
    ( ~ member(pair(P3,Q3),contract)
    | ~ member(R3,comb)
    | ~ member(pair(comb_app(R3,Q3),C),rtrancl(contract))
    | member(pair(comb_app(R3,P3),C),rtrancl(contract)) ) ).

cnf(ap_reduce1_2h1,hypothesis,
    member(r,comb) ).

cnf(ap_reduce1_2h2,hypothesis,
    member(p,comb) ).

cnf(ap_reduce1_2h3,hypothesis,
    member(pair(p,y),rtrancl(contract)) ).

cnf(ap_reduce1_2h4,hypothesis,
    member(pair(y,z),contract) ).

cnf(ap_reduce1_2h5,hypothesis,
    member(pair(comb_app(p,r),comb_app(y,r)),rtrancl(contract)) ).

cnf(ap_reduce1_2c1,negated_conjecture,
    ~ member(pair(comb_app(p,r),comb_app(z,r)),rtrancl(contract)) ).

%--------------------------------------------------------------------------
