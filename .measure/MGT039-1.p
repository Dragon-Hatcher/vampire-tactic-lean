%--------------------------------------------------------------------------
% File     : MGT039-1 : TPTP v9.3.1. Released v2.4.0.
% Domain   : Management (Organisation Theory)
% Problem  : Selection favours EPs above Fms if change is slow
% Version  : [PB+94] axioms : Reduced & Augmented > Complete.
% English  : Selection favors efficient producers above first movers if
%            environmental change is slow.

% Refs     : [PM93]  Peli & Masuch (1993), The Logic of Propogation Strateg
%          : [PM94]  Peli & Masuch (1994), The Logic of Propogation Strateg
%          : [Kam95] Kamps (1995), Email to G. Sutcliffe
% Source   : [TPTP]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.08 v9.3.0, 0.05 v9.0.0, 0.10 v8.1.0, 0.00 v7.5.0, 0.05 v7.4.0, 0.06 v7.3.0, 0.08 v7.1.0, 0.00 v7.0.0, 0.13 v6.4.0, 0.07 v6.3.0, 0.00 v6.1.0, 0.07 v6.0.0, 0.00 v5.5.0, 0.05 v5.4.0, 0.10 v5.3.0, 0.06 v5.2.0, 0.00 v4.0.1, 0.09 v4.0.0, 0.00 v3.4.0, 0.08 v3.3.0, 0.14 v3.2.0, 0.15 v3.1.0, 0.18 v2.7.0, 0.17 v2.6.0, 0.11 v2.5.0, 0.22 v2.4.0
% Syntax   : Number of clauses     :   19 (   5 unt;   4 nHn;  19 RR)
%            Number of literals    :   57 (   2 equ;  35 neg)
%            Maximal clause size   :    5 (   3 avg)
%            Maximal term depth    :    3 (   1 avg)
%            Number of predicates  :    9 (   8 usr;   0 prp; 1-3 aty)
%            Number of functors    :    8 (   8 usr;   3 con; 0-2 aty)
%            Number of variables   :   25 (   0 sgn)
% SPC      : CNF_UNS_RFO_SEQ_NHN

% Comments : Created with tptp2X -f tptp -t clausify:otter MGT039+1.p
%--------------------------------------------------------------------------
cnf(mp3_favoured_trategy_20,axiom,
    ( ~ observational_period(A)
    | ~ propagation_strategy(first_movers)
    | ~ propagation_strategy(efficient_producers)
    | environment(sk1(A))
    | selection_favors(efficient_producers,first_movers,A) ) ).

cnf(mp3_favoured_trategy_21,axiom,
    ( ~ observational_period(A)
    | ~ propagation_strategy(first_movers)
    | ~ propagation_strategy(efficient_producers)
    | in_environment(A,sk1(A))
    | selection_favors(efficient_producers,first_movers,A) ) ).

cnf(mp3_favoured_trategy_22,axiom,
    ( ~ observational_period(A)
    | ~ propagation_strategy(first_movers)
    | ~ propagation_strategy(efficient_producers)
    | ~ selection_favors(efficient_producers,first_movers,end_time(sk1(A)))
    | selection_favors(efficient_producers,first_movers,A) ) ).

cnf(mp4_critical_point_23,axiom,
    ( ~ observational_period(A)
    | ~ slow_change(A)
    | ~ environment(B)
    | ~ in_environment(A,B)
    | in_environment(B,sk2(B,A)) ) ).

cnf(mp4_critical_point_24,axiom,
    ( ~ observational_period(A)
    | ~ slow_change(A)
    | ~ environment(B)
    | ~ in_environment(A,B)
    | greater(sk2(B,A),critical_point(B)) ) ).

cnf(mp_organizational_sets1_25,axiom,
    propagation_strategy(first_movers) ).

cnf(mp_organizational_sets2_26,axiom,
    propagation_strategy(efficient_producers) ).

cnf(mp_time_in_environment_27,axiom,
    ( ~ environment(A)
    | ~ greater_or_equal(B,start_time(A))
    | ~ greater_or_equal(end_time(A),B)
    | in_environment(A,B) ) ).

cnf(mp_environment_end_point_28,axiom,
    ( ~ environment(A)
    | ~ in_environment(A,B)
    | greater_or_equal(end_time(A),B) ) ).

cnf(mp_time_of_critical_point_29,axiom,
    ( ~ environment(A)
    | greater_or_equal(critical_point(A),start_time(A)) ) ).

cnf(mp_greater_transitivity_30,axiom,
    ( ~ greater(A,B)
    | ~ greater(B,C)
    | greater(A,C) ) ).

cnf(mp_greater_or_equal_31,axiom,
    ( ~ greater_or_equal(A,B)
    | greater(A,B)
    | A = B ) ).

cnf(mp_greater_or_equal_32,axiom,
    ( ~ greater(A,B)
    | greater_or_equal(A,B) ) ).

cnf(mp_greater_or_equal_33,axiom,
    ( A != B
    | greater_or_equal(A,B) ) ).

cnf(mp_beginning_and_ending_34,axiom,
    ( ~ environment(A)
    | ~ greater(B,start_time(A))
    | greater(B,end_time(A))
    | greater_or_equal(end_time(A),B) ) ).

cnf(l8_35,hypothesis,
    ( ~ environment(A)
    | ~ in_environment(A,B)
    | ~ greater(B,critical_point(A))
    | selection_favors(efficient_producers,first_movers,B) ) ).

cnf(prove_t8_36,negated_conjecture,
    observational_period(sk3) ).

cnf(prove_t8_37,negated_conjecture,
    slow_change(sk3) ).

cnf(prove_t8_38,negated_conjecture,
    ~ selection_favors(efficient_producers,first_movers,sk3) ).

%--------------------------------------------------------------------------
