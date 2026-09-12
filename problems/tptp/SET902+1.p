%------------------------------------------------------------------------------
% File     : SET902+1 : TPTP v9.3.1. Released v3.2.0.
% Domain   : Set theory
% Problem  : Basic properties of sets, theorem 43
% Version  : [Urb06] axioms : Especial.
% English  : ~ ( singleton(A) = set_union2(B,C) & ~ ( B = singleton(A) &
%            C = singleton(A) ) & ~ ( B = empty_set & C = singleton(A) ) &
%            ~ ( B = singleton(A) & C = empty_set ) )

% Refs     : [Byl90] Bylinski (1990), Some Basic Properties of Sets
%          : [Urb06] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb06]
% Names    : zfmisc_1__t43_zfmisc_1 [Urb06]

% Status   : Theorem
% Rating   : 0.26 v9.3.0, 0.21 v9.0.0, 0.25 v8.2.0, 0.17 v8.1.0, 0.22 v7.5.0, 0.25 v7.4.0, 0.17 v7.3.0, 0.14 v7.2.0, 0.10 v7.1.0, 0.13 v6.4.0, 0.19 v6.3.0, 0.17 v6.2.0, 0.20 v6.0.0, 0.13 v5.5.0, 0.19 v5.4.0, 0.14 v5.3.0, 0.22 v5.2.0, 0.10 v5.0.0, 0.17 v4.0.1, 0.22 v4.0.0, 0.21 v3.7.0, 0.05 v3.4.0, 0.21 v3.3.0, 0.14 v3.2.0
% Syntax   : Number of formulae    :   12 (   8 unt;   0 def)
%            Number of atoms       :   22 (  12 equ)
%            Maximal formula atoms :    7 (   1 avg)
%            Number of connectives :   20 (  10   ~;   1   |;   6   &)
%                                         (   1 <=>;   2  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   10 (   4 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    3 (   2 usr;   0 prp; 1-2 aty)
%            Number of functors    :    3 (   3 usr;   1 con; 0-2 aty)
%            Number of variables   :   20 (  18   !;   2   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Translated by MPTP 0.2 from the original problem in the Mizar
%            library, www.mizar.org
%------------------------------------------------------------------------------
fof(commutativity_k2_xboole_0,axiom,
    ! [A,B] : set_union2(A,B) = set_union2(B,A) ).

fof(fc1_xboole_0,axiom,
    empty(empty_set) ).

fof(fc2_xboole_0,axiom,
    ! [A,B] :
      ( ~ empty(A)
     => ~ empty(set_union2(A,B)) ) ).

fof(fc3_xboole_0,axiom,
    ! [A,B] :
      ( ~ empty(A)
     => ~ empty(set_union2(B,A)) ) ).

fof(idempotence_k2_xboole_0,axiom,
    ! [A,B] : set_union2(A,A) = A ).

fof(l1_zfmisc_1,axiom,
    ! [A] : singleton(A) != empty_set ).

fof(l4_zfmisc_1,axiom,
    ! [A,B] :
      ( subset(A,singleton(B))
    <=> ( A = empty_set
        | A = singleton(B) ) ) ).

fof(rc1_xboole_0,axiom,
    ? [A] : empty(A) ).

fof(rc2_xboole_0,axiom,
    ? [A] : ~ empty(A) ).

fof(reflexivity_r1_tarski,axiom,
    ! [A,B] : subset(A,A) ).

fof(t43_zfmisc_1,conjecture,
    ! [A,B,C] :
      ~ ( singleton(A) = set_union2(B,C)
        & ~ ( B = singleton(A)
            & C = singleton(A) )
        & ~ ( B = empty_set
            & C = singleton(A) )
        & ~ ( B = singleton(A)
            & C = empty_set ) ) ).

fof(t7_xboole_1,axiom,
    ! [A,B] : subset(A,set_union2(A,B)) ).

%------------------------------------------------------------------------------
