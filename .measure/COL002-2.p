%--------------------------------------------------------------------------
% File     : COL002-2 : TPTP v9.3.1. Released v1.0.0.
% Domain   : Combinatory Logic
% Problem  : Weak fixed point for S, B, C, and I
% Version  : [WM88] (equality) axioms : Augmented > Especial.
%            Theorem formulation : The fixed point is provided and checked.
% English  : The weak fixed point property holds for the set P consisting
%            of the combinators S, B, C, and I, where ((Sx)y)z = (xz)(yz),
%            ((Bx)y)z = x(yz), ((Cx)y)z = (xz)y, and Ix = x.

% Refs     : [WM88]  Wos & McCune (1988), Challenge Problems Focusing on Eq
% Source   : [TPTP]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.00 v9.3.0, 0.17 v9.1.0, 0.08 v9.0.0, 0.06 v8.2.0, 0.08 v8.1.0, 0.00 v7.5.0, 0.10 v7.4.0, 0.00 v7.0.0, 0.14 v6.3.0, 0.17 v6.2.0, 0.00 v6.0.0, 0.33 v5.5.0, 0.56 v5.4.0, 0.53 v5.3.0, 0.58 v5.2.0, 0.38 v5.1.0, 0.14 v4.1.0, 0.22 v4.0.1, 0.00 v3.4.0, 0.17 v3.3.0, 0.29 v3.2.0, 0.00 v3.1.0, 0.11 v2.7.0, 0.00 v2.5.0, 0.20 v2.4.0, 0.17 v2.3.0, 0.00 v2.2.1, 0.22 v2.2.0, 0.29 v2.1.0, 0.00 v2.0.0
% Syntax   : Number of clauses     :    6 (   5 unt;   0 nHn;   2 RR)
%            Number of literals    :    7 (   5 equ;   2 neg)
%            Maximal clause size   :    2 (   1 avg)
%            Maximal term depth    :    5 (   2 avg)
%            Number of predicates  :    2 (   1 usr;   0 prp; 1-2 aty)
%            Number of functors    :    6 (   6 usr;   5 con; 0-2 aty)
%            Number of variables   :   12 (   0 sgn)
% SPC      : CNF_UNS_RFO_SEQ_HRN

% Comments : This is the one found in proofs 1 and 2 of C1.1 in [WM88].
%--------------------------------------------------------------------------
cnf(s_definition,axiom,
    apply(apply(apply(s,X),Y),Z) = apply(apply(X,Z),apply(Y,Z)) ).

cnf(b_definition,axiom,
    apply(apply(apply(b,X),Y),Z) = apply(X,apply(Y,Z)) ).

cnf(c_definition,axiom,
    apply(apply(apply(c,X),Y),Z) = apply(apply(X,Z),Y) ).

cnf(i_definition,axiom,
    apply(i,X) = X ).

cnf(weak_fixed_point,axiom,
    ( Weak_sage != apply(fixed_pt,Weak_sage)
    | fixed_point(Weak_sage) ) ).

cnf(prove_weak_fixed_point,negated_conjecture,
    ~ fixed_point(apply(apply(apply(s,apply(b,X)),i),apply(apply(s,apply(b,X)),i))) ).

%--------------------------------------------------------------------------
