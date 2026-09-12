%--------------------------------------------------------------------------
% File     : MGT023+1 : TPTP v9.3.1. Released v2.0.0.
% Domain   : Management (Organisation Theory)
% Problem  : Stable environments have a critical point.
% Version  : [PB+94] axioms : Reduced & Augmented > Complete.
% English  :

% Refs     : [PM93]  Peli & Masuch (1993), The Logic of Propogation Strateg
%          : [PM94]  Peli & Masuch (1994), The Logic of Propogation Strateg
%          : [Kam95] Kamps (1995), Email to G. Sutcliffe
% Source   : [Kam95]
% Names    :

% Status   : Theorem
% Rating   : 0.04 v9.3.0, 0.09 v9.1.0, 0.06 v9.0.0, 0.08 v7.5.0, 0.09 v7.4.0, 0.10 v7.2.0, 0.07 v7.1.0, 0.09 v7.0.0, 0.10 v6.4.0, 0.15 v6.3.0, 0.04 v6.2.0, 0.08 v6.1.0, 0.10 v6.0.0, 0.04 v5.3.0, 0.07 v5.2.0, 0.00 v5.0.0, 0.04 v3.7.0, 0.00 v3.4.0, 0.05 v3.3.0, 0.07 v3.2.0, 0.09 v3.1.0, 0.11 v2.7.0, 0.17 v2.6.0, 0.29 v2.5.0, 0.25 v2.4.0, 0.00 v2.1.0
% Syntax   : Number of formulae    :    3 (   0 unt;   0 def)
%            Number of atoms       :   17 (   1 equ)
%            Maximal formula atoms :    7 (   5 avg)
%            Number of connectives :   16 (   2   ~;   0   |;   9   &)
%                                         (   0 <=>;   5  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   10 (   8 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    6 (   5 usr;   0 prp; 1-4 aty)
%            Number of functors    :    4 (   4 usr;   2 con; 0-2 aty)
%            Number of variables   :    7 (   6   !;   1   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments :
%--------------------------------------------------------------------------
%----Subsitution axioms
%----Problem axioms
%----D1=>. A time point is the critical point of an environmental patch,
%----if and only if, it is the earliest time past which the growth rate of
%----efficient producers permanently exceeds growth rate of first movers.
fof(d1,hypothesis,
    ! [E,To] :
      ( ( environment(E)
        & ~ greater(growth_rate(efficient_producers,To),growth_rate(first_movers,To))
        & in_environment(E,To)
        & ! [T] :
            ( ( subpopulations(first_movers,efficient_producers,E,T)
              & greater(T,To) )
           => greater(growth_rate(efficient_producers,T),growth_rate(first_movers,T)) ) )
     => To = critical_point(E) ) ).

%----L12. There is an earliest time point, past which FM's growth rate
%----exceeds EP's growth rate.
fof(l12,hypothesis,
    ! [E] :
      ( ( environment(E)
        & stable(E) )
     => ? [To] :
          ( in_environment(E,To)
          & ~ greater(growth_rate(efficient_producers,To),growth_rate(first_movers,To))
          & ! [T] :
              ( ( subpopulations(first_movers,efficient_producers,E,T)
                & greater(T,To) )
             => greater(growth_rate(efficient_producers,T),growth_rate(first_movers,T)) ) ) ) ).

%----GOAL: L5. Stable environments have a critical point.
fof(prove_l5,conjecture,
    ! [E] :
      ( ( environment(E)
        & stable(E) )
     => in_environment(E,critical_point(E)) ) ).

%--------------------------------------------------------------------------
