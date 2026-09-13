%--------------------------------------------------------------------------
% File     : MGT014-1 : TPTP v9.3.1. Released v2.4.0.
% Domain   : Management (Organisation Theory)
% Problem  : If orgainzation size increases, its complexity cannot decrease
% Version  : [PB+94] axioms.
% English  : If the size of an organization gets bigger, its complexity
%            cannot get smaller (in lack of reorganization).

% Refs     : [PB+94] Peli et al. (1994), A Logical Approach to Formalizing
%          : [Kam94] Kamps (1994), Email to G. Sutcliffe
%          : [Kam95] Kamps (1995), Email to G. Sutcliffe
% Source   : [TPTP]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.12 v9.1.0, 0.11 v9.0.0, 0.20 v8.2.0, 0.00 v2.6.0, 0.11 v2.5.0, 0.00 v2.4.0
% Syntax   : Number of clauses     :   17 (   9 unt;   1 nHn;  17 RR)
%            Number of literals    :   42 (   4 equ;  27 neg)
%            Maximal clause size   :    7 (   2 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    7 (   6 usr;   0 prp; 1-3 aty)
%            Number of functors    :    7 (   7 usr;   7 con; 0-0 aty)
%            Number of variables   :   26 (   1 sgn)
% SPC      : CNF_UNS_EPR_SEQ_NHN

% Comments : "Not published due to publication constraints." [Kam95].
%          : Created with tptp2X -f tptp -t clausify:otter MGT014+1.p
%--------------------------------------------------------------------------
cnf(mp6_1_18,axiom,
    ( ~ greater(A,B)
    | A != B ) ).

cnf(mp6_2_19,axiom,
    ( ~ greater(A,B)
    | ~ greater(B,A) ) ).

cnf(mp15_20,axiom,
    ( ~ organization(A,B)
    | time(B) ) ).

cnf(mp16_21,axiom,
    ( ~ time(A)
    | ~ time(B)
    | greater(A,B)
    | A = B
    | greater(B,A) ) ).

cnf(mp17_22,axiom,
    ( ~ reorganization_free(A,B,C)
    | reorganization_free(A,C,B) ) ).

cnf(mp19_23,axiom,
    ( ~ organization(A,B)
    | ~ organization(A,C)
    | ~ size(A,D,B)
    | ~ size(A,E,C)
    | B != C
    | D = E ) ).

cnf(t11_FOL_24,hypothesis,
    ( ~ organization(A,B)
    | ~ organization(A,C)
    | ~ reorganization_free(A,B,C)
    | ~ size(A,D,B)
    | ~ size(A,E,C)
    | ~ greater(C,B)
    | ~ greater(D,E) ) ).

cnf(t12_FOL_25,hypothesis,
    ( ~ organization(A,B)
    | ~ organization(A,C)
    | ~ reorganization_free(A,B,C)
    | ~ complexity(A,D,B)
    | ~ complexity(A,E,C)
    | ~ greater(C,B)
    | ~ greater(D,E) ) ).

cnf(t14_FOL_26,negated_conjecture,
    organization(sk1,sk6) ).

cnf(t14_FOL_27,negated_conjecture,
    organization(sk1,sk7) ).

cnf(t14_FOL_28,negated_conjecture,
    reorganization_free(sk1,sk6,sk7) ).

cnf(t14_FOL_29,negated_conjecture,
    complexity(sk1,sk2,sk6) ).

cnf(t14_FOL_30,negated_conjecture,
    complexity(sk1,sk3,sk7) ).

cnf(t14_FOL_31,negated_conjecture,
    size(sk1,sk4,sk6) ).

cnf(t14_FOL_32,negated_conjecture,
    size(sk1,sk5,sk7) ).

cnf(t14_FOL_33,negated_conjecture,
    greater(sk5,sk4) ).

cnf(t14_FOL_34,negated_conjecture,
    greater(sk2,sk3) ).

%--------------------------------------------------------------------------
