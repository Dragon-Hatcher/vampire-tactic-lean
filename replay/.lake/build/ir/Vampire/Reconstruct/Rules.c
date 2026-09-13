// Lean compiler output
// Module: Vampire.Reconstruct.Rules
// Imports: public import Init public meta import Init public import Vampire.InferenceRule public import Vampire.Reconstruct.Basic public import Vampire.Reconstruct.Rules.Arithmetic public import Vampire.Reconstruct.Rules.Avatar public import Vampire.Reconstruct.Rules.Clause public import Vampire.Reconstruct.Rules.Closure public import Vampire.Reconstruct.Rules.Congruence public import Vampire.Reconstruct.Rules.Clausify public import Vampire.Reconstruct.Rules.Definition public import Vampire.Reconstruct.Rules.Input public import Vampire.Reconstruct.Rules.Normalize public import Vampire.Reconstruct.Rules.Resolution public import Vampire.Reconstruct.Rules.Rewrite public import Vampire.Reconstruct.Rules.Simplify public import Vampire.Reconstruct.Rules.Skolem public import Vampire.Reconstruct.Rules.Splitting public import Vampire.Reconstruct.Rules.Subsumption
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Clause_literals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Clause_condensation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Closure_conflict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_unimplemented(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofRule(lean_object* v_step_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
uint8_t v_rule_9_; 
v_rule_9_ = lean_ctor_get_uint8(v_step_1_, sizeof(void*)*3);
switch(v_rule_9_)
{
case 0:
{
lean_object* v___x_10_; 
v___x_10_ = lp_vampireReplay_Vampire_Reconstruct_Input_input(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_10_;
}
case 6:
{
lean_object* v___x_11_; 
v___x_11_ = lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_11_;
}
case 8:
{
lean_object* v___x_12_; 
v___x_12_ = lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_12_;
}
case 9:
{
lean_object* v___x_13_; 
v___x_13_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_ennf(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_13_;
}
case 10:
{
lean_object* v___x_14_; 
v___x_14_ = lp_vampireReplay_Vampire_Reconstruct_Normalize_nnf(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_14_;
}
case 11:
{
lean_object* v___x_15_; 
v___x_15_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_15_;
}
case 12:
{
lean_object* v___x_16_; 
v___x_16_ = lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_16_;
}
case 13:
{
lean_object* v___x_17_; 
v___x_17_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_17_;
}
case 14:
{
lean_object* v___x_18_; 
v___x_18_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_18_;
}
case 15:
{
lean_object* v___x_19_; 
v___x_19_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_19_;
}
case 17:
{
lean_object* v___x_20_; 
v___x_20_ = lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_20_;
}
case 18:
{
lean_object* v___x_21_; 
v___x_21_ = lp_vampireReplay_Vampire_Reconstruct_Clause_literals(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_21_;
}
case 22:
{
lean_object* v___x_22_; 
v___x_22_ = lp_vampireReplay_Vampire_Reconstruct_Clause_literals(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_22_;
}
case 23:
{
lean_object* v___x_23_; 
v___x_23_ = lp_vampireReplay_Vampire_Reconstruct_Clause_literals(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_23_;
}
case 24:
{
lean_object* v___x_24_; 
v___x_24_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_24_;
}
case 25:
{
lean_object* v___x_25_; 
v___x_25_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_25_;
}
case 26:
{
lean_object* v___x_26_; 
v___x_26_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_26_;
}
case 28:
{
lean_object* v___x_27_; 
v___x_27_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_27_;
}
case 29:
{
lean_object* v___x_28_; 
v___x_28_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_demodulation(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_28_;
}
case 30:
{
lean_object* v___x_29_; 
v___x_29_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_29_;
}
case 31:
{
lean_object* v___x_30_; 
v___x_30_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_30_;
}
case 32:
{
lean_object* v___x_31_; 
v___x_31_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_31_;
}
case 34:
{
lean_object* v___x_32_; 
v___x_32_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_32_;
}
case 36:
{
lean_object* v___x_33_; 
v___x_33_ = lp_vampireReplay_Vampire_Reconstruct_Clause_condensation(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_33_;
}
case 37:
{
lean_object* v___x_34_; 
v___x_34_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_34_;
}
case 38:
{
lean_object* v___x_35_; 
v___x_35_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_35_;
}
case 39:
{
lean_object* v___x_36_; 
v___x_36_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_36_;
}
case 40:
{
lean_object* v___x_37_; 
v___x_37_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_37_;
}
case 41:
{
lean_object* v___x_38_; 
v___x_38_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_38_;
}
case 42:
{
lean_object* v___x_39_; 
v___x_39_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_39_;
}
case 43:
{
lean_object* v___x_40_; 
v___x_40_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_40_;
}
case 49:
{
lean_object* v___x_41_; 
v___x_41_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_41_;
}
case 50:
{
lean_object* v___x_42_; 
v___x_42_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_42_;
}
case 56:
{
lean_object* v___x_43_; 
v___x_43_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_43_;
}
case 72:
{
lean_object* v___x_44_; 
v___x_44_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_44_;
}
case 73:
{
lean_object* v___x_45_; 
v___x_45_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_45_;
}
case 74:
{
lean_object* v___x_46_; 
v___x_46_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_factoring(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_46_;
}
case 76:
{
lean_object* v___x_47_; 
v___x_47_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_47_;
}
case 78:
{
lean_object* v___x_48_; 
v___x_48_ = lp_vampireReplay_Vampire_Reconstruct_Rewrite_superposition(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_48_;
}
case 79:
{
lean_object* v___x_49_; 
v___x_49_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityFactoring(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_49_;
}
case 80:
{
lean_object* v___x_50_; 
v___x_50_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_equalityResolutionWithDeletion(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_50_;
}
case 81:
{
lean_object* v___x_51_; 
v___x_51_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_resolution(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_51_;
}
case 85:
{
lean_object* v___x_52_; 
v___x_52_ = lp_vampireReplay_Vampire_Reconstruct_Resolution_unitResulting(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_52_;
}
case 87:
{
lean_object* v___x_53_; 
v___x_53_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_53_;
}
case 88:
{
lean_object* v___x_54_; 
v___x_54_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_54_;
}
case 89:
{
lean_object* v___x_55_; 
v___x_55_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_55_;
}
case 90:
{
lean_object* v___x_56_; 
v___x_56_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_56_;
}
case 91:
{
lean_object* v___x_57_; 
v___x_57_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_57_;
}
case 92:
{
lean_object* v___x_58_; 
v___x_58_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_58_;
}
case 93:
{
lean_object* v___x_59_; 
v___x_59_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_59_;
}
case 94:
{
lean_object* v___x_60_; 
v___x_60_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_60_;
}
case 95:
{
lean_object* v___x_61_; 
v___x_61_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_61_;
}
case 96:
{
lean_object* v___x_62_; 
v___x_62_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_62_;
}
case 97:
{
lean_object* v___x_63_; 
v___x_63_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_63_;
}
case 120:
{
lean_object* v___x_64_; 
v___x_64_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_64_;
}
case 121:
{
lean_object* v___x_65_; 
v___x_65_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_65_;
}
case 122:
{
lean_object* v___x_66_; 
v___x_66_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_66_;
}
case 123:
{
lean_object* v___x_67_; 
v___x_67_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_67_;
}
case 124:
{
lean_object* v___x_68_; 
v___x_68_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_68_;
}
case 125:
{
lean_object* v___x_69_; 
v___x_69_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_69_;
}
case 126:
{
lean_object* v___x_70_; 
v___x_70_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_70_;
}
case 129:
{
lean_object* v___x_71_; 
v___x_71_ = lp_vampireReplay_Vampire_Reconstruct_Clause_literals(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_71_;
}
case 130:
{
lean_object* v___x_72_; 
v___x_72_ = lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_72_;
}
case 131:
{
lean_object* v___x_73_; 
v___x_73_ = lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(v_step_1_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
lean_dec_ref(v_step_1_);
return v___x_73_;
}
case 133:
{
lean_object* v___x_74_; 
v___x_74_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_74_;
}
case 134:
{
lean_object* v___x_75_; 
v___x_75_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_75_;
}
case 142:
{
lean_object* v___x_76_; 
v___x_76_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_76_;
}
case 143:
{
lean_object* v___x_77_; 
v___x_77_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_77_;
}
case 154:
{
lean_object* v___x_78_; 
v___x_78_ = lp_vampireReplay_Vampire_Reconstruct_Closure_conflict(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_78_;
}
case 156:
{
lean_object* v___x_79_; 
v___x_79_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_79_;
}
case 157:
{
lean_object* v___x_80_; 
v___x_80_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_component(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_80_;
}
case 158:
{
lean_object* v___x_81_; 
v___x_81_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_81_;
}
case 160:
{
lean_object* v___x_82_; 
v___x_82_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_82_;
}
case 161:
{
lean_object* v___x_83_; 
v___x_83_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_83_;
}
case 165:
{
lean_object* v___x_84_; 
v___x_84_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_84_;
}
case 166:
{
lean_object* v___x_85_; 
v___x_85_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_85_;
}
case 167:
{
lean_object* v___x_86_; 
v___x_86_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_86_;
}
case 168:
{
lean_object* v___x_87_; 
v___x_87_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_87_;
}
case 169:
{
lean_object* v___x_88_; 
v___x_88_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_88_;
}
case 170:
{
lean_object* v___x_89_; 
v___x_89_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_89_;
}
case 171:
{
lean_object* v___x_90_; 
v___x_90_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_90_;
}
case 172:
{
lean_object* v___x_91_; 
v___x_91_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_91_;
}
case 173:
{
lean_object* v___x_92_; 
v___x_92_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_92_;
}
case 174:
{
lean_object* v___x_93_; 
v___x_93_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_93_;
}
case 175:
{
lean_object* v___x_94_; 
v___x_94_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_94_;
}
case 176:
{
lean_object* v___x_95_; 
v___x_95_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_95_;
}
case 177:
{
lean_object* v___x_96_; 
v___x_96_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_96_;
}
case 178:
{
lean_object* v___x_97_; 
v___x_97_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_97_;
}
case 179:
{
lean_object* v___x_98_; 
v___x_98_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_98_;
}
case 180:
{
lean_object* v___x_99_; 
v___x_99_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_99_;
}
case 181:
{
lean_object* v___x_100_; 
v___x_100_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_100_;
}
case 182:
{
lean_object* v___x_101_; 
v___x_101_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_101_;
}
case 183:
{
lean_object* v___x_102_; 
v___x_102_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_102_;
}
case 184:
{
lean_object* v___x_103_; 
v___x_103_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_103_;
}
case 185:
{
lean_object* v___x_104_; 
v___x_104_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_104_;
}
case 186:
{
lean_object* v___x_105_; 
v___x_105_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_105_;
}
case 187:
{
lean_object* v___x_106_; 
v___x_106_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_106_;
}
case 188:
{
lean_object* v___x_107_; 
v___x_107_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_107_;
}
case 189:
{
lean_object* v___x_108_; 
v___x_108_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_108_;
}
case 190:
{
lean_object* v___x_109_; 
v___x_109_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_109_;
}
case 191:
{
lean_object* v___x_110_; 
v___x_110_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_110_;
}
case 192:
{
lean_object* v___x_111_; 
v___x_111_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_111_;
}
case 193:
{
lean_object* v___x_112_; 
v___x_112_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_112_;
}
case 194:
{
lean_object* v___x_113_; 
v___x_113_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_113_;
}
case 195:
{
lean_object* v___x_114_; 
v___x_114_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_114_;
}
case 196:
{
lean_object* v___x_115_; 
v___x_115_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_115_;
}
case 201:
{
lean_object* v___x_116_; 
v___x_116_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_116_;
}
case 202:
{
lean_object* v___x_117_; 
v___x_117_ = lp_vampireReplay_Vampire_Reconstruct_Arithmetic_theoryStep(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_117_;
}
default: 
{
lean_object* v___x_118_; 
v___x_118_ = lp_vampireReplay_Vampire_Reconstruct_unimplemented(v_step_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_);
return v___x_118_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_ofRule___boxed(lean_object* v_step_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = lp_vampireReplay_Vampire_Reconstruct_ofRule(v_step_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_);
lean_dec(v_a_125_);
lean_dec_ref(v_a_124_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
return v_res_127_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_InferenceRule(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Arithmetic(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Avatar(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Clause(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Closure(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Congruence(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Clausify(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Definition(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Input(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Normalize(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Resolution(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Rewrite(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Simplify(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Skolem(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Splitting(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Subsumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_InferenceRule(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Arithmetic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Avatar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Clause(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Congruence(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Clausify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Definition(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Input(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Normalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Resolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Simplify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Skolem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Splitting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Rules_Subsumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
