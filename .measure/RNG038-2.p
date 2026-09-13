%--------------------------------------------------------------------------
% File     : RNG038-2 : TPTP v9.3.1. Released v1.0.0.
% Domain   : Ring Theory
% Problem  : Ring property 1
% Version  : [Wos65] axioms : Reduced > Incomplete.
% English  :

% Refs     : [Wos65] Wos (1965), Unpublished Note
%          : [WM76]  Wilson & Minker (1976), Resolution, Refinements, and S
% Source   : [SPRFN]
% Names    : Problem 27 [Wos65]
%          : wos27 [WM76]

% Status   : Unsatisfiable
% Rating   : 0.00 v9.3.0, 0.06 v9.1.0, 0.07 v9.0.0, 0.00 v7.4.0, 0.17 v7.3.0, 0.00 v5.4.0, 0.06 v5.3.0, 0.10 v5.2.0, 0.00 v2.6.0, 0.14 v2.5.0, 0.00 v2.4.0, 0.00 v2.3.0, 0.14 v2.2.1, 0.11 v2.1.0, 0.00 v2.0.0
% Syntax   : Number of clauses     :   30 (   9 unt;   0 nHn;  21 RR)
%            Number of literals    :   79 (   0 equ;  51 neg)
%            Maximal clause size   :    5 (   2 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    3 (   3 usr;   0 prp; 2-3 aty)
%            Number of functors    :    7 (   7 usr;   3 con; 0-2 aty)
%            Number of variables   :  105 (   2 sgn)
% SPC      : CNF_UNS_RFO_NEQ_HRN

% Comments :
%--------------------------------------------------------------------------
%----Don't Include ring theory axioms
%include('Axioms/RNG001-0.ax').
%--------------------------------------------------------------------------
%----Equality axioms for additive operator
cnf(additive_inverse_substitution,axiom,
    ( ~ equalish(X,Y)
    | equalish(additive_inverse(X),additive_inverse(Y)) ) ).

cnf(add_substitution1,axiom,
    ( ~ equalish(X,Y)
    | equalish(add(X,W),add(Y,W)) ) ).

%----This axiom omited in this version
%input_clause(add_substitution2,axiom,
%    [--equalish(X,Y),
%     ++equalish(add(W,X),add(W,Y))]).

cnf(sum_substitution1,axiom,
    ( ~ equalish(X,Y)
    | ~ sum(X,W,Z)
    | sum(Y,W,Z) ) ).

cnf(sum_substitution2,axiom,
    ( ~ equalish(X,Y)
    | ~ sum(W,X,Z)
    | sum(W,Y,Z) ) ).

cnf(sum_substitution3,axiom,
    ( ~ equalish(X,Y)
    | ~ sum(W,Z,X)
    | sum(W,Z,Y) ) ).

%----Equality axioms for multiplicative operator
cnf(multiply_substitution1,axiom,
    ( ~ equalish(X,Y)
    | equalish(multiply(X,W),multiply(Y,W)) ) ).

%----This axiom omited in this version
%input_clause(multiply_substitution2,axiom,
%    [--equalish(X,Y),
%     ++equalish(multiply(W,X),multiply(W,Y))]).

cnf(product_substitution1,axiom,
    ( ~ equalish(X,Y)
    | ~ product(X,W,Z)
    | product(Y,W,Z) ) ).

cnf(product_substitution2,axiom,
    ( ~ equalish(X,Y)
    | ~ product(W,X,Z)
    | product(W,Y,Z) ) ).

cnf(product_substitution3,axiom,
    ( ~ equalish(X,Y)
    | ~ product(W,Z,X)
    | product(W,Z,Y) ) ).

%----Not used in this version
%input_clause(additive_identity1,axiom,
%    [++sum(additive_identity,X,X)]).

cnf(additive_identity2,axiom,
    sum(X,additive_identity,X) ).

cnf(closure_of_multiplication,axiom,
    product(X,Y,multiply(X,Y)) ).

cnf(closure_of_addition,axiom,
    sum(X,Y,add(X,Y)) ).

%----Not used in this version
%input_clause(additive_inverse1,axiom,
%    [++sum(additive_inverse(X),X,additive_identity)]).

cnf(additive_inverse2,axiom,
    sum(X,additive_inverse(X),additive_identity) ).

cnf(associativity_of_addition1,axiom,
    ( ~ sum(X,Y,U)
    | ~ sum(Y,Z,V)
    | ~ sum(U,Z,W)
    | sum(X,V,W) ) ).

cnf(associativity_of_addition2,axiom,
    ( ~ sum(X,Y,U)
    | ~ sum(Y,Z,V)
    | ~ sum(X,V,W)
    | sum(U,Z,W) ) ).

cnf(commutativity_of_addition,axiom,
    ( ~ sum(X,Y,Z)
    | sum(Y,X,Z) ) ).

cnf(associativity_of_multiplication1,axiom,
    ( ~ product(X,Y,U)
    | ~ product(Y,Z,V)
    | ~ product(U,Z,W)
    | product(X,V,W) ) ).

cnf(associativity_of_multiplication2,axiom,
    ( ~ product(X,Y,U)
    | ~ product(Y,Z,V)
    | ~ product(X,V,W)
    | product(U,Z,W) ) ).

cnf(distributivity1,axiom,
    ( ~ product(X,Y,V1)
    | ~ product(X,Z,V2)
    | ~ sum(Y,Z,V3)
    | ~ product(X,V3,V4)
    | sum(V1,V2,V4) ) ).

cnf(distributivity2,axiom,
    ( ~ product(X,Y,V1)
    | ~ product(X,Z,V2)
    | ~ sum(Y,Z,V3)
    | ~ sum(V1,V2,V4)
    | product(X,V3,V4) ) ).

cnf(distributivity3,axiom,
    ( ~ product(Y,X,V1)
    | ~ product(Z,X,V2)
    | ~ sum(Y,Z,V3)
    | ~ product(V3,X,V4)
    | sum(V1,V2,V4) ) ).

cnf(distributivity4,axiom,
    ( ~ product(Y,X,V1)
    | ~ product(Z,X,V2)
    | ~ sum(Y,Z,V3)
    | ~ sum(V1,V2,V4)
    | product(V3,X,V4) ) ).

%-----Equality axioms for operators
cnf(addition_is_well_defined,axiom,
    ( ~ sum(X,Y,U)
    | ~ sum(X,Y,V)
    | equalish(U,V) ) ).

cnf(multiplication_is_well_defined,axiom,
    ( ~ product(X,Y,U)
    | ~ product(X,Y,V)
    | equalish(U,V) ) ).

cnf(multiplicative_identity1,axiom,
    product(additive_identity,X,additive_identity) ).

cnf(multiplicative_identity2,axiom,
    product(X,additive_identity,additive_identity) ).

cnf(some_property,hypothesis,
    ( ~ equalish(X,additive_identity)
    | product(X,h(X,Y),Y) ) ).

cnf(a_times_b,hypothesis,
    product(a,b,additive_identity) ).

%----Proving either a or b is the additive_identity. Either clause will
%----do.
cnf(a_not_additive_identity,negated_conjecture,
    ~ equalish(a,additive_identity) ).

cnf(prove_b_is_additive_identity,negated_conjecture,
    ~ equalish(b,additive_identity) ).

%--------------------------------------------------------------------------
