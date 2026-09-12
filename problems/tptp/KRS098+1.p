%------------------------------------------------------------------------------
% File     : KRS098+1 : TPTP v9.3.1. Released v3.1.0.
% Domain   : Knowledge Representation (Semantic Web)
% Problem  : DL Test: heinsohn3.2
% Version  : Especial.
% English  : Tbox tests from [HK+94]

% Refs     : [HK+94] Heinsohn et al. (1994), An Empirical Analysis of Termi
%          : [Bec03] Bechhofer (2003), Email to G. Sutcliffe
%          : [TR+04] Tsarkov et al. (2004), Using Vampire to Reason with OW
% Source   : [Bec03]
% Names    : inconsistent_description-logic-Manifest108 [Bec03]

% Status   : Unsatisfiable
% Rating   : 0.14 v9.3.0, 0.17 v9.1.0, 0.20 v9.0.0, 0.14 v8.2.0, 0.00 v3.1.0
% Syntax   : Number of formulae    :   39 (   1 unt;   0 def)
%            Number of atoms       :  123 (  29 equ)
%            Maximal formula atoms :   22 (   3 avg)
%            Number of connectives :   91 (   7   ~;   1   |;  46   &)
%                                         (   3 <=>;  34  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   13 (   5 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :   18 (  17 usr;   0 prp; 1-2 aty)
%            Number of functors    :    1 (   1 usr;   1 con; 0-0 aty)
%            Number of variables   :   99 (  91   !;   8   ?)
% SPC      : FOF_UNS_RFO_SEQ

% Comments : Sean Bechhofer says there are some errors in the encoding of
%            datatypes, so this problem may not be perfect. At least it's
%            still representative of the type of reasoning required for OWL.
%          : Tests incoherency caused by number restrictions and role hierarchy
%------------------------------------------------------------------------------
fof(cUnsatisfiable_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cUnsatisfiable(A) )
     => cUnsatisfiable(B) ) ).

fof(ca_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & ca(A) )
     => ca(B) ) ).

fof(cc_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cc(A) )
     => cc(B) ) ).

fof(cd_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & cd(A) )
     => cd(B) ) ).

fof(ce_substitution_1,axiom,
    ! [A,B] :
      ( ( A = B
        & ce(A) )
     => ce(B) ) ).

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

fof(rr1_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr1(A,C) )
     => rr1(B,C) ) ).

fof(rr1_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr1(C,A) )
     => rr1(C,B) ) ).

fof(rr2_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr2(A,C) )
     => rr2(B,C) ) ).

fof(rr2_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr2(C,A) )
     => rr2(C,B) ) ).

fof(rr3_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr3(A,C) )
     => rr3(B,C) ) ).

fof(rr3_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rr3(C,A) )
     => rr3(C,B) ) ).

fof(rt1_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt1(A,C) )
     => rt1(B,C) ) ).

fof(rt1_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt1(C,A) )
     => rt1(C,B) ) ).

fof(rt2_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt2(A,C) )
     => rt2(B,C) ) ).

fof(rt2_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt2(C,A) )
     => rt2(C,B) ) ).

fof(rt3_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt3(A,C) )
     => rt3(B,C) ) ).

fof(rt3_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rt3(C,A) )
     => rt3(C,B) ) ).

fof(rtt_substitution_1,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rtt(A,C) )
     => rtt(B,C) ) ).

fof(rtt_substitution_2,axiom,
    ! [A,B,C] :
      ( ( A = B
        & rtt(C,A) )
     => rtt(C,B) ) ).

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
    <=> ( ? [Y] :
            ( rr3(X,Y)
            & ? [Z] :
                ( rt3(Y,Z)
                & ce(Z) )
            & ! [Z0,Z1] :
                ( ( rtt(Y,Z0)
                  & rtt(Y,Z1) )
               => Z0 = Z1 ) )
        & ? [Y] :
            ( rr2(X,Y)
            & ! [Z0,Z1] :
                ( ( rtt(Y,Z0)
                  & rtt(Y,Z1) )
               => Z0 = Z1 )
            & ? [Z] :
                ( rt2(Y,Z)
                & cd(Z) ) )
        & ~ ? [Y0,Y1] :
              ( rr(X,Y0)
              & rr(X,Y1)
              & Y0 != Y1 )
        & ? [Y] :
            ( rr1(X,Y)
            & ! [Z0,Z1] :
                ( ( rtt(Y,Z0)
                  & rtt(Y,Z1) )
               => Z0 = Z1 )
            & ? [Z] :
                ( rt1(Y,Z)
                & cc(Z) ) ) ) ) ).

%----Equality ca
fof(axiom_3,axiom,
    ! [X] :
      ( ca(X)
    <=> ( cc(X)
        | cd(X) ) ) ).

%----i2003_11_14_17_20_25524
fof(axiom_4,axiom,
    cUnsatisfiable(i2003_11_14_17_20_25524) ).

fof(axiom_5,axiom,
    ! [X] :
      ~ ( cc(X)
        & cd(X) ) ).

fof(axiom_6,axiom,
    ! [X] :
      ~ ( ce(X)
        & cc(X) ) ).

fof(axiom_7,axiom,
    ! [X] :
      ~ ( ce(X)
        & cd(X) ) ).

fof(axiom_8,axiom,
    ! [X,Y] :
      ( rr1(X,Y)
     => rr(X,Y) ) ).

fof(axiom_9,axiom,
    ! [X,Y] :
      ( rr2(X,Y)
     => rr(X,Y) ) ).

fof(axiom_10,axiom,
    ! [X,Y] :
      ( rt1(X,Y)
     => rtt(X,Y) ) ).

fof(axiom_11,axiom,
    ! [X,Y] :
      ( rt2(X,Y)
     => rtt(X,Y) ) ).

fof(axiom_12,axiom,
    ! [X,Y] :
      ( rr3(X,Y)
     => rr(X,Y) ) ).

fof(axiom_13,axiom,
    ! [X,Y] :
      ( rt3(X,Y)
     => rtt(X,Y) ) ).

%------------------------------------------------------------------------------
