%--------------------------------------------------------------------------
% File     : MGT035-1 : TPTP v9.3.1. Released v2.4.0.
% Domain   : Management (Organisation Theory)
% Problem  : EPs outcompete FMs in stable environments
% Version  : [PB+94] axioms : Reduced & Augmented > Complete.
% English  : Efficient producers outcompete first movers past a certain
%            time in stable environments.

% Refs     : [PM93]  Peli & Masuch (1993), The Logic of Propogation Strateg
%          : [PM94]  Peli & Masuch (1994), The Logic of Propogation Strateg
%          : [Kam95] Kamps (1995), Email to G. Sutcliffe
% Source   : [TPTP]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.08 v9.3.0, 0.09 v9.1.0, 0.20 v9.0.0, 0.15 v8.2.0, 0.10 v8.1.0, 0.05 v7.5.0, 0.16 v7.4.0, 0.12 v7.3.0, 0.08 v7.1.0, 0.00 v7.0.0, 0.13 v6.4.0, 0.07 v6.3.0, 0.09 v6.2.0, 0.10 v6.1.0, 0.21 v6.0.0, 0.30 v5.5.0, 0.45 v5.3.0, 0.39 v5.2.0, 0.31 v5.1.0, 0.35 v5.0.0, 0.43 v4.1.0, 0.31 v4.0.1, 0.09 v4.0.0, 0.18 v3.7.0, 0.20 v3.5.0, 0.18 v3.4.0, 0.42 v3.3.0, 0.43 v3.2.0, 0.62 v3.1.0, 0.45 v2.7.0, 0.58 v2.6.0, 0.44 v2.4.0
% Syntax   : Number of clauses     :   25 (   2 unt;  10 nHn;  25 RR)
%            Number of literals    :   98 (  11 equ;  55 neg)
%            Maximal clause size   :    6 (   3 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    8 (   7 usr;   0 prp; 1-4 aty)
%            Number of functors    :    9 (   9 usr;   4 con; 0-2 aty)
%            Number of variables   :   48 (   0 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments : Created with tptp2X -f tptp -t clausify:otter MGT035+1.p
%--------------------------------------------------------------------------
cnf(mp_greater_transitivity_22,axiom,
    ( ~ greater(A,B)
    | ~ greater(B,C)
    | greater(A,C) ) ).

cnf(mp_times_in_environment_23,axiom,
    ( ~ in_environment(A,B)
    | ~ in_environment(A,C)
    | greater(C,B)
    | C = B
    | greater(B,C) ) ).

cnf(mp_greater_or_equal_24,axiom,
    ( ~ greater_or_equal(A,B)
    | greater(A,B)
    | A = B ) ).

cnf(mp_greater_or_equal_25,axiom,
    ( ~ greater(A,B)
    | greater_or_equal(A,B) ) ).

cnf(mp_greater_or_equal_26,axiom,
    ( A != B
    | greater_or_equal(A,B) ) ).

cnf(d2_27,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(B,C,A,D)
    | ~ greater_or_equal(growth_rate(C,D),zero)
    | ~ greater(zero,growth_rate(B,D))
    | outcompetes(C,B,D) ) ).

cnf(d2_28,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(B,C,A,D)
    | ~ outcompetes(C,B,D)
    | greater_or_equal(growth_rate(C,D),zero) ) ).

cnf(d2_29,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(B,C,A,D)
    | ~ outcompetes(C,B,D)
    | greater(zero,growth_rate(B,D)) ) ).

cnf(l6_30,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(first_movers,B) = zero
    | greater(growth_rate(first_movers,B),zero)
    | greater(growth_rate(efficient_producers,B),zero) ) ).

cnf(l6_31,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(first_movers,B) = zero
    | greater(growth_rate(first_movers,B),zero)
    | greater(zero,growth_rate(first_movers,B)) ) ).

cnf(l6_32,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(first_movers,B) = zero
    | greater(zero,growth_rate(efficient_producers,B))
    | greater(growth_rate(efficient_producers,B),zero) ) ).

cnf(l6_33,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(first_movers,B) = zero
    | greater(zero,growth_rate(efficient_producers,B))
    | greater(zero,growth_rate(first_movers,B)) ) ).

cnf(l6_34,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(efficient_producers,B) = zero
    | greater(growth_rate(first_movers,B),zero)
    | greater(growth_rate(efficient_producers,B),zero) ) ).

cnf(l6_35,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(efficient_producers,B) = zero
    | greater(growth_rate(first_movers,B),zero)
    | greater(zero,growth_rate(first_movers,B)) ) ).

cnf(l6_36,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(efficient_producers,B) = zero
    | greater(zero,growth_rate(efficient_producers,B))
    | greater(growth_rate(efficient_producers,B),zero) ) ).

cnf(l6_37,hypothesis,
    ( ~ environment(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,equilibrium(A))
    | growth_rate(efficient_producers,B) = zero
    | greater(zero,growth_rate(efficient_producers,B))
    | greater(zero,growth_rate(first_movers,B)) ) ).

cnf(l1_38,hypothesis,
    ( ~ environment(A)
    | ~ stable(A)
    | in_environment(A,sk1(A)) ) ).

cnf(l1_39,hypothesis,
    ( ~ environment(A)
    | ~ stable(A)
    | ~ subpopulations(first_movers,efficient_producers,A,B)
    | ~ greater_or_equal(B,sk1(A))
    | greater(growth_rate(efficient_producers,B),growth_rate(first_movers,B)) ) ).

cnf(a4_40,hypothesis,
    ( ~ environment(A)
    | ~ stable(A)
    | in_environment(A,sk2(A)) ) ).

cnf(a4_41,hypothesis,
    ( ~ environment(A)
    | ~ stable(A)
    | greater_or_equal(sk2(A),equilibrium(A)) ) ).

cnf(prove_t4_42,negated_conjecture,
    environment(sk3) ).

cnf(prove_t4_43,negated_conjecture,
    stable(sk3) ).

cnf(prove_t4_44,negated_conjecture,
    ( ~ in_environment(sk3,A)
    | subpopulations(first_movers,efficient_producers,sk3,sk4(A)) ) ).

cnf(prove_t4_45,negated_conjecture,
    ( ~ in_environment(sk3,A)
    | greater_or_equal(sk4(A),A) ) ).

cnf(prove_t4_46,negated_conjecture,
    ( ~ in_environment(sk3,A)
    | ~ outcompetes(efficient_producers,first_movers,sk4(A)) ) ).

%--------------------------------------------------------------------------
