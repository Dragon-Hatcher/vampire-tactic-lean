// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Subsumption
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
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryPast(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_boundVarSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3(uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "subsumption resolution should have two premises, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "subsumption resolution should have two premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "subsumption resolution recorded a literal against the side premise, so which premise is which is not clear"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "subsumption resolution did not record the literal it removed"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__7_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0(lean_object* v_x_1_, lean_object* v_h_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v_h_2_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0___boxed(lean_object* v_x_11_, lean_object* v_h_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__0(v_x_11_, v_h_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
lean_dec(v_x_11_);
return v_res_20_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1(uint8_t v___x_21_, lean_object* v_x_22_){
_start:
{
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1___boxed(lean_object* v___x_23_, lean_object* v_x_24_){
_start:
{
uint8_t v___x_29192__boxed_25_; uint8_t v_res_26_; lean_object* v_r_27_; 
v___x_29192__boxed_25_ = lean_unbox(v___x_23_);
v_res_26_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1(v___x_29192__boxed_25_, v_x_24_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3(uint32_t v_val_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_uint32_to_nat(v_val_28_);
v___x_31_ = lean_nat_dec_eq(v_x_29_, v___x_30_);
lean_dec(v___x_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3___boxed(lean_object* v_val_32_, lean_object* v_x_33_){
_start:
{
uint32_t v_val_29198__boxed_34_; uint8_t v_res_35_; lean_object* v_r_36_; 
v_val_29198__boxed_34_ = lean_unbox_uint32(v_val_32_);
lean_dec(v_val_32_);
v_res_35_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3(v_val_29198__boxed_34_, v_x_33_);
lean_dec(v_x_33_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg(lean_object* v_inner_43_, lean_object* v_h_44_, lean_object* v_a_45_, lean_object* v_as_46_, size_t v_sz_47_, size_t v_i_48_, lean_object* v_b_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_a_56_; uint8_t v___x_60_; 
v___x_60_ = lean_usize_dec_lt(v_i_48_, v_sz_47_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec_ref(v_a_45_);
lean_dec_ref(v_h_44_);
lean_dec_ref(v_inner_43_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_b_49_);
return v___x_61_;
}
else
{
lean_object* v___x_62_; lean_object* v___y_64_; lean_object* v___y_65_; lean_object* v___y_66_; lean_object* v___y_67_; lean_object* v_fst_68_; lean_object* v_snd_69_; lean_object* v___x_110_; lean_object* v_a_111_; 
lean_dec_ref(v_b_49_);
v___x_62_ = lean_box(0);
v___x_110_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__2));
v_a_111_ = lean_array_uget_borrowed(v_as_46_, v_i_48_);
if (lean_obj_tag(v_a_111_) == 1)
{
lean_object* v_val_112_; lean_object* v___x_113_; 
v_val_112_ = lean_ctor_get(v_a_111_, 0);
lean_inc(v___y_53_);
lean_inc_ref(v___y_52_);
lean_inc(v___y_51_);
lean_inc_ref(v___y_50_);
lean_inc(v_val_112_);
v___x_113_ = lean_infer_type(v_val_112_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_114_, v___y_51_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; uint8_t v_complementary_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___y_121_; lean_object* v___y_122_; lean_object* v___x_124_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc_n(v_a_116_, 2);
lean_dec_ref_known(v___x_115_, 1);
v___x_124_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_116_);
if (lean_obj_tag(v___x_124_) == 1)
{
lean_object* v_val_125_; lean_object* v___x_126_; 
v_val_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_val_125_);
lean_dec_ref_known(v___x_124_, 1);
lean_inc_ref(v_a_45_);
v___x_126_ = l_Lean_Meta_isExprDefEq(v_val_125_, v_a_45_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; uint8_t v___x_128_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_a_127_);
lean_dec_ref_known(v___x_126_, 1);
v___x_128_ = lean_unbox(v_a_127_);
lean_dec(v_a_127_);
v_complementary_118_ = v___x_128_;
v___y_119_ = v___y_50_;
v___y_120_ = v___y_51_;
v___y_121_ = v___y_52_;
v___y_122_ = v___y_53_;
goto v___jp_117_;
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec(v_a_116_);
lean_dec_ref(v_a_45_);
lean_dec_ref(v_h_44_);
lean_dec_ref(v_inner_43_);
v_a_129_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_126_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_126_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
else
{
lean_object* v___x_137_; 
lean_dec(v___x_124_);
lean_inc_ref(v_a_45_);
v___x_137_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_45_);
if (lean_obj_tag(v___x_137_) == 1)
{
lean_object* v_val_138_; lean_object* v___x_139_; 
v_val_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_val_138_);
lean_dec_ref_known(v___x_137_, 1);
lean_inc(v_a_116_);
v___x_139_ = l_Lean_Meta_isExprDefEq(v_val_138_, v_a_116_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; uint8_t v___x_141_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_140_);
lean_dec_ref_known(v___x_139_, 1);
v___x_141_ = lean_unbox(v_a_140_);
lean_dec(v_a_140_);
v_complementary_118_ = v___x_141_;
v___y_119_ = v___y_50_;
v___y_120_ = v___y_51_;
v___y_121_ = v___y_52_;
v___y_122_ = v___y_53_;
goto v___jp_117_;
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
lean_dec(v_a_116_);
lean_dec_ref(v_a_45_);
lean_dec_ref(v_h_44_);
lean_dec_ref(v_inner_43_);
v_a_142_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_139_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_139_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_dec(v___x_137_);
lean_dec(v_a_116_);
v_a_56_ = v___x_110_;
goto v___jp_55_;
}
}
v___jp_117_:
{
if (v_complementary_118_ == 0)
{
lean_dec(v_a_116_);
v_a_56_ = v___x_110_;
goto v___jp_55_;
}
else
{
lean_object* v___x_123_; 
lean_dec_ref(v_a_45_);
v___x_123_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_116_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_inc(v_val_112_);
v___y_64_ = v___y_120_;
v___y_65_ = v___y_121_;
v___y_66_ = v___y_119_;
v___y_67_ = v___y_122_;
v_fst_68_ = v_val_112_;
v_snd_69_ = v_h_44_;
goto v___jp_63_;
}
else
{
lean_dec_ref_known(v___x_123_, 1);
lean_inc(v_val_112_);
v___y_64_ = v___y_120_;
v___y_65_ = v___y_121_;
v___y_66_ = v___y_119_;
v___y_67_ = v___y_122_;
v_fst_68_ = v_h_44_;
v_snd_69_ = v_val_112_;
goto v___jp_63_;
}
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec_ref(v_a_45_);
lean_dec_ref(v_h_44_);
lean_dec_ref(v_inner_43_);
v_a_150_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_115_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_115_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_155_; 
if (v_isShared_153_ == 0)
{
v___x_155_ = v___x_152_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_a_150_);
v___x_155_ = v_reuseFailAlloc_156_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
return v___x_155_;
}
}
}
}
else
{
lean_object* v_a_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_165_; 
lean_dec_ref(v_a_45_);
lean_dec_ref(v_h_44_);
lean_dec_ref(v_inner_43_);
v_a_158_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_165_ == 0)
{
v___x_160_ = v___x_113_;
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_a_158_);
lean_dec(v___x_113_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_165_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_158_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
}
else
{
v_a_56_ = v___x_110_;
goto v___jp_55_;
}
v___jp_63_:
{
lean_object* v___x_70_; 
lean_inc(v___y_67_);
lean_inc_ref(v___y_65_);
lean_inc(v___y_64_);
lean_inc_ref(v___y_66_);
lean_inc_ref(v_fst_68_);
v___x_70_ = lean_infer_type(v_fst_68_, v___y_66_, v___y_64_, v___y_65_, v___y_67_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_a_71_);
lean_dec_ref_known(v___x_70_, 1);
v___x_72_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__1));
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v_a_71_);
v___x_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_74_, 0, v_inner_43_);
v___x_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_75_, 0, v_fst_68_);
v___x_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_76_, 0, v_snd_69_);
v___x_77_ = lean_unsigned_to_nat(4u);
v___x_78_ = lean_mk_empty_array_with_capacity(v___x_77_);
v___x_79_ = lean_array_push(v___x_78_, v___x_73_);
v___x_80_ = lean_array_push(v___x_79_, v___x_74_);
v___x_81_ = lean_array_push(v___x_80_, v___x_75_);
v___x_82_ = lean_array_push(v___x_81_, v___x_76_);
v___x_83_ = l_Lean_Meta_mkAppOptM(v___x_72_, v___x_82_, v___y_66_, v___y_64_, v___y_65_, v___y_67_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_93_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_93_ == 0)
{
v___x_86_ = v___x_83_;
v_isShared_87_ = v_isSharedCheck_93_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_83_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_93_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_91_; 
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v_a_84_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set(v___x_89_, 1, v___x_62_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_89_);
v___x_91_ = v___x_86_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_89_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
v_a_94_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_101_ == 0)
{
v___x_96_ = v___x_83_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_83_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
else
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
lean_dec_ref(v_snd_69_);
lean_dec_ref(v_fst_68_);
lean_dec_ref(v_inner_43_);
v_a_102_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_109_ == 0)
{
v___x_104_ = v___x_70_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_70_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_102_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
}
v___jp_55_:
{
size_t v___x_57_; size_t v___x_58_; 
v___x_57_ = ((size_t)1ULL);
v___x_58_ = lean_usize_add(v_i_48_, v___x_57_);
lean_inc_ref(v_a_56_);
v_i_48_ = v___x_58_;
v_b_49_ = v_a_56_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___boxed(lean_object* v_inner_166_, lean_object* v_h_167_, lean_object* v_a_168_, lean_object* v_as_169_, lean_object* v_sz_170_, lean_object* v_i_171_, lean_object* v_b_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
size_t v_sz_boxed_178_; size_t v_i_boxed_179_; lean_object* v_res_180_; 
v_sz_boxed_178_ = lean_unbox_usize(v_sz_170_);
lean_dec(v_sz_170_);
v_i_boxed_179_ = lean_unbox_usize(v_i_171_);
lean_dec(v_i_171_);
v_res_180_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg(v_inner_166_, v_h_167_, v_a_168_, v_as_169_, v_sz_boxed_178_, v_i_boxed_179_, v_b_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec_ref(v_as_169_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2(lean_object* v_h_181_, lean_object* v___x_182_, size_t v___x_183_, lean_object* v_x_184_, lean_object* v_hSide_185_, lean_object* v_inner_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v___x_194_; 
lean_inc(v___y_192_);
lean_inc_ref(v___y_191_);
lean_inc(v___y_190_);
lean_inc_ref(v___y_189_);
lean_inc_ref(v_h_181_);
v___x_194_ = lean_infer_type(v_h_181_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_239_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_195_, v___y_190_);
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_239_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_239_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_239_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; 
lean_inc_ref(v_hSide_185_);
v___x_201_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_hSide_185_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; lean_object* v___x_204_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
lean_inc_ref(v_hSide_185_);
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 1);
lean_ctor_set(v___x_199_, 0, v_hSide_185_);
v___x_204_ = v___x_199_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_hSide_185_);
v___x_204_ = v_reuseFailAlloc_230_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; size_t v_sz_209_; lean_object* v___x_210_; 
v___x_205_ = lean_mk_empty_array_with_capacity(v___x_182_);
v___x_206_ = lean_array_push(v___x_205_, v___x_204_);
v___x_207_ = lean_array_push(v___x_206_, v_a_202_);
v___x_208_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg___closed__2));
v_sz_209_ = lean_array_size(v___x_207_);
lean_inc_ref(v_inner_186_);
v___x_210_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg(v_inner_186_, v_h_181_, v_a_197_, v___x_207_, v_sz_209_, v___x_183_, v___x_208_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec_ref(v___x_207_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_221_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_221_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_221_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_221_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_fst_215_; 
v_fst_215_ = lean_ctor_get(v_a_211_, 0);
lean_inc(v_fst_215_);
lean_dec(v_a_211_);
if (lean_obj_tag(v_fst_215_) == 0)
{
lean_object* v___x_216_; 
lean_del_object(v___x_213_);
v___x_216_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_inner_186_, v_hSide_185_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
return v___x_216_;
}
else
{
lean_object* v_val_217_; lean_object* v___x_219_; 
lean_dec_ref(v_inner_186_);
lean_dec_ref(v_hSide_185_);
v_val_217_ = lean_ctor_get(v_fst_215_, 0);
lean_inc(v_val_217_);
lean_dec_ref_known(v_fst_215_, 1);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v_val_217_);
v___x_219_ = v___x_213_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_val_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
lean_dec_ref(v_inner_186_);
lean_dec_ref(v_hSide_185_);
v_a_222_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_210_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_210_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_del_object(v___x_199_);
lean_dec(v_a_197_);
lean_dec_ref(v_inner_186_);
lean_dec_ref(v_hSide_185_);
lean_dec_ref(v_h_181_);
v_a_231_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_201_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_201_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
}
else
{
lean_dec_ref(v_inner_186_);
lean_dec_ref(v_hSide_185_);
lean_dec_ref(v_h_181_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2___boxed(lean_object* v_h_240_, lean_object* v___x_241_, lean_object* v___x_242_, lean_object* v_x_243_, lean_object* v_hSide_244_, lean_object* v_inner_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
size_t v___x_29467__boxed_253_; lean_object* v_res_254_; 
v___x_29467__boxed_253_ = lean_unbox_usize(v___x_242_);
lean_dec(v___x_242_);
v_res_254_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2(v_h_240_, v___x_241_, v___x_29467__boxed_253_, v_x_243_, v_hSide_244_, v_inner_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v_x_243_);
lean_dec(v___x_241_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4(lean_object* v___x_255_, size_t v___x_256_, lean_object* v_snd_257_, lean_object* v_fst_258_, lean_object* v___f_259_, lean_object* v___f_260_, lean_object* v_x_261_, lean_object* v_h_262_, lean_object* v_rest_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; lean_object* v___f_272_; lean_object* v___x_273_; 
v___x_271_ = lean_box_usize(v___x_256_);
v___f_272_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__2___boxed), 13, 3);
lean_closure_set(v___f_272_, 0, v_h_262_);
lean_closure_set(v___f_272_, 1, v___x_255_);
lean_closure_set(v___f_272_, 2, v___x_271_);
v___x_273_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_257_, v_rest_263_, v_fst_258_, v___f_259_, v___f_272_, v___f_260_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4___boxed(lean_object* v___x_274_, lean_object* v___x_275_, lean_object* v_snd_276_, lean_object* v_fst_277_, lean_object* v___f_278_, lean_object* v___f_279_, lean_object* v_x_280_, lean_object* v_h_281_, lean_object* v_rest_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
size_t v___x_29589__boxed_290_; lean_object* v_res_291_; 
v___x_29589__boxed_290_ = lean_unbox_usize(v___x_275_);
lean_dec(v___x_275_);
v_res_291_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4(v___x_274_, v___x_29589__boxed_290_, v_snd_276_, v_fst_277_, v___f_278_, v___f_279_, v_x_280_, v_h_281_, v_rest_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v_x_280_);
return v_res_291_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_292_ = lean_box(0);
v___x_293_ = lean_unsigned_to_nat(16u);
v___x_294_ = lean_mk_array(v___x_293_, v___x_292_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5(lean_object* v___x_297_, lean_object* v___x_298_, lean_object* v_unit_299_, lean_object* v___x_300_, lean_object* v_a_301_, lean_object* v_fst_302_, lean_object* v_snd_303_, lean_object* v___x_304_, lean_object* v_a_305_, lean_object* v_fst_306_, lean_object* v_snd_307_, lean_object* v___x_308_, lean_object* v___f_309_, lean_object* v___f_310_, lean_object* v___f_311_, lean_object* v___f_312_, uint8_t v___x_313_, lean_object* v_xs_314_, lean_object* v_target_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; size_t v_sz_326_; size_t v___x_327_; lean_object* v___x_328_; 
v___x_323_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___closed__0);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_297_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = l_Array_zip___redArg(v_xs_314_, v___x_298_);
v_sz_326_ = lean_array_size(v___x_325_);
v___x_327_ = ((size_t)0ULL);
v___x_328_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_325_, v_sz_326_, v___x_327_, v___x_324_);
lean_dec_ref(v___x_325_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_299_);
lean_inc_ref(v___x_300_);
v___x_331_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_300_, v_a_329_, v___x_330_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec_ref(v___x_330_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_300_, v_a_301_, v_a_332_, v_fst_302_, v_snd_303_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v_fst_335_; lean_object* v_snd_336_; lean_object* v___x_337_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v_fst_335_ = lean_ctor_get(v_a_334_, 0);
lean_inc(v_fst_335_);
v_snd_336_ = lean_ctor_get(v_a_334_, 1);
lean_inc(v_snd_336_);
lean_dec(v_a_334_);
v___x_337_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v___x_304_, v_a_305_, v_a_332_, v_fst_306_, v_snd_307_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v_a_332_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; lean_object* v___x_341_; lean_object* v___f_342_; lean_object* v___x_343_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v_fst_339_ = lean_ctor_get(v_a_338_, 0);
lean_inc(v_fst_339_);
v_snd_340_ = lean_ctor_get(v_a_338_, 1);
lean_inc(v_snd_340_);
lean_dec(v_a_338_);
v___x_341_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed__const__1));
v___f_342_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__4___boxed), 16, 6);
lean_closure_set(v___f_342_, 0, v___x_308_);
lean_closure_set(v___f_342_, 1, v___x_341_);
lean_closure_set(v___f_342_, 2, v_snd_340_);
lean_closure_set(v___f_342_, 3, v_fst_339_);
lean_closure_set(v___f_342_, 4, v___f_309_);
lean_closure_set(v___f_342_, 5, v___f_310_);
v___x_343_ = lp_vampireReplay_Vampire_Reconstruct_carryPast(v_snd_336_, v_target_315_, v_fst_335_, v___f_311_, v___f_342_, v___f_312_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; uint8_t v___x_345_; uint8_t v___x_346_; lean_object* v___x_347_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = 0;
v___x_346_ = 1;
v___x_347_ = l_Lean_Meta_mkLambdaFVars(v_xs_314_, v_a_344_, v___x_345_, v___x_313_, v___x_345_, v___x_313_, v___x_346_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
return v___x_347_;
}
else
{
return v___x_343_;
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_snd_336_);
lean_dec(v_fst_335_);
lean_dec_ref(v_target_315_);
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
lean_dec_ref(v___f_310_);
lean_dec_ref(v___f_309_);
lean_dec(v___x_308_);
v_a_348_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_337_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_337_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_a_332_);
lean_dec_ref(v_target_315_);
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
lean_dec_ref(v___f_310_);
lean_dec_ref(v___f_309_);
lean_dec(v___x_308_);
lean_dec_ref(v_snd_307_);
lean_dec_ref(v_fst_306_);
lean_dec_ref(v_a_305_);
lean_dec_ref(v___x_304_);
v_a_356_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_333_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_333_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec_ref(v_target_315_);
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
lean_dec_ref(v___f_310_);
lean_dec_ref(v___f_309_);
lean_dec(v___x_308_);
lean_dec_ref(v_snd_307_);
lean_dec_ref(v_fst_306_);
lean_dec_ref(v_a_305_);
lean_dec_ref(v___x_304_);
lean_dec_ref(v_snd_303_);
lean_dec_ref(v_fst_302_);
lean_dec_ref(v_a_301_);
lean_dec_ref(v___x_300_);
v_a_364_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_331_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_331_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec_ref(v_target_315_);
lean_dec_ref(v___f_312_);
lean_dec_ref(v___f_311_);
lean_dec_ref(v___f_310_);
lean_dec_ref(v___f_309_);
lean_dec(v___x_308_);
lean_dec_ref(v_snd_307_);
lean_dec_ref(v_fst_306_);
lean_dec_ref(v_a_305_);
lean_dec_ref(v___x_304_);
lean_dec_ref(v_snd_303_);
lean_dec_ref(v_fst_302_);
lean_dec_ref(v_a_301_);
lean_dec_ref(v___x_300_);
lean_dec_ref(v_unit_299_);
v_a_372_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_328_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_328_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed(lean_object** _args){
lean_object* v___x_380_ = _args[0];
lean_object* v___x_381_ = _args[1];
lean_object* v_unit_382_ = _args[2];
lean_object* v___x_383_ = _args[3];
lean_object* v_a_384_ = _args[4];
lean_object* v_fst_385_ = _args[5];
lean_object* v_snd_386_ = _args[6];
lean_object* v___x_387_ = _args[7];
lean_object* v_a_388_ = _args[8];
lean_object* v_fst_389_ = _args[9];
lean_object* v_snd_390_ = _args[10];
lean_object* v___x_391_ = _args[11];
lean_object* v___f_392_ = _args[12];
lean_object* v___f_393_ = _args[13];
lean_object* v___f_394_ = _args[14];
lean_object* v___f_395_ = _args[15];
lean_object* v___x_396_ = _args[16];
lean_object* v_xs_397_ = _args[17];
lean_object* v_target_398_ = _args[18];
lean_object* v___y_399_ = _args[19];
lean_object* v___y_400_ = _args[20];
lean_object* v___y_401_ = _args[21];
lean_object* v___y_402_ = _args[22];
lean_object* v___y_403_ = _args[23];
lean_object* v___y_404_ = _args[24];
lean_object* v___y_405_ = _args[25];
_start:
{
uint8_t v___x_29657__boxed_406_; lean_object* v_res_407_; 
v___x_29657__boxed_406_ = lean_unbox(v___x_396_);
v_res_407_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5(v___x_380_, v___x_381_, v_unit_382_, v___x_383_, v_a_384_, v_fst_385_, v_snd_386_, v___x_387_, v_a_388_, v_fst_389_, v_snd_390_, v___x_391_, v___f_392_, v___f_393_, v___f_394_, v___f_395_, v___x_29657__boxed_406_, v_xs_397_, v_target_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec_ref(v_xs_397_);
lean_dec_ref(v___x_381_);
return v_res_407_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__0));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__2));
v___x_413_ = l_Lean_stringToMessageData(v___x_412_);
return v___x_413_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__5));
v___x_417_ = l_Lean_stringToMessageData(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__7));
v___x_420_ = l_Lean_stringToMessageData(v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(lean_object* v_step_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_unit_429_; lean_object* v_premises_430_; lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v_unit_429_ = lean_ctor_get(v_step_421_, 0);
lean_inc_ref(v_unit_429_);
v_premises_430_ = lean_ctor_get(v_step_421_, 1);
v___x_431_ = lean_array_get_size(v_premises_430_);
v___x_432_ = lean_unsigned_to_nat(2u);
v___x_433_ = lean_nat_dec_eq(v___x_431_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v___x_434_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__1);
v___x_435_ = l_Nat_reprFast(v___x_431_);
v___x_436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
v___x_437_ = l_Lean_MessageData_ofFormat(v___x_436_);
v___x_438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_434_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___x_439_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_438_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
return v___x_439_;
}
else
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_fst_442_; lean_object* v_snd_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v_fst_446_; lean_object* v_snd_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_array_fget_borrowed(v_premises_430_, v___x_440_);
v_fst_442_ = lean_ctor_get(v___x_441_, 0);
lean_inc(v_fst_442_);
v_snd_443_ = lean_ctor_get(v___x_441_, 1);
lean_inc(v_snd_443_);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_array_fget_borrowed(v_premises_430_, v___x_444_);
v_fst_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_fst_446_);
v_snd_447_ = lean_ctor_get(v___x_445_, 1);
lean_inc(v_snd_447_);
lean_inc_ref(v_unit_429_);
v___x_448_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_429_);
v___x_449_ = lean_array_get_size(v___x_448_);
v___x_450_ = lean_nat_dec_eq(v___x_449_, v___x_432_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref(v___x_448_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v___x_451_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__3);
v___x_452_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_451_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
return v___x_452_;
}
else
{
lean_object* v___x_453_; 
lean_inc_ref(v_step_421_);
v___x_453_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_421_, v___x_440_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v___x_455_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
lean_inc(v_a_454_);
lean_dec_ref_known(v___x_453_, 1);
lean_inc_ref(v_step_421_);
v___x_455_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_421_, v___x_444_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_literal_456_; 
v_literal_456_ = lean_ctor_get(v_a_454_, 0);
lean_inc(v_literal_456_);
if (lean_obj_tag(v_literal_456_) == 1)
{
lean_object* v_a_457_; lean_object* v_val_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_497_; 
v_a_457_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_455_, 1);
v_val_458_ = lean_ctor_get(v_literal_456_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v_literal_456_);
if (v_isSharedCheck_497_ == 0)
{
v___x_460_ = v_literal_456_;
v_isShared_461_ = v_isSharedCheck_497_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_val_458_);
lean_dec(v_literal_456_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_497_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v_literal_462_; lean_object* v___f_463_; lean_object* v___x_464_; lean_object* v___f_465_; lean_object* v___f_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; 
v_literal_462_ = lean_ctor_get(v_a_457_, 0);
v___f_463_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__4));
v___x_464_ = lean_box(v___x_450_);
v___f_465_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__1___boxed), 2, 1);
lean_closure_set(v___f_465_, 0, v___x_464_);
v___f_466_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__3___boxed), 2, 1);
lean_closure_set(v___f_466_, 0, v_val_458_);
v___x_467_ = lean_array_fget(v___x_448_, v___x_440_);
v___x_468_ = lean_array_fget(v___x_448_, v___x_444_);
lean_dec_ref(v___x_448_);
if (lean_obj_tag(v_literal_462_) == 0)
{
v___y_470_ = v_a_422_;
v___y_471_ = v_a_423_;
v___y_472_ = v_a_424_;
v___y_473_ = v_a_425_;
v___y_474_ = v_a_426_;
v___y_475_ = v_a_427_;
goto v___jp_469_;
}
else
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v___x_468_);
lean_dec(v___x_467_);
lean_dec_ref(v___f_466_);
lean_dec_ref(v___f_465_);
lean_del_object(v___x_460_);
lean_dec(v_a_457_);
lean_dec(v_a_454_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v___x_487_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__6);
v___x_488_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_487_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
v___jp_469_:
{
lean_object* v___x_476_; 
v___x_476_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_421_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___f_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
lean_inc_ref(v_unit_429_);
v___x_478_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_429_);
v___x_479_ = lean_box(v___x_450_);
lean_inc_ref(v___x_478_);
v___f_480_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___lam__5___boxed), 26, 17);
lean_closure_set(v___f_480_, 0, v___x_440_);
lean_closure_set(v___f_480_, 1, v___x_478_);
lean_closure_set(v___f_480_, 2, v_unit_429_);
lean_closure_set(v___f_480_, 3, v___x_467_);
lean_closure_set(v___f_480_, 4, v_a_454_);
lean_closure_set(v___f_480_, 5, v_fst_442_);
lean_closure_set(v___f_480_, 6, v_snd_443_);
lean_closure_set(v___f_480_, 7, v___x_468_);
lean_closure_set(v___f_480_, 8, v_a_457_);
lean_closure_set(v___f_480_, 9, v_fst_446_);
lean_closure_set(v___f_480_, 10, v_snd_447_);
lean_closure_set(v___f_480_, 11, v___x_432_);
lean_closure_set(v___f_480_, 12, v___f_465_);
lean_closure_set(v___f_480_, 13, v___f_463_);
lean_closure_set(v___f_480_, 14, v___f_466_);
lean_closure_set(v___f_480_, 15, v___f_463_);
lean_closure_set(v___f_480_, 16, v___x_479_);
v___x_481_ = lean_array_get_size(v___x_478_);
lean_dec_ref(v___x_478_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_481_);
v___x_483_ = v___x_460_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_481_);
v___x_483_ = v_reuseFailAlloc_486_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
uint8_t v___x_484_; lean_object* v___x_485_; 
v___x_484_ = 0;
v___x_485_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_477_, v___x_483_, v___f_480_, v___x_484_, v___x_484_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
return v___x_485_;
}
}
else
{
lean_dec(v___x_468_);
lean_dec(v___x_467_);
lean_dec_ref(v___f_466_);
lean_dec_ref(v___f_465_);
lean_del_object(v___x_460_);
lean_dec(v_a_457_);
lean_dec(v_a_454_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
return v___x_476_;
}
}
}
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; 
lean_dec_ref_known(v___x_455_, 1);
lean_dec(v_literal_456_);
lean_dec(v_a_454_);
lean_dec_ref(v___x_448_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v___x_498_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___closed__8);
v___x_499_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_498_, v_a_424_, v_a_425_, v_a_426_, v_a_427_);
return v___x_499_;
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec(v_a_454_);
lean_dec_ref(v___x_448_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v_a_500_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_455_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_455_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec_ref(v___x_448_);
lean_dec(v_snd_447_);
lean_dec(v_fst_446_);
lean_dec(v_snd_443_);
lean_dec(v_fst_442_);
lean_dec_ref(v_unit_429_);
lean_dec_ref(v_step_421_);
v_a_508_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_453_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_453_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution___boxed(lean_object* v_step_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = lp_vampireReplay_Vampire_Reconstruct_Subsumption_subsumptionResolution(v_step_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0(lean_object* v_inner_525_, lean_object* v_h_526_, lean_object* v_a_527_, lean_object* v_as_528_, size_t v_sz_529_, size_t v_i_530_, lean_object* v_b_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___redArg(v_inner_525_, v_h_526_, v_a_527_, v_as_528_, v_sz_529_, v_i_530_, v_b_531_, v___y_534_, v___y_535_, v___y_536_, v___y_537_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0___boxed(lean_object* v_inner_540_, lean_object* v_h_541_, lean_object* v_a_542_, lean_object* v_as_543_, lean_object* v_sz_544_, lean_object* v_i_545_, lean_object* v_b_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_){
_start:
{
size_t v_sz_boxed_554_; size_t v_i_boxed_555_; lean_object* v_res_556_; 
v_sz_boxed_554_ = lean_unbox_usize(v_sz_544_);
lean_dec(v_sz_544_);
v_i_boxed_555_ = lean_unbox_usize(v_i_545_);
lean_dec(v_i_545_);
v_res_556_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Subsumption_subsumptionResolution_spec__0(v_inner_540_, v_h_541_, v_a_542_, v_as_543_, v_sz_boxed_554_, v_i_boxed_555_, v_b_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec_ref(v_as_543_);
return v_res_556_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Subsumption(uint8_t builtin) {
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
