%------------------------------------------------------------------------------
% File     : SEU301+1 : TPTP v9.3.1. Released v3.3.0.
% Domain   : Set theory
% Problem  : MPTP bushy problem s1_ordinal2__e18_27__finset_1
% Version  : [Urb07] axioms : Especial.
% English  :

% Refs     : [Ban01] Bancerek et al. (2001), On the Characterizations of Co
%          : [Urb07] Urban (2006), Email to G. Sutcliffe
% Source   : [Urb07]
% Names    : bushy-s1_ordinal2__e18_27__finset_1 [Urb07]

% Status   : Theorem
% Rating   : 0.78 v9.3.0, 0.82 v9.1.0, 0.79 v9.0.0, 0.81 v8.2.0, 0.78 v7.4.0, 0.73 v7.3.0, 0.69 v7.1.0, 0.65 v7.0.0, 0.67 v6.4.0, 0.69 v6.3.0, 0.71 v6.2.0, 0.84 v6.1.0, 0.90 v6.0.0, 0.83 v5.5.0, 0.85 v5.4.0, 0.86 v5.3.0, 0.89 v5.2.0, 0.80 v5.1.0, 0.81 v5.0.0, 0.83 v3.7.0, 0.80 v3.5.0, 0.84 v3.3.0
% Syntax   : Number of formulae    :   65 (  20 unt;   0 def)
%            Number of atoms       :  250 (  27 equ)
%            Maximal formula atoms :   49 (   3 avg)
%            Number of connectives :  239 (  54   ~;   2   |; 117   &)
%                                         (   0 <=>;  66  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   22 (   5 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :   16 (  14 usr;   1 prp; 0-2 aty)
%            Number of functors    :    6 (   6 usr;   2 con; 0-2 aty)
%            Number of variables   :  104 (  83   !;  21   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments : Translated by MPTP 0.2 from the original problem in the Mizar
%            library, www.mizar.org
%------------------------------------------------------------------------------
fof(s1_ordinal2__e18_27__finset_1,conjecture,
    ( ( ( in(empty_set,omega)
       => ! [A] :
            ( element(A,powerset(powerset(empty_set)))
           => ~ ( A != empty_set
                & ! [B] :
                    ~ ( in(B,A)
                      & ! [C] :
                          ( ( in(C,A)
                            & subset(B,C) )
                         => C = B ) ) ) ) )
      & ! [D] :
          ( ordinal(D)
         => ( ( in(D,omega)
             => ! [E] :
                  ( element(E,powerset(powerset(D)))
                 => ~ ( E != empty_set
                      & ! [F] :
                          ~ ( in(F,E)
                            & ! [G] :
                                ( ( in(G,E)
                                  & subset(F,G) )
                               => G = F ) ) ) ) )
           => ( in(succ(D),omega)
             => ! [H] :
                  ( element(H,powerset(powerset(succ(D))))
                 => ~ ( H != empty_set
                      & ! [I] :
                          ~ ( in(I,H)
                            & ! [J] :
                                ( ( in(J,H)
                                  & subset(I,J) )
                               => J = I ) ) ) ) ) ) )
      & ! [D] :
          ( ordinal(D)
         => ( ( being_limit_ordinal(D)
              & ! [K] :
                  ( ordinal(K)
                 => ( in(K,D)
                   => ( in(K,omega)
                     => ! [L] :
                          ( element(L,powerset(powerset(K)))
                         => ~ ( L != empty_set
                              & ! [M] :
                                  ~ ( in(M,L)
                                    & ! [N] :
                                        ( ( in(N,L)
                                          & subset(M,N) )
                                       => N = M ) ) ) ) ) ) ) )
           => ( D = empty_set
              | ( in(D,omega)
               => ! [O] :
                    ( element(O,powerset(powerset(D)))
                   => ~ ( O != empty_set
                        & ! [P] :
                            ~ ( in(P,O)
                              & ! [Q] :
                                  ( ( in(Q,O)
                                    & subset(P,Q) )
                                 => Q = P ) ) ) ) ) ) ) ) )
   => ! [D] :
        ( ordinal(D)
       => ( in(D,omega)
         => ! [R] :
              ( element(R,powerset(powerset(D)))
             => ~ ( R != empty_set
                  & ! [S] :
                      ~ ( in(S,R)
                        & ! [T] :
                            ( ( in(T,R)
                              & subset(S,T) )
                           => T = S ) ) ) ) ) ) ) ).

fof(rc1_finset_1,axiom,
    ? [A] :
      ( ~ empty(A)
      & finite(A) ) ).

fof(rc2_finset_1,axiom,
    ! [A] :
    ? [B] :
      ( element(B,powerset(A))
      & empty(B)
      & relation(B)
      & function(B)
      & one_to_one(B)
      & epsilon_transitive(B)
      & epsilon_connected(B)
      & ordinal(B)
      & natural(B)
      & finite(B) ) ).

fof(rc3_finset_1,axiom,
    ! [A] :
      ( ~ empty(A)
     => ? [B] :
          ( element(B,powerset(A))
          & ~ empty(B)
          & finite(B) ) ) ).

fof(cc2_finset_1,axiom,
    ! [A] :
      ( finite(A)
     => ! [B] :
          ( element(B,powerset(A))
         => finite(B) ) ) ).

fof(cc1_finset_1,axiom,
    ! [A] :
      ( empty(A)
     => finite(A) ) ).

fof(rc1_funct_1,axiom,
    ? [A] :
      ( relation(A)
      & function(A) ) ).

fof(cc1_funct_1,axiom,
    ! [A] :
      ( empty(A)
     => function(A) ) ).

fof(rc2_funct_1,axiom,
    ? [A] :
      ( relation(A)
      & empty(A)
      & function(A) ) ).

fof(cc2_funct_1,axiom,
    ! [A] :
      ( ( relation(A)
        & empty(A)
        & function(A) )
     => ( relation(A)
        & function(A)
        & one_to_one(A) ) ) ).

fof(rc3_funct_1,axiom,
    ? [A] :
      ( relation(A)
      & function(A)
      & one_to_one(A) ) ).

fof(rc4_funct_1,axiom,
    ? [A] :
      ( relation(A)
      & relation_empty_yielding(A)
      & function(A) ) ).

fof(rc1_ordinal2,axiom,
    ? [A] :
      ( epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A)
      & being_limit_ordinal(A) ) ).

fof(rc1_relat_1,axiom,
    ? [A] :
      ( empty(A)
      & relation(A) ) ).

fof(cc1_relat_1,axiom,
    ! [A] :
      ( empty(A)
     => relation(A) ) ).

fof(rc2_relat_1,axiom,
    ? [A] :
      ( ~ empty(A)
      & relation(A) ) ).

fof(rc3_relat_1,axiom,
    ? [A] :
      ( relation(A)
      & relation_empty_yielding(A) ) ).

fof(cc2_arytm_3,axiom,
    ! [A] :
      ( ( empty(A)
        & ordinal(A) )
     => ( epsilon_transitive(A)
        & epsilon_connected(A)
        & ordinal(A)
        & natural(A) ) ) ).

fof(rc1_arytm_3,axiom,
    ? [A] :
      ( ~ empty(A)
      & epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A)
      & natural(A) ) ).

fof(fc2_arytm_3,axiom,
    ! [A] :
      ( ( ordinal(A)
        & natural(A) )
     => ( ~ empty(succ(A))
        & epsilon_transitive(succ(A))
        & epsilon_connected(succ(A))
        & ordinal(succ(A))
        & natural(succ(A)) ) ) ).

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

fof(rc2_ordinal1,axiom,
    ? [A] :
      ( relation(A)
      & function(A)
      & one_to_one(A)
      & empty(A)
      & epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A) ) ).

