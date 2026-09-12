%--------------------------------------------------------------------------
% File     : ALG043+1 : TPTP v9.3.1. Released v2.7.0.
% Domain   : General Algebra
% Problem  : Loops 4: REPRESENTATIVES-SATISFY-PROPS-PROBLEM-1
% Version  : Especial.
% English  :

% Refs     : [Mei03] Meier (2003), Email to G.Sutcliffe
%          : [CM+04] Colton et al. (2004), Automatic Generation of Classifi
% Source   : [Mei03]
% Names    :

% Status   : Theorem
% Rating   : 0.00 v9.3.0, 0.09 v9.1.0, 0.12 v9.0.0, 0.10 v8.2.0, 0.08 v8.1.0, 0.09 v7.5.0, 0.10 v7.4.0, 0.12 v7.3.0, 0.15 v7.2.0, 0.09 v7.0.0, 0.07 v6.3.0, 0.14 v6.2.0, 0.17 v5.5.0, 0.11 v5.3.0, 0.18 v5.2.0, 0.18 v4.0.1, 0.20 v4.0.0, 0.22 v3.7.0, 0.00 v3.5.0, 0.11 v3.4.0, 0.08 v3.3.0, 0.33 v3.2.0, 0.89 v2.7.0
% Syntax   : Number of formulae    :    4 (   1 unt;   0 def)
%            Number of atoms       :  243 ( 243 equ)
%            Maximal formula atoms :  220 (  60 avg)
%            Number of connectives :  245 (   6   ~; 150   |;  89   &)
%                                         (   0 <=>;   0  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   61 (  21 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    1 (   0 usr;   0 prp; 2-2 aty)
%            Number of functors    :    6 (   6 usr;   5 con; 0-2 aty)
%            Number of variables   :    0 (   0   !;   0   ?)
% SPC      : FOF_THM_EPR_PEQ

% Comments :
%--------------------------------------------------------------------------
fof(ax1,axiom,
    ( e0 != e1
    & e0 != e2
    & e0 != e3
    & e1 != e2
    & e1 != e3
    & e2 != e3 ) ).

fof(ax2,axiom,
    ( op(e0,e0) = e0
    & op(e0,e1) = e1
    & op(e0,e2) = e2
    & op(e0,e3) = e3
    & op(e1,e0) = e1
    & op(e1,e1) = e0
    & op(e1,e2) = e3
    & op(e1,e3) = e2
    & op(e2,e0) = e2
    & op(e2,e1) = e3
    & op(e2,e2) = e0
    & op(e2,e3) = e1
    & op(e3,e0) = e3
    & op(e3,e1) = e2
    & op(e3,e2) = e1
    & op(e3,e3) = e0 ) ).

fof(ax3,axiom,
    unit = e0 ).

fof(co1,conjecture,
    ( ( ( op(e0,e0) = e0
        & op(e1,e1) = e0
        & op(e2,e2) = e0
        & op(e3,e3) = e0 )
      | ( op(e0,e0) = e1
        & op(e1,e1) = e1
        & op(e2,e2) = e1
        & op(e3,e3) = e1 )
      | ( op(e0,e0) = e2
        & op(e1,e1) = e2
        & op(e2,e2) = e2
        & op(e3,e3) = e2 )
      | ( op(e0,e0) = e3
        & op(e1,e1) = e3
        & op(e2,e2) = e3
        & op(e3,e3) = e3 ) )
    & ( op(e0,e0) = e0
      | op(e0,e0) = e1
      | op(e0,e0) = e2
      | op(e0,e0) = e3 )
    & ( op(e0,e1) = e0
      | op(e0,e1) = e1
      | op(e0,e1) = e2
      | op(e0,e1) = e3 )
    & ( op(e0,e2) = e0
      | op(e0,e2) = e1
      | op(e0,e2) = e2
      | op(e0,e2) = e3 )
    & ( op(e0,e3) = e0
      | op(e0,e3) = e1
      | op(e0,e3) = e2
      | op(e0,e3) = e3 )
    & ( op(e1,e0) = e0
      | op(e1,e0) = e1
      | op(e1,e0) = e2
      | op(e1,e0) = e3 )
    & ( op(e1,e1) = e0
      | op(e1,e1) = e1
      | op(e1,e1) = e2
      | op(e1,e1) = e3 )
    & ( op(e1,e2) = e0
      | op(e1,e2) = e1
      | op(e1,e2) = e2
      | op(e1,e2) = e3 )
    & ( op(e1,e3) = e0
      | op(e1,e3) = e1
      | op(e1,e3) = e2
      | op(e1,e3) = e3 )
    & ( op(e2,e0) = e0
      | op(e2,e0) = e1
      | op(e2,e0) = e2
      | op(e2,e0) = e3 )
    & ( op(e2,e1) = e0
      | op(e2,e1) = e1
      | op(e2,e1) = e2
      | op(e2,e1) = e3 )
    & ( op(e2,e2) = e0
      | op(e2,e2) = e1
      | op(e2,e2) = e2
      | op(e2,e2) = e3 )
    & ( op(e2,e3) = e0
      | op(e2,e3) = e1
      | op(e2,e3) = e2
      | op(e2,e3) = e3 )
    & ( op(e3,e0) = e0
      | op(e3,e0) = e1
      | op(e3,e0) = e2
      | op(e3,e0) = e3 )
    & ( op(e3,e1) = e0
      | op(e3,e1) = e1
      | op(e3,e1) = e2
      | op(e3,e1) = e3 )
    & ( op(e3,e2) = e0
      | op(e3,e2) = e1
      | op(e3,e2) = e2
      | op(e3,e2) = e3 )
    & ( op(e3,e3) = e0
      | op(e3,e3) = e1
      | op(e3,e3) = e2
      | op(e3,e3) = e3 )
    & op(unit,e0) = e0
    & op(e0,unit) = e0
    & op(unit,e1) = e1
    & op(e1,unit) = e1
    & op(unit,e2) = e2
    & op(e2,unit) = e2
    & op(unit,e3) = e3
    & op(e3,unit) = e3
    & ( unit = e0
      | unit = e1
      | unit = e2
      | unit = e3 )
    & ( op(e0,e0) = e0
      | op(e0,e1) = e0
      | op(e0,e2) = e0
      | op(e0,e3) = e0 )
    & ( op(e0,e0) = e0
      | op(e1,e0) = e0
      | op(e2,e0) = e0
      | op(e3,e0) = e0 )
    & ( op(e0,e0) = e1
      | op(e0,e1) = e1
      | op(e0,e2) = e1
      | op(e0,e3) = e1 )
    & ( op(e0,e0) = e1
      | op(e1,e0) = e1
      | op(e2,e0) = e1
      | op(e3,e0) = e1 )
    & ( op(e0,e0) = e2
      | op(e0,e1) = e2
      | op(e0,e2) = e2
      | op(e0,e3) = e2 )
    & ( op(e0,e0) = e2
      | op(e1,e0) = e2
      | op(e2,e0) = e2
      | op(e3,e0) = e2 )
    & ( op(e0,e0) = e3
      | op(e0,e1) = e3
      | op(e0,e2) = e3
      | op(e0,e3) = e3 )
    & ( op(e0,e0) = e3
      | op(e1,e0) = e3
      | op(e2,e0) = e3
      | op(e3,e0) = e3 )
    & ( op(e1,e0) = e0
      | op(e1,e1) = e0
      | op(e1,e2) = e0
      | op(e1,e3) = e0 )
    & ( op(e0,e1) = e0
      | op(e1,e1) = e0
      | op(e2,e1) = e0
      | op(e3,e1) = e0 )
    & ( op(e1,e0) = e1
      | op(e1,e1) = e1
      | op(e1,e2) = e1
      | op(e1,e3) = e1 )
    & ( op(e0,e1) = e1
      | op(e1,e1) = e1
      | op(e2,e1) = e1
      | op(e3,e1) = e1 )
    & ( op(e1,e0) = e2
      | op(e1,e1) = e2
      | op(e1,e2) = e2
      | op(e1,e3) = e2 )
    & ( op(e0,e1) = e2
      | op(e1,e1) = e2
      | op(e2,e1) = e2
      | op(e3,e1) = e2 )
    & ( op(e1,e0) = e3
      | op(e1,e1) = e3
      | op(e1,e2) = e3
      | op(e1,e3) = e3 )
    & ( op(e0,e1) = e3
      | op(e1,e1) = e3
      | op(e2,e1) = e3
      | op(e3,e1) = e3 )
    & ( op(e2,e0) = e0
      | op(e2,e1) = e0
      | op(e2,e2) = e0
      | op(e2,e3) = e0 )
    & ( op(e0,e2) = e0
      | op(e1,e2) = e0
      | op(e2,e2) = e0
      | op(e3,e2) = e0 )
    & ( op(e2,e0) = e1
      | op(e2,e1) = e1
      | op(e2,e2) = e1
      | op(e2,e3) = e1 )
    & ( op(e0,e2) = e1
      | op(e1,e2) = e1
      | op(e2,e2) = e1
      | op(e3,e2) = e1 )
    & ( op(e2,e0) = e2
      | op(e2,e1) = e2
      | op(e2,e2) = e2
      | op(e2,e3) = e2 )
    & ( op(e0,e2) = e2
      | op(e1,e2) = e2
      | op(e2,e2) = e2
      | op(e3,e2) = e2 )
    & ( op(e2,e0) = e3
      | op(e2,e1) = e3
      | op(e2,e2) = e3
      | op(e2,e3) = e3 )
    & ( op(e0,e2) = e3
      | op(e1,e2) = e3
      | op(e2,e2) = e3
      | op(e3,e2) = e3 )
    & ( op(e3,e0) = e0
      | op(e3,e1) = e0
      | op(e3,e2) = e0
      | op(e3,e3) = e0 )
    & ( op(e0,e3) = e0
      | op(e1,e3) = e0
      | op(e2,e3) = e0
      | op(e3,e3) = e0 )
    & ( op(e3,e0) = e1
      | op(e3,e1) = e1
      | op(e3,e2) = e1
      | op(e3,e3) = e1 )
    & ( op(e0,e3) = e1
      | op(e1,e3) = e1
      | op(e2,e3) = e1
      | op(e3,e3) = e1 )
    & ( op(e3,e0) = e2
      | op(e3,e1) = e2
      | op(e3,e2) = e2
      | op(e3,e3) = e2 )
    & ( op(e0,e3) = e2
      | op(e1,e3) = e2
      | op(e2,e3) = e2
      | op(e3,e3) = e2 )
    & ( op(e3,e0) = e3
      | op(e3,e1) = e3
      | op(e3,e2) = e3
      | op(e3,e3) = e3 )
    & ( op(e0,e3) = e3
      | op(e1,e3) = e3
      | op(e2,e3) = e3
      | op(e3,e3) = e3 ) ) ).

%--------------------------------------------------------------------------
