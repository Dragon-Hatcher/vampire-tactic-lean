%------------------------------------------------------------------------------
% File     : LCL640+1.001 : TPTP v9.3.1. Released v4.0.0.
% Domain   : Logic Calculi (Modal Logic)
% Problem  : In K, formula with A4 and Dum leading to Dum, size 1
% Version  : Especial.
% English  : A4{box(p0->boxp0) -> p0/p0} & box A4 & Dum & Dum{p0->box p0/p0}
%            -> Dum1.

% Refs     : [BHS00] Balsiger et al. (2000), A Benchmark Method for the Pro
%          : [Kam08] Kaminski (2008), Email to G. Sutcliffe
% Source   : [Kam08]
% Names    : k_dum_p [BHS00]

% Status   : Theorem
% Rating   : 0.00 v9.3.0, 0.20 v9.1.0, 0.07 v9.0.0, 0.00 v8.2.0, 0.07 v7.5.0, 0.00 v7.4.0, 0.12 v7.3.0, 0.00 v6.4.0, 0.07 v6.3.0, 0.08 v6.2.0, 0.09 v6.1.0, 0.24 v6.0.0, 0.50 v5.5.0, 0.38 v5.4.0, 0.39 v5.2.0, 0.21 v5.1.0, 0.29 v5.0.0, 0.40 v4.1.0, 0.44 v4.0.1, 0.42 v4.0.0
% Syntax   : Number of formulae    :    1 (   0 unt;   0 def)
%            Number of atoms       :   62 (   0 equ)
%            Maximal formula atoms :   62 (  62 avg)
%            Number of connectives :  123 (  62   ~;  58   |;   3   &)
%                                         (   0 <=>;   0  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   27 (  27 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    2 (   2 usr;   0 prp; 1-2 aty)
%            Number of functors    :    0 (   0 usr;   0 con; --- aty)
%            Number of variables   :   35 (  34   !;   1   ?)
% SPC      : FOF_THM_RFO_NEQ

% Comments : A naive relational encoding of the modal logic problem into
%            first-order logic.
%------------------------------------------------------------------------------
fof(main,conjecture,
    ~ ? [X] :
        ~ ( ~ ! [Y] :
                ( ~ r1(X,Y)
                | ( ( ! [X] :
                        ( ~ r1(Y,X)
                        | p1(X) )
                    | ~ p1(Y)
                    | ! [X] :
                        ( ~ r1(Y,X)
                        | ~ ! [Y] :
                              ( ~ r1(X,Y)
                              | ! [X] :
                                  ( ~ r1(Y,X)
                                  | p1(X) )
                              | ~ p1(Y) ) )
                    | ~ ! [X] :
                          ( ~ r1(Y,X)
                          | ! [Y] :
                              ( ~ r1(X,Y)
                              | p1(Y) )
                          | ~ p1(X)
                          | ~ ! [Y] :
                                ( ~ r1(X,Y)
                                | ! [X] :
                                    ( ~ r1(Y,X)
                                    | ! [Y] :
                                        ( ~ r1(X,Y)
                                        | p1(Y) )
                                    | ~ p1(X) )
                                | ~ ( ! [X] :
                                        ( ~ r1(Y,X)
                                        | p1(X) )
                                    | ~ p1(Y) ) ) ) )
                  & ( p1(Y)
                    | ! [X] :
                        ( ~ r1(Y,X)
                        | ~ ! [Y] :
                              ( ~ r1(X,Y)
                              | p1(Y) ) )
                    | ~ ! [X] :
                          ( ~ r1(Y,X)
                          | p1(X)
                          | ~ ! [Y] :
                                ( ~ r1(X,Y)
                                | ! [X] :
                                    ( ~ r1(Y,X)
                                    | p1(X) )
                                | ~ p1(Y) ) ) )
                  & ! [X] :
                      ( ~ r1(Y,X)
                      | ! [Y] :
                          ( ~ r1(X,Y)
                          | ! [X] :
                              ( ~ r1(Y,X)
                              | p1(X) ) )
                      | ~ ! [Y] :
                            ( ~ r1(X,Y)
                            | p1(Y) ) )
                  & ( ! [X] :
                        ( ~ r1(Y,X)
                        | ! [Y] :
                            ( ~ r1(X,Y)
                            | p1(Y)
                            | ~ ! [X] :
                                  ( ~ r1(Y,X)
                                  | ! [Y] :
                                      ( ~ r1(X,Y)
                                      | p1(Y) )
                                  | ~ p1(X) ) ) )
                    | ~ ! [X] :
                          ( ~ r1(Y,X)
                          | p1(X)
                          | ~ ! [Y] :
                                ( ~ r1(X,Y)
                                | ! [X] :
                                    ( ~ r1(Y,X)
                                    | p1(X) )
                                | ~ p1(Y) ) ) ) ) )
          | ~ ~ ! [Y] :
                  ( ~ r1(X,Y)
                  | ! [X] :
                      ( ~ r1(Y,X)
                      | p1(X) )
                  | ! [X] :
                      ( ~ r1(Y,X)
                      | ~ ! [Y] :
                            ( ~ r1(X,Y)
                            | p1(Y) ) )
                  | ~ ! [X] :
                        ( ~ r1(Y,X)
                        | p1(X)
                        | ~ ! [Y] :
                              ( ~ r1(X,Y)
                              | ! [X] :
                                  ( ~ r1(Y,X)
                                  | p1(X) )
                              | ~ p1(Y) ) ) ) ) ).

%------------------------------------------------------------------------------