fof(cc3_ordinal1,axiom,
    ! [A] :
      ( empty(A)
     => ( epsilon_transitive(A)
        & epsilon_connected(A)
        & ordinal(A) ) ) ).

fof(rc3_ordinal1,axiom,
    ? [A] :
      ( ~ empty(A)
      & epsilon_transitive(A)
      & epsilon_connected(A)
      & ordinal(A) ) ).

fof(rc1_subset_1,axiom,
    ! [A] :
      ( ~ empty(A)
     => ? [B] :
          ( element(B,powerset(A))
          & ~ empty(B) ) ) ).

fof(rc2_subset_1,axiom,
    ! [A] :
    ? [B] :
      ( element(B,powerset(A))
      & empty(B) ) ).

fof(rc1_xboole_0,axiom,
    ? [A] : empty(A) ).

fof(rc2_xboole_0,axiom,
    ? [A] : ~ empty(A) ).

fof(reflexivity_r1_tarski,axiom,
    ! [A,B] : subset(A,A) ).

fof(antisymmetry_r2_hidden,axiom,
    ! [A,B] :
      ( in(A,B)
     => ~ in(B,A) ) ).

fof(dt_k1_ordinal1,axiom,
    $true ).

fof(dt_k1_xboole_0,axiom,
    $true ).

fof(dt_k1_zfmisc_1,axiom,
    $true ).

fof(dt_k5_ordinal2,axiom,
    $true ).

fof(dt_m1_subset_1,axiom,
    $true ).

fof(fc1_ordinal2,axiom,
    ( epsilon_transitive(omega)
    & epsilon_connected(omega)
    & ordinal(omega)
    & ~ empty(omega) ) ).

fof(fc4_relat_1,axiom,
    ( empty(empty_set)
    & relation(empty_set) ) ).

