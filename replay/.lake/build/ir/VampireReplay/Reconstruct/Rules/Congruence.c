// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Congruence
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Basic
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__3_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "expected at least one premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(lean_object* v_step_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_premises_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; 
v_premises_17_ = lean_ctor_get(v_step_9_, 1);
v___x_18_ = lean_array_get_size(v_premises_17_);
v___x_19_ = lean_unsigned_to_nat(1u);
v___x_20_ = lean_nat_dec_eq(v___x_18_, v___x_19_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec_ref(v_step_9_);
v___x_21_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__1);
v___x_22_ = l_Nat_reprFast(v___x_18_);
v___x_23_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
v___x_24_ = l_Lean_MessageData_ofFormat(v___x_23_);
v___x_25_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_21_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
v___x_26_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_25_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
return v___x_26_;
}
else
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v_fst_29_; lean_object* v_snd_30_; lean_object* v___x_31_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_array_fget_borrowed(v_premises_17_, v___x_27_);
v_fst_29_ = lean_ctor_get(v___x_28_, 0);
lean_inc(v_fst_29_);
v_snd_30_ = lean_ctor_get(v___x_28_, 1);
lean_inc(v_snd_30_);
v___x_31_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
if (lean_obj_tag(v___x_31_) == 0)
{
lean_object* v_a_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_35_; 
v_a_32_ = lean_ctor_get(v___x_31_, 0);
lean_inc_n(v_a_32_, 2);
lean_dec_ref_known(v___x_31_, 1);
lean_inc(v_snd_30_);
v___x_33_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_30_, v_a_13_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
lean_inc(v_a_34_);
lean_dec_ref(v___x_33_);
v___x_35_ = l_Lean_Meta_isExprDefEq(v_a_34_, v_a_32_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
if (lean_obj_tag(v___x_35_) == 0)
{
lean_object* v_a_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_52_; 
v_a_36_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_52_ == 0)
{
v___x_38_ = v___x_35_;
v_isShared_39_ = v_isSharedCheck_52_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_a_36_);
lean_dec(v___x_35_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_52_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
uint8_t v___x_40_; 
v___x_40_ = lean_unbox(v_a_36_);
lean_dec(v_a_36_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; 
lean_del_object(v___x_38_);
v___x_41_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_snd_30_, v_a_32_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v_a_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_a_42_ = lean_ctor_get(v___x_41_, 0);
lean_inc(v_a_42_);
lean_dec_ref_known(v___x_41_, 1);
v___x_43_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___closed__4));
v___x_44_ = lean_unsigned_to_nat(2u);
v___x_45_ = lean_mk_empty_array_with_capacity(v___x_44_);
v___x_46_ = lean_array_push(v___x_45_, v_a_42_);
v___x_47_ = lean_array_push(v___x_46_, v_fst_29_);
v___x_48_ = l_Lean_Meta_mkAppM(v___x_43_, v___x_47_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
return v___x_48_;
}
else
{
lean_dec(v_fst_29_);
return v___x_41_;
}
}
else
{
lean_object* v___x_50_; 
lean_dec(v_a_32_);
lean_dec(v_snd_30_);
if (v_isShared_39_ == 0)
{
lean_ctor_set(v___x_38_, 0, v_fst_29_);
v___x_50_ = v___x_38_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_fst_29_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
else
{
lean_object* v_a_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_60_; 
lean_dec(v_a_32_);
lean_dec(v_snd_30_);
lean_dec(v_fst_29_);
v_a_53_ = lean_ctor_get(v___x_35_, 0);
v_isSharedCheck_60_ = !lean_is_exclusive(v___x_35_);
if (v_isSharedCheck_60_ == 0)
{
v___x_55_ = v___x_35_;
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_a_53_);
lean_dec(v___x_35_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_58_; 
if (v_isShared_56_ == 0)
{
v___x_58_ = v___x_55_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v_a_53_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
}
}
else
{
lean_dec(v_snd_30_);
lean_dec(v_fst_29_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_restated___boxed(lean_object* v_step_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = lp_vampireReplay_Vampire_Reconstruct_Congruence_restated(v_step_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
return v_res_69_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__0));
v___x_72_ = l_Lean_stringToMessageData(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded(lean_object* v_step_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
lean_object* v_unit_81_; lean_object* v_premises_82_; lean_object* v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v_unit_81_ = lean_ctor_get(v_step_73_, 0);
v_premises_82_ = lean_ctor_get(v_step_73_, 1);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_array_get_size(v_premises_82_);
v___x_85_ = lean_nat_dec_lt(v___x_83_, v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; lean_object* v___x_87_; 
lean_dec_ref(v_step_73_);
v___x_86_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1);
v___x_87_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_86_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
return v___x_87_;
}
else
{
lean_object* v___x_88_; lean_object* v_fst_89_; lean_object* v_snd_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; 
v___x_88_ = lean_array_fget_borrowed(v_premises_82_, v___x_83_);
v_fst_89_ = lean_ctor_get(v___x_88_, 0);
lean_inc(v_fst_89_);
v_snd_90_ = lean_ctor_get(v___x_88_, 1);
lean_inc(v_snd_90_);
lean_inc_ref(v_unit_81_);
v___x_91_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_81_);
v___x_92_ = lean_array_get_size(v___x_91_);
v___x_93_ = lean_nat_dec_lt(v___x_83_, v___x_92_);
if (v___x_93_ == 0)
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec_ref(v___x_91_);
lean_dec(v_snd_90_);
lean_dec(v_fst_89_);
lean_dec_ref(v_step_73_);
v___x_94_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___closed__1);
v___x_95_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_94_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
return v___x_95_;
}
else
{
lean_object* v___x_96_; 
lean_inc_ref(v_step_73_);
v___x_96_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_73_, v_a_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_98_; lean_object* v_a_99_; lean_object* v___x_100_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
lean_dec_ref_known(v___x_96_, 1);
lean_inc(v_snd_90_);
v___x_98_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_90_, v_a_77_);
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref(v___x_98_);
v___x_100_ = l_Lean_Meta_isExprDefEq(v_a_99_, v_a_97_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_111_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_111_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_111_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_111_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint8_t v___x_105_; 
v___x_105_ = lean_unbox(v_a_101_);
lean_dec(v_a_101_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; 
lean_del_object(v___x_103_);
v___x_106_ = lean_array_fget(v___x_91_, v___x_83_);
lean_dec_ref(v___x_91_);
v___x_107_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals(v_step_73_, v___x_106_, v_fst_89_, v_snd_90_, v_a_74_, v_a_75_, v_a_76_, v_a_77_, v_a_78_, v_a_79_);
return v___x_107_;
}
else
{
lean_object* v___x_109_; 
lean_dec_ref(v___x_91_);
lean_dec(v_snd_90_);
lean_dec_ref(v_step_73_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v_fst_89_);
v___x_109_ = v___x_103_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_fst_89_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
lean_dec_ref(v___x_91_);
lean_dec(v_snd_90_);
lean_dec(v_fst_89_);
lean_dec_ref(v_step_73_);
v_a_112_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___x_100_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_100_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
else
{
lean_dec_ref(v___x_91_);
lean_dec(v_snd_90_);
lean_dec(v_fst_89_);
lean_dec_ref(v_step_73_);
return v___x_96_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded___boxed(lean_object* v_step_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = lp_vampireReplay_Vampire_Reconstruct_Congruence_unfolded(v_step_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
return v_res_128_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Congruence(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
