%------------------------------------------------------------------------------
% File     : SWB019+2 : TPTP v9.3.1. Released v5.2.0.
% Domain   : Semantic Web
% Problem  : Disjoint Annotation Properties
% Version  : [Sch11] axioms : Reduced > Incomplete.
% English  :

% Refs     : [Sch11] Schneider, M. (2011), Email to G. Sutcliffe
% Source   : [Sch11]
% Names    : 019_Disjoint_Annotation_Properties [Sch11]

% Status   : Unsatisfiable
% Rating   : 0.00 v6.4.0, 0.25 v6.3.0, 0.00 v6.2.0, 0.25 v6.1.0, 0.00 v5.2.0
% Syntax   : Number of formulae    :    2 (   0 unt;   0 def)
%            Number of atoms       :   12 (   0 equ)
%            Maximal formula atoms :    7 (   6 avg)
%            Number of connectives :   11 (   1   ~;   0   |;   9   &)
%                                         (   1 <=>;   0  =>;   0  <=;   0 <~>)
%            Maximal formula depth :   10 (   9 avg)
%            Maximal term depth    :    2 (   1 avg)
%            Number of predicates  :    2 (   2 usr;   0 prp; 1-3 aty)
%            Number of functors    :   10 (  10 usr;   9 con; 0-1 aty)
%            Number of variables   :    4 (   4   !;   0   ?)
% SPC      : FOF_UNS_RFO_NEQ

% Comments :
%------------------------------------------------------------------------------
fof(owl_eqdis_propertydisjointwith,axiom,
    ! [P1,P2] :
      ( iext(uri_owl_propertyDisjointWith,P1,P2)
    <=> ( ip(P1)
        & ip(P2)
        & ! [X,Y] :
            ~ ( iext(P1,X,Y)
              & iext(P2,X,Y) ) ) ) ).

fof(testcase_premise_fullish_019_Disjoint_Annotation_Properties,axiom,
    ( iext(uri_rdf_type,uri_skos_prefLabel,uri_owl_AnnotationProperty)
    & iext(uri_rdfs_subPropertyOf,uri_skos_prefLabel,uri_rdfs_label)
    & iext(uri_rdf_type,uri_skos_altLabel,uri_owl_AnnotationProperty)
    & iext(uri_rdfs_subPropertyOf,uri_skos_altLabel,uri_rdfs_label)
    & iext(uri_owl_propertyDisjointWith,uri_skos_prefLabel,uri_skos_altLabel)
    & iext(uri_skos_prefLabel,uri_ex_foo,literal_plain(dat_str_foo))
    & iext(uri_skos_altLabel,uri_ex_foo,literal_plain(dat_str_foo)) ) ).

%------------------------------------------------------------------------------
