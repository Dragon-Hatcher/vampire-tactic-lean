%--------------------------------------------------------------------------
% File     : ALG096+1 : TPTP v9.3.1. Released v2.7.0.
% Domain   : General Algebra
% Problem  : Loops 5: VERIFY-GEN-SYSES-PROBLEM-1
% Version  : Especial.
% English  :

% Refs     : [Mei03] Meier (2003), Email to G.Sutcliffe
%          : [CM+04] Colton et al. (2004), Automatic Generation of Classifi
% Source   : [Mei03]
% Names    :

% Status   : Unsatisfiable
% Rating   : 0.00 v8.1.0, 0.50 v4.0.1, 0.33 v4.0.0, 0.67 v3.7.0, 0.83 v2.7.0
% Syntax   : Number of formulae    :  126 (   0 unt;   0 def)
%            Number of atoms       : 1005 (1005 equ)
%            Maximal formula atoms :  250 (   7 avg)
%            Number of connectives : 1109 ( 230   ~; 324   |; 555   &)
%                                         (   0 <=>;   0  =>;   0  <=;   0 <~>)
%            Maximal formula depth :  101 (   7 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :    1 (   0 usr;   0 prp; 2-2 aty)
%            Number of functors    :    7 (   7 usr;   6 con; 0-2 aty)
%            Number of variables   :    0 (   0   !;   0   ?)
% SPC      : FOF_UNS_EPR_PEQ

% Comments :
%--------------------------------------------------------------------------
fof(ax1,axiom,
    ( ( op(e0,e0) = e0
      | op(e0,e0) = e1
      | op(e0,e0) = e2
      | op(e0,e0) = e3
      | op(e0,e0) = e4 )
    & ( op(e0,e1) = e0
      | op(e0,e1) = e1
      | op(e0,e1) = e2
      | op(e0,e1) = e3
      | op(e0,e1) = e4 )
    & ( op(e0,e2) = e0
      | op(e0,e2) = e1
      | op(e0,e2) = e2
      | op(e0,e2) = e3
      | op(e0,e2) = e4 )
    & ( op(e0,e3) = e0
      | op(e0,e3) = e1
      | op(e0,e3) = e2
      | op(e0,e3) = e3
      | op(e0,e3) = e4 )
    & ( op(e0,e4) = e0
      | op(e0,e4) = e1
      | op(e0,e4) = e2
      | op(e0,e4) = e3
      | op(e0,e4) = e4 )
    & ( op(e1,e0) = e0
      | op(e1,e0) = e1
      | op(e1,e0) = e2
      | op(e1,e0) = e3
      | op(e1,e0) = e4 )
    & ( op(e1,e1) = e0
      | op(e1,e1) = e1
      | op(e1,e1) = e2
      | op(e1,e1) = e3
      | op(e1,e1) = e4 )
    & ( op(e1,e2) = e0
      | op(e1,e2) = e1
      | op(e1,e2) = e2
      | op(e1,e2) = e3
      | op(e1,e2) = e4 )
    & ( op(e1,e3) = e0
      | op(e1,e3) = e1
      | op(e1,e3) = e2
      | op(e1,e3) = e3
      | op(e1,e3) = e4 )
    & ( op(e1,e4) = e0
      | op(e1,e4) = e1
      | op(e1,e4) = e2
      | op(e1,e4) = e3
      | op(e1,e4) = e4 )
    & ( op(e2,e0) = e0
      | op(e2,e0) = e1
      | op(e2,e0) = e2
      | op(e2,e0) = e3
      | op(e2,e0) = e4 )
    & ( op(e2,e1) = e0
      | op(e2,e1) = e1
      | op(e2,e1) = e2
      | op(e2,e1) = e3
      | op(e2,e1) = e4 )
    & ( op(e2,e2) = e0
      | op(e2,e2) = e1
      | op(e2,e2) = e2
      | op(e2,e2) = e3
      | op(e2,e2) = e4 )
    & ( op(e2,e3) = e0
      | op(e2,e3) = e1
      | op(e2,e3) = e2
      | op(e2,e3) = e3
      | op(e2,e3) = e4 )
    & ( op(e2,e4) = e0
      | op(e2,e4) = e1
      | op(e2,e4) = e2
      | op(e2,e4) = e3
      | op(e2,e4) = e4 )
    & ( op(e3,e0) = e0
      | op(e3,e0) = e1
      | op(e3,e0) = e2
      | op(e3,e0) = e3
      | op(e3,e0) = e4 )
    & ( op(e3,e1) = e0
      | op(e3,e1) = e1
      | op(e3,e1) = e2
      | op(e3,e1) = e3
      | op(e3,e1) = e4 )
    & ( op(e3,e2) = e0
      | op(e3,e2) = e1
      | op(e3,e2) = e2
      | op(e3,e2) = e3
      | op(e3,e2) = e4 )
    & ( op(e3,e3) = e0
      | op(e3,e3) = e1
      | op(e3,e3) = e2
      | op(e3,e3) = e3
      | op(e3,e3) = e4 )
    & ( op(e3,e4) = e0
      | op(e3,e4) = e1
      | op(e3,e4) = e2
      | op(e3,e4) = e3
      | op(e3,e4) = e4 )
    & ( op(e4,e0) = e0
      | op(e4,e0) = e1
      | op(e4,e0) = e2
      | op(e4,e0) = e3
      | op(e4,e0) = e4 )
    & ( op(e4,e1) = e0
      | op(e4,e1) = e1
      | op(e4,e1) = e2
      | op(e4,e1) = e3
      | op(e4,e1) = e4 )
    & ( op(e4,e2) = e0
      | op(e4,e2) = e1
      | op(e4,e2) = e2
      | op(e4,e2) = e3
      | op(e4,e2) = e4 )
    & ( op(e4,e3) = e0
      | op(e4,e3) = e1
      | op(e4,e3) = e2
      | op(e4,e3) = e3
      | op(e4,e3) = e4 )
    & ( op(e4,e4) = e0
      | op(e4,e4) = e1
      | op(e4,e4) = e2
      | op(e4,e4) = e3
      | op(e4,e4) = e4 ) ) ).

fof(ax2,axiom,
    ( op(unit,e0) = e0
    & op(e0,unit) = e0
    & op(unit,e1) = e1
    & op(e1,unit) = e1
    & op(unit,e2) = e2
    & op(e2,unit) = e2
    & op(unit,e3) = e3
    & op(e3,unit) = e3
    & op(unit,e4) = e4
    & op(e4,unit) = e4
    & ( unit = e0
      | unit = e1
      | unit = e2
      | unit = e3
      | unit = e4 ) ) ).

fof(ax3,axiom,
    ( ( op(e0,e0) = e0
      | op(e0,e1) = e0
      | op(e0,e2) = e0
      | op(e0,e3) = e0
      | op(e0,e4) = e0 )
    & ( op(e0,e0) = e0
      | op(e1,e0) = e0
      | op(e2,e0) = e0
      | op(e3,e0) = e0
      | op(e4,e0) = e0 )
    & ( op(e0,e0) = e1
      | op(e0,e1) = e1
      | op(e0,e2) = e1
      | op(e0,e3) = e1
      | op(e0,e4) = e1 )
    & ( op(e0,e0) = e1
      | op(e1,e0) = e1
      | op(e2,e0) = e1
      | op(e3,e0) = e1
      | op(e4,e0) = e1 )
    & ( op(e0,e0) = e2
      | op(e0,e1) = e2
      | op(e0,e2) = e2
      | op(e0,e3) = e2
      | op(e0,e4) = e2 )
    & ( op(e0,e0) = e2
      | op(e1,e0) = e2
      | op(e2,e0) = e2
      | op(e3,e0) = e2
      | op(e4,e0) = e2 )
    & ( op(e0,e0) = e3
      | op(e0,e1) = e3
      | op(e0,e2) = e3
      | op(e0,e3) = e3
      | op(e0,e4) = e3 )
    & ( op(e0,e0) = e3
      | op(e1,e0) = e3
      | op(e2,e0) = e3
      | op(e3,e0) = e3
      | op(e4,e0) = e3 )
    & ( op(e0,e0) = e4
      | op(e0,e1) = e4
      | op(e0,e2) = e4
      | op(e0,e3) = e4
      | op(e0,e4) = e4 )
    & ( op(e0,e0) = e4
      | op(e1,e0) = e4
      | op(e2,e0) = e4
      | op(e3,e0) = e4
      | op(e4,e0) = e4 )
    & ( op(e1,e0) = e0
      | op(e1,e1) = e0
      | op(e1,e2) = e0
      | op(e1,e3) = e0
      | op(e1,e4) = e0 )
    & ( op(e0,e1) = e0
      | op(e1,e1) = e0
      | op(e2,e1) = e0
      | op(e3,e1) = e0
      | op(e4,e1) = e0 )
    & ( op(e1,e0) = e1
      | op(e1,e1) = e1
      | op(e1,e2) = e1
      | op(e1,e3) = e1
      | op(e1,e4) = e1 )
    & ( op(e0,e1) = e1
      | op(e1,e1) = e1
      | op(e2,e1) = e1
      | op(e3,e1) = e1
      | op(e4,e1) = e1 )
    & ( op(e1,e0) = e2
      | op(e1,e1) = e2
      | op(e1,e2) = e2
      | op(e1,e3) = e2
      | op(e1,e4) = e2 )
    & ( op(e0,e1) = e2
      | op(e1,e1) = e2
      | op(e2,e1) = e2
      | op(e3,e1) = e2
      | op(e4,e1) = e2 )
    & ( op(e1,e0) = e3
      | op(e1,e1) = e3
      | op(e1,e2) = e3
      | op(e1,e3) = e3
      | op(e1,e4) = e3 )
    & ( op(e0,e1) = e3
      | op(e1,e1) = e3
      | op(e2,e1) = e3
      | op(e3,e1) = e3
      | op(e4,e1) = e3 )
    & ( op(e1,e0) = e4
      | op(e1,e1) = e4
      | op(e1,e2) = e4
      | op(e1,e3) = e4
      | op(e1,e4) = e4 )
    & ( op(e0,e1) = e4
      | op(e1,e1) = e4
      | op(e2,e1) = e4
      | op(e3,e1) = e4
      | op(e4,e1) = e4 )
    & ( op(e2,e0) = e0
      | op(e2,e1) = e0
      | op(e2,e2) = e0
      | op(e2,e3) = e0
      | op(e2,e4) = e0 )
    & ( op(e0,e2) = e0
      | op(e1,e2) = e0
      | op(e2,e2) = e0
      | op(e3,e2) = e0
      | op(e4,e2) = e0 )
    & ( op(e2,e0) = e1
      | op(e2,e1) = e1
      | op(e2,e2) = e1
      | op(e2,e3) = e1
      | op(e2,e4) = e1 )
    & ( op(e0,e2) = e1
      | op(e1,e2) = e1
      | op(e2,e2) = e1
      | op(e3,e2) = e1
      | op(e4,e2) = e1 )
    & ( op(e2,e0) = e2
      | op(e2,e1) = e2
      | op(e2,e2) = e2
      | op(e2,e3) = e2
      | op(e2,e4) = e2 )
    & ( op(e0,e2) = e2
      | op(e1,e2) = e2
      | op(e2,e2) = e2
      | op(e3,e2) = e2
      | op(e4,e2) = e2 )
    & ( op(e2,e0) = e3
      | op(e2,e1) = e3
      | op(e2,e2) = e3
      | op(e2,e3) = e3
      | op(e2,e4) = e3 )
    & ( op(e0,e2) = e3
      | op(e1,e2) = e3
      | op(e2,e2) = e3
      | op(e3,e2) = e3
      | op(e4,e2) = e3 )
    & ( op(e2,e0) = e4
      | op(e2,e1) = e4
      | op(e2,e2) = e4
      | op(e2,e3) = e4
      | op(e2,e4) = e4 )
    & ( op(e0,e2) = e4
      | op(e1,e2) = e4
      | op(e2,e2) = e4
      | op(e3,e2) = e4
      | op(e4,e2) = e4 )
    & ( op(e3,e0) = e0
      | op(e3,e1) = e0
      | op(e3,e2) = e0
      | op(e3,e3) = e0
      | op(e3,e4) = e0 )
    & ( op(e0,e3) = e0
      | op(e1,e3) = e0
      | op(e2,e3) = e0
      | op(e3,e3) = e0
      | op(e4,e3) = e0 )
    & ( op(e3,e0) = e1
      | op(e3,e1) = e1
      | op(e3,e2) = e1
      | op(e3,e3) = e1
      | op(e3,e4) = e1 )
    & ( op(e0,e3) = e1
      | op(e1,e3) = e1
      | op(e2,e3) = e1
      | op(e3,e3) = e1
      | op(e4,e3) = e1 )
    & ( op(e3,e0) = e2
      | op(e3,e1) = e2
      | op(e3,e2) = e2
      | op(e3,e3) = e2
      | op(e3,e4) = e2 )
    & ( op(e0,e3) = e2
      | op(e1,e3) = e2
      | op(e2,e3) = e2
      | op(e3,e3) = e2
      | op(e4,e3) = e2 )
    & ( op(e3,e0) = e3
      | op(e3,e1) = e3
      | op(e3,e2) = e3
      | op(e3,e3) = e3
      | op(e3,e4) = e3 )
    & ( op(e0,e3) = e3
      | op(e1,e3) = e3
      | op(e2,e3) = e3
      | op(e3,e3) = e3
      | op(e4,e3) = e3 )
    & ( op(e3,e0) = e4
      | op(e3,e1) = e4
      | op(e3,e2) = e4
      | op(e3,e3) = e4
      | op(e3,e4) = e4 )
    & ( op(e0,e3) = e4
      | op(e1,e3) = e4
      | op(e2,e3) = e4
      | op(e3,e3) = e4
      | op(e4,e3) = e4 )
    & ( op(e4,e0) = e0
      | op(e4,e1) = e0
      | op(e4,e2) = e0
      | op(e4,e3) = e0
      | op(e4,e4) = e0 )
    & ( op(e0,e4) = e0
      | op(e1,e4) = e0
      | op(e2,e4) = e0
      | op(e3,e4) = e0
      | op(e4,e4) = e0 )
    & ( op(e4,e0) = e1
      | op(e4,e1) = e1
      | op(e4,e2) = e1
      | op(e4,e3) = e1
      | op(e4,e4) = e1 )
    & ( op(e0,e4) = e1
      | op(e1,e4) = e1
      | op(e2,e4) = e1
      | op(e3,e4) = e1
      | op(e4,e4) = e1 )
    & ( op(e4,e0) = e2
      | op(e4,e1) = e2
      | op(e4,e2) = e2
      | op(e4,e3) = e2
      | op(e4,e4) = e2 )
    & ( op(e0,e4) = e2
      | op(e1,e4) = e2
      | op(e2,e4) = e2
      | op(e3,e4) = e2
      | op(e4,e4) = e2 )
    & ( op(e4,e0) = e3
      | op(e4,e1) = e3
      | op(e4,e2) = e3
      | op(e4,e3) = e3
      | op(e4,e4) = e3 )
    & ( op(e0,e4) = e3
      | op(e1,e4) = e3
      | op(e2,e4) = e3
      | op(e3,e4) = e3
      | op(e4,e4) = e3 )
    & ( op(e4,e0) = e4
      | op(e4,e1) = e4
      | op(e4,e2) = e4
      | op(e4,e3) = e4
      | op(e4,e4) = e4 )
    & ( op(e0,e4) = e4
      | op(e1,e4) = e4
      | op(e2,e4) = e4
      | op(e3,e4) = e4
      | op(e4,e4) = e4 ) ) ).

fof(ax4,axiom,
    ( op(e0,e0) != op(e1,e0)
    & op(e0,e0) != op(e2,e0)
    & op(e0,e0) != op(e3,e0)
    & op(e0,e0) != op(e4,e0)
    & op(e1,e0) != op(e2,e0)
    & op(e1,e0) != op(e3,e0)
    & op(e1,e0) != op(e4,e0)
    & op(e2,e0) != op(e3,e0)
    & op(e2,e0) != op(e4,e0)
    & op(e3,e0) != op(e4,e0)
    & op(e0,e1) != op(e1,e1)
    & op(e0,e1) != op(e2,e1)
    & op(e0,e1) != op(e3,e1)
    & op(e0,e1) != op(e4,e1)
    & op(e1,e1) != op(e2,e1)
    & op(e1,e1) != op(e3,e1)
    & op(e1,e1) != op(e4,e1)
    & op(e2,e1) != op(e3,e1)
    & op(e2,e1) != op(e4,e1)
    & op(e3,e1) != op(e4,e1)
    & op(e0,e2) != op(e1,e2)
    & op(e0,e2) != op(e2,e2)
    & op(e0,e2) != op(e3,e2)
    & op(e0,e2) != op(e4,e2)
    & op(e1,e2) != op(e2,e2)
    & op(e1,e2) != op(e3,e2)
    & op(e1,e2) != op(e4,e2)
    & op(e2,e2) != op(e3,e2)
    & op(e2,e2) != op(e4,e2)
    & op(e3,e2) != op(e4,e2)
    & op(e0,e3) != op(e1,e3)
    & op(e0,e3) != op(e2,e3)
    & op(e0,e3) != op(e3,e3)
    & op(e0,e3) != op(e4,e3)
    & op(e1,e3) != op(e2,e3)
    & op(e1,e3) != op(e3,e3)
    & op(e1,e3) != op(e4,e3)
    & op(e2,e3) != op(e3,e3)
    & op(e2,e3) != op(e4,e3)
    & op(e3,e3) != op(e4,e3)
    & op(e0,e4) != op(e1,e4)
    & op(e0,e4) != op(e2,e4)
    & op(e0,e4) != op(e3,e4)
    & op(e0,e4) != op(e4,e4)
    & op(e1,e4) != op(e2,e4)
    & op(e1,e4) != op(e3,e4)
    & op(e1,e4) != op(e4,e4)
    & op(e2,e4) != op(e3,e4)
    & op(e2,e4) != op(e4,e4)
    & op(e3,e4) != op(e4,e4)
    & op(e0,e0) != op(e0,e1)
    & op(e0,e0) != op(e0,e2)
    & op(e0,e0) != op(e0,e3)
    & op(e0,e0) != op(e0,e4)
    & op(e0,e1) != op(e0,e2)
    & op(e0,e1) != op(e0,e3)
    & op(e0,e1) != op(e0,e4)
    & op(e0,e2) != op(e0,e3)
    & op(e0,e2) != op(e0,e4)
    & op(e0,e3) != op(e0,e4)
    & op(e1,e0) != op(e1,e1)
    & op(e1,e0) != op(e1,e2)
    & op(e1,e0) != op(e1,e3)
    & op(e1,e0) != op(e1,e4)
    & op(e1,e1) != op(e1,e2)
    & op(e1,e1) != op(e1,e3)
    & op(e1,e1) != op(e1,e4)
    & op(e1,e2) != op(e1,e3)
    & op(e1,e2) != op(e1,e4)
    & op(e1,e3) != op(e1,e4)
    & op(e2,e0) != op(e2,e1)
    & op(e2,e0) != op(e2,e2)
    & op(e2,e0) != op(e2,e3)
    & op(e2,e0) != op(e2,e4)
    & op(e2,e1) != op(e2,e2)
    & op(e2,e1) != op(e2,e3)
    & op(e2,e1) != op(e2,e4)
    & op(e2,e2) != op(e2,e3)
    & op(e2,e2) != op(e2,e4)
    & op(e2,e3) != op(e2,e4)
    & op(e3,e0) != op(e3,e1)
    & op(e3,e0) != op(e3,e2)
    & op(e3,e0) != op(e3,e3)
    & op(e3,e0) != op(e3,e4)
    & op(e3,e1) != op(e3,e2)
    & op(e3,e1) != op(e3,e3)
    & op(e3,e1) != op(e3,e4)
    & op(e3,e2) != op(e3,e3)
    & op(e3,e2) != op(e3,e4)
    & op(e3,e3) != op(e3,e4)
    & op(e4,e0) != op(e4,e1)
    & op(e4,e0) != op(e4,e2)
    & op(e4,e0) != op(e4,e3)
    & op(e4,e0) != op(e4,e4)
    & op(e4,e1) != op(e4,e2)
    & op(e4,e1) != op(e4,e3)
    & op(e4,e1) != op(e4,e4)
    & op(e4,e2) != op(e4,e3)
    & op(e4,e2) != op(e4,e4)
    & op(e4,e3) != op(e4,e4) ) ).

fof(ax5,axiom,
    ( e0 != e1
    & e0 != e2
    & e0 != e3
    & e0 != e4
    & e1 != e2
    & e1 != e3
    & e1 != e4
    & e2 != e3
    & e2 != e4
    & e3 != e4 ) ).

fof(ax6,axiom,
    ( ( op(e0,e0) = e0
      | op(e1,e1) = e0
      | op(e2,e2) = e0
      | op(e3,e3) = e0
      | op(e4,e4) = e0 )
    & ( op(e0,e0) = e1
      | op(e1,e1) = e1
      | op(e2,e2) = e1
      | op(e3,e3) = e1
      | op(e4,e4) = e1 )
    & ( op(e0,e0) = e2
      | op(e1,e1) = e2
      | op(e2,e2) = e2
      | op(e3,e3) = e2
      | op(e4,e4) = e2 )
    & ( op(e0,e0) = e3
      | op(e1,e1) = e3
      | op(e2,e2) = e3
      | op(e3,e3) = e3
      | op(e4,e4) = e3 )
    & ( op(e0,e0) = e4
      | op(e1,e1) = e4
      | op(e2,e2) = e4
      | op(e3,e3) = e4
      | op(e4,e4) = e4 ) ) ).

fof(ax7,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax8,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax9,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax10,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax11,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax12,axiom,
    ~ ( e0 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax13,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax14,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax15,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax16,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax17,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax18,axiom,
    ~ ( e0 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax19,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax20,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax21,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax22,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax23,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax24,axiom,
    ~ ( e0 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax25,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax26,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax27,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax28,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax29,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax30,axiom,
    ~ ( e0 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax31,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax32,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax33,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax34,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax35,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax36,axiom,
    ~ ( e1 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax37,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax38,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax39,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax40,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax41,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax42,axiom,
    ~ ( e1 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax43,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax44,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax45,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax46,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

fof(ax47,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax48,axiom,
    ~ ( e1 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

fof(ax49,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax50,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax51,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax52,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax53,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax54,axiom,
    ~ ( e1 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax55,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax56,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax57,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax58,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax59,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax60,axiom,
    ~ ( e2 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax61,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax62,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax63,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax64,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax65,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax66,axiom,
    ~ ( e2 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax67,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax68,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax69,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e4 = op(e3,e3) ) ).

fof(ax70,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e4 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

fof(ax71,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax72,axiom,
    ~ ( e2 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e4 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

fof(ax73,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax74,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax75,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e3 = op(e4,e4) ) ).

fof(ax76,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e3 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax77,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax78,axiom,
    ~ ( e2 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e3 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax79,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax80,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax81,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e4 = op(e0,e0) ) ).

fof(ax82,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e4 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax83,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax84,axiom,
    ~ ( e3 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e4 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax85,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax86,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax87,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e4 = op(e1,e1) ) ).

fof(ax88,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e4 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax89,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax90,axiom,
    ~ ( e3 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e4 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax91,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax92,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax93,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e4 = op(e2,e2) ) ).

fof(ax94,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e4 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax95,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax96,axiom,
    ~ ( e3 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e4 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax97,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax98,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e0 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax99,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e2 = op(e4,e4) ) ).

fof(ax100,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e1 = op(op(e4,e4),op(e4,e4))
      & e2 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax101,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e0 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e1 = op(e4,e4) ) ).

fof(ax102,axiom,
    ~ ( e3 = op(e4,op(op(e4,e4),op(e4,e4)))
      & e2 = op(op(e4,e4),op(e4,e4))
      & e1 = op(op(op(e4,e4),op(e4,e4)),op(op(e4,e4),op(e4,e4)))
      & e0 = op(e4,e4) ) ).

fof(ax103,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax104,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e1 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax105,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e3 = op(e0,e0) ) ).

fof(ax106,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e2 = op(op(e0,e0),op(e0,e0))
      & e3 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax107,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e1 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e2 = op(e0,e0) ) ).

fof(ax108,axiom,
    ~ ( e4 = op(e0,op(op(e0,e0),op(e0,e0)))
      & e3 = op(op(e0,e0),op(e0,e0))
      & e2 = op(op(op(e0,e0),op(e0,e0)),op(op(e0,e0),op(e0,e0)))
      & e1 = op(e0,e0) ) ).

fof(ax109,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax110,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e0 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax111,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e3 = op(e1,e1) ) ).

fof(ax112,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e2 = op(op(e1,e1),op(e1,e1))
      & e3 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax113,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e0 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e2 = op(e1,e1) ) ).

fof(ax114,axiom,
    ~ ( e4 = op(e1,op(op(e1,e1),op(e1,e1)))
      & e3 = op(op(e1,e1),op(e1,e1))
      & e2 = op(op(op(e1,e1),op(e1,e1)),op(op(e1,e1),op(e1,e1)))
      & e0 = op(e1,e1) ) ).

fof(ax115,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax116,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e0 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax117,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e3 = op(e2,e2) ) ).

fof(ax118,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e1 = op(op(e2,e2),op(e2,e2))
      & e3 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax119,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e0 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e1 = op(e2,e2) ) ).

fof(ax120,axiom,
    ~ ( e4 = op(e2,op(op(e2,e2),op(e2,e2)))
      & e3 = op(op(e2,e2),op(e2,e2))
      & e1 = op(op(op(e2,e2),op(e2,e2)),op(op(e2,e2),op(e2,e2)))
      & e0 = op(e2,e2) ) ).

fof(ax121,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax122,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e0 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax123,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e2 = op(e3,e3) ) ).

fof(ax124,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e1 = op(op(e3,e3),op(e3,e3))
      & e2 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

fof(ax125,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e0 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e1 = op(e3,e3) ) ).

fof(ax126,axiom,
    ~ ( e4 = op(e3,op(op(e3,e3),op(e3,e3)))
      & e2 = op(op(e3,e3),op(e3,e3))
      & e1 = op(op(op(e3,e3),op(e3,e3)),op(op(e3,e3),op(e3,e3)))
      & e0 = op(e3,e3) ) ).

%--------------------------------------------------------------------------
