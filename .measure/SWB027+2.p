%------------------------------------------------------------------------------
% File     : SWB027+2 : TPTP v9.3.1. Released v5.2.0.
% Domain   : Semantic Web
% Problem  : Inferred Property Characteristics II
% Version  : [Sch11] axioms : Reduced > Incomplete.
% English  :

% Refs     : [Sch11] Schneider, M. (2011), Email to G. Sutcliffe
% Source   : [Sch11]
% Names    : 027_Inferred_Property_Characteristics_II [Sch11]

% Status   : Theorem
% Rating   : 0.26 v9.3.0, 0.21 v9.1.0, 0.18 v9.0.0, 0.19 v8.2.0, 0.14 v8.1.0, 0.17 v7.5.0, 0.19 v7.4.0, 0.13 v7.3.0, 0.10 v7.2.0, 0.07 v7.1.0, 0.04 v7.0.0, 0.10 v6.4.0, 0.15 v6.3.0, 0.17 v6.2.0, 0.20 v6.1.0, 0.23 v6.0.0, 0.26 v5.5.0, 0.22 v5.4.0, 0.18 v5.3.0, 0.26 v5.2.0
% Syntax   : Number of formulae    :    7 (   1 unt;   0 def)
%            Number of atoms       :   32 (   2 equ)
%            Maximal formula atoms :   11 (   4 avg)
%            Number of connectives :   25 (   0   ~;   0   |;  16   &)
%                                         (   6 <=>;   3  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   16 (   7 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    4 (   3 usr;   0 prp; 1-3 aty)
%            Number of functors    :    9 (   9 usr;   9 con; 0-0 aty)
%            Number of variables   :   23 (  20   !;   3   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments :
%------------------------------------------------------------------------------
fof(rdfs_cext_def,axiom,
    ! [X,C] :
      ( iext(uri_rdf_type,X,C)
    <=> icext(C,X) ) ).

fof(owl_eqdis_sameas,axiom,
    ! [X,Y] :
      ( iext(uri_owl_sameAs,X,Y)
    <=> X = Y ) ).

fof(owl_chain_002,axiom,
    ! [P,S1,P1,S2,P2] :
      ( ( iext(uri_rdf_first,S1,P1)
        & iext(uri_rdf_rest,S1,S2)
        & iext(uri_rdf_first,S2,P2)
        & iext(uri_rdf_rest,S2,uri_rdf_nil) )
     => ( iext(uri_owl_propertyChainAxiom,P,S1)
      <=> ( ip(P)
          & ip(P1)
          & ip(P2)
          & ! [Y0,Y1,Y2] :
              ( ( iext(P1,Y0,Y1)
                & iext(P2,Y1,Y2) )
             => iext(P,Y0,Y2) ) ) ) ) ).

fof(owl_char_inversefunctional,axiom,
    ! [P] :
      ( icext(uri_owl_InverseFunctionalProperty,P)
    <=> ( ip(P)
        & ! [X1,X2,Y] :
            ( ( iext(P,X1,Y)
              & iext(P,X2,Y) )
           => X1 = X2 ) ) ) ).

fof(owl_inv,axiom,
    ! [P1,P2] :
      ( iext(uri_owl_inverseOf,P1,P2)
    <=> ( ip(P1)
        & ip(P2)
        & ! [X,Y] :
            ( iext(P1,X,Y)
          <=> iext(P2,Y,X) ) ) ) ).

fof(testcase_conclusion_fullish_027_Inferred_Property_Characteristics_II,conjecture,
    iext(uri_rdf_type,uri_ex_p,uri_owl_InverseFunctionalProperty) ).

fof(testcase_premise_fullish_027_Inferred_Property_Characteristics_II,axiom,
    ? [BNODE_l1,BNODE_l2,BNODE_v] :
      ( iext(uri_owl_propertyChainAxiom,uri_owl_sameAs,BNODE_l1)
      & iext(uri_rdf_first,BNODE_l1,uri_ex_p)
      & iext(uri_rdf_rest,BNODE_l1,BNODE_l2)
      & iext(uri_rdf_first,BNODE_l2,BNODE_v)
      & iext(uri_rdf_rest,BNODE_l2,uri_rdf_nil)
      & iext(uri_owl_inverseOf,BNODE_v,uri_ex_p) ) ).

%------------------------------------------------------------------------------
