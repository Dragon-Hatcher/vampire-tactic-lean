%------------------------------------------------------------------------------
% File     : SWV537-1.007 : TPTP v9.3.1. Released v4.0.0.
% Domain   : Software Verification
% Problem  : Swap elements (t1_pp_sf_ai_00007)
% Version  : Especial.
% English  : Swapping an element at position i1 with an element at position 
%            i2 is equivalent to swapping the element at position i2 with the
%            element at position i1.

% Refs     : [Arm08] Armando (2008), Email to Geoff Sutcliffe
%          : [AB+09] Armando et al. (2009), New Results on Rewrite-based Sa
% Source   : [Arm08]
% Names    : swap_t1_pp_sf_ai_00007_001 [Arm08]

% Status   : Unsatisfiable
% Rating   : 0.42 v9.3.0, 0.29 v9.1.0, 0.40 v9.0.0, 0.27 v8.2.0, 0.38 v8.1.0, 0.32 v7.5.0, 0.35 v7.4.0, 0.29 v7.3.0, 0.23 v7.2.0, 0.17 v7.1.0, 0.09 v7.0.0, 0.15 v6.4.0, 0.29 v6.3.0, 0.20 v6.2.0, 0.50 v6.1.0, 0.64 v6.0.0, 0.57 v5.5.0, 0.62 v5.4.0, 0.67 v5.3.0, 0.70 v5.2.0, 0.50 v5.1.0, 0.56 v5.0.0, 0.50 v4.1.0, 0.56 v4.0.1, 0.50 v4.0.0
% Syntax   : Number of clauses     :   54 (  53 unt;   1 nHn;  52 RR)
%            Number of literals    :   55 (  55 equ;   1 neg)
%            Maximal clause size   :    2 (   1 avg)
%            Maximal term depth    :    3 (   1 avg)
%            Number of predicates  :    1 (   0 usr;   0 prp; 2-2 aty)
%            Number of functors    :   61 (  61 usr;  58 con; 0-3 aty)
%            Number of variables   :    7 (   2 sgn)
% SPC      : CNF_UNS_RFO_PEQ_NUE

% Comments :
%------------------------------------------------------------------------------
cnf(a1,axiom,
    select(store(A,I,E),I) = E ).

cnf(a2,axiom,
    ( I = J
    | select(store(A,I,E),J) = select(A,J) ) ).

cnf(hyp0,hypothesis,
    a_834 = store(a1,i4,e_833) ).

cnf(hyp1,hypothesis,
    a_836 = store(a_834,i3,e_835) ).

cnf(hyp2,hypothesis,
    a_838 = store(a_836,i2,e_837) ).

cnf(hyp3,hypothesis,
    a_840 = store(a_838,i1,e_839) ).

cnf(hyp4,hypothesis,
    a_842 = store(a_840,i0,e_841) ).

cnf(hyp5,hypothesis,
    a_844 = store(a_842,i5,e_843) ).

cnf(hyp6,hypothesis,
    a_846 = store(a_844,i2,e_845) ).

cnf(hyp7,hypothesis,
    a_848 = store(a_846,i5,e_847) ).

cnf(hyp8,hypothesis,
    a_850 = store(a_848,i1,e_849) ).

cnf(hyp9,hypothesis,
    a_851 = store(a_850,i1,e_849) ).

cnf(hyp10,hypothesis,
    a_853 = store(a_851,i5,e_852) ).

cnf(hyp11,hypothesis,
    a_855 = store(a_853,i2,e_854) ).

cnf(hyp12,hypothesis,
    a_857 = store(a_855,i5,e_856) ).

cnf(hyp13,hypothesis,
    a_859 = store(a_857,i2,e_858) ).

cnf(hyp14,hypothesis,
    a_860 = store(a_836,i1,e_839) ).

cnf(hyp15,hypothesis,
    a_861 = store(a_860,i2,e_837) ).

cnf(hyp16,hypothesis,
    a_863 = store(a_861,i5,e_862) ).

cnf(hyp17,hypothesis,
    a_865 = store(a_863,i0,e_864) ).

cnf(hyp18,hypothesis,
    a_867 = store(a_865,i5,e_866) ).

cnf(hyp19,hypothesis,
    a_869 = store(a_867,i2,e_868) ).

cnf(hyp20,hypothesis,
    a_871 = store(a_869,i1,e_870) ).

cnf(hyp21,hypothesis,
    a_872 = store(a_871,i1,e_870) ).

cnf(hyp22,hypothesis,
    a_874 = store(a_872,i5,e_873) ).

cnf(hyp23,hypothesis,
    a_876 = store(a_874,i2,e_875) ).

cnf(hyp24,hypothesis,
    a_878 = store(a_876,i5,e_877) ).

cnf(hyp25,hypothesis,
    a_880 = store(a_878,i2,e_879) ).

cnf(hyp26,hypothesis,
    e_833 = select(a1,i3) ).

cnf(hyp27,hypothesis,
    e_835 = select(a1,i4) ).

cnf(hyp28,hypothesis,
    e_837 = select(a_836,i1) ).

cnf(hyp29,hypothesis,
    e_839 = select(a_836,i2) ).

cnf(hyp30,hypothesis,
    e_841 = select(a_840,i5) ).

cnf(hyp31,hypothesis,
    e_843 = select(a_840,i0) ).

cnf(hyp32,hypothesis,
    e_845 = select(a_844,i5) ).

cnf(hyp33,hypothesis,
    e_847 = select(a_844,i2) ).

cnf(hyp34,hypothesis,
    e_849 = select(a_848,i1) ).

cnf(hyp35,hypothesis,
    e_852 = select(a_851,i2) ).

cnf(hyp36,hypothesis,
    e_854 = select(a_851,i5) ).

cnf(hyp37,hypothesis,
    e_856 = select(a_855,i2) ).

cnf(hyp38,hypothesis,
    e_858 = select(a_855,i5) ).

cnf(hyp39,hypothesis,
    e_862 = select(a_861,i0) ).

cnf(hyp40,hypothesis,
    e_864 = select(a_861,i5) ).

cnf(hyp41,hypothesis,
    e_866 = select(a_865,i2) ).

cnf(hyp42,hypothesis,
    e_868 = select(a_865,i5) ).

cnf(hyp43,hypothesis,
    e_870 = select(a_869,i1) ).

cnf(hyp44,hypothesis,
    e_873 = select(a_872,i2) ).

cnf(hyp45,hypothesis,
    e_875 = select(a_872,i5) ).

cnf(hyp46,hypothesis,
    e_877 = select(a_876,i2) ).

cnf(hyp47,hypothesis,
    e_879 = select(a_876,i5) ).

cnf(hyp48,hypothesis,
    e_882 = select(a_859,i_881) ).

cnf(hyp49,hypothesis,
    e_883 = select(a_880,i_881) ).

cnf(hyp50,hypothesis,
    i_881 = sk(a_859,a_880) ).

cnf(goal,negated_conjecture,
    e_882 != e_883 ).

%------------------------------------------------------------------------------
