%--------------------------------------------------------------------------
% File     : MGT029+1 : TPTP v9.3.1. Released v2.0.0.
% Domain   : Management (Organisation Theory)
% Problem  : EPs have positive and FMs have negative growth rates
% Version  : [PB+94] axioms : Reduced & Augmented > Complete.
% English  : Efficient producers have positive, while first movers have
%            negative growth rate past a certain point of time in stable
%            environments.

% Refs     : [PM93]  Peli & Masuch (1993), The Logic of Propogation Strateg
%          : [PM94]  Peli & Masuch (1994), The Logic of Propogation Strateg
%          : [Kam95] Kamps (1995), Email to G. Sutcliffe
% Source   : [Kam95]
% Names    :

% Status   : Theorem
% Rating   : 0.26 v9.3.0, 0.21 v9.1.0, 0.18 v9.0.0, 0.25 v8.2.0, 0.19 v8.1.0, 0.28 v7.5.0, 0.31 v7.4.0, 0.17 v7.3.0, 0.21 v7.2.0, 0.17 v7.0.0, 0.23 v6.4.0, 0.27 v6.3.0, 0.17 v6.2.0, 0.28 v6.1.0, 0.33 v6.0.0, 0.13 v5.5.0, 0.33 v5.4.0, 0.39 v5.3.0, 0.41 v5.2.0, 0.20 v5.1.0, 0.24 v5.0.0, 0.33 v4.1.0, 0.35 v4.0.1, 0.39 v4.0.0, 0.38 v3.7.0, 0.35 v3.5.0, 0.32 v3.4.0, 0.42 v3.3.0, 0.50 v3.2.0, 0.45 v3.1.0, 0.44 v2.7.0, 0.50 v2.6.0, 0.57 v2.5.0, 0.62 v2.4.0, 0.75 v2.3.0, 0.67 v2.2.1, 0.00 v2.1.0
% Syntax   : Number of formulae    :    7 (   0 unt;   0 def)
%            Number of atoms       :   37 (   4 equ)
%            Maximal formula atoms :    9 (   5 avg)
%            Number of connectives :   30 (   0   ~;   5   |;  16   &)
%                                         (   1 <=>;   8  =>;   0  <=;   0 <~>)
%            Maximal formula depth :    8 (   7 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    7 (   6 usr;   0 prp; 1-4 aty)
%            Number of functors    :    5 (   5 usr;   3 con; 0-2 aty)
%            Number of variables   :   18 (  15   !;   3   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments :
%--------------------------------------------------------------------------
%----Subsitution axioms
%----Problem axioms
%----MP. inequality
fof(mp_greater_transitivity,axiom,
    ! [X,Y,Z] :
      ( ( greater(X,Y)
        & greater(Y,Z) )
     => greater(X,Z) ) ).

%----MP. times in environment
fof(mp_times_in_environment,axiom,
    ! [E,T1,T2] :
      ( ( in_environment(E,T1)
        & in_environment(E,T2) )
     => ( greater(T2,T1)
        | T2 = T1
        | greater(T1,T2) ) ) ).

%----MP. on "greater or equal to"
fof(mp_greater_or_equal,axiom,
    ! [X,Y] :
      ( greater_or_equal(X,Y)
    <=> ( greater(X,Y)
        | X = Y ) ) ).

%----L6. If a subpopulation has positive growth rate, then the
%----other subpopulation must have negative growth rate in equilibrium.
fof(l6,hypothesis,
    ! [E,T] :
      ( ( environment(E)
        & subpopulations(first_movers,efficient_producers,E,T)
        & greater_or_equal(T,equilibrium(E)) )
     => ( ( growth_rate(first_movers,T) = zero
          & growth_rate(efficient_producers,T) = zero )
        | ( greater(growth_rate(first_movers,T),zero)
          & greater(zero,growth_rate(efficient_producers,T)) )
        | ( greater(growth_rate(efficient_producers,T),zero)
          & greater(zero,growth_rate(first_movers,T)) ) ) ) ).

%----L1. The growth rate of efficient producers exceeds the growth rate of
%----first movers past a certain time in stable environments.
fof(l1,hypothesis,
    ! [E] :
      ( ( environment(E)
        & stable(E) )
     => ? [To] :
          ( in_environment(E,To)
          & ! [T] :
              ( ( subpopulations(first_movers,efficient_producers,E,T)
                & greater_or_equal(T,To) )
             => greater(growth_rate(efficient_producers,T),growth_rate(first_movers,T)) ) ) ) ).

%----A4. The state of equilibrium is reached in stable environments.
fof(a4,hypothesis,
    ! [E] :
      ( ( environment(E)
        & stable(E) )
     => ? [T] :
          ( in_environment(E,T)
          & greater_or_equal(T,equilibrium(E)) ) ) ).

%----GOAL: L11. Efficient producers have positive, while first movers have
%----negative growth rate past a certain point of time in stable
%----environments.
fof(prove_l11,conjecture,
    ! [E] :
      ( ( environment(E)
        & stable(E) )
     => ? [To] :
          ( in_environment(E,To)
          & ! [T] :
              ( ( subpopulations(first_movers,efficient_producers,E,T)
                & greater_or_equal(T,To) )
             => ( greater(growth_rate(efficient_producers,T),zero)
                & greater(zero,growth_rate(first_movers,T)) ) ) ) ) ).

%--------------------------------------------------------------------------
