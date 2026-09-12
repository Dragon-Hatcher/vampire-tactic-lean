%------------------------------------------------------------------------------
% File     : SEU281+1 : TPTP v9.3.1. Released v3.3.0.
% Domain   : Set theory
% Problem  : MPTP bushy problem s1_xboole_0__e4_5_1__funct_1
% Version  : [Urb07] axioms : Especial.
% English  :

% Refs     : [Ban01] Bancerek et al. (2001), On the Characterizations of Co
%          : [Urb07] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb07]
% Names    : bushy-s1_xboole_0__e4_5_1__funct_1 [Urb07]

% Status   : Theorem
% Rating   : 0.35 v9.3.0, 0.27 v9.1.0, 0.33 v9.0.0, 0.36 v8.2.0, 0.31 v8.1.0, 0.33 v7.5.0, 0.38 v7.4.0, 0.20 v7.3.0, 0.24 v7.2.0, 0.21 v7.1.0, 0.26 v7.0.0, 0.23 v6.4.0, 0.35 v6.3.0, 0.29 v6.2.0, 0.44 v6.1.0, 0.43 v6.0.0, 0.35 v5.5.0, 0.48 v5.4.0, 0.46 v5.3.0, 0.52 v5.2.0, 0.35 v5.1.0, 0.38 v5.0.0, 0.46 v4.1.0, 0.48 v4.0.0, 0.46 v3.7.0, 0.45 v3.5.0, 0.53 v3.4.0, 0.47 v3.3.0
% Syntax   : Number of formulae    :   15 (   6 unt;   0 def)
%            Number of atoms       :   47 (  12 equ)
%            Maximal formula atoms :   15 (   3 avg)
%            Number of connectives :   36 (   4   ~;   0   |;  23   &)
%                                         (   2 <=>;   7  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   15 (   5 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    8 (   6 usr;   1 prp; 0-2 aty)
%            Number of functors    :    3 (   3 usr;   0 con; 1-2 aty)
%            Number of variables   :   32 (  17   !;  15   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Translated by MPTP 0.2 from the original problem in the Mizar
%            library, www.mizar.org
%------------------------------------------------------------------------------
fof(s1_xboole_0__e16_22__wellord2__1,conjecture,
    ! [A,B] :
    ? [C] :
    ! [D] :
      ( in(D,C)
    <=> ( in(D,cartesian_product2(A,B))
        & ? [E,F] :
            ( ordered_pair(E,F) = D
            & in(E,A)
            & F = singleton(E) ) ) ) ).

fof(cc1_ordinal1,axiom,
    ! [A] :
      ( ordinal(A)
     => ( epsilon_transitive(A)
        & epsilon_connected(A) ) ) ).

fof(cc2_ordinal1,axiom,
    ! [A] :
      ( ( epsilon_transitive(A)
        & epsilon_connected(A) )
     => ordinal(A) ) ).

fof(rc1_ordinal1,axiom,
    ? [A] :
      ( epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A) ) ).

fof(rc3_ordinal1,axiom,
    ? [A] :
      ( ~ empty(A)
      & epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A) ) ).

fof(cc1_funct_1,axiom,
    ! [A] :
      ( empty(A)
     => function(A) ) ).

fof(cc3_ordinal1,axiom,
    ! [A] :
      ( empty(A)
     => ( epsilon_transitive(A)
        & epsilon_connected(A)
        & ordinal(A) ) ) ).

fof(rc1_xboole_0,axiom,
    ? [A] : empty(A) ).

fof(rc2_xboole_0,axiom,
    ? [A] : ~ empty(A) ).

fof(antisymmetry_r2_hidden,axiom,
    ! [A,B] :
      ( in(A,B)
     => ~ in(B,A) ) ).

fof(dt_k1_tarski,axiom,
    $true ).

fof(dt_k2_zfmisc_1,axiom,
    $true ).

fof(dt_k4_tarski,axiom,
    $true ).

fof(fc1_zfmisc_1,axiom,
    ! [A,B] : ~ empty(ordered_pair(A,B)) ).

fof(s1_tarski__e16_22__wellord2__2,axiom,
    ! [A,B] :
      ( ! [C,D,E] :
          ( ( C = D
            & ? [F,G] :
                ( ordered_pair(F,G) = D
                & in(F,A)
                & G = singleton(F) )
            & C = E
            & ? [H,I] :
                ( ordered_pair(H,I) = E
                & in(H,A)
                & I = singleton(H) ) )
         => D = E )
     => ? [C] :
        ! [D] :
          ( in(D,C)
        <=> ? [E] :
              ( in(E,cartesian_product2(A,B))
              & E = D
              & ? [J,K] :
                  ( ordered_pair(J,K) = D
                  & in(J,A)
                  & K = singleton(J) ) ) ) ) ).

%------------------------------------------------------------------------------
