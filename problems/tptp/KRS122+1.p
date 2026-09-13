%------------------------------------------------------------------------------
% File     : KRS122+1 : TPTP v9.3.1. Released v3.1.0.
% Domain   : Knowledge Representation (Semantic Web)
% Problem  : DL Test: t7f.3
% Version  : Especial.
% English  :

% Refs     : [Bec03] Bechhofer (2003), Email to G. Sutcliffe
%          : [TR+04] Tsarkov et al. (2004), Using Vampire to Reason with OW
% Source   : [Bec03]
% Names    : inconsistent_description-logic-Manifest633 [Bec03]

% Status   : Unsatisfiable
% Rating   : 0.00 v3.1.0
% Syntax   : Number of formulae    :   31 (   1 unt;   0 def)
%            Number of atoms       :   86 (  20 equ)
%            Maximal formula atoms :    4 (   2 avg)
%            Number of connectives :   58 (   3   ~;   0   |;  25   &)
%                                         (   8 <=>;  22  =>;   0  <=;   0 <~>)
%            Maximal formula depth :    6 (   5 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :   15 (  14 usr;   0 prp; 1-2 aty)
%            Number of functors    :    1 (   1 usr;   1 con; 0-0 aty)
%            Number of variables   :   70 (  66   !;   4   ?)
% SPC      : FOF_UNS_RFO_SEQ

% Comments : Sean Bechhofer says there are some errors in the encoding of
%            datatypes, so this problem may not be perfect. At least it's
%            still representative of the type of reasoning required for OWL.
%------------------------------------------------------------------------------
fof(cUnsatisfiable_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cUnsatisfiable(A) )
     => cUnsatisfiable(B) ) ).

fof(ca_Ax2_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & ca_Ax2(A) )
     => ca_Ax2(B) ) ).

fof(ca_Vx3_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & ca_Vx3(A) )
     => ca_Vx3(B) ) ).

fof(cowlNothing_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cowlNothing(A) )
     => cowlNothing(B) ) ).

fof(cowlThing_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cowlThing(A) )
     => cowlThing(B) ) ).

fof(cp1_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cp1(A) )
     => cp1(B) ) ).

fof(cp1xcomp_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cp1xcomp(A) )
     => cp1xcomp(B) ) ).

fof(ra_Px1_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & ra_Px1(A,C) )
     => ra_Px1(B,C) ) ).

fof(ra_Px1_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & ra_Px1(C,A) )
     => ra_Px1(C,B) ) ).

fof(rf_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rf(A,C) )
     => rf(B,C) ) ).

fof(rf_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rf(C,A) )
     => rf(C,B) ) ).

fof(rinvF_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rinvF(A,C) )
     => rinvF(B,C) ) ).

fof(rinvF_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rinvF(C,A) )
     => rinvF(C,B) ) ).

fof(rinvR_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rinvR(A,C) )
     => rinvR(B,C) ) ).

fof(rinvR_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rinvR(C,A) )
     => rinvR(C,B) ) ).

fof(rr_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr(A,C) )
     => rr(B,C) ) ).

fof(rr_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr(C,A) )
     => rr(C,B) ) ).

fof(xsd_integer_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & xsd_integer(A) )
     => xsd_integer(B) ) ).

fof(xsd_string_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & xsd_string(A) )
     => xsd_string(B) ) ).

%----Thing and Nothing
fof(axiom_0,axiom,
    ! [X] :
      ( cowlThing(X)
      & ~ cowlNothing(X) ) ).

%----String and Integer disjoint
fof(axiom_1,axiom,
    ! [X] :
      ( xsd_string(X)
    <=> ~ xsd_integer(X) ) ).

%----Equality cUnsatisfiable
fof(axiom_2,axiom,
    ! [X] :
      ( cUnsatisfiable(X)
    <=> ? [Y] :
          ( rf(X,Y)
          & ca_Ax2(Y) ) ) ).

%----Equality cp1
fof(axiom_3,axiom,
    ! [X] :
      ( cp1(X)
    <=> ~ ? [Y] : ra_Px1(X,Y) ) ).

%----Equality cp1xcomp
fof(axiom_4,axiom,
    ! [X] :
      ( cp1xcomp(X)
    <=> ? [Y0] : ra_Px1(X,Y0) ) ).

%----Equality ca_Ax2
fof(axiom_5,axiom,
    ! [X] :
      ( ca_Ax2(X)
    <=> ( cp1(X)
        & ! [Y] :
            ( rinvF(X,Y)
           => ca_Vx3(Y) ) ) ) ).

%----Equality ca_Vx3
fof(axiom_6,axiom,
    ! [X] :
      ( ca_Vx3(X)
    <=> ? [Y] :
          ( rf(X,Y)
          & cp1xcomp(Y) ) ) ).

%----Functional: rf
fof(axiom_7,axiom,
    ! [X,Y,Z] :
      ( ( rf(X,Y)
        & rf(X,Z) )
     => Y = Z ) ).

%----Inverse: rinvF
fof(axiom_8,axiom,
    ! [X,Y] :
      ( rinvF(X,Y)
    <=> rf(Y,X) ) ).

%----Inverse: rinvR
fof(axiom_9,axiom,
    ! [X,Y] :
      ( rinvR(X,Y)
    <=> rr(Y,X) ) ).

%----Transitive: rr
fof(axiom_10,axiom,
    ! [X,Y,Z] :
      ( ( rr(X,Y)
        & rr(Y,Z) )
     => rr(X,Z) ) ).

%----i2003_11_14_17_21_55116
fof(axiom_11,axiom,
    cUnsatisfiable(i2003_11_14_17_21_55116) ).

%------------------------------------------------------------------------------
