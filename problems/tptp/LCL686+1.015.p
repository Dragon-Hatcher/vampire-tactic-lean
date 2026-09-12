%------------------------------------------------------------------------------
% File     : LCL686+1.015 : TPTP v9.3.1. Released v4.0.0.
% Domain   : Logic Calculi (Modal Logic)
% Problem  : In S4, formula provable in S5 embedding, size 15
% Version  : Especial.
% English  :

% Refs     : [BHS00] Balsiger et al. (2000), A Benchmark Method for the Pro
%          : [Kam08] Kaminski (2008), Email to G. Sutcliffe
% Source   : [Kam08]
% Names    : s4_s5_p [BHS00]

% Status   : Theorem
% Rating   : 0.00 v9.1.0, 0.07 v9.0.0, 0.06 v8.2.0, 0.07 v8.1.0, 0.00 v7.5.0, 0.10 v7.4.0, 0.06 v7.3.0, 0.14 v7.2.0, 0.00 v6.2.0, 0.09 v6.1.0, 0.16 v6.0.0, 0.25 v5.5.0, 0.17 v5.4.0, 0.22 v5.2.0, 0.14 v5.0.0, 0.15 v4.1.0, 0.17 v4.0.1, 0.21 v4.0.0
% Syntax   : Number of formulae    :    3 (   1 unt;   0 def)
%            Number of atoms       :  444 (   0 equ)
%            Maximal formula atoms :  440 ( 148 avg)
%            Number of connectives :  797 ( 356   ~; 267   |; 173   &)
%                                         (   0 <=>;   1  =>;   0  <=;   0 <~>)
%            Maximal formula depth :  145 (  51 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :   47 (  46 usr;   1 prp; 0-2 aty)
%            Number of functors    :    0 (   0 usr;   0 con; --- aty)
%            Number of variables   :   97 (  96   !;   1   ?)
% SPC      : FOF_THM_RFO_NEQ

% Comments : A naive relational encoding of the modal logic problem into
%            first-order logic.
%------------------------------------------------------------------------------
fof(reflexivity,axiom,
    ! [X] : r1(X,X) ).

fof(transitivity,axiom,
    ! [X,Y,Z] :
      ( ( r1(X,Y)
        & r1(Y,Z) )
     => r1(X,Z) ) ).

fof(main,conjecture,
    ~ ? [X] :
        ~ ( ! [Y] :
              ( ~ r1(X,Y)
              | ~ p45(Y)
              | ! [X] :
                  ( ~ r1(Y,X)
                  | ~ p1(X) ) )
          | ! [Y] :
              ( ~ r1(X,Y)
              | ~ ! [X] :
                    ( ~ r1(Y,X)
                    | ~ ( ! [Y] :
                            ( ~ r1(X,Y)
                            | ! [X] :
                                ( ~ r1(Y,X)
                                | ! [Y] :
                                    ( ~ r1(X,Y)
                                    | ! [X] :
                                        ( ~ r1(Y,X)
                                        | ! [Y] :
                                            ( ~ r1(X,Y)
                                            | ! [X] :
                                                ( ~ r1(Y,X)
                                                | ! [Y] :
                                                    ( ~ r1(X,Y)
                                                    | ! [X] :
                                                        ( ~ r1(Y,X)
                                                        | ! [Y] :
                                                            ( ~ r1(X,Y)
                                                            | ! [X] :
                                                                ( ~ r1(Y,X)
                                                                | ! [Y] :
                                                                    ( ~ r1(X,Y)
                                                                    | ! [X] :
                                                                        ( ~ r1(Y,X)
                                                                        | ! [Y] :
                                                                            ( ~ r1(X,Y)
                                                                            | ! [X] :
                                                                                ( ~ r1(Y,X)
                                                                                | ! [Y] :
                                                                                    ( ~ r1(X,Y)
                                                                                    | ! [X] :
                                                                                        ( ~ r1(Y,X)
                                                                                        | ! [Y] :
                                                                                            ( ~ r1(X,Y)
                                                                                            | ! [X] :
                                                                                                ( ~ r1(Y,X)
                                                                                                | ! [Y] :
                                                                                                    ( ~ r1(X,Y)
                                                                                                    | ! [X] :
                                                                                                        ( ~ r1(Y,X)
                                                                                                        | ! [Y] :
                                                                                                            ( ~ r1(X,Y)
                                                                                                            | ! [X] :
                                                                                                                ( ~ r1(Y,X)
                                                                                                                | ! [Y] :
                                                                                                                    ( ~ r1(X,Y)
                                                                                                                    | ! [X] :
                                                                                                                        ( ~ r1(Y,X)
                                                                                                                        | ! [Y] :
                                                                                                                            ( ~ r1(X,Y)
                                                                                                                            | ! [X] :
                                                                                                                                ( ~ r1(Y,X)
                                                                                                                                | ! [Y] :
                                                                                                                                    ( ~ r1(X,Y)
                                                                                                                                    | ! [X] :
                                                                                                                                        ( ~ r1(Y,X)
                                                                                                                                        | ! [Y] :
                                                                                                                                            ( ~ r1(X,Y)
                                                                                                                                            | ! [X] :
                                                                                                                                                ( ~ r1(Y,X)
                                                                                                                                                | ! [Y] :
                                                                                                                                                    ( ~ r1(X,Y)
                                                                                                                                                    | ! [X] :
                                                                                                                                                        ( ~ r1(Y,X)
                                                                                                                                                        | ! [Y] :
                                                                                                                                                            ( ~ r1(X,Y)
                                                                                                                                                            | ! [X] :
                                                                                                                                                                ( ~ r1(Y,X)
                                                                                                                                                                | ! [Y] :
                                                                                                                                                                    ( ~ r1(X,Y)
                                                                                                                                                                    | ! [X] :
                                                                                                                                                                        ( ~ r1(Y,X)
                                                                                                                                                                        | ! [Y] :
                                                                                                                                                                            ( ~ r1(X,Y)
                                                                                                                                                                            | ! [X] :
                                                                                                                                                                                ( ~ r1(Y,X)
                                                                                                                                                                                | ! [Y] :
                                                                                                                                                                                    ( ~ r1(X,Y)
                                                                                                                                                                                    | ! [X] :
                                                                                                                                                                                        ( ~ r1(Y,X)
                                                                                                                                                                                        | ! [Y] :
                                                                                                                                                                                            ( ~ r1(X,Y)
                                                                                                                                                                                            | ! [X] :
                                                                                                                                                                                                ( ~ r1(Y,X)
                                                                                                                                                                                                | ! [Y] :
                                                                                                                                                                                                    ( ~ r1(X,Y)
                                                                                                                                                                                                    | $false )
                                                                                                                                                                                                | ~ ! [Y] :
                                                                                                                                                                                                      ( ~ r1(X,Y)
                                                                                                                                                                                                      | ~ ( ( p44(Y)
                                                                                                                                                                                                            & ~ p43(Y) )
                                                                                                                                                                                                          | ( ~ p44(Y)
                                                                                                                                                                                                            & p43(Y) ) ) ) )
                                                                                                                                                                                            | ~ ! [X] :
                                                                                                                                                                                                  ( ~ r1(Y,X)
                                                                                                                                                                                                  | ~ ( ( p43(X)
                                                                                                                                                                                                        & ~ p42(X) )
                                                                                                                                                                                                      | ( ~ p43(X)
                                                                                                                                                                                                        & p42(X) ) ) ) )
                                                                                                                                                                                        | ~ ! [Y] :
                                                                                                                                                                                              ( ~ r1(X,Y)
                                                                                                                                                                                              | ~ ( ( p42(Y)
                                                                                                                                                                                                    & ~ p41(Y) )
                                                                                                                                                                                                  | ( ~ p42(Y)
                                                                                                                                                                                                    & p41(Y) ) ) ) )
                                                                                                                                                                                    | ~ ! [X] :
                                                                                                                                                                                          ( ~ r1(Y,X)
                                                                                                                                                                                          | ~ ( ( p41(X)
                                                                                                                                                                                                & ~ p40(X) )
                                                                                                                                                                                              | ( ~ p41(X)
                                                                                                                                                                                                & p40(X) ) ) ) )
                                                                                                                                                                                | ~ ! [Y] :
                                                                                                                                                                                      ( ~ r1(X,Y)
                                                                                                                                                                                      | ~ ( ( p40(Y)
                                                                                                                                                                                            & ~ p39(Y) )
                                                                                                                                                                                          | ( ~ p40(Y)
                                                                                                                                                                                            & p39(Y) ) ) ) )
                                                                                                                                                                            | ~ ! [X] :
                                                                                                                                                                                  ( ~ r1(Y,X)
                                                                                                                                                                                  | ~ ( ( p39(X)
                                                                                                                                                                                        & ~ p38(X) )
                                                                                                                                                                                      | ( ~ p39(X)
                                                                                                                                                                                        & p38(X) ) ) ) )
                                                                                                                                                                        | ~ ! [Y] :
                                                                                                                                                                              ( ~ r1(X,Y)
                                                                                                                                                                              | ~ ( ( p38(Y)
                                                                                                                                                                                    & ~ p37(Y) )
                                                                                                                                                                                  | ( ~ p38(Y)
                                                                                                                                                                                    & p37(Y) ) ) ) )
                                                                                                                                                                    | ~ ! [X] :
                                                                                                                                                                          ( ~ r1(Y,X)
                                                                                                                                                                          | ~ ( ( p37(X)
                                                                                                                                                                                & ~ p36(X) )
                                                                                                                                                                              | ( ~ p37(X)
                                                                                                                                                                                & p36(X) ) ) ) )
                                                                                                                                                                | ~ ! [Y] :
                                                                                                                                                                      ( ~ r1(X,Y)
                                                                                                                                                                      | ~ ( ( p36(Y)
                                                                                                                                                                            & ~ p35(Y) )
                                                                                                                                                                          | ( ~ p36(Y)
                                                                                                                                                                            & p35(Y) ) ) ) )
                                                                                                                                                            | ~ ! [X] :
                                                                                                                                                                  ( ~ r1(Y,X)
                                                                                                                                                                  | ~ ( ( p35(X)
                                                                                                                                                                        & ~ p34(X) )
                                                                                                                                                                      | ( ~ p35(X)
                                                                                                                                                                        & p34(X) ) ) ) )
                                                                                                                                                        | ~ ! [Y] :
                                                                                                                                                              ( ~ r1(X,Y)
                                                                                                                                                              | ~ ( ( p34(Y)
                                                                                                                                                                    & ~ p33(Y) )
                                                                                                                                                                  | ( ~ p34(Y)
                                                                                                                                                                    & p33(Y) ) ) ) )
                                                                                                                                                    | ~ ! [X] :
                                                                                                                                                          ( ~ r1(Y,X)
                                                                                                                                                          | ~ ( ( p33(X)
                                                                                                                                                                & ~ p32(X) )
                                                                                                                                                              | ( ~ p33(X)
                                                                                                                                                                & p32(X) ) ) ) )
                                                                                                                                                | ~ ! [Y] :
                                                                                                                                                      ( ~ r1(X,Y)
                                                                                                                                                      | ~ ( ( p32(Y)
                                                                                                                                                            & ~ p31(Y) )
                                                                                                                                                          | ( ~ p32(Y)
                                                                                                                                                            & p31(Y) ) ) ) )
                                                                                                                                            | ~ ! [X] :
                                                                                                                                                  ( ~ r1(Y,X)
                                                                                                                                                  | ~ ( ( p31(X)
                                                                                                                                                        & ~ p30(X) )
                                                                                                                                                      | ( ~ p31(X)
                                                                                                                                                        & p30(X) ) ) ) )
                                                                                                                                        | ~ ! [Y] :
                                                                                                                                              ( ~ r1(X,Y)
                                                                                                                                              | ~ ( ( p30(Y)
                                                                                                                                                    & ~ p29(Y) )
                                                                                                                                                  | ( ~ p30(Y)
                                                                                                                                                    & p29(Y) ) ) ) )
                                                                                                                                    | ~ ! [X] :
                                                                                                                                          ( ~ r1(Y,X)
                                                                                                                                          | ~ ( ( p29(X)
                                                                                                                                                & ~ p28(X) )
                                                                                                                                              | ( ~ p29(X)
                                                                                                                                                & p28(X) ) ) ) )
                                                                                                                                | ~ ! [Y] :
                                                                                                                                      ( ~ r1(X,Y)
                                                                                                                                      | ~ ( ( p28(Y)
                                                                                                                                            & ~ p27(Y) )
                                                                                                                                          | ( ~ p28(Y)
                                                                                                                                            & p27(Y) ) ) ) )
                                                                                                                            | ~ ! [X] :
                                                                                                                                  ( ~ r1(Y,X)
                                                                                                                                  | ~ ( ( p27(X)
                                                                                                                                        & ~ p26(X) )
                                                                                                                                      | ( ~ p27(X)
                                                                                                                                        & p26(X) ) ) ) )
                                                                                                                        | ~ ! [Y] :
                                                                                                                              ( ~ r1(X,Y)
                                                                                                                              | ~ ( ( p26(Y)
                                                                                                                                    & ~ p25(Y) )
                                                                                                                                  | ( ~ p26(Y)
                                                                                                                                    & p25(Y) ) ) ) )
                                                                                                                    | ~ ! [X] :
                                                                                                                          ( ~ r1(Y,X)
                                                                                                                          | ~ ( ( p25(X)
                                                                                                                                & ~ p24(X) )
                                                                                                                              | ( ~ p25(X)
                                                                                                                                & p24(X) ) ) ) )
                                                                                                                | ~ ! [Y] :
                                                                                                                      ( ~ r1(X,Y)
                                                                                                                      | ~ ( ( p24(Y)
                                                                                                                            & ~ p23(Y) )
                                                                                                                          | ( ~ p24(Y)
                                                                                                                            & p23(Y) ) ) ) )
                                                                                                            | ~ ! [X] :
                                                                                                                  ( ~ r1(Y,X)
                                                                                                                  | ~ ( ( p23(X)
                                                                                                                        & ~ p22(X) )
                                                                                                                      | ( ~ p23(X)
                                                                                                                        & p22(X) ) ) ) )
                                                                                                        | ~ ! [Y] :
                                                                                                              ( ~ r1(X,Y)
                                                                                                              | ~ ( ( p22(Y)
                                                                                                                    & ~ p21(Y) )
                                                                                                                  | ( ~ p22(Y)
                                                                                                                    & p21(Y) ) ) ) )
                                                                                                    | ~ ! [X] :
                                                                                                          ( ~ r1(Y,X)
                                                                                                          | ~ ( ( p21(X)
                                                                                                                & ~ p20(X) )
                                                                                                              | ( ~ p21(X)
                                                                                                                & p20(X) ) ) ) )
                                                                                                | ~ ! [Y] :
                                                                                                      ( ~ r1(X,Y)
                                                                                                      | ~ ( ( p20(Y)
                                                                                                            & ~ p19(Y) )
                                                                                                          | ( ~ p20(Y)
                                                                                                            & p19(Y) ) ) ) )
                                                                                            | ~ ! [X] :
                                                                                                  ( ~ r1(Y,X)
                                                                                                  | ~ ( ( p19(X)
                                                                                                        & ~ p18(X) )
                                                                                                      | ( ~ p19(X)
                                                                                                        & p18(X) ) ) ) )
                                                                                        | ~ ! [Y] :
                                                                                              ( ~ r1(X,Y)
                                                                                              | ~ ( ( p18(Y)
                                                                                                    & ~ p17(Y) )
                                                                                                  | ( ~ p18(Y)
                                                                                                    & p17(Y) ) ) ) )
                                                                                    | ~ ! [X] :
                                                                                          ( ~ r1(Y,X)
                                                                                          | ~ ( ( p17(X)
                                                                                                & ~ p16(X) )
                                                                                              | ( ~ p17(X)
                                                                                                & p16(X) ) ) ) )
                                                                                | ~ ! [Y] :
                                                                                      ( ~ r1(X,Y)
                                                                                      | ~ ( ( p16(Y)
                                                                                            & ~ p15(Y) )
                                                                                          | ( ~ p16(Y)
                                                                                            & p15(Y) ) ) ) )
                                                                            | ~ ! [X] :
                                                                                  ( ~ r1(Y,X)
                                                                                  | ~ ( ( p15(X)
                                                                                        & ~ p14(X) )
                                                                                      | ( ~ p15(X)
                                                                                        & p14(X) ) ) ) )
                                                                        | ~ ! [Y] :
                                                                              ( ~ r1(X,Y)
                                                                              | ~ ( ( p14(Y)
                                                                                    & ~ p13(Y) )
                                                                                  | ( ~ p14(Y)
                                                                                    & p13(Y) ) ) ) )
                                                                    | ~ ! [X] :
                                                                          ( ~ r1(Y,X)
                                                                          | ~ ( ( p13(X)
                                                                                & ~ p12(X) )
                                                                              | ( ~ p13(X)
                                                                                & p12(X) ) ) ) )
                                                                | ~ ! [Y] :
                                                                      ( ~ r1(X,Y)
                                                                      | ~ ( ( p12(Y)
                                                                            & ~ p11(Y) )
                                                                          | ( ~ p12(Y)
                                                                            & p11(Y) ) ) ) )
                                                            | ~ ! [X] :
                                                                  ( ~ r1(Y,X)
                                                                  | ~ ( ( p11(X)
                                                                        & ~ p10(X) )
                                                                      | ( ~ p11(X)
                                                                        & p10(X) ) ) ) )
                                                        | ~ ! [Y] :
                                                              ( ~ r1(X,Y)
                                                              | ~ ( ( p10(Y)
                                                                    & ~ p9(Y) )
                                                                  | ( ~ p10(Y)
                                                                    & p9(Y) ) ) ) )
                                                    | ~ ! [X] :
                                                          ( ~ r1(Y,X)
                                                          | ~ ( ( p9(X)
                                                                & ~ p8(X) )
                                                              | ( ~ p9(X)
                                                                & p8(X) ) ) ) )
                                                | ~ ! [Y] :
                                                      ( ~ r1(X,Y)
                                                      | ~ ( ( p8(Y)
                                                            & ~ p7(Y) )
                                                          | ( ~ p8(Y)
                                                            & p7(Y) ) ) ) )
                                            | ~ ! [X] :
                                                  ( ~ r1(Y,X)
                                                  | ~ ( ( p7(X)
                                                        & ~ p6(X) )
                                                      | ( ~ p7(X)
                                                        & p6(X) ) ) ) )
                                        | ~ ! [Y] :
                                              ( ~ r1(X,Y)
                                              | ~ ( ( p6(Y)
                                                    & ~ p5(Y) )
                                                  | ( ~ p6(Y)
                                                    & p5(Y) ) ) ) )
                                    | ~ ! [X] :
                                          ( ~ r1(Y,X)
                                          | ~ ( ( p5(X)
                                                & ~ p4(X) )
                                              | ( ~ p5(X)
                                                & p4(X) ) ) ) )
                                | ~ ! [Y] :
                                      ( ~ r1(X,Y)
                                      | ~ ( ( p4(Y)
                                            & ~ p3(Y) )
                                          | ( ~ p4(Y)
                                            & p3(Y) ) ) ) )
                            | ~ ! [X] :
                                  ( ~ r1(Y,X)
                                  | ~ ( ( p3(X)
                                        & ~ p2(X) )
                                      | ( ~ p3(X)
                                        & p2(X) ) ) ) )
                        | ~ ! [Y] :
                              ( ~ r1(X,Y)
                              | ~ ( ( p2(Y)
                                    & ~ p1(Y) )
                                  | ( ~ p2(Y)
                                    & p1(Y) ) ) )
                        | ! [Y] :
                            ( ~ r1(X,Y)
                            | p45(Y) )
                        | ! [Y] :
                            ( ~ r1(X,Y)
                            | ( ~ p43(Y)
                              & ~ p44(Y) )
                            | ( p44(Y)
                              & p43(Y) )
                            | ( ~ p42(Y)
                              & ~ p43(Y) )
                            | ( p43(Y)
                              & p42(Y) )
                            | ( ~ p41(Y)
                              & ~ p42(Y) )
                            | ( p42(Y)
                              & p41(Y) )
                            | ( ~ p40(Y)
                              & ~ p41(Y) )
                            | ( p41(Y)
                              & p40(Y) )
                            | ( ~ p39(Y)
                              & ~ p40(Y) )
                            | ( p40(Y)
                              & p39(Y) )
                            | ( ~ p38(Y)
                              & ~ p39(Y) )
                            | ( p39(Y)
                              & p38(Y) )
                            | ( ~ p37(Y)
                              & ~ p38(Y) )
                            | ( p38(Y)
                              & p37(Y) )
                            | ( ~ p36(Y)
                              & ~ p37(Y) )
                            | ( p37(Y)
                              & p36(Y) )
                            | ( ~ p35(Y)
                              & ~ p36(Y) )
                            | ( p36(Y)
                              & p35(Y) )
                            | ( ~ p34(Y)
                              & ~ p35(Y) )
                            | ( p35(Y)
                              & p34(Y) )
                            | ( ~ p33(Y)
                              & ~ p34(Y) )
                            | ( p34(Y)
                              & p33(Y) )
                            | ( ~ p32(Y)
                              & ~ p33(Y) )
                            | ( p33(Y)
                              & p32(Y) )
                            | ( ~ p31(Y)
                              & ~ p32(Y) )
                            | ( p32(Y)
                              & p31(Y) )
                            | ( ~ p30(Y)
                              & ~ p31(Y) )
                            | ( p31(Y)
                              & p30(Y) )
                            | ( ~ p29(Y)
                              & ~ p30(Y) )
                            | ( p30(Y)
                              & p29(Y) )
                            | ( ~ p28(Y)
                              & ~ p29(Y) )
                            | ( p29(Y)
                              & p28(Y) )
                            | ( ~ p27(Y)
                              & ~ p28(Y) )
                            | ( p28(Y)
                              & p27(Y) )
                            | ( ~ p26(Y)
                              & ~ p27(Y) )
                            | ( p27(Y)
                              & p26(Y) )
                            | ( ~ p25(Y)
                              & ~ p26(Y) )
                            | ( p26(Y)
                              & p25(Y) )
                            | ( ~ p24(Y)
                              & ~ p25(Y) )
                            | ( p25(Y)
                              & p24(Y) )
                            | ( ~ p23(Y)
                              & ~ p24(Y) )
                            | ( p24(Y)
                              & p23(Y) )
                            | ( ~ p22(Y)
                              & ~ p23(Y) )
                            | ( p23(Y)
                              & p22(Y) )
                            | ( ~ p21(Y)
                              & ~ p22(Y) )
                            | ( p22(Y)
                              & p21(Y) )
                            | ( ~ p20(Y)
                              & ~ p21(Y) )
                            | ( p21(Y)
                              & p20(Y) )
                            | ( ~ p19(Y)
                              & ~ p20(Y) )
                            | ( p20(Y)
                              & p19(Y) )
                            | ( ~ p18(Y)
                              & ~ p19(Y) )
                            | ( p19(Y)
                              & p18(Y) )
                            | ( ~ p17(Y)
                              & ~ p18(Y) )
                            | ( p18(Y)
                              & p17(Y) )
                            | ( ~ p16(Y)
                              & ~ p17(Y) )
                            | ( p17(Y)
                              & p16(Y) )
                            | ( ~ p15(Y)
                              & ~ p16(Y) )
                            | ( p16(Y)
                              & p15(Y) )
                            | ( ~ p14(Y)
                              & ~ p15(Y) )
                            | ( p15(Y)
                              & p14(Y) )
                            | ( ~ p13(Y)
                              & ~ p14(Y) )
                            | ( p14(Y)
                              & p13(Y) )
                            | ( ~ p12(Y)
                              & ~ p13(Y) )
                            | ( p13(Y)
                              & p12(Y) )
                            | ( ~ p11(Y)
                              & ~ p12(Y) )
                            | ( p12(Y)
                              & p11(Y) )
                            | ( ~ p10(Y)
                              & ~ p11(Y) )
                            | ( p11(Y)
                              & p10(Y) )
                            | ( ~ p9(Y)
                              & ~ p10(Y) )
                            | ( p10(Y)
                              & p9(Y) )
                            | ( ~ p8(Y)
                              & ~ p9(Y) )
                            | ( p9(Y)
                              & p8(Y) )
                            | ( ~ p7(Y)
                              & ~ p8(Y) )
                            | ( p8(Y)
                              & p7(Y) )
                            | ( ~ p6(Y)
                              & ~ p7(Y) )
                            | ( p7(Y)
                              & p6(Y) )
                            | ( ~ p5(Y)
                              & ~ p6(Y) )
                            | ( p6(Y)
                              & p5(Y) )
                            | ( ~ p4(Y)
                              & ~ p5(Y) )
                            | ( p5(Y)
                              & p4(Y) )
                            | ( ~ p3(Y)
                              & ~ p4(Y) )
                            | ( p4(Y)
                              & p3(Y) )
                            | ( ~ p2(Y)
                              & ~ p3(Y) )
                            | ( p3(Y)
                              & p2(Y) )
                            | ( ~ p1(Y)
                              & ~ p2(Y) )
                            | ( p2(Y)
                              & p1(Y) ) ) ) ) ) ) ).

%------------------------------------------------------------------------------