fof(fc12_relat_1,axiom,
    ( empty(empty_set)
    & relation(empty_set)
    & relation_empty_yielding(empty_set) ) ).

fof(cc1_arytm_3,axiom,
    ! [A] :
      ( ordinal(A)
     => ! [B] :
          ( element(B,A)
         => ( epsilon_transitive(B)
            & epsilon_connected(B)
            & ordinal(B) ) ) ) ).

fof(cc3_arytm_3,axiom,
    ! [A] :
      ( element(A,omega)
     => ( epsilon_transitive(A)
        & epsilon_connected(A)
        & ordinal(A)
        & natural(A) ) ) ).

fof(fc1_ordinal1,axiom,
    ! [A] : ~ empty(succ(A)) ).

fof(cc1_ordinal1,axiom,
    ! [A] :
      ( ordinal(A)
     => ( epsilon_transitive(A)
        & epsilon_connected(A) ) ) ).

fof(fc2_ordinal1,axiom,
    ( relation(empty_set)
    & relation_empty_yielding(empty_set)
    & function(empty_set)
    & one_to_one(empty_set)
    & empty(empty_set)
    & epsilon_transitive(empty_set)
    & epsilon_connected(empty_set)
    & ordinal(empty_set) ) ).

fof(fc3_ordinal1,axiom,
    ! [A] :
      ( ordinal(A)
     => ( ~ empty(succ(A))
        & epsilon_transitive(succ(A))
        & epsilon_connected(succ(A))
        & ordinal(succ(A)) ) ) ).

fof(fc1_subset_1,axiom,
    ! [A] : ~ empty(powerset(A)) ).

fof(fc1_xboole_0,axiom,
    empty(empty_set) ).

fof(s2_ordinal1__e18_27__finset_1__1,axiom,
    ( ! [A] :
        ( ordinal(A)
       => ( ! [B] :
              ( ordinal(B)
             => ( in(B,A)
               => ( in(B,omega)
                 => ! [C] :
                      ( element(C,powerset(powerset(B)))
                     => ~ ( C != empty_set
                          & ! [D] :
                              ~ ( in(D,C)
                                & ! [E] :
                                    ( ( in(E,C)
                                      & subset(D,E) )
                                   => E = D ) ) ) ) ) ) )
         => ( in(A,omega)
           => ! [F] :
                ( element(F,powerset(powerset(A)))
               => ~ ( F != empty_set
                    & ! [G] :
                        ~ ( in(G,F)
                          & ! [H] :
                              ( ( in(H,F)
                                & subset(G,H) )
                             => H = G ) ) ) ) ) ) )
   => ! [A] :
        ( ordinal(A)
       => ( in(A,omega)
         => ! [I] :
              ( element(I,powerset(powerset(A)))
             => ~ ( I != empty_set
                  & ! [J] :
                      ~ ( in(J,I)
                        & ! [K] :
                            ( ( in(K,I)
                              & subset(J,K) )
                           => K = J ) ) ) ) ) ) ) ).

fof(commutativity_k2_xboole_0,axiom,
    ! [A,B] : set_union2(A,B) = set_union2(B,A) ).

fof(d1_ordinal1,axiom,
    ! [A] : succ(A) = set_union2(A,singleton(A)) ).

fof(dt_k1_tarski,axiom,
    $true ).

fof(dt_k2_xboole_0,axiom,
    $true ).

fof(existence_m1_subset_1,axiom,
    ! [A] :
    ? [B] : element(B,A) ).

fof(fc2_subset_1,axiom,
    ! [A] : ~ empty(singleton(A)) ).

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

fof(t10_ordinal1,axiom,
    ! [A] : in(A,succ(A)) ).

fof(t1_boole,axiom,
    ! [A] : set_union2(A,empty_set) = A ).

fof(t1_subset,axiom,
    ! [A,B] :
      ( in(A,B)
     => element(A,B) ) ).

fof(t2_subset,axiom,
    ! [A,B] :
      ( element(A,B)
     => ( empty(B)
        | in(A,B) ) ) ).

fof(t42_ordinal1,axiom,
    ! [A] :
      ( ordinal(A)
     => ( ~ ( ~ being_limit_ordinal(A)
            & ! [B] :
                ( ordinal(B)
               => A != succ(B) ) )
        & ~ ( ? [B] :
                ( ordinal(B)
                & A = succ(B) )
            & being_limit_ordinal(A) ) ) ) ).

fof(t6_boole,axiom,
    ! [A] :
      ( empty(A)
     => A = empty_set ) ).

fof(t7_boole,axiom,
    ! [A,B] :
      ~ ( in(A,B)
        & empty(B) ) ).

fof(t8_boole,axiom,
    ! [A,B] :
      ~ ( empty(A)
        & A != B
        & empty(B) ) ).

%------------------------------------------------------------------------------
