// Lean compiler output
// Module: Vampire.Reconstruct.Rules.Input
// Imports: public import Init public meta import Init public import Vampire.Reconstruct.Basic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_name_x3f(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__1_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "no hypothesis was given the name `"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "an input step should carry the name of the formula it states"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__7_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__3));
v___x_8_ = l_Lean_stringToMessageData(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__5));
v___x_11_ = l_Lean_stringToMessageData(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__7));
v___x_14_ = l_Lean_stringToMessageData(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input(lean_object* v_step_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_unit_23_; lean_object* v___x_24_; 
v_unit_23_ = lean_ctor_get(v_step_15_, 0);
v___x_24_ = lp_vampireReplay_Vampire_Unit_name_x3f(v_unit_23_);
if (lean_obj_tag(v___x_24_) == 1)
{
lean_object* v_symbols_25_; lean_object* v_val_26_; lean_object* v_hypotheses_27_; lean_object* v___x_28_; 
v_symbols_25_ = lean_ctor_get(v_a_16_, 0);
v_val_26_ = lean_ctor_get(v___x_24_, 0);
lean_inc(v_val_26_);
lean_dec_ref_known(v___x_24_, 1);
v_hypotheses_27_ = lean_ctor_get(v_symbols_25_, 2);
v___x_28_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_hypotheses_27_, v_val_26_);
if (lean_obj_tag(v___x_28_) == 1)
{
lean_object* v_val_29_; lean_object* v___x_30_; 
lean_dec(v_val_26_);
v_val_29_ = lean_ctor_get(v___x_28_, 0);
lean_inc(v_val_29_);
lean_dec_ref_known(v___x_28_, 1);
v___x_30_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_15_, v_a_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_32_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_31_);
lean_dec_ref_known(v___x_30_, 1);
lean_inc(v_a_21_);
lean_inc_ref(v_a_20_);
lean_inc(v_a_19_);
lean_inc_ref(v_a_18_);
lean_inc(v_val_29_);
v___x_32_ = lean_infer_type(v_val_29_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_34_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc_n(v_a_33_, 2);
lean_dec_ref_known(v___x_32_, 1);
lean_inc(v_a_31_);
v___x_34_ = l_Lean_Meta_isExprDefEq(v_a_33_, v_a_31_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v_a_35_; lean_object* v___x_37_; uint8_t v_isShared_38_; uint8_t v_isSharedCheck_51_; 
v_a_35_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_51_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_51_ == 0)
{
v___x_37_ = v___x_34_;
v_isShared_38_ = v_isSharedCheck_51_;
goto v_resetjp_36_;
}
else
{
lean_inc(v_a_35_);
lean_dec(v___x_34_);
v___x_37_ = lean_box(0);
v_isShared_38_ = v_isSharedCheck_51_;
goto v_resetjp_36_;
}
v_resetjp_36_:
{
uint8_t v___x_39_; 
v___x_39_ = lean_unbox(v_a_35_);
lean_dec(v_a_35_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; 
lean_del_object(v___x_37_);
v___x_40_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_a_33_, v_a_31_, v_a_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v_a_41_ = lean_ctor_get(v___x_40_, 0);
lean_inc(v_a_41_);
lean_dec_ref_known(v___x_40_, 1);
v___x_42_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__2));
v___x_43_ = lean_unsigned_to_nat(2u);
v___x_44_ = lean_mk_empty_array_with_capacity(v___x_43_);
v___x_45_ = lean_array_push(v___x_44_, v_a_41_);
v___x_46_ = lean_array_push(v___x_45_, v_val_29_);
v___x_47_ = l_Lean_Meta_mkAppM(v___x_42_, v___x_46_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
return v___x_47_;
}
else
{
lean_dec(v_val_29_);
return v___x_40_;
}
}
else
{
lean_object* v___x_49_; 
lean_dec(v_a_33_);
lean_dec(v_a_31_);
if (v_isShared_38_ == 0)
{
lean_ctor_set(v___x_37_, 0, v_val_29_);
v___x_49_ = v___x_37_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_val_29_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
else
{
lean_object* v_a_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
lean_dec(v_a_33_);
lean_dec(v_a_31_);
lean_dec(v_val_29_);
v_a_52_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_59_ == 0)
{
v___x_54_ = v___x_34_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_a_52_);
lean_dec(v___x_34_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_52_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
}
else
{
lean_dec(v_a_31_);
lean_dec(v_val_29_);
return v___x_32_;
}
}
else
{
lean_dec(v_val_29_);
return v___x_30_;
}
}
else
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
lean_dec(v___x_28_);
lean_dec_ref(v_step_15_);
v___x_60_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__4);
v___x_61_ = l_Lean_stringToMessageData(v_val_26_);
v___x_62_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__6);
v___x_64_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_62_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
v___x_65_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_64_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
return v___x_65_;
}
}
else
{
lean_object* v___x_66_; lean_object* v___x_67_; 
lean_dec(v___x_24_);
lean_dec_ref(v_step_15_);
v___x_66_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Input_input___closed__8);
v___x_67_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_66_, v_a_18_, v_a_19_, v_a_20_, v_a_21_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Input_input___boxed(lean_object* v_step_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = lp_vampireReplay_Vampire_Reconstruct_Input_input(v_step_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
return v_res_76_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Input(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_Vampire_Reconstruct_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
