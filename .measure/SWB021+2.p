%------------------------------------------------------------------------------
% File     : SWB021+2 : TPTP v9.3.1. Released v5.2.0.
% Domain   : Semantic Web
% Problem  : Composite Enumerations
% Version  : [Sch11] axioms : Reduced > Incomplete.
% English  :

% Refs     : [Sch11] Schneider, M. (2011), Email to G. Sutcliffe
% Source   : [Sch11]
% Names    : 021_Composite_Enumerations [Sch11]

% Status   : Theorem
% Rating   : 0.43 v9.3.0, 0.45 v9.1.0, 0.42 v9.0.0, 0.44 v8.2.0, 0.42 v8.1.0, 0.39 v7.5.0, 0.38 v7.4.0, 0.37 v7.3.0, 0.38 v7.1.0, 0.26 v7.0.0, 0.37 v6.4.0, 0.42 v6.3.0, 0.38 v6.2.0, 0.52 v6.1.0, 0.57 v6.0.0, 0.61 v5.5.0, 0.56 v5.4.0, 0.61 v5.3.0, 0.67 v5.2.0
% Syntax   : Number of formulae    :    8 (   1 unt;   0 def)
%            Number of atoms       :   66 (   5 equ)
%            Maximal formula atoms :   22 (   8 avg)
%            Number of connectives :   58 (   0   ~;   4   |;  41   &)
%                                         (   8 <=>;   5  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   31 (  11 avg)
%            Maximal term depth    :    1 (   1 avg)
%            Number of predicates  :    4 (   3 usr;   0 prp; 1-3 aty)
%            Number of functors    :   14 (  14 usr;  14 con; 0-0 aty)
%            Number of variables   :   36 (  27   !;   9   ?)
% SPC      : FOF_THM_RFO_SEQ

% Comments :
%------------------------------------------------------------------------------
fof(owl_prop_oneof_ext,axiom,
    ! [X,Y] :
      ( iext(uri_owl_oneOf,X,Y)
     => ( ic(X)
        & icext(uri_rdf_List,Y) ) ) ).

fof(owl_prop_unionof_ext,axiom,
    ! [X,Y] :
      ( iext(uri_owl_unionOf,X,Y)
     => ( ic(X)
        & icext(uri_rdf_List,Y) ) ) ).

fof(owl_bool_unionof_class_002,axiom,
    ! [Z,S1,C1,S2,C2] :
      ( ( iext(uri_rdf_first,S1,C1)
        & iext(uri_rdf_rest,S1,S2)
        & iext(uri_rdf_first,S2,C2)
        & iext(uri_rdf_rest,S2,uri_rdf_nil) )
     => ( iext(uri_owl_unionOf,Z,S1)
      <=> ( ic(Z)
          & ic(C1)
          & ic(C2)
          & ! [X] :
              ( icext(Z,X)
            <=> ( icext(C1,X)
                | icext(C2,X) ) ) ) ) ) ).

fof(owl_enum_class_002,axiom,
    ! [Z,S1,A1,S2,A2] :
      ( ( iext(uri_rdf_first,S1,A1)
        & iext(uri_rdf_rest,S1,S2)
        & iext(uri_rdf_first,S2,A2)
        & iext(uri_rdf_rest,S2,uri_rdf_nil) )
     => ( iext(uri_owl_oneOf,Z,S1)
      <=> ( ic(Z)
          & ! [X] :
              ( icext(Z,X)
            <=> ( X = A1
                | X = A2 ) ) ) ) ) ).

fof(owl_enum_class_003,axiom,
    ! [Z,S1,A1,S2,A2,S3,A3] :
      ( ( iext(uri_rdf_first,S1,A1)
        & iext(uri_rdf_rest,S1,S2)
        & iext(uri_rdf_first,S2,A2)
        & iext(uri_rdf_rest,S2,S3)
        & iext(uri_rdf_first,S3,A3)
        & iext(uri_rdf_rest,S3,uri_rdf_nil) )
     => ( iext(uri_owl_oneOf,Z,S1)
      <=> ( ic(Z)
          & ! [X] :
              ( icext(Z,X)
            <=> ( X = A1
                | X = A2
                | X = A3 ) ) ) ) ) ).

fof(owl_eqdis_equivalentclass,axiom,
    ! [C1,C2] :
      ( iext(uri_owl_equivalentClass,C1,C2)
    <=> ( ic(C1)
        & ic(C2)
        & ! [X] :
            ( icext(C1,X)
          <=> icext(C2,X) ) ) ) ).

fof(testcase_conclusion_fullish_021_Composite_Enumerations,conjecture,
    iext(uri_owl_equivalentClass,uri_ex_c3,uri_ex_c4) ).

fof(testcase_premise_fullish_021_Composite_Enumerations,axiom,
    ? [BNODE_l11,BNODE_l12,BNODE_l21,BNODE_l22,BNODE_l31,BNODE_l32,BNODE_l33,BNODE_l41,BNODE_l42] :
      ( iext(uri_owl_oneOf,uri_ex_c1,BNODE_l11)
      & iext(uri_rdf_first,BNODE_l11,uri_ex_w1)
      & iext(uri_rdf_rest,BNODE_l11,BNODE_l12)
      & iext(uri_rdf_first,BNODE_l12,uri_ex_w2)
      & iext(uri_rdf_rest,BNODE_l12,uri_rdf_nil)
      & iext(uri_owl_oneOf,uri_ex_c2,BNODE_l21)
      & iext(uri_rdf_first,BNODE_l21,uri_ex_w2)
      & iext(uri_rdf_rest,BNODE_l21,BNODE_l22)
      & iext(uri_rdf_first,BNODE_l22,uri_ex_w3)
      & iext(uri_rdf_rest,BNODE_l22,uri_rdf_nil)
      & iext(uri_owl_oneOf,uri_ex_c3,BNODE_l31)
      & iext(uri_rdf_first,BNODE_l31,uri_ex_w1)
      & iext(uri_rdf_rest,BNODE_l31,BNODE_l32)
      & iext(uri_rdf_first,BNODE_l32,uri_ex_w2)
      & iext(uri_rdf_rest,BNODE_l32,BNODE_l33)
      & iext(uri_rdf_first,BNODE_l33,uri_ex_w3)
      & iext(uri_rdf_rest,BNODE_l33,uri_rdf_nil)
      & iext(uri_owl_unionOf,uri_ex_c4,BNODE_l41)
      & iext(uri_rdf_first,BNODE_l41,uri_ex_c1)
      & iext(uri_rdf_rest,BNODE_l41,BNODE_l42)
      & iext(uri_rdf_first,BNODE_l42,uri_ex_c2)
      & iext(uri_rdf_rest,BNODE_l42,uri_rdf_nil) ) ).

%------------------------------------------------------------------------------
