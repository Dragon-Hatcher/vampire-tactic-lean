%------------------------------------------------------------------------------
% File     : SEU166+3 : TPTP v9.3.1. Released v3.2.0.
% Domain   : Set theory
% Problem  : Basic properties of sets, theorem 118
% Version  : [Urb06] axioms : Especial.
% English  :

% Refs     : [Byl90] Bylinski (1990), Some Basic Properties of Sets
%          : [Urb06] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb06]
% Names    : zfmisc_1__t118_zfmisc_1 [Urb06]

% Status   : Theorem
% Rating   : 0.48 v9.3.0, 0.52 v9.1.0, 0.55 v9.0.0, 0.53 v8.2.0, 0.56 v8.1.0, 0.58 v7.5.0, 0.59 v7.4.0, 0.50 v7.3.0, 0.45 v7.1.0, 0.48 v7.0.0, 0.47 v6.4.0, 0.58 v6.3.0, 0.50 v6.2.0, 0.52 v6.1.0, 0.63 v6.0.0, 0.70 v5.5.0, 0.59 v5.4.0, 0.68 v5.3.0, 0.63 v5.2.0, 0.55 v5.1.0, 0.57 v5.0.0, 0.67 v4.1.0, 0.61 v4.0.1, 0.65 v4.0.0, 0.71 v3.7.0, 0.65 v3.5.0, 0.74 v3.4.0, 0.84 v3.3.0, 0.64 v3.2.0
% Syntax   : Number of formulae    :   10 (   6 unt;   0 def)
%            Number of atoms       :   19 (   4 equ)
%            Maximal formula atoms :    5 (   1 avg)
%            Number of connectives :   12 (   3   ~;   0   |;   3   &)
%                                         (   3 <=>;   3  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   11 (   5 avg)
%            Maximal term depth    :    3 (   1 avg)
%            Number of predicates  :    4 (   3 usr;   0 prp; 1-2 aty)
%            Number of functors    :    4 (   4 usr;   0 con; 1-2 aty)
%            Number of variables   :   24 (  20   !;   4   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Translated by MPTP 0.2 from the original problem in the Mizar
%            library, www.mizar.org
%------------------------------------------------------------------------------
fof(antisymmetry_r2_hidden,axiom,
    ! [A,B] :
      ( in(A,B)
     => ~ in(B,A) ) ).

fof(commutativity_k2_tarski,axiom,
    ! [A,B] : unordered_pair(A,B) = unordered_pair(B,A) ).

fof(d2_zfmisc_1,axiom,
    ! [A,B,C] :
      ( C = cartesian_product2(A,B)
    <=> ! [D] :
          ( in(D,C)
        <=> ? [E,F] :
              ( in(E,A)
              & in(F,B)
              & D = ordered_pair(E,F) ) ) ) ).

fof(d3_tarski,axiom,
    ! [A,B] :
      ( subset(A,B)
    <=> ! [C] :
          ( in(C,A)
         => in(C,B) ) ) ).

fof(d5_tarski,axiom,
    ! [A,B] : ordered_pair(A,B) = unordered_pair(unordered_pair(A,B),singleton(A)) ).

fof(fc1_zfmisc_1,axiom,
    ! [A,B] : ~ empty(ordered_pair(A,B)) ).

fof(rc1_xboole_0,axiom,
    ? [A] : empty(A) ).

fof(rc2_xboole_0,axiom,
    ? [A] : ~ empty(A) ).

fof(reflexivity_r1_tarski,axiom,
    ! [A,B] : subset(A,A) ).

fof(t118_zfmisc_1,conjecture,
    ! [A,B,C] :
      ( subset(A,B)
     => ( subset(cartesian_product2(A,C),cartesian_product2(B,C))
        & subset(cartesian_product2(C,A),cartesian_product2(C,B)) ) ) ).

%------------------------------------------------------------------------------
