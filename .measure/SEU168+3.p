%------------------------------------------------------------------------------
% File     : SEU168+3 : TPTP v9.3.1. Released v3.2.0.
% Domain   : Set theory
% Problem  : Basic properties of sets, theorem 136
% Version  : [Urb06] axioms : Especial.
% English  :

% Refs     : [Byl90] Bylinski (1990), Some Basic Properties of Sets
%          : [Urb06] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb06]
% Names    : zfmisc_1__t136_zfmisc_1 [Urb06]

% Status   : Theorem
% Rating   : 0.48 v9.1.0, 0.52 v9.0.0, 0.53 v8.2.0, 0.56 v7.5.0, 0.53 v7.4.0, 0.47 v7.3.0, 0.45 v7.2.0, 0.41 v7.1.0, 0.43 v6.4.0, 0.42 v6.2.0, 0.56 v6.1.0, 0.63 v6.0.0, 0.61 v5.5.0, 0.63 v5.4.0, 0.64 v5.3.0, 0.67 v5.2.0, 0.50 v5.1.0, 0.57 v5.0.0, 0.58 v4.1.0, 0.57 v4.0.0, 0.58 v3.7.0, 0.65 v3.5.0, 0.68 v3.4.0, 0.74 v3.3.0, 0.71 v3.2.0
% Syntax   : Number of formulae    :    8 (   3 unt;   0 def)
%            Number of atoms       :   31 (   1 equ)
%            Maximal formula atoms :   11 (   3 avg)
%            Number of connectives :   33 (  10   ~;   0   |;  14   &)
%                                         (   3 <=>;   6  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   14 (   6 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    5 (   4 usr;   0 prp; 1-2 aty)
%            Number of functors    :    1 (   1 usr;   0 con; 1-1 aty)
%            Number of variables   :   26 (  22   !;   4   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Translated by MPTP 0.2 from the original problem in the Mizar
%            library, www.mizar.org
%------------------------------------------------------------------------------
fof(antisymmetry_r2_hidden,axiom,
    ! [A,B] :
      ( in(A,B)
     => ~ in(B,A) ) ).

fof(d1_zfmisc_1,axiom,
    ! [A,B] :
      ( B = powerset(A)
    <=> ! [C] :
          ( in(C,B)
        <=> subset(C,A) ) ) ).

fof(d3_tarski,axiom,
    ! [A,B] :
      ( subset(A,B)
    <=> ! [C] :
          ( in(C,A)
         => in(C,B) ) ) ).

fof(rc1_xboole_0,axiom,
    ? [A] : empty(A) ).

fof(rc2_xboole_0,axiom,
    ? [A] : ~ empty(A) ).

fof(reflexivity_r1_tarski,axiom,
    ! [A,B] : subset(A,A) ).

fof(t136_zfmisc_1,conjecture,
    ! [A] :
    ? [B] :
      ( in(A,B)
      & ! [C,D] :
          ( ( in(C,B)
            & subset(D,C) )
         => in(D,B) )
      & ! [C] :
          ( in(C,B)
         => in(powerset(C),B) )
      & ! [C] :
          ~ ( subset(C,B)
            & ~ are_equipotent(C,B)
            & ~ in(C,B) ) ) ).

fof(t9_tarski,axiom,
    ! [A] :
    ? [B] :
      ( in(A,B)
      & ! [C,D] :
          ( ( in(C,B)
            & subset(D,C) )
         => in(D,B) )
      & ! [C] :
          ~ ( in(C,B)
            & ! [D] :
                ~ ( in(D,B)
                  & ! [E] :
                      ( subset(E,C)
                     => in(E,D) ) ) )
      & ! [C] :
          ~ ( subset(C,B)
            & ~ are_equipotent(C,B)
            & ~ in(C,B) ) ) ).

%------------------------------------------------------------------------------
