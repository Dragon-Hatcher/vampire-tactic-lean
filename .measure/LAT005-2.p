%--------------------------------------------------------------------------
% File     : LAT005-2 : TPTP v9.3.1. Released v1.0.0.
% Domain   : Lattice Theory
% Problem  : SAM's lemma
% Version  : [McCharen, et al., 1986] axioms :
%            Incomplete > Augmented > Incomplete.
% English  : Let L be a modular lattice with 0 and 1.  Suppose that A and
%            B are elements of L such that (A v B) and (A ^ B) both have
%            not necessarily unique complements. Then, (A v B)' =
%            ((A v B)' v ((A ^ B)' ^ B)) ^ ((A v B)' v ((A ^ B)' ^ A)).

% Refs     : [GO+69] Guard et al. (1969), Semi-Automated Mathematics
%          : [MOW76] McCharen et al. (1976), Problems and Experiments for a
%          : [LM92]  Lusk & McCune (1992), Experiments with ROO, a Parallel
% Source   : [OTTER]
% Names    : SAM's lemma [LM92]
%          : sam.in [OTTER]
%          : sam_hyp.in [OTTER]

% Status   : Unsatisfiable
% Rating   : 0.00 v7.0.0, 0.14 v6.4.0, 0.00 v6.1.0, 0.12 v6.0.0, 0.25 v5.5.0, 0.00 v2.5.0, 0.50 v2.4.0, 0.00 v2.2.0, 0.56 v2.1.0, 0.00 v2.0.0
% Syntax   : Number of clauses     :   31 (  21 unt;   0 nHn;  21 RR)
%            Number of literals    :   55 (   0 equ;  25 neg)
%            Maximal clause size   :    5 (   1 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    2 (   2 usr;   0 prp; 3-3 aty)
%            Number of functors    :   12 (  12 usr;  12 con; 0-0 aty)
%            Number of variables   :   58 (   6 sgn)
% SPC      : CNF_UNS_EPR_NEQ_HRN

% Comments : Redundant commuted versions of the axioms for meet and join
%            with 0 and 1, are supplied.
%--------------------------------------------------------------------------
%----Include Lattice theory axioms
% include('Axioms/LAT002-0.ax').
%--------------------------------------------------------------------------
%----Union of 1 and x is equal to 1 :  (1 v X) = 1
cnf(join_1_and_x,axiom,
    join(n1,X,n1) ).

%----Redundant commuted version
cnf(join_x_and_1,axiom,
    join(X,n1,n1) ).

%----Union of x with itself is equal to x :  (X v X) = X
cnf(join_x_and_x,axiom,
    join(X,X,X) ).

%----Union of 0 and x is equal to x :  (0 v X) = X
cnf(join_0_and_x,axiom,
    join(n0,X,X) ).

%----Redundant commuted version
cnf(join_x_and_0,axiom,
    join(X,n0,X) ).

%----Intersection of 0 and x is equal to 0 : (0 ^ X) = 0
cnf(meet_0_and_x,axiom,
    meet(n0,X,n0) ).

%----Redundant commuted version
cnf(meet_x_and_0,axiom,
    meet(X,n0,n0) ).

%----Intersection of x and itself is equal to x : (X ^ X) = X
cnf(meet_x_and_x,axiom,
    meet(X,X,X) ).

%----Intersection of 1 and x is equal to itself : (1 ^ X) = X
cnf(meet_1_and_x,axiom,
    meet(n1,X,X) ).

%----Redundant commuted version
cnf(meet_x_and_1,axiom,
    meet(X,n1,X) ).

%----Intersection of x and y , is the same as meet of y and x.
%----  (X ^ Y) = (Y ^ X),
cnf(commutativity_of_meet,axiom,
    ( ~ meet(X,Y,Z)
    | meet(Y,X,Z) ) ).

%----Union of x and y is the same as join of y and x. (X v Y) = (Y v X),
cnf(commutativity_of_join,axiom,
    ( ~ join(X,Y,Z)
    | join(Y,X,Z) ) ).

%----Union of x with the meet of x and y is the same as x.
%----  X v (X ^ Y) = X
cnf(absorbtion1,axiom,
    ( ~ meet(X,Y,Z)
    | join(X,Z,X) ) ).

%----Intersection  of x with the join of x and y is the same as x.
%----  X ^ (X v Y) = X
cnf(absorbtion2,axiom,
    ( ~ join(X,Y,Z)
    | meet(X,Z,X) ) ).

%----The operation '^', meet ,is associative
%----  X ^ (Y ^ Z) = (X ^ Y) ^ Z
cnf(associativity_of_meet1,axiom,
    ( ~ meet(X,Y,Xy)
    | ~ meet(Y,Z,Yz)
    | ~ meet(X,Yz,Xyz)
    | meet(Xy,Z,Xyz) ) ).

cnf(associativity_of_meet2,axiom,
    ( ~ meet(X,Y,Xy)
    | ~ meet(Y,Z,Yz)
    | ~ meet(Xy,Z,Xyz)
    | meet(X,Yz,Xyz) ) ).

%----The operation 'v' is associative X v (Y v Z) = (X v Y) v Z
cnf(associativity_of_join1,axiom,
    ( ~ join(X,Y,Xy)
    | ~ join(Y,Z,Yz)
    | ~ join(X,Yz,Xyz)
    | join(Xy,Z,Xyz) ) ).

cnf(associativity_of_join2,axiom,
    ( ~ join(X,Y,Xy)
    | ~ join(Y,Z,Yz)
    | ~ join(Xy,Z,Xyz)
    | join(X,Yz,Xyz) ) ).

%----(X ^ Z) = X implies that (Z ^ (X v Y)) =  (X v (Y ^ Z)),
cnf(modularity1,axiom,
    ( ~ meet(X,Z,X)
    | ~ join(X,Y,X1)
    | ~ meet(Y,Z,Y1)
    | ~ meet(Z,X1,Z1)
    | join(X,Y1,Z1) ) ).

cnf(modularity2,axiom,
    ( ~ meet(X,Z,X)
    | ~ join(X,Y,X1)
    | ~ meet(Y,Z,Y1)
    | ~ join(X,Y1,Z1)
    | meet(Z,X1,Z1) ) ).

%----Negation of Sams Lemma :
cnf(meet_a2_and_b2,negated_conjecture,
    ~ meet(a2,b2,r1) ).

cnf(meet_a_and_b,negated_conjecture,
    meet(a,b,c) ).

cnf(join_c_and_r2,negated_conjecture,
    join(c,r2,n1) ).

cnf(meet_c_and_r2,negated_conjecture,
    meet(c,r2,n0) ).

cnf(meet_r2_and_b,negated_conjecture,
    meet(r2,b,e) ).

cnf(join_a_and_b,negated_conjecture,
    join(a,b,c2) ).

cnf(join_c2_and_r1,negated_conjecture,
    join(c2,r1,n1) ).

cnf(meet_c2_and_r1,negated_conjecture,
    meet(c2,r1,n0) ).

cnf(meet_r2_and_a,negated_conjecture,
    meet(r2,a,d) ).

cnf(join_r1_and_e,negated_conjecture,
    join(r1,e,a2) ).

cnf(join_r1_and_d,negated_conjecture,
    join(r1,d,b2) ).

%--------------------------------------------------------------------------
