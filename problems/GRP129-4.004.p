%--------------------------------------------------------------------------
% File     : GRP129-4.004 : TPTP v9.3.1. Bugfixed v1.2.1.
% Domain   : Group Theory (Quasigroups)
% Problem  : a.(b.a) = (b.a).a
% Version  : [Sla93] axioms : Augmented.
% English  : Generate the multiplication table for the specified quasi-
%            group with 4 elements.

% Refs     : [FSB93] Fujita et al. (1993), Automatic Generation of Some Res
%          : [Sla93] Slaney (1993), Email to G. Sutcliffe
%          : [SFS95] Slaney et al. (1995), Automated Reasoning and Exhausti
% Source   : [TPTP]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.00 v2.7.0, 0.17 v2.6.0, 0.11 v2.5.0, 0.25 v2.4.0, 0.00 v2.2.1, 1.00 v2.2.0, 0.67 v2.1.0
% Syntax   : Number of clauses     :   25 (  16 unt;   3 nHn;  25 RR)
%            Number of literals    :   52 (   0 equ;  30 neg)
%            Maximal clause size   :    6 (   2 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    3 (   3 usr;   0 prp; 1-3 aty)
%            Number of functors    :    4 (   4 usr;   4 con; 0-0 aty)
%            Number of variables   :   30 (   0 sgn)
% SPC      : CNF_UNS_EPR_NEQ_NHN

% Comments : [SFS93]'s axiomatization has been modified for this.
%          : Substitution axioms are not needed, as any positive equality
%            literals should resolve on negative ones directly.
%          : Version 4 has surjectivity and rotation
%          : tptp2X: -f tptp -s4 GRP129-4.g
% Bugfixes : v1.2.1 - Clauses row_surjectivity and column_surjectivity fixed.
%--------------------------------------------------------------------------
cnf(row_surjectivity,axiom,
    ( ~ group_element(X)
    | ~ group_element(Y)
    | product(e_1,X,Y)
    | product(e_2,X,Y)
    | product(e_3,X,Y)
    | product(e_4,X,Y) ) ).

cnf(column_surjectivity,axiom,
    ( ~ group_element(X)
    | ~ group_element(Y)
    | product(X,e_1,Y)
    | product(X,e_2,Y)
    | product(X,e_3,Y)
    | product(X,e_4,Y) ) ).

cnf(qg3_1,negated_conjecture,
    ( product(Y,X,Z1)
    | ~ product(Z1,Y,Z2)
    | ~ product(X,Z1,Z2) ) ).

cnf(qg3_2,negated_conjecture,
    ( product(X,Z1,Z2)
    | ~ product(Z1,Y,Z2)
    | ~ product(Y,X,Z1) ) ).

cnf(element_1,axiom,
    group_element(e_1) ).

cnf(element_2,axiom,
    group_element(e_2) ).

cnf(element_3,axiom,
    group_element(e_3) ).

cnf(element_4,axiom,
    group_element(e_4) ).

cnf(e_1_is_not_e_2,axiom,
    ~ equalish(e_1,e_2) ).

cnf(e_1_is_not_e_3,axiom,
    ~ equalish(e_1,e_3) ).

cnf(e_1_is_not_e_4,axiom,
    ~ equalish(e_1,e_4) ).

cnf(e_2_is_not_e_1,axiom,
    ~ equalish(e_2,e_1) ).

cnf(e_2_is_not_e_3,axiom,
    ~ equalish(e_2,e_3) ).

cnf(e_2_is_not_e_4,axiom,
    ~ equalish(e_2,e_4) ).

cnf(e_3_is_not_e_1,axiom,
    ~ equalish(e_3,e_1) ).

cnf(e_3_is_not_e_2,axiom,
    ~ equalish(e_3,e_2) ).

cnf(e_3_is_not_e_4,axiom,
    ~ equalish(e_3,e_4) ).

cnf(e_4_is_not_e_1,axiom,
    ~ equalish(e_4,e_1) ).

cnf(e_4_is_not_e_2,axiom,
    ~ equalish(e_4,e_2) ).

cnf(e_4_is_not_e_3,axiom,
    ~ equalish(e_4,e_3) ).

cnf(product_total_function1,axiom,
    ( ~ group_element(X)
    | ~ group_element(Y)
    | product(X,Y,e_1)
    | product(X,Y,e_2)
    | product(X,Y,e_3)
    | product(X,Y,e_4) ) ).

cnf(product_total_function2,axiom,
    ( ~ product(X,Y,W)
    | ~ product(X,Y,Z)
    | equalish(W,Z) ) ).

cnf(product_right_cancellation,axiom,
    ( ~ product(X,W,Y)
    | ~ product(X,Z,Y)
    | equalish(W,Z) ) ).

cnf(product_left_cancellation,axiom,
    ( ~ product(W,Y,X)
    | ~ product(Z,Y,X)
    | equalish(W,Z) ) ).

cnf(qg3,negated_conjecture,
    ( ~ product(Y,X,Z1)
    | ~ product(X,Z1,Z2)
    | product(Z1,Y,Z2) ) ).

%--------------------------------------------------------------------------
