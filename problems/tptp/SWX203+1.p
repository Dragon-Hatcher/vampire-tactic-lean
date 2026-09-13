%------------------------------------------------------------------------------
% File     : SWX203+1 : TPTP v9.3.1. Released v9.3.0.
% Domain   : Software Verification
% Problem  : Faulty property about sortedness
% Version  : Especial.
% English  :

% Refs     : [CST26] Claessen et al. (2026), Email to Geoff Sutcliffe
% Source   : [CST26]
% Names    : MergeSort_psorted_rev.p [CST26]

% Status   : Theorem
% Rating   : 0.43 v9.3.0
% Syntax   : Number of formulae    :   22 (  17 unt;   0 def)
%            Number of atoms       :   31 (  12 equ)
%            Maximal formula atoms :    3 (   1 avg)
%            Number of connectives :   15 (   6   ~;   1   |;   2   &)
%                                         (   4 <=>;   2  =>;   0  <=;   0 <~>)
%            Maximal formula depth :    6 (   3 avg)
%            Maximal term depth    :    4 (   1 avg)
%            Number of predicates  :    5 (   4 usr;   0 prp; 1-2 aty)
%            Number of functors    :   10 (  10 usr;   2 con; 0-2 aty)
%            Number of variables   :   31 (  30   !;   1   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments :
%------------------------------------------------------------------------------
fof(axiom_001,axiom,
    ! [X,X2] : head(cons(X,X2)) = X ).

fof(axiom_002,axiom,
    ! [X,X2] : tail(cons(X,X2)) = X2 ).

fof(axiom_003,axiom,
    ! [X,X2] : nil != cons(X,X2) ).

fof(axiom_004,axiom,
    ! [X] : proj1S(s(X)) = X ).

fof(axiom_005,axiom,
    ! [X] : z != s(X) ).

fof(axiom_006,axiom,
    ! [Y] : leqNat(z,Y) ).

fof(axiom_007,axiom,
    ! [Z] : ~ leqNat(s(Z),z) ).

fof(axiom_008,axiom,
    ! [Z,M] :
      ( leqNat(s(Z),s(M))
    <=> leqNat(Z,M) ) ).

fof(axiom_009,axiom,
    sorted(nil) ).

fof(axiom_010,axiom,
    ! [Y] : sorted(cons(Y,nil)) ).

fof(axiom_011,axiom,
    ! [Y,Y2,Xs] :
      ( sorted(cons(Y,cons(Y2,Xs)))
    <=> ( leqNat(Y,Y2)
        & sorted(cons(Y2,Xs)) ) ) ).

fof(axiom_012,axiom,
    lengthNat(nil) = z ).

fof(axiom_013,axiom,
    ! [Y,Xs] : lengthNat(cons(Y,Xs)) = s(lengthNat(Xs)) ).

fof(axiom_014,axiom,
    ! [X] : ~ elemNat(X,nil) ).

fof(axiom_015,axiom,
    ! [X,Z,Xs] :
      ( elemNat(X,cons(Z,Xs))
    <=> ( X = Z
        | elemNat(X,Xs) ) ) ).

fof(axiom_016,axiom,
    unique(nil) ).

fof(axiom_017,axiom,
    ! [Y,Xs] :
      ( unique(cons(Y,Xs))
    <=> ( ~ elemNat(Y,Xs)
        & unique(Xs) ) ) ).

fof(axiom_018,axiom,
    ! [Y] : append(nil,Y) = Y ).

fof(axiom_019,axiom,
    ! [Y,Z,Xs] : append(cons(Z,Xs),Y) = cons(Z,append(Xs,Y)) ).

fof(axiom_020,axiom,
    rev(nil) = nil ).

fof(axiom_021,axiom,
    ! [Y,Xs] : rev(cons(Y,Xs)) = append(rev(Xs),cons(Y,nil)) ).

fof(goal_022,conjecture,
    ? [Xs] :
      ~ ( sorted(rev(Xs))
       => ( unique(Xs)
         => leqNat(lengthNat(Xs),s(s(s(z)))) ) ) ).

%------------------------------------------------------------------------------
