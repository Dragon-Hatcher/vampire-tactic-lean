// Lean compiler output
// Module: Vampire.Reconstruct.Rules.Simplify
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_instReprConnective_repr(uint8_t, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Vampire"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(80, 142, 215, 100, 183, 128, 219, 42)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Reconstruct"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(18, 68, 184, 68, 235, 156, 26, 113)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Rules"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(246, 87, 176, 209, 233, 52, 114, 146)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Simplify"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 154, 127, 130, 155, 203, 15)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "or_drops_false_right"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "and_drops_true_right"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "or_drops_false_left"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "and_drops_true_left"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "or_absorbs_true_right"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "and_absorbs_false_right"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "or_absorbs_true_left"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "and_absorbs_false_left"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a junction with no arguments"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_congr"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22_value),LEAN_SCALAR_PTR_LITERAL(97, 254, 90, 169, 212, 147, 67, 5)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24_value),LEAN_SCALAR_PTR_LITERAL(188, 238, 216, 229, 220, 92, 101, 241)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "formula is missing a subformula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1___boxed(lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__0_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__1_value)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(233, 95, 142, 123, 147, 63, 142, 134)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "forall_congr'"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(63, 255, 57, 163, 42, 11, 214, 176)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__5_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0(lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "exists_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(96, 184, 74, 11, 95, 2, 237, 59)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(99, 55, 46, 116, 216, 169, 203, 95)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(109, 169, 136, 232, 7, 129, 228, 247)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(130, 219, 68, 174, 109, 40, 203, 166)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__5_value),LEAN_SCALAR_PTR_LITERAL(172, 201, 185, 253, 143, 161, 167, 1)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 18, 113, 11, 181, 238, 250)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value),LEAN_SCALAR_PTR_LITERAL(244, 164, 105, 11, 72, 106, 64, 17)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value),LEAN_SCALAR_PTR_LITERAL(81, 249, 135, 224, 26, 175, 39, 237)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "xor_false_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "iff_false_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "xor_true_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "iff_true_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__8_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "xor_false_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "iff_false_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "xor_false_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "iff_false_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__12_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "xor_false_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "iff_false_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__14_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "xor_true_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__15_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "iff_true_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__16_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "xor_true_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__17_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "iff_true_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__18 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__18_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "xor_true_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__19_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "iff_true_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__20_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__21 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__21_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__21_value),LEAN_SCALAR_PTR_LITERAL(74, 35, 94, 165, 147, 2, 155, 38)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__22 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__22_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__23 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__23_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__23_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "not_true_collapses"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__26 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__26_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__26_value),LEAN_SCALAR_PTR_LITERAL(95, 31, 73, 147, 162, 28, 68, 86)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "not_false_collapses"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value),LEAN_SCALAR_PTR_LITERAL(18, 0, 22, 173, 26, 134, 169, 56)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "imp_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value),LEAN_SCALAR_PTR_LITERAL(9, 246, 228, 60, 55, 221, 92, 163)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "imp_false_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value),LEAN_SCALAR_PTR_LITERAL(12, 234, 55, 253, 21, 52, 153, 110)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_false_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value),LEAN_SCALAR_PTR_LITERAL(59, 7, 169, 167, 5, 34, 3, 255)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "imp_true_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value),LEAN_SCALAR_PTR_LITERAL(26, 170, 173, 18, 211, 50, 119, 190)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_true_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value),LEAN_SCALAR_PTR_LITERAL(170, 57, 182, 56, 165, 239, 247, 247)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "cannot absorb the truth values of a formula with connective "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__41 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__41_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "reduce_false_true should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "reduce_false_true without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "reduce_false_true should be given a formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(lean_object* v_e_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_12_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2));
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v_e_6_);
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_mk_empty_array_with_capacity(v___x_14_);
v___x_16_ = lean_array_push(v___x_15_, v___x_13_);
v___x_17_ = l_Lean_Meta_mkAppOptM(v___x_12_, v___x_16_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___boxed(lean_object* v_e_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_e_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(lean_object* v_e_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_e_25_, v_a_28_, v_a_29_, v_a_30_, v_a_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___boxed(lean_object* v_e_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(v_e_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
return v_res_42_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20));
v___x_77_ = l_Lean_stringToMessageData(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(uint8_t v_isAnd_96_, lean_object* v_parts_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
_start:
{
lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v_result_106_; lean_object* v_absorption_107_; lean_object* v___y_108_; lean_object* v___y_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_134_; lean_object* v___y_135_; lean_object* v___y_136_; lean_object* v___y_137_; lean_object* v___y_138_; lean_object* v___y_153_; lean_object* v___y_154_; lean_object* v___y_155_; lean_object* v___y_156_; lean_object* v___y_157_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_192_; lean_object* v___y_193_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___y_212_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v___y_355_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v_fst_404_; lean_object* v_snd_405_; 
if (v_isAnd_96_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31));
v___x_411_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v_fst_404_ = v___x_410_;
v_snd_405_ = v___x_411_;
goto v___jp_403_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33));
v___x_413_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v_fst_404_ = v___x_412_;
v_snd_405_ = v___x_413_;
goto v___jp_403_;
}
v___jp_103_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_112_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_113_ = lean_array_push(v___y_105_, v___y_104_);
v___x_114_ = lean_array_push(v___x_113_, v_absorption_107_);
v___x_115_ = l_Lean_Meta_mkAppM(v___x_112_, v___x_114_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_124_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_124_ == 0)
{
v___x_118_ = v___x_115_;
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_115_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_124_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v_result_106_);
lean_ctor_set(v___x_120_, 1, v_a_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 0, v___x_120_);
v___x_122_ = v___x_118_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
lean_dec_ref(v_result_106_);
v_a_125_ = lean_ctor_get(v___x_115_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_115_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_115_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_115_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
v___jp_133_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
lean_inc_ref(v___y_137_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___y_137_);
v___x_140_ = lean_mk_empty_array_with_capacity(v___y_136_);
lean_dec(v___y_136_);
v___x_141_ = lean_array_push(v___x_140_, v___x_139_);
v___x_142_ = l_Lean_Meta_mkAppOptM(v___y_138_, v___x_141_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v_a_143_; 
v_a_143_ = lean_ctor_get(v___x_142_, 0);
lean_inc(v_a_143_);
lean_dec_ref_known(v___x_142_, 1);
v___y_104_ = v___y_135_;
v___y_105_ = v___y_134_;
v_result_106_ = v___y_137_;
v_absorption_107_ = v_a_143_;
v___y_108_ = v_a_98_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
goto v___jp_103_;
}
else
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec_ref(v___y_137_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v___y_134_);
v_a_144_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_142_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_142_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
v___jp_152_:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
lean_inc_ref(v___y_155_);
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v___y_155_);
v___x_159_ = lean_mk_empty_array_with_capacity(v___y_156_);
lean_dec(v___y_156_);
v___x_160_ = lean_array_push(v___x_159_, v___x_158_);
v___x_161_ = l_Lean_Meta_mkAppOptM(v___y_157_, v___x_160_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref_known(v___x_161_, 1);
v___y_104_ = v___y_154_;
v___y_105_ = v___y_153_;
v_result_106_ = v___y_155_;
v_absorption_107_ = v_a_162_;
v___y_108_ = v_a_98_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
goto v___jp_103_;
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec_ref(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec_ref(v___y_153_);
v_a_163_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v___x_161_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_161_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
v___jp_171_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_178_, 0, v___y_176_);
v___x_179_ = lean_mk_empty_array_with_capacity(v___y_175_);
lean_dec(v___y_175_);
v___x_180_ = lean_array_push(v___x_179_, v___x_178_);
v___x_181_ = l_Lean_Meta_mkAppOptM(v___y_177_, v___x_180_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 1);
v___y_104_ = v___y_173_;
v___y_105_ = v___y_172_;
v_result_106_ = v___y_174_;
v_absorption_107_ = v_a_182_;
v___y_108_ = v_a_98_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
goto v___jp_103_;
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec_ref(v___y_172_);
v_a_183_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_181_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_181_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
v___jp_191_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_198_, 0, v___y_194_);
v___x_199_ = lean_mk_empty_array_with_capacity(v___y_196_);
lean_dec(v___y_196_);
v___x_200_ = lean_array_push(v___x_199_, v___x_198_);
v___x_201_ = l_Lean_Meta_mkAppOptM(v___y_197_, v___x_200_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v_a_202_; 
v_a_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_202_);
lean_dec_ref_known(v___x_201_, 1);
v___y_104_ = v___y_193_;
v___y_105_ = v___y_192_;
v_result_106_ = v___y_195_;
v_absorption_107_ = v_a_202_;
v___y_108_ = v_a_98_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
goto v___jp_103_;
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v___y_195_);
lean_dec_ref(v___y_193_);
lean_dec_ref(v___y_192_);
v_a_203_ = lean_ctor_get(v___x_201_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_201_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_201_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_201_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
v___jp_211_:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_223_ = lean_unsigned_to_nat(2u);
v___x_224_ = lean_mk_empty_array_with_capacity(v___x_223_);
lean_inc_ref(v___x_224_);
v___x_225_ = lean_array_push(v___x_224_, v___y_220_);
v___x_226_ = lean_array_push(v___x_225_, v___y_215_);
lean_inc(v___y_222_);
v___x_227_ = l_Lean_Meta_mkAppM(v___y_222_, v___x_226_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; uint8_t v___x_229_; 
v_a_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = lean_expr_eqv(v___y_218_, v___y_217_);
if (v___x_229_ == 0)
{
uint8_t v___x_230_; 
v___x_230_ = lean_expr_eqv(v___y_214_, v___y_217_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
lean_dec_ref(v___y_217_);
v___x_231_ = lean_expr_eqv(v___y_218_, v___y_213_);
if (v___x_231_ == 0)
{
uint8_t v___x_232_; 
v___x_232_ = lean_expr_eqv(v___y_214_, v___y_213_);
lean_dec_ref(v___y_213_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v___y_221_);
lean_dec(v___y_219_);
lean_inc(v___y_212_);
v___x_233_ = l_Lean_Expr_const___override(v___y_212_, v___y_216_);
v___x_234_ = l_Lean_mkAppB(v___x_233_, v___y_218_, v___y_214_);
lean_inc_ref(v___x_234_);
v___x_235_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_234_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
v___x_237_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_238_ = lean_array_push(v___x_224_, v_a_228_);
v___x_239_ = lean_array_push(v___x_238_, v_a_236_);
v___x_240_ = l_Lean_Meta_mkAppM(v___x_237_, v___x_239_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_249_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_249_ == 0)
{
v___x_243_ = v___x_240_;
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_249_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_234_);
lean_ctor_set(v___x_245_, 1, v_a_241_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_245_);
v___x_247_ = v___x_243_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_245_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v___x_234_);
v_a_250_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_240_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_240_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v___x_234_);
lean_dec(v_a_228_);
lean_dec_ref(v___x_224_);
v_a_258_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_235_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_235_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
else
{
lean_dec(v___y_216_);
lean_dec_ref(v___y_214_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_266_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_267_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_268_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_269_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_270_ = l_Lean_Name_num___override(v___x_269_, v___y_221_);
v___x_271_ = l_Lean_Name_str___override(v___x_270_, v___x_266_);
v___x_272_ = l_Lean_Name_str___override(v___x_271_, v___x_267_);
v___x_273_ = l_Lean_Name_str___override(v___x_272_, v___x_268_);
v___x_274_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_275_ = l_Lean_Name_str___override(v___x_273_, v___x_274_);
v___y_134_ = v___x_224_;
v___y_135_ = v_a_228_;
v___y_136_ = v___y_219_;
v___y_137_ = v___y_218_;
v___y_138_ = v___x_275_;
goto v___jp_133_;
}
else
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_276_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_277_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_278_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_279_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_280_ = l_Lean_Name_num___override(v___x_279_, v___y_221_);
v___x_281_ = l_Lean_Name_str___override(v___x_280_, v___x_276_);
v___x_282_ = l_Lean_Name_str___override(v___x_281_, v___x_277_);
v___x_283_ = l_Lean_Name_str___override(v___x_282_, v___x_278_);
v___x_284_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13));
v___x_285_ = l_Lean_Name_str___override(v___x_283_, v___x_284_);
v___y_134_ = v___x_224_;
v___y_135_ = v_a_228_;
v___y_136_ = v___y_219_;
v___y_137_ = v___y_218_;
v___y_138_ = v___x_285_;
goto v___jp_133_;
}
}
}
else
{
lean_dec_ref(v___y_218_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_213_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_286_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_287_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_288_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_289_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_290_ = l_Lean_Name_num___override(v___x_289_, v___y_221_);
v___x_291_ = l_Lean_Name_str___override(v___x_290_, v___x_286_);
v___x_292_ = l_Lean_Name_str___override(v___x_291_, v___x_287_);
v___x_293_ = l_Lean_Name_str___override(v___x_292_, v___x_288_);
v___x_294_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14));
v___x_295_ = l_Lean_Name_str___override(v___x_293_, v___x_294_);
v___y_153_ = v___x_224_;
v___y_154_ = v_a_228_;
v___y_155_ = v___y_214_;
v___y_156_ = v___y_219_;
v___y_157_ = v___x_295_;
goto v___jp_152_;
}
else
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_296_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_297_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_298_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_299_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_300_ = l_Lean_Name_num___override(v___x_299_, v___y_221_);
v___x_301_ = l_Lean_Name_str___override(v___x_300_, v___x_296_);
v___x_302_ = l_Lean_Name_str___override(v___x_301_, v___x_297_);
v___x_303_ = l_Lean_Name_str___override(v___x_302_, v___x_298_);
v___x_304_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15));
v___x_305_ = l_Lean_Name_str___override(v___x_303_, v___x_304_);
v___y_153_ = v___x_224_;
v___y_154_ = v_a_228_;
v___y_155_ = v___y_214_;
v___y_156_ = v___y_219_;
v___y_157_ = v___x_305_;
goto v___jp_152_;
}
}
}
else
{
lean_dec(v___y_216_);
lean_dec_ref(v___y_214_);
lean_dec_ref(v___y_213_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_306_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_307_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_308_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_309_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_310_ = l_Lean_Name_num___override(v___x_309_, v___y_221_);
v___x_311_ = l_Lean_Name_str___override(v___x_310_, v___x_306_);
v___x_312_ = l_Lean_Name_str___override(v___x_311_, v___x_307_);
v___x_313_ = l_Lean_Name_str___override(v___x_312_, v___x_308_);
v___x_314_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16));
v___x_315_ = l_Lean_Name_str___override(v___x_313_, v___x_314_);
v___y_172_ = v___x_224_;
v___y_173_ = v_a_228_;
v___y_174_ = v___y_217_;
v___y_175_ = v___y_219_;
v___y_176_ = v___y_218_;
v___y_177_ = v___x_315_;
goto v___jp_171_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_316_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_317_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_318_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_319_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_320_ = l_Lean_Name_num___override(v___x_319_, v___y_221_);
v___x_321_ = l_Lean_Name_str___override(v___x_320_, v___x_316_);
v___x_322_ = l_Lean_Name_str___override(v___x_321_, v___x_317_);
v___x_323_ = l_Lean_Name_str___override(v___x_322_, v___x_318_);
v___x_324_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17));
v___x_325_ = l_Lean_Name_str___override(v___x_323_, v___x_324_);
v___y_172_ = v___x_224_;
v___y_173_ = v_a_228_;
v___y_174_ = v___y_217_;
v___y_175_ = v___y_219_;
v___y_176_ = v___y_218_;
v___y_177_ = v___x_325_;
goto v___jp_171_;
}
}
}
else
{
lean_dec_ref(v___y_218_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_213_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_326_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_327_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_328_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_329_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_330_ = l_Lean_Name_num___override(v___x_329_, v___y_221_);
v___x_331_ = l_Lean_Name_str___override(v___x_330_, v___x_326_);
v___x_332_ = l_Lean_Name_str___override(v___x_331_, v___x_327_);
v___x_333_ = l_Lean_Name_str___override(v___x_332_, v___x_328_);
v___x_334_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18));
v___x_335_ = l_Lean_Name_str___override(v___x_333_, v___x_334_);
v___y_192_ = v___x_224_;
v___y_193_ = v_a_228_;
v___y_194_ = v___y_214_;
v___y_195_ = v___y_217_;
v___y_196_ = v___y_219_;
v___y_197_ = v___x_335_;
goto v___jp_191_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_336_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_337_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_338_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_339_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_340_ = l_Lean_Name_num___override(v___x_339_, v___y_221_);
v___x_341_ = l_Lean_Name_str___override(v___x_340_, v___x_336_);
v___x_342_ = l_Lean_Name_str___override(v___x_341_, v___x_337_);
v___x_343_ = l_Lean_Name_str___override(v___x_342_, v___x_338_);
v___x_344_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19));
v___x_345_ = l_Lean_Name_str___override(v___x_343_, v___x_344_);
v___y_192_ = v___x_224_;
v___y_193_ = v_a_228_;
v___y_194_ = v___y_214_;
v___y_195_ = v___y_217_;
v___y_196_ = v___y_219_;
v___y_197_ = v___x_345_;
goto v___jp_191_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v___x_224_);
lean_dec(v___y_221_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_214_);
lean_dec_ref(v___y_213_);
v_a_346_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_227_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_227_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
v___jp_354_:
{
lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = lean_array_get_size(v_parts_97_);
v___x_361_ = lean_nat_dec_lt(v___x_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
v___x_362_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21);
v___x_363_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_362_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_364_ = lean_array_fget_borrowed(v_parts_97_, v___x_359_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_dec_eq(v___x_360_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v_rest_367_; lean_object* v___x_368_; 
v_rest_367_ = l_Array_extract___redArg(v_parts_97_, v___x_365_, v___x_360_);
v___x_368_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_96_, v_rest_367_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec_ref(v_rest_367_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v_fst_370_; lean_object* v_snd_371_; lean_object* v___x_372_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc(v_a_369_);
lean_dec_ref_known(v___x_368_, 1);
v_fst_370_ = lean_ctor_get(v_a_369_, 0);
lean_inc(v_fst_370_);
v_snd_371_ = lean_ctor_get(v_a_369_, 1);
lean_inc(v_snd_371_);
lean_dec(v_a_369_);
lean_inc(v___x_364_);
v___x_372_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_364_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v_absorbing_374_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
lean_inc(v___y_357_);
lean_inc(v___y_358_);
v_absorbing_374_ = l_Lean_Expr_const___override(v___y_358_, v___y_357_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_375_; 
v___x_375_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23));
lean_inc(v___x_364_);
v___y_212_ = v___y_355_;
v___y_213_ = v___y_356_;
v___y_214_ = v_fst_370_;
v___y_215_ = v_snd_371_;
v___y_216_ = v___y_357_;
v___y_217_ = v_absorbing_374_;
v___y_218_ = v___x_364_;
v___y_219_ = v___x_365_;
v___y_220_ = v_a_373_;
v___y_221_ = v___x_359_;
v___y_222_ = v___x_375_;
goto v___jp_211_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25));
lean_inc(v___x_364_);
v___y_212_ = v___y_355_;
v___y_213_ = v___y_356_;
v___y_214_ = v_fst_370_;
v___y_215_ = v_snd_371_;
v___y_216_ = v___y_357_;
v___y_217_ = v_absorbing_374_;
v___y_218_ = v___x_364_;
v___y_219_ = v___x_365_;
v___y_220_ = v_a_373_;
v___y_221_ = v___x_359_;
v___y_222_ = v___x_376_;
goto v___jp_211_;
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_snd_371_);
lean_dec(v_fst_370_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
v_a_377_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_372_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_372_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
else
{
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v___x_368_;
}
}
else
{
lean_object* v___x_385_; 
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_inc(v___x_364_);
v___x_385_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_364_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_394_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_394_ == 0)
{
v___x_388_ = v___x_385_;
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_385_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_394_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; lean_object* v___x_392_; 
lean_inc(v___x_364_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_364_);
lean_ctor_set(v___x_390_, 1, v_a_386_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_390_);
v___x_392_ = v___x_388_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
v_a_395_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_385_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_385_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
}
v___jp_403_:
{
lean_object* v___x_406_; lean_object* v_dropped_407_; 
v___x_406_ = lean_box(0);
lean_inc(v_snd_405_);
v_dropped_407_ = l_Lean_Expr_const___override(v_snd_405_, v___x_406_);
if (v_isAnd_96_ == 0)
{
lean_object* v___x_408_; 
v___x_408_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___y_355_ = v_fst_404_;
v___y_356_ = v_dropped_407_;
v___y_357_ = v___x_406_;
v___y_358_ = v___x_408_;
goto v___jp_354_;
}
else
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___y_355_ = v_fst_404_;
v___y_356_ = v_dropped_407_;
v___y_357_ = v___x_406_;
v___y_358_ = v___x_409_;
goto v___jp_354_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___boxed(lean_object* v_isAnd_414_, lean_object* v_parts_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
uint8_t v_isAnd_boxed_421_; lean_object* v_res_422_; 
v_isAnd_boxed_421_ = lean_unbox(v_isAnd_414_);
v_res_422_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_boxed_421_, v_parts_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec_ref(v_parts_415_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(uint8_t v_isAnd_423_, lean_object* v_parts_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_423_, v_parts_424_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___boxed(lean_object* v_isAnd_433_, lean_object* v_parts_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_){
_start:
{
uint8_t v_isAnd_boxed_442_; lean_object* v_res_443_; 
v_isAnd_boxed_442_ = lean_unbox(v_isAnd_433_);
v_res_443_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(v_isAnd_boxed_442_, v_parts_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_);
lean_dec(v_a_440_);
lean_dec_ref(v_a_439_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec_ref(v_parts_434_);
return v_res_443_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__0));
v___x_446_ = l_Lean_stringToMessageData(v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(lean_object* v_f_447_, lean_object* v_i_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_456_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_447_);
v___x_457_ = lean_array_get_size(v___x_456_);
v___x_458_ = lean_nat_dec_lt(v_i_448_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec_ref(v___x_456_);
v___x_459_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1);
v___x_460_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_459_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_460_;
}
else
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_array_fget(v___x_456_, v_i_448_);
lean_dec_ref(v___x_456_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___boxed(lean_object* v_f_463_, lean_object* v_i_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_463_, v_i_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v___y_468_);
lean_dec_ref(v___y_467_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
lean_dec(v_i_464_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(lean_object* v_e_473_){
_start:
{
lean_object* v___x_474_; uint8_t v___x_475_; 
v___x_474_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___x_475_ = l_Lean_Expr_isConstOf(v_e_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_476_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___x_477_ = l_Lean_Expr_isConstOf(v_e_473_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; 
v___x_478_ = lean_box(0);
return v___x_478_;
}
else
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = lean_box(v___x_475_);
v___x_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_box(v___x_475_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1___boxed(lean_object* v_e_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v_e_483_);
lean_dec_ref(v_e_483_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(lean_object* v___x_488_, lean_object* v_e_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_490_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1));
v___x_491_ = l_Lean_Expr_const___override(v___x_490_, v___x_488_);
v___x_492_ = l_Lean_Expr_app___override(v___x_491_, v_e_489_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0(lean_object* v_vars_511_, uint32_t v_fst_512_, lean_object* v_sorts_513_, lean_object* v_body_514_, uint8_t v_isForall_515_, lean_object* v_tail_516_, lean_object* v_x_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_inc_ref(v_x_517_);
v___x_525_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_511_, v_fst_512_, v_x_517_);
v___x_526_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_513_, v_body_514_, v_isForall_515_, v_tail_516_, v___x_525_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_611_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_611_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_611_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_611_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_fst_531_; lean_object* v_snd_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_610_; 
v_fst_531_ = lean_ctor_get(v_a_527_, 0);
v_snd_532_ = lean_ctor_get(v_a_527_, 1);
v_isSharedCheck_610_ = !lean_is_exclusive(v_a_527_);
if (v_isSharedCheck_610_ == 0)
{
v___x_534_ = v_a_527_;
v_isShared_535_ = v_isSharedCheck_610_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_snd_532_);
lean_inc(v_fst_531_);
lean_dec(v_a_527_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_610_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___y_537_; lean_object* v_result_538_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; uint8_t v___x_550_; uint8_t v___x_551_; lean_object* v___x_552_; 
v___x_546_ = lean_unsigned_to_nat(1u);
v___x_547_ = lean_mk_empty_array_with_capacity(v___x_546_);
lean_inc_ref(v___x_547_);
v___x_548_ = lean_array_push(v___x_547_, v_x_517_);
v___x_549_ = 0;
v___x_550_ = 1;
v___x_551_ = 1;
v___x_552_ = l_Lean_Meta_mkLambdaFVars(v___x_548_, v_snd_532_, v___x_549_, v___x_550_, v___x_549_, v___x_550_, v___x_551_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___y_555_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
if (v_isForall_515_ == 0)
{
lean_object* v___x_600_; 
v___x_600_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__3));
v___y_555_ = v___x_600_;
goto v___jp_554_;
}
else
{
lean_object* v___x_601_; 
v___x_601_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__5));
v___y_555_ = v___x_601_;
goto v___jp_554_;
}
v___jp_554_:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_inc_ref(v___x_547_);
v___x_556_ = lean_array_push(v___x_547_, v_a_553_);
lean_inc(v___y_555_);
v___x_557_ = l_Lean_Meta_mkAppM(v___y_555_, v___x_556_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
if (lean_obj_tag(v___x_557_) == 0)
{
if (v_isForall_515_ == 0)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_557_, 1);
lean_inc(v_fst_531_);
v___x_559_ = l_Lean_Meta_mkLambdaFVars(v___x_548_, v_fst_531_, v___x_549_, v___x_550_, v___x_549_, v___x_550_, v___x_551_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
lean_dec_ref(v___x_548_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v___x_559_, 1);
v___x_561_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__1));
v___x_562_ = lean_array_push(v___x_547_, v_a_560_);
v___x_563_ = l_Lean_Meta_mkAppM(v___x_561_, v___x_562_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v___x_563_, 1);
v___y_537_ = v_a_558_;
v_result_538_ = v_a_564_;
goto v___jp_536_;
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec(v_a_558_);
lean_del_object(v___x_534_);
lean_dec(v_fst_531_);
lean_del_object(v___x_529_);
v_a_565_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_563_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_563_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
lean_dec(v_a_558_);
lean_dec_ref(v___x_547_);
lean_del_object(v___x_534_);
lean_dec(v_fst_531_);
lean_del_object(v___x_529_);
v_a_573_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_559_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_559_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_582_; 
lean_dec_ref(v___x_547_);
v_a_581_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v___x_557_, 1);
lean_inc(v_fst_531_);
v___x_582_ = l_Lean_Meta_mkForallFVars(v___x_548_, v_fst_531_, v___x_549_, v___x_550_, v___x_550_, v___x_551_, v___y_520_, v___y_521_, v___y_522_, v___y_523_);
lean_dec_ref(v___x_548_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___y_537_ = v_a_581_;
v_result_538_ = v_a_583_;
goto v___jp_536_;
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_a_581_);
lean_del_object(v___x_534_);
lean_dec(v_fst_531_);
lean_del_object(v___x_529_);
v_a_584_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_582_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_582_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v___x_548_);
lean_dec_ref(v___x_547_);
lean_del_object(v___x_534_);
lean_dec(v_fst_531_);
lean_del_object(v___x_529_);
v_a_592_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_557_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_557_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec_ref(v___x_548_);
lean_dec_ref(v___x_547_);
lean_del_object(v___x_534_);
lean_dec(v_fst_531_);
lean_del_object(v___x_529_);
v_a_602_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_552_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_552_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
v___jp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 1, v_fst_531_);
lean_ctor_set(v___x_534_, 0, v___y_537_);
v___x_540_ = v___x_534_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___y_537_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_fst_531_);
v___x_540_ = v_reuseFailAlloc_545_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v_result_538_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_541_);
v___x_543_ = v___x_529_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_dec_ref(v_x_517_);
v_a_612_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_526_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_526_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___boxed(lean_object* v_vars_620_, lean_object* v_fst_621_, lean_object* v_sorts_622_, lean_object* v_body_623_, lean_object* v_isForall_624_, lean_object* v_tail_625_, lean_object* v_x_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
uint32_t v_fst_108303__boxed_634_; uint8_t v_isForall_boxed_635_; lean_object* v_res_636_; 
v_fst_108303__boxed_634_ = lean_unbox_uint32(v_fst_621_);
lean_dec(v_fst_621_);
v_isForall_boxed_635_ = lean_unbox(v_isForall_624_);
v_res_636_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0(v_vars_620_, v_fst_108303__boxed_634_, v_sorts_622_, v_body_623_, v_isForall_boxed_635_, v_tail_625_, v_x_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
return v_res_636_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_box(0);
v___x_655_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___x_656_ = l_Lean_Expr_const___override(v___x_655_, v___x_654_);
return v___x_656_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = lean_box(0);
v___x_666_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___x_667_ = l_Lean_Expr_const___override(v___x_666_, v___x_665_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(lean_object* v_sorts_672_, lean_object* v_body_673_, uint8_t v_isForall_674_, lean_object* v_rest_675_, lean_object* v_vars_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_){
_start:
{
if (lean_obj_tag(v_rest_675_) == 0)
{
lean_object* v___x_684_; 
v___x_684_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_672_, v_vars_676_, v_body_673_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
return v___x_684_;
}
else
{
lean_object* v_head_685_; lean_object* v_tail_686_; lean_object* v_fst_687_; lean_object* v_snd_688_; lean_object* v___x_689_; 
v_head_685_ = lean_ctor_get(v_rest_675_, 0);
lean_inc(v_head_685_);
v_tail_686_ = lean_ctor_get(v_rest_675_, 1);
lean_inc(v_tail_686_);
lean_dec_ref_known(v_rest_675_, 2);
v_fst_687_ = lean_ctor_get(v_head_685_, 0);
lean_inc(v_fst_687_);
v_snd_688_ = lean_ctor_get(v_head_685_, 1);
lean_inc(v_snd_688_);
lean_dec(v_head_685_);
v___x_689_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_688_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v___f_692_; lean_object* v___x_693_; uint32_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc_n(v_a_690_, 2);
lean_dec_ref_known(v___x_689_, 1);
v___x_691_ = lean_box(v_isForall_674_);
lean_inc(v_fst_687_);
v___f_692_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___boxed), 14, 6);
lean_closure_set(v___f_692_, 0, v_vars_676_);
lean_closure_set(v___f_692_, 1, v_fst_687_);
lean_closure_set(v___f_692_, 2, v_sorts_672_);
lean_closure_set(v___f_692_, 3, v_body_673_);
lean_closure_set(v___f_692_, 4, v___x_691_);
lean_closure_set(v___f_692_, 5, v_tail_686_);
v___x_693_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__0));
v___x_694_ = lean_unbox_uint32(v_fst_687_);
lean_dec(v_fst_687_);
v___x_695_ = lean_uint32_to_nat(v___x_694_);
v___x_696_ = l_Nat_reprFast(v___x_695_);
v___x_697_ = lean_string_append(v___x_693_, v___x_696_);
lean_dec_ref(v___x_696_);
v___x_698_ = lean_box(0);
v___x_699_ = l_Lean_Name_str___override(v___x_698_, v___x_697_);
v___x_700_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_699_, v_a_690_, v___f_692_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_847_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_847_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_847_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_847_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_snd_705_; lean_object* v_fst_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_846_; 
v_snd_705_ = lean_ctor_get(v_a_701_, 1);
v_fst_706_ = lean_ctor_get(v_a_701_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v_a_701_);
if (v_isSharedCheck_846_ == 0)
{
v___x_708_ = v_a_701_;
v_isShared_709_ = v_isSharedCheck_846_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_snd_705_);
lean_inc(v_fst_706_);
lean_dec(v_a_701_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_846_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v_fst_710_; lean_object* v_snd_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_845_; 
v_fst_710_ = lean_ctor_get(v_snd_705_, 0);
v_snd_711_ = lean_ctor_get(v_snd_705_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_snd_705_);
if (v_isSharedCheck_845_ == 0)
{
v___x_713_ = v_snd_705_;
v_isShared_714_ = v_isSharedCheck_845_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_snd_711_);
lean_inc(v_fst_710_);
lean_dec(v_snd_705_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_845_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v_result_716_; lean_object* v_absorption_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___x_747_; uint8_t v___x_748_; 
v___x_747_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___x_748_ = l_Lean_Expr_isConstOf(v_snd_711_, v___x_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; uint8_t v___x_750_; 
v___x_749_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___x_750_ = l_Lean_Expr_isConstOf(v_snd_711_, v___x_749_);
lean_dec(v_snd_711_);
if (v___x_750_ == 0)
{
lean_object* v___x_752_; 
lean_del_object(v___x_713_);
lean_dec(v_a_690_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 1, v_fst_710_);
v___x_752_ = v___x_708_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_fst_706_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_fst_710_);
v___x_752_ = v_reuseFailAlloc_756_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_object* v___x_754_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 0, v___x_752_);
v___x_754_ = v___x_703_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_752_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
lean_del_object(v___x_708_);
lean_dec(v_fst_706_);
lean_del_object(v___x_703_);
if (v_isForall_674_ == 0)
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_757_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6));
v___x_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_758_, 0, v_a_690_);
v___x_759_ = lean_unsigned_to_nat(1u);
v___x_760_ = lean_mk_empty_array_with_capacity(v___x_759_);
v___x_761_ = lean_array_push(v___x_760_, v___x_758_);
v___x_762_ = l_Lean_Meta_mkAppOptM(v___x_757_, v___x_761_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_764_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref_known(v___x_762_, 1);
v___x_764_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_716_ = v___x_764_;
v_absorption_717_ = v_a_763_;
v___y_718_ = v_a_679_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
goto v___jp_715_;
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
v_a_765_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_762_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_762_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v___x_773_; 
lean_inc(v_a_690_);
v___x_773_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_690_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_773_, 1);
v___x_775_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9));
v___x_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_776_, 0, v_a_690_);
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v_a_774_);
v___x_778_ = lean_unsigned_to_nat(2u);
v___x_779_ = lean_mk_empty_array_with_capacity(v___x_778_);
v___x_780_ = lean_array_push(v___x_779_, v___x_776_);
v___x_781_ = lean_array_push(v___x_780_, v___x_777_);
v___x_782_ = l_Lean_Meta_mkAppOptM(v___x_775_, v___x_781_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_784_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
v___x_784_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_716_ = v___x_784_;
v_absorption_717_ = v_a_783_;
v___y_718_ = v_a_679_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
goto v___jp_715_;
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
v_a_785_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_782_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_782_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
else
{
lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
lean_dec(v_a_690_);
v_a_793_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_800_ == 0)
{
v___x_795_ = v___x_773_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_dec(v___x_773_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_793_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
}
else
{
lean_dec(v_snd_711_);
lean_del_object(v___x_708_);
lean_dec(v_fst_706_);
lean_del_object(v___x_703_);
if (v_isForall_674_ == 0)
{
lean_object* v___x_801_; 
lean_inc(v_a_690_);
v___x_801_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_690_, v_a_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
v___x_803_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11));
v___x_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_804_, 0, v_a_690_);
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v_a_802_);
v___x_806_ = lean_unsigned_to_nat(2u);
v___x_807_ = lean_mk_empty_array_with_capacity(v___x_806_);
v___x_808_ = lean_array_push(v___x_807_, v___x_804_);
v___x_809_ = lean_array_push(v___x_808_, v___x_805_);
v___x_810_ = l_Lean_Meta_mkAppOptM(v___x_803_, v___x_809_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_812_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v___x_812_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_716_ = v___x_812_;
v_absorption_717_ = v_a_811_;
v___y_718_ = v_a_679_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
goto v___jp_715_;
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
v_a_813_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_810_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_810_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
lean_dec(v_a_690_);
v_a_821_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_801_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_801_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
else
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_829_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14));
v___x_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_830_, 0, v_a_690_);
v___x_831_ = lean_unsigned_to_nat(1u);
v___x_832_ = lean_mk_empty_array_with_capacity(v___x_831_);
v___x_833_ = lean_array_push(v___x_832_, v___x_830_);
v___x_834_ = l_Lean_Meta_mkAppOptM(v___x_829_, v___x_833_, v_a_679_, v_a_680_, v_a_681_, v_a_682_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_836_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
v___x_836_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_716_ = v___x_836_;
v_absorption_717_ = v_a_835_;
v___y_718_ = v_a_679_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
goto v___jp_715_;
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_del_object(v___x_713_);
lean_dec(v_fst_710_);
v_a_837_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_834_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_834_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
v___jp_715_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_722_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_723_ = lean_unsigned_to_nat(2u);
v___x_724_ = lean_mk_empty_array_with_capacity(v___x_723_);
v___x_725_ = lean_array_push(v___x_724_, v_fst_710_);
v___x_726_ = lean_array_push(v___x_725_, v_absorption_717_);
v___x_727_ = l_Lean_Meta_mkAppM(v___x_722_, v___x_726_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_738_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_738_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_738_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
lean_inc_ref(v_result_716_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 1, v_a_728_);
lean_ctor_set(v___x_713_, 0, v_result_716_);
v___x_733_ = v___x_713_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_result_716_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_a_728_);
v___x_733_ = v_reuseFailAlloc_737_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 0, v___x_733_);
v___x_735_ = v___x_730_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_del_object(v___x_713_);
v_a_739_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_727_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_727_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_a_690_);
v_a_848_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_700_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_700_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
else
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_fst_687_);
lean_dec(v_tail_686_);
lean_dec_ref(v_vars_676_);
lean_dec_ref(v_body_673_);
lean_dec_ref(v_sorts_672_);
v_a_856_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_689_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_689_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_box(0);
v___x_867_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3));
v___x_868_ = l_Lean_Expr_const___override(v___x_867_, v___x_866_);
return v___x_868_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_891_ = lean_box(0);
v___x_892_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1));
v___x_893_ = l_Lean_Expr_const___override(v___x_892_, v___x_891_);
return v___x_893_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__41));
v___x_925_ = l_Lean_stringToMessageData(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(lean_object* v_sorts_926_, lean_object* v_vars_927_, lean_object* v_f_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_942_; lean_object* v_result_943_; lean_object* v_absorption_944_; lean_object* v___y_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; uint8_t v___y_980_; lean_object* v___y_981_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; uint8_t v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___x_1070_; 
lean_inc_ref(v_f_928_);
lean_inc_ref(v_vars_927_);
lean_inc_ref(v_sorts_926_);
v___x_1070_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_926_, v_vars_927_, v_f_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; lean_object* v___x_1072_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_928_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; uint8_t v___y_1126_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; uint8_t v___y_1168_; lean_object* v_congruence_1169_; lean_object* v___y_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; uint8_t v___y_1579_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; uint8_t v___x_1659_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_a_1073_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1659_ = lean_unbox(v_a_1073_);
switch(v___x_1659_)
{
case 0:
{
lean_dec(v_a_1073_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v___y_1097_ = v_a_931_;
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
goto v___jp_1096_;
}
case 11:
{
lean_dec(v_a_1073_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v___y_1097_ = v_a_931_;
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
goto v___jp_1096_;
}
case 10:
{
lean_dec(v_a_1073_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v___y_1097_ = v_a_931_;
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
goto v___jp_1096_;
}
case 9:
{
lean_dec(v_a_1073_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v___y_1097_ = v_a_931_;
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
goto v___jp_1096_;
}
case 6:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___x_1660_ = lean_unsigned_to_nat(0u);
v___x_1661_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1660_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1663_; 
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_926_, v_vars_927_, v_a_1662_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v_fst_1665_; lean_object* v_snd_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1756_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v_fst_1665_ = lean_ctor_get(v_a_1664_, 0);
v_snd_1666_ = lean_ctor_get(v_a_1664_, 1);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_a_1664_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1668_ = v_a_1664_;
v_isShared_1669_ = v_isSharedCheck_1756_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_snd_1666_);
lean_inc(v_fst_1665_);
lean_dec(v_a_1664_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1756_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1670_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24));
v___x_1671_ = lean_unsigned_to_nat(1u);
v___x_1672_ = lean_mk_empty_array_with_capacity(v___x_1671_);
v___x_1673_ = lean_array_push(v___x_1672_, v_snd_1666_);
v___x_1674_ = l_Lean_Meta_mkAppM(v___x_1670_, v___x_1673_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1747_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1747_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1747_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v_result_1680_; lean_object* v_absorption_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___x_1711_; uint8_t v___x_1712_; 
v___x_1711_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___x_1712_ = l_Lean_Expr_isConstOf(v_fst_1665_, v___x_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; uint8_t v___x_1714_; 
v___x_1713_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___x_1714_ = l_Lean_Expr_isConstOf(v_fst_1665_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1719_; 
lean_del_object(v___x_1668_);
v___x_1715_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25);
v___x_1716_ = l_Lean_Expr_app___override(v___x_1715_, v_fst_1665_);
v___x_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
lean_ctor_set(v___x_1717_, 1, v_a_1675_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v___x_1717_);
v___x_1719_ = v___x_1677_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
else
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_del_object(v___x_1677_);
lean_dec(v_fst_1665_);
v___x_1721_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27));
v___x_1722_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28));
v___x_1723_ = l_Lean_Meta_mkAppOptM(v___x_1721_, v___x_1722_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_1680_ = v___x_1725_;
v_absorption_1681_ = v_a_1724_;
v___y_1682_ = v_a_931_;
v___y_1683_ = v_a_932_;
v___y_1684_ = v_a_933_;
v___y_1685_ = v_a_934_;
goto v___jp_1679_;
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_a_1675_);
lean_del_object(v___x_1668_);
v_a_1726_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1723_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1723_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_del_object(v___x_1677_);
lean_dec(v_fst_1665_);
v___x_1734_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30));
v___x_1735_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28));
v___x_1736_ = l_Lean_Meta_mkAppOptM(v___x_1734_, v___x_1735_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1738_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1737_);
lean_dec_ref_known(v___x_1736_, 1);
v___x_1738_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_1680_ = v___x_1738_;
v_absorption_1681_ = v_a_1737_;
v___y_1682_ = v_a_931_;
v___y_1683_ = v_a_932_;
v___y_1684_ = v_a_933_;
v___y_1685_ = v_a_934_;
goto v___jp_1679_;
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
lean_dec(v_a_1675_);
lean_del_object(v___x_1668_);
v_a_1739_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1741_ = v___x_1736_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1736_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1739_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
v___jp_1679_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1686_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1687_ = lean_unsigned_to_nat(2u);
v___x_1688_ = lean_mk_empty_array_with_capacity(v___x_1687_);
v___x_1689_ = lean_array_push(v___x_1688_, v_a_1675_);
v___x_1690_ = lean_array_push(v___x_1689_, v_absorption_1681_);
v___x_1691_ = l_Lean_Meta_mkAppM(v___x_1686_, v___x_1690_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1702_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1694_ = v___x_1691_;
v_isShared_1695_ = v_isSharedCheck_1702_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1691_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1702_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
lean_inc_ref(v_result_1680_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set(v___x_1668_, 1, v_a_1692_);
lean_ctor_set(v___x_1668_, 0, v_result_1680_);
v___x_1697_ = v___x_1668_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_result_1680_);
lean_ctor_set(v_reuseFailAlloc_1701_, 1, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1699_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1697_);
v___x_1699_ = v___x_1694_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_del_object(v___x_1668_);
v_a_1703_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1691_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1691_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
lean_del_object(v___x_1668_);
lean_dec(v_fst_1665_);
v_a_1748_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1674_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1674_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
}
else
{
return v___x_1663_;
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1757_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1661_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1661_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
case 1:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1075_ = v_a_929_;
v___y_1076_ = v_a_930_;
v___y_1077_ = v_a_931_;
v___y_1078_ = v_a_932_;
v___y_1079_ = v_a_933_;
v___y_1080_ = v_a_934_;
goto v___jp_1074_;
}
case 2:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1075_ = v_a_929_;
v___y_1076_ = v_a_930_;
v___y_1077_ = v_a_931_;
v___y_1078_ = v_a_932_;
v___y_1079_ = v_a_933_;
v___y_1080_ = v_a_934_;
goto v___jp_1074_;
}
case 3:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___x_1765_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_928_);
v___x_1766_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1765_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___x_1766_, 1);
lean_inc_ref(v_vars_927_);
lean_inc_ref(v_sorts_926_);
v___x_1768_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_926_, v_vars_927_, v_a_1767_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_f_928_);
v___x_1771_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1770_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1773_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
lean_inc_ref(v_vars_927_);
lean_inc_ref(v_sorts_926_);
v___x_1773_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_926_, v_vars_927_, v_a_1772_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1993_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1776_ = v___x_1773_;
v_isShared_1777_ = v_isSharedCheck_1993_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1773_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1993_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v_fst_1778_; lean_object* v_snd_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1992_; 
v_fst_1778_ = lean_ctor_get(v_a_1774_, 0);
v_snd_1779_ = lean_ctor_get(v_a_1774_, 1);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_a_1774_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1781_ = v_a_1774_;
v_isShared_1782_ = v_isSharedCheck_1992_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_snd_1779_);
lean_inc(v_fst_1778_);
lean_dec(v_a_1774_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1992_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___x_1784_ = l_Lean_Expr_isConstOf(v_fst_1778_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
lean_del_object(v___x_1776_);
lean_dec(v_a_1769_);
v___x_1785_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1765_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; lean_object* v___x_1787_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1785_, 1);
v___x_1787_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_926_, v_vars_927_, v_a_1786_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1918_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1790_ = v___x_1787_;
v_isShared_1791_ = v_isSharedCheck_1918_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_a_1788_);
lean_dec(v___x_1787_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1918_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v_fst_1792_; lean_object* v_snd_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1917_; 
v_fst_1792_ = lean_ctor_get(v_a_1788_, 0);
v_snd_1793_ = lean_ctor_get(v_a_1788_, 1);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_a_1788_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1795_ = v_a_1788_;
v_isShared_1796_ = v_isSharedCheck_1917_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_snd_1793_);
lean_inc(v_fst_1792_);
lean_dec(v_a_1788_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1917_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1797_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32));
v___x_1798_ = lean_unsigned_to_nat(2u);
v___x_1799_ = lean_mk_empty_array_with_capacity(v___x_1798_);
lean_inc_ref(v___x_1799_);
v___x_1800_ = lean_array_push(v___x_1799_, v_snd_1793_);
v___x_1801_ = lean_array_push(v___x_1800_, v_snd_1779_);
v___x_1802_ = l_Lean_Meta_mkAppM(v___x_1797_, v___x_1801_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v_result_1805_; lean_object* v_absorption_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; uint8_t v___x_1834_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_a_1803_);
lean_dec_ref_known(v___x_1802_, 1);
v___x_1834_ = l_Lean_Expr_isConstOf(v_fst_1792_, v___x_1783_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___x_1836_ = l_Lean_Expr_isConstOf(v_fst_1792_, v___x_1835_);
if (v___x_1836_ == 0)
{
uint8_t v___x_1837_; 
v___x_1837_ = l_Lean_Expr_isConstOf(v_fst_1778_, v___x_1835_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; 
lean_dec_ref(v___x_1799_);
lean_del_object(v___x_1795_);
lean_del_object(v___x_1790_);
v___x_1838_ = l_Lean_mkArrow(v_fst_1792_, v_fst_1778_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1849_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1841_ = v___x_1838_;
v_isShared_1842_ = v_isSharedCheck_1849_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1849_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 1, v_a_1803_);
lean_ctor_set(v___x_1781_, 0, v_a_1839_);
v___x_1844_ = v___x_1781_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1839_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v_a_1803_);
v___x_1844_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
lean_object* v___x_1846_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1844_);
v___x_1846_ = v___x_1841_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1844_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_dec(v_a_1803_);
lean_del_object(v___x_1781_);
v_a_1850_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1838_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1838_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
lean_del_object(v___x_1781_);
lean_dec(v_fst_1778_);
v___x_1858_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34));
lean_inc(v_fst_1792_);
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 1);
lean_ctor_set(v___x_1790_, 0, v_fst_1792_);
v___x_1860_ = v___x_1790_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_fst_1792_);
v___x_1860_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1861_ = lean_mk_empty_array_with_capacity(v___x_1770_);
v___x_1862_ = lean_array_push(v___x_1861_, v___x_1860_);
v___x_1863_ = l_Lean_Meta_mkAppOptM(v___x_1858_, v___x_1862_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25);
v___x_1866_ = l_Lean_Expr_app___override(v___x_1865_, v_fst_1792_);
v_result_1805_ = v___x_1866_;
v_absorption_1806_ = v_a_1864_;
v___y_1807_ = v_a_931_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
goto v___jp_1804_;
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec(v_a_1803_);
lean_dec_ref(v___x_1799_);
lean_del_object(v___x_1795_);
lean_dec(v_fst_1792_);
v_a_1867_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1863_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1863_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1878_; 
lean_dec(v_fst_1792_);
lean_del_object(v___x_1781_);
v___x_1876_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36));
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 1);
lean_ctor_set(v___x_1790_, 0, v_fst_1778_);
v___x_1878_ = v___x_1790_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_fst_1778_);
v___x_1878_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1879_ = lean_mk_empty_array_with_capacity(v___x_1770_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1878_);
v___x_1881_ = l_Lean_Meta_mkAppOptM(v___x_1876_, v___x_1880_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
v___x_1883_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_1805_ = v___x_1883_;
v_absorption_1806_ = v_a_1882_;
v___y_1807_ = v_a_931_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
goto v___jp_1804_;
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_a_1803_);
lean_dec_ref(v___x_1799_);
lean_del_object(v___x_1795_);
v_a_1884_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1881_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1881_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
}
else
{
lean_object* v___x_1893_; lean_object* v___x_1895_; 
lean_dec(v_fst_1792_);
lean_del_object(v___x_1781_);
v___x_1893_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38));
lean_inc(v_fst_1778_);
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 1);
lean_ctor_set(v___x_1790_, 0, v_fst_1778_);
v___x_1895_ = v___x_1790_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_fst_1778_);
v___x_1895_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_mk_empty_array_with_capacity(v___x_1770_);
v___x_1897_ = lean_array_push(v___x_1896_, v___x_1895_);
v___x_1898_ = l_Lean_Meta_mkAppOptM(v___x_1893_, v___x_1897_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v_a_1899_; 
v_a_1899_ = lean_ctor_get(v___x_1898_, 0);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1898_, 1);
v_result_1805_ = v_fst_1778_;
v_absorption_1806_ = v_a_1899_;
v___y_1807_ = v_a_931_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
goto v___jp_1804_;
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_a_1803_);
lean_dec_ref(v___x_1799_);
lean_del_object(v___x_1795_);
lean_dec(v_fst_1778_);
v_a_1900_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1898_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1898_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
}
v___jp_1804_:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1811_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1812_ = lean_array_push(v___x_1799_, v_a_1803_);
v___x_1813_ = lean_array_push(v___x_1812_, v_absorption_1806_);
v___x_1814_ = l_Lean_Meta_mkAppM(v___x_1811_, v___x_1813_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1825_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1825_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1825_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 1, v_a_1815_);
lean_ctor_set(v___x_1795_, 0, v_result_1805_);
v___x_1820_ = v___x_1795_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_result_1805_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1822_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 0, v___x_1820_);
v___x_1822_ = v___x_1817_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
lean_dec_ref(v_result_1805_);
lean_del_object(v___x_1795_);
v_a_1826_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1814_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1814_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v___x_1799_);
lean_del_object(v___x_1795_);
lean_dec(v_fst_1792_);
lean_del_object(v___x_1790_);
lean_del_object(v___x_1781_);
lean_dec(v_fst_1778_);
v_a_1909_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1802_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1802_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1781_);
lean_dec(v_snd_1779_);
lean_dec(v_fst_1778_);
return v___x_1787_;
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_del_object(v___x_1781_);
lean_dec(v_snd_1779_);
lean_dec(v_fst_1778_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1919_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1785_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1785_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
else
{
lean_object* v___x_1927_; 
lean_dec(v_fst_1778_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
lean_inc(v_a_1769_);
v___x_1927_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_a_1769_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1929_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32));
v___x_1930_ = lean_unsigned_to_nat(2u);
v___x_1931_ = lean_mk_empty_array_with_capacity(v___x_1930_);
lean_inc_ref(v___x_1931_);
v___x_1932_ = lean_array_push(v___x_1931_, v_a_1928_);
v___x_1933_ = lean_array_push(v___x_1932_, v_snd_1779_);
v___x_1934_ = l_Lean_Meta_mkAppM(v___x_1929_, v___x_1933_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v_a_1935_; lean_object* v___x_1936_; lean_object* v___x_1938_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1935_);
lean_dec_ref_known(v___x_1934_, 1);
v___x_1936_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40));
if (v_isShared_1777_ == 0)
{
lean_ctor_set_tag(v___x_1776_, 1);
lean_ctor_set(v___x_1776_, 0, v_a_1769_);
v___x_1938_ = v___x_1776_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1769_);
v___x_1938_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1939_ = lean_mk_empty_array_with_capacity(v___x_1770_);
v___x_1940_ = lean_array_push(v___x_1939_, v___x_1938_);
v___x_1941_ = l_Lean_Meta_mkAppOptM(v___x_1936_, v___x_1940_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1944_ = lean_array_push(v___x_1931_, v_a_1935_);
v___x_1945_ = lean_array_push(v___x_1944_, v_a_1942_);
v___x_1946_ = l_Lean_Meta_mkAppM(v___x_1943_, v___x_1945_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1958_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1949_ = v___x_1946_;
v_isShared_1950_ = v_isSharedCheck_1958_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1946_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1958_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; lean_object* v___x_1953_; 
v___x_1951_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 1, v_a_1947_);
lean_ctor_set(v___x_1781_, 0, v___x_1951_);
v___x_1953_ = v___x_1781_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1951_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_a_1947_);
v___x_1953_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1955_; 
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 0, v___x_1953_);
v___x_1955_ = v___x_1949_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1966_; 
lean_del_object(v___x_1781_);
v_a_1959_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1966_ == 0)
{
v___x_1961_ = v___x_1946_;
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v___x_1946_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1966_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1964_; 
if (v_isShared_1962_ == 0)
{
v___x_1964_ = v___x_1961_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1965_; 
v_reuseFailAlloc_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1965_, 0, v_a_1959_);
v___x_1964_ = v_reuseFailAlloc_1965_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
return v___x_1964_;
}
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_a_1935_);
lean_dec_ref(v___x_1931_);
lean_del_object(v___x_1781_);
v_a_1967_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1941_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1941_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v___x_1931_);
lean_del_object(v___x_1781_);
lean_del_object(v___x_1776_);
lean_dec(v_a_1769_);
v_a_1976_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1934_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1934_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_del_object(v___x_1781_);
lean_dec(v_snd_1779_);
lean_del_object(v___x_1776_);
lean_dec(v_a_1769_);
v_a_1984_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1927_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1927_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1769_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
return v___x_1773_;
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec(v_a_1769_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1994_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1771_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1771_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2009_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_2002_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_2009_ == 0)
{
v___x_2004_ = v___x_1768_;
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_1768_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2009_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2007_; 
if (v_isShared_2005_ == 0)
{
v___x_2007_ = v___x_2004_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v_a_2002_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
}
else
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2017_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_2010_ = lean_ctor_get(v___x_1766_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v___x_1766_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2012_ = v___x_1766_;
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v___x_1766_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2017_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
}
case 4:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1640_ = v_a_929_;
v___y_1641_ = v_a_930_;
v___y_1642_ = v_a_931_;
v___y_1643_ = v_a_932_;
v___y_1644_ = v_a_933_;
v___y_1645_ = v_a_934_;
goto v___jp_1639_;
}
case 5:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1640_ = v_a_929_;
v___y_1641_ = v_a_930_;
v___y_1642_ = v_a_931_;
v___y_1643_ = v_a_932_;
v___y_1644_ = v_a_933_;
v___y_1645_ = v_a_934_;
goto v___jp_1639_;
}
case 7:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1144_ = v_a_929_;
v___y_1145_ = v_a_930_;
v___y_1146_ = v_a_931_;
v___y_1147_ = v_a_932_;
v___y_1148_ = v_a_933_;
v___y_1149_ = v_a_934_;
goto v___jp_1143_;
}
case 8:
{
lean_dec(v_a_1073_);
lean_dec(v_a_1071_);
v___y_1144_ = v_a_929_;
v___y_1145_ = v_a_930_;
v___y_1146_ = v_a_931_;
v___y_1147_ = v_a_932_;
v___y_1148_ = v_a_933_;
v___y_1149_ = v_a_934_;
goto v___jp_1143_;
}
default: 
{
lean_object* v___x_2018_; lean_object* v___x_2019_; uint8_t v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
lean_dec(v_a_1071_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v___x_2018_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42);
v___x_2019_ = lean_unsigned_to_nat(0u);
v___x_2020_ = lean_unbox(v_a_1073_);
lean_dec(v_a_1073_);
v___x_2021_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2020_, v___x_2019_);
v___x_2022_ = l_Lean_MessageData_ofFormat(v___x_2021_);
v___x_2023_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2018_);
lean_ctor_set(v___x_2023_, 1, v___x_2022_);
v___x_2024_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2023_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
return v___x_2024_;
}
}
v___jp_1074_:
{
lean_object* v___x_1081_; 
v___x_1081_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_928_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; uint8_t v___x_1083_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
v___x_1083_ = lean_unbox(v_a_1082_);
lean_dec(v_a_1082_);
if (v___x_1083_ == 1)
{
uint8_t v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = 1;
v___x_1085_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29));
v___y_1026_ = v___y_1078_;
v___y_1027_ = v___y_1080_;
v___y_1028_ = v___y_1079_;
v___y_1029_ = v___y_1075_;
v___y_1030_ = v___y_1077_;
v___y_1031_ = v___x_1084_;
v___y_1032_ = v___y_1076_;
v___y_1033_ = v___x_1085_;
goto v___jp_1025_;
}
else
{
uint8_t v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = 0;
v___x_1087_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27));
v___y_1026_ = v___y_1078_;
v___y_1027_ = v___y_1080_;
v___y_1028_ = v___y_1079_;
v___y_1029_ = v___y_1075_;
v___y_1030_ = v___y_1077_;
v___y_1031_ = v___x_1086_;
v___y_1032_ = v___y_1076_;
v___y_1033_ = v___x_1087_;
goto v___jp_1025_;
}
}
else
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1095_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1088_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1095_ == 0)
{
v___x_1090_ = v___x_1081_;
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1081_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1095_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1093_; 
if (v_isShared_1091_ == 0)
{
v___x_1093_ = v___x_1090_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_a_1088_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
}
}
v___jp_1096_:
{
lean_object* v___x_1101_; 
lean_inc(v_a_1071_);
v___x_1101_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_a_1071_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1110_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1110_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1108_; 
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v_a_1071_);
lean_ctor_set(v___x_1106_, 1, v_a_1102_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1106_);
v___x_1108_ = v___x_1104_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_a_1071_);
v_a_1111_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1101_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1101_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
v___jp_1119_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_inc_ref(v_f_928_);
v___x_1127_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_928_);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = lean_array_get_size(v___x_1127_);
v___x_1130_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_926_, v___x_1127_, v___x_1128_, v___x_1129_);
lean_dec_ref(v___x_1127_);
v___x_1131_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1128_, v___y_1124_, v___y_1123_, v___y_1121_, v___y_1125_, v___y_1122_, v___y_1120_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1133_ = lean_array_to_list(v___x_1130_);
v___x_1134_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_926_, v_a_1132_, v___y_1126_, v___x_1133_, v_vars_927_, v___y_1124_, v___y_1123_, v___y_1121_, v___y_1125_, v___y_1122_, v___y_1120_);
return v___x_1134_;
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v___x_1130_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1135_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1131_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1131_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
v___jp_1143_:
{
lean_object* v___x_1150_; 
v___x_1150_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_928_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; uint8_t v___x_1152_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1150_, 1);
v___x_1152_ = lean_unbox(v_a_1151_);
lean_dec(v_a_1151_);
if (v___x_1152_ == 7)
{
uint8_t v___x_1153_; 
v___x_1153_ = 1;
v___y_1120_ = v___y_1149_;
v___y_1121_ = v___y_1146_;
v___y_1122_ = v___y_1148_;
v___y_1123_ = v___y_1145_;
v___y_1124_ = v___y_1144_;
v___y_1125_ = v___y_1147_;
v___y_1126_ = v___x_1153_;
goto v___jp_1119_;
}
else
{
uint8_t v___x_1154_; 
v___x_1154_ = 0;
v___y_1120_ = v___y_1149_;
v___y_1121_ = v___y_1146_;
v___y_1122_ = v___y_1148_;
v___y_1123_ = v___y_1145_;
v___y_1124_ = v___y_1144_;
v___y_1125_ = v___y_1147_;
v___y_1126_ = v___x_1154_;
goto v___jp_1119_;
}
}
else
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1162_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1155_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1157_ = v___x_1150_;
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1150_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1162_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v___x_1160_; 
if (v_isShared_1158_ == 0)
{
v___x_1160_ = v___x_1157_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_a_1155_);
v___x_1160_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
return v___x_1160_;
}
}
}
}
v___jp_1163_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1165_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1164_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec(v___y_1167_);
v___x_1177_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4);
v___x_1178_ = l_Lean_mkAppB(v___x_1177_, v___y_1165_, v___y_1164_);
if (v___y_1168_ == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1174_, v___x_1178_);
v___y_937_ = v_congruence_1169_;
v___y_938_ = v___x_1179_;
goto v___jp_936_;
}
else
{
v___y_937_ = v_congruence_1169_;
v___y_938_ = v___x_1178_;
goto v___jp_936_;
}
}
else
{
lean_object* v_val_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1287_; 
lean_dec_ref(v___y_1164_);
v_val_1180_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1182_ = v___x_1176_;
v_isShared_1183_ = v_isSharedCheck_1287_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_val_1180_);
lean_dec(v___x_1176_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1287_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
uint8_t v___x_1184_; 
v___x_1184_ = lean_unbox(v_val_1180_);
lean_dec(v_val_1180_);
if (v___x_1184_ == 0)
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1185_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1186_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1187_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1188_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1189_ = l_Lean_Name_num___override(v___x_1188_, v___y_1167_);
v___x_1190_ = l_Lean_Name_str___override(v___x_1189_, v___x_1185_);
v___x_1191_ = l_Lean_Name_str___override(v___x_1190_, v___x_1186_);
v___x_1192_ = l_Lean_Name_str___override(v___x_1191_, v___x_1187_);
v___x_1193_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__5));
v___x_1194_ = l_Lean_Name_str___override(v___x_1192_, v___x_1193_);
lean_inc_ref(v___y_1165_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___y_1165_);
v___x_1196_ = v___x_1182_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___y_1165_);
v___x_1196_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1196_);
v___x_1199_ = l_Lean_Meta_mkAppOptM(v___x_1194_, v___x_1198_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___y_1165_;
v_absorption_944_ = v_a_1200_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1165_);
v_a_1201_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1199_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1199_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
}
else
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1221_; 
v___x_1210_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1211_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1212_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1213_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1214_ = l_Lean_Name_num___override(v___x_1213_, v___y_1167_);
v___x_1215_ = l_Lean_Name_str___override(v___x_1214_, v___x_1210_);
v___x_1216_ = l_Lean_Name_str___override(v___x_1215_, v___x_1211_);
v___x_1217_ = l_Lean_Name_str___override(v___x_1216_, v___x_1212_);
v___x_1218_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__6));
v___x_1219_ = l_Lean_Name_str___override(v___x_1217_, v___x_1218_);
lean_inc_ref(v___y_1165_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___y_1165_);
v___x_1221_ = v___x_1182_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___y_1165_);
v___x_1221_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1222_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1223_ = lean_array_push(v___x_1222_, v___x_1221_);
v___x_1224_ = l_Lean_Meta_mkAppOptM(v___x_1219_, v___x_1223_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1224_) == 0)
{
lean_object* v_a_1225_; lean_object* v___x_1226_; 
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
lean_inc(v_a_1225_);
lean_dec_ref_known(v___x_1224_, 1);
v___x_1226_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1174_, v___y_1165_);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1226_;
v_absorption_944_ = v_a_1225_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1165_);
v_a_1227_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1224_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1224_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
}
else
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1247_; 
v___x_1236_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1237_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1238_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1239_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1240_ = l_Lean_Name_num___override(v___x_1239_, v___y_1167_);
v___x_1241_ = l_Lean_Name_str___override(v___x_1240_, v___x_1236_);
v___x_1242_ = l_Lean_Name_str___override(v___x_1241_, v___x_1237_);
v___x_1243_ = l_Lean_Name_str___override(v___x_1242_, v___x_1238_);
v___x_1244_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__7));
v___x_1245_ = l_Lean_Name_str___override(v___x_1243_, v___x_1244_);
lean_inc_ref(v___y_1165_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___y_1165_);
v___x_1247_ = v___x_1182_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___y_1165_);
v___x_1247_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1248_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1249_ = lean_array_push(v___x_1248_, v___x_1247_);
v___x_1250_ = l_Lean_Meta_mkAppOptM(v___x_1245_, v___x_1249_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1252_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1251_);
lean_dec_ref_known(v___x_1250_, 1);
v___x_1252_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1174_, v___y_1165_);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1252_;
v_absorption_944_ = v_a_1251_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1165_);
v_a_1253_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1250_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1250_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1273_; 
v___x_1262_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1263_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1264_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1265_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1266_ = l_Lean_Name_num___override(v___x_1265_, v___y_1167_);
v___x_1267_ = l_Lean_Name_str___override(v___x_1266_, v___x_1262_);
v___x_1268_ = l_Lean_Name_str___override(v___x_1267_, v___x_1263_);
v___x_1269_ = l_Lean_Name_str___override(v___x_1268_, v___x_1264_);
v___x_1270_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__8));
v___x_1271_ = l_Lean_Name_str___override(v___x_1269_, v___x_1270_);
lean_inc_ref(v___y_1165_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___y_1165_);
v___x_1273_ = v___x_1182_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___y_1165_);
v___x_1273_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1274_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1275_ = lean_array_push(v___x_1274_, v___x_1273_);
v___x_1276_ = l_Lean_Meta_mkAppOptM(v___x_1271_, v___x_1275_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___y_1165_;
v_absorption_944_ = v_a_1277_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1165_);
v_a_1278_ = lean_ctor_get(v___x_1276_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1276_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1276_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_val_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v___y_1165_);
v_val_1288_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1290_ = v___x_1175_;
v_isShared_1291_ = v_isSharedCheck_1571_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_val_1288_);
lean_dec(v___x_1175_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1571_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1292_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v___x_1293_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v___x_1294_ = lean_unbox(v_val_1288_);
lean_dec(v_val_1288_);
if (v___x_1294_ == 0)
{
lean_object* v___x_1295_; 
v___x_1295_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1164_);
if (lean_obj_tag(v___x_1295_) == 0)
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1307_; 
v___x_1296_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1297_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1298_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1299_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1300_ = l_Lean_Name_num___override(v___x_1299_, v___y_1167_);
v___x_1301_ = l_Lean_Name_str___override(v___x_1300_, v___x_1296_);
v___x_1302_ = l_Lean_Name_str___override(v___x_1301_, v___x_1297_);
v___x_1303_ = l_Lean_Name_str___override(v___x_1302_, v___x_1298_);
v___x_1304_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__9));
v___x_1305_ = l_Lean_Name_str___override(v___x_1303_, v___x_1304_);
lean_inc_ref(v___y_1164_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___y_1164_);
v___x_1307_ = v___x_1290_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___y_1164_);
v___x_1307_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v___x_1308_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1309_ = lean_array_push(v___x_1308_, v___x_1307_);
v___x_1310_ = l_Lean_Meta_mkAppOptM(v___x_1305_, v___x_1309_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1310_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___y_1164_;
v_absorption_944_ = v_a_1311_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1164_);
v_a_1312_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1310_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1321_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1322_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1323_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1324_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1325_ = l_Lean_Name_num___override(v___x_1324_, v___y_1167_);
v___x_1326_ = l_Lean_Name_str___override(v___x_1325_, v___x_1321_);
v___x_1327_ = l_Lean_Name_str___override(v___x_1326_, v___x_1322_);
v___x_1328_ = l_Lean_Name_str___override(v___x_1327_, v___x_1323_);
v___x_1329_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__10));
v___x_1330_ = l_Lean_Name_str___override(v___x_1328_, v___x_1329_);
lean_inc_ref(v___y_1164_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___y_1164_);
v___x_1332_ = v___x_1290_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___y_1164_);
v___x_1332_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1332_);
v___x_1335_ = l_Lean_Meta_mkAppOptM(v___x_1330_, v___x_1334_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1337_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1174_, v___y_1164_);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1337_;
v_absorption_944_ = v_a_1336_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1164_);
v_a_1338_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1335_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1335_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
}
}
else
{
lean_object* v_val_1347_; uint8_t v___x_1348_; 
lean_del_object(v___x_1290_);
lean_dec_ref(v___y_1164_);
v_val_1347_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_val_1347_);
lean_dec_ref_known(v___x_1295_, 1);
v___x_1348_ = lean_unbox(v_val_1347_);
lean_dec(v_val_1347_);
if (v___x_1348_ == 0)
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1349_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1350_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1351_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1352_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1353_ = l_Lean_Name_num___override(v___x_1352_, v___y_1167_);
v___x_1354_ = l_Lean_Name_str___override(v___x_1353_, v___x_1349_);
v___x_1355_ = l_Lean_Name_str___override(v___x_1354_, v___x_1350_);
v___x_1356_ = l_Lean_Name_str___override(v___x_1355_, v___x_1351_);
v___x_1357_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__11));
v___x_1358_ = l_Lean_Name_str___override(v___x_1356_, v___x_1357_);
v___x_1359_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1360_ = l_Lean_Meta_mkAppOptM(v___x_1358_, v___x_1359_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref_known(v___x_1360_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1293_;
v_absorption_944_ = v_a_1361_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
lean_dec_ref(v_congruence_1169_);
v_a_1362_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1360_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1360_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
else
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1370_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1371_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1372_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1373_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1374_ = l_Lean_Name_num___override(v___x_1373_, v___y_1167_);
v___x_1375_ = l_Lean_Name_str___override(v___x_1374_, v___x_1370_);
v___x_1376_ = l_Lean_Name_str___override(v___x_1375_, v___x_1371_);
v___x_1377_ = l_Lean_Name_str___override(v___x_1376_, v___x_1372_);
v___x_1378_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__12));
v___x_1379_ = l_Lean_Name_str___override(v___x_1377_, v___x_1378_);
v___x_1380_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1381_ = l_Lean_Meta_mkAppOptM(v___x_1379_, v___x_1380_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1292_;
v_absorption_944_ = v_a_1382_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_dec_ref(v_congruence_1169_);
v_a_1383_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1381_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1381_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
else
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1391_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1392_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1393_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1394_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1395_ = l_Lean_Name_num___override(v___x_1394_, v___y_1167_);
v___x_1396_ = l_Lean_Name_str___override(v___x_1395_, v___x_1391_);
v___x_1397_ = l_Lean_Name_str___override(v___x_1396_, v___x_1392_);
v___x_1398_ = l_Lean_Name_str___override(v___x_1397_, v___x_1393_);
v___x_1399_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__13));
v___x_1400_ = l_Lean_Name_str___override(v___x_1398_, v___x_1399_);
v___x_1401_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1402_ = l_Lean_Meta_mkAppOptM(v___x_1400_, v___x_1401_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1292_;
v_absorption_944_ = v_a_1403_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v_congruence_1169_);
v_a_1404_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1402_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1402_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1412_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1413_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1414_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1415_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1416_ = l_Lean_Name_num___override(v___x_1415_, v___y_1167_);
v___x_1417_ = l_Lean_Name_str___override(v___x_1416_, v___x_1412_);
v___x_1418_ = l_Lean_Name_str___override(v___x_1417_, v___x_1413_);
v___x_1419_ = l_Lean_Name_str___override(v___x_1418_, v___x_1414_);
v___x_1420_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__14));
v___x_1421_ = l_Lean_Name_str___override(v___x_1419_, v___x_1420_);
v___x_1422_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1423_ = l_Lean_Meta_mkAppOptM(v___x_1421_, v___x_1422_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
lean_dec_ref_known(v___x_1423_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1293_;
v_absorption_944_ = v_a_1424_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
lean_dec_ref(v_congruence_1169_);
v_a_1425_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1423_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1423_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1164_);
if (lean_obj_tag(v___x_1433_) == 0)
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1434_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1435_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1436_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1437_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1438_ = l_Lean_Name_num___override(v___x_1437_, v___y_1167_);
v___x_1439_ = l_Lean_Name_str___override(v___x_1438_, v___x_1434_);
v___x_1440_ = l_Lean_Name_str___override(v___x_1439_, v___x_1435_);
v___x_1441_ = l_Lean_Name_str___override(v___x_1440_, v___x_1436_);
v___x_1442_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__15));
v___x_1443_ = l_Lean_Name_str___override(v___x_1441_, v___x_1442_);
lean_inc_ref(v___y_1164_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___y_1164_);
v___x_1445_ = v___x_1290_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___y_1164_);
v___x_1445_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1446_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1447_ = lean_array_push(v___x_1446_, v___x_1445_);
v___x_1448_ = l_Lean_Meta_mkAppOptM(v___x_1443_, v___x_1447_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1448_, 1);
v___x_1450_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1174_, v___y_1164_);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1450_;
v_absorption_944_ = v_a_1449_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1164_);
v_a_1451_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1448_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1448_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
else
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1471_; 
v___x_1460_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1461_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1462_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1463_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1464_ = l_Lean_Name_num___override(v___x_1463_, v___y_1167_);
v___x_1465_ = l_Lean_Name_str___override(v___x_1464_, v___x_1460_);
v___x_1466_ = l_Lean_Name_str___override(v___x_1465_, v___x_1461_);
v___x_1467_ = l_Lean_Name_str___override(v___x_1466_, v___x_1462_);
v___x_1468_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__16));
v___x_1469_ = l_Lean_Name_str___override(v___x_1467_, v___x_1468_);
lean_inc_ref(v___y_1164_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 0, v___y_1164_);
v___x_1471_ = v___x_1290_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v___y_1164_);
v___x_1471_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1472_ = lean_mk_empty_array_with_capacity(v___y_1166_);
v___x_1473_ = lean_array_push(v___x_1472_, v___x_1471_);
v___x_1474_ = l_Lean_Meta_mkAppOptM(v___x_1469_, v___x_1473_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1474_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___y_1164_;
v_absorption_944_ = v_a_1475_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec_ref(v_congruence_1169_);
lean_dec_ref(v___y_1164_);
v_a_1476_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1474_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1474_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
}
else
{
lean_object* v_val_1485_; uint8_t v___x_1486_; 
lean_del_object(v___x_1290_);
lean_dec_ref(v___y_1164_);
v_val_1485_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_val_1485_);
lean_dec_ref_known(v___x_1433_, 1);
v___x_1486_ = lean_unbox(v_val_1485_);
lean_dec(v_val_1485_);
if (v___x_1486_ == 0)
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1487_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1488_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1489_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1490_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1491_ = l_Lean_Name_num___override(v___x_1490_, v___y_1167_);
v___x_1492_ = l_Lean_Name_str___override(v___x_1491_, v___x_1487_);
v___x_1493_ = l_Lean_Name_str___override(v___x_1492_, v___x_1488_);
v___x_1494_ = l_Lean_Name_str___override(v___x_1493_, v___x_1489_);
v___x_1495_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__17));
v___x_1496_ = l_Lean_Name_str___override(v___x_1494_, v___x_1495_);
v___x_1497_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1498_ = l_Lean_Meta_mkAppOptM(v___x_1496_, v___x_1497_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1292_;
v_absorption_944_ = v_a_1499_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec_ref(v_congruence_1169_);
v_a_1500_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1498_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1498_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1508_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1509_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1510_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1511_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1512_ = l_Lean_Name_num___override(v___x_1511_, v___y_1167_);
v___x_1513_ = l_Lean_Name_str___override(v___x_1512_, v___x_1508_);
v___x_1514_ = l_Lean_Name_str___override(v___x_1513_, v___x_1509_);
v___x_1515_ = l_Lean_Name_str___override(v___x_1514_, v___x_1510_);
v___x_1516_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__18));
v___x_1517_ = l_Lean_Name_str___override(v___x_1515_, v___x_1516_);
v___x_1518_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1519_ = l_Lean_Meta_mkAppOptM(v___x_1517_, v___x_1518_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1519_) == 0)
{
lean_object* v_a_1520_; 
v_a_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1293_;
v_absorption_944_ = v_a_1520_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
lean_dec_ref(v_congruence_1169_);
v_a_1521_ = lean_ctor_get(v___x_1519_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1519_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1519_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1519_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
}
else
{
if (v___y_1168_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1529_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1530_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1531_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1532_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1533_ = l_Lean_Name_num___override(v___x_1532_, v___y_1167_);
v___x_1534_ = l_Lean_Name_str___override(v___x_1533_, v___x_1529_);
v___x_1535_ = l_Lean_Name_str___override(v___x_1534_, v___x_1530_);
v___x_1536_ = l_Lean_Name_str___override(v___x_1535_, v___x_1531_);
v___x_1537_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__19));
v___x_1538_ = l_Lean_Name_str___override(v___x_1536_, v___x_1537_);
v___x_1539_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1540_ = l_Lean_Meta_mkAppOptM(v___x_1538_, v___x_1539_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1293_;
v_absorption_944_ = v_a_1541_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1549_; 
lean_dec_ref(v_congruence_1169_);
v_a_1542_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1544_ = v___x_1540_;
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1540_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1547_; 
if (v_isShared_1545_ == 0)
{
v___x_1547_ = v___x_1544_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1542_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
else
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1550_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4));
v___x_1551_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1552_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1553_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1167_);
v___x_1554_ = l_Lean_Name_num___override(v___x_1553_, v___y_1167_);
v___x_1555_ = l_Lean_Name_str___override(v___x_1554_, v___x_1550_);
v___x_1556_ = l_Lean_Name_str___override(v___x_1555_, v___x_1551_);
v___x_1557_ = l_Lean_Name_str___override(v___x_1556_, v___x_1552_);
v___x_1558_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__20));
v___x_1559_ = l_Lean_Name_str___override(v___x_1557_, v___x_1558_);
v___x_1560_ = lean_mk_empty_array_with_capacity(v___y_1167_);
lean_dec(v___y_1167_);
v___x_1561_ = l_Lean_Meta_mkAppOptM(v___x_1559_, v___x_1560_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v_a_1562_; 
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v___x_1561_, 1);
v___y_942_ = v_congruence_1169_;
v_result_943_ = v___x_1292_;
v_absorption_944_ = v_a_1562_;
v___y_945_ = v___y_1170_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
goto v___jp_941_;
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec_ref(v_congruence_1169_);
v_a_1563_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1561_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1561_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
}
}
}
}
}
}
v___jp_1572_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_928_);
v___x_1581_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1580_, v___y_1576_, v___y_1577_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
lean_inc_ref(v_vars_927_);
lean_inc_ref(v_sorts_926_);
v___x_1583_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_926_, v_vars_927_, v_a_1582_, v___y_1576_, v___y_1577_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; lean_object* v_fst_1585_; lean_object* v_snd_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1583_, 1);
v_fst_1585_ = lean_ctor_get(v_a_1584_, 0);
lean_inc(v_fst_1585_);
v_snd_1586_ = lean_ctor_get(v_a_1584_, 1);
lean_inc(v_snd_1586_);
lean_dec(v_a_1584_);
v___x_1587_ = lean_unsigned_to_nat(1u);
v___x_1588_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_928_, v___x_1587_, v___y_1576_, v___y_1577_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1590_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1588_, 1);
v___x_1590_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_926_, v_vars_927_, v_a_1589_, v___y_1576_, v___y_1577_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v_fst_1592_; lean_object* v_snd_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v_fst_1592_ = lean_ctor_get(v_a_1591_, 0);
lean_inc(v_fst_1592_);
v_snd_1593_ = lean_ctor_get(v_a_1591_, 1);
lean_inc(v_snd_1593_);
lean_dec(v_a_1591_);
v___x_1594_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__22));
v___x_1595_ = lean_unsigned_to_nat(2u);
v___x_1596_ = lean_mk_empty_array_with_capacity(v___x_1595_);
v___x_1597_ = lean_array_push(v___x_1596_, v_snd_1586_);
v___x_1598_ = lean_array_push(v___x_1597_, v_snd_1593_);
v___x_1599_ = l_Lean_Meta_mkAppM(v___x_1594_, v___x_1598_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1599_) == 0)
{
if (v___y_1579_ == 0)
{
lean_object* v_a_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v_a_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1600_);
lean_dec_ref_known(v___x_1599_, 1);
v___x_1601_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24));
v___x_1602_ = lean_mk_empty_array_with_capacity(v___x_1587_);
v___x_1603_ = lean_array_push(v___x_1602_, v_a_1600_);
v___x_1604_ = l_Lean_Meta_mkAppM(v___x_1601_, v___x_1603_, v___y_1575_, v___y_1574_, v___y_1578_, v___y_1573_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v___y_1164_ = v_fst_1592_;
v___y_1165_ = v_fst_1585_;
v___y_1166_ = v___x_1587_;
v___y_1167_ = v___x_1580_;
v___y_1168_ = v___y_1579_;
v_congruence_1169_ = v_a_1605_;
v___y_1170_ = v___y_1575_;
v___y_1171_ = v___y_1574_;
v___y_1172_ = v___y_1578_;
v___y_1173_ = v___y_1573_;
goto v___jp_1163_;
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec(v_fst_1592_);
lean_dec(v_fst_1585_);
v_a_1606_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1604_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1604_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
else
{
lean_object* v_a_1614_; 
v_a_1614_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1599_, 1);
v___y_1164_ = v_fst_1592_;
v___y_1165_ = v_fst_1585_;
v___y_1166_ = v___x_1587_;
v___y_1167_ = v___x_1580_;
v___y_1168_ = v___y_1579_;
v_congruence_1169_ = v_a_1614_;
v___y_1170_ = v___y_1575_;
v___y_1171_ = v___y_1574_;
v___y_1172_ = v___y_1578_;
v___y_1173_ = v___y_1573_;
goto v___jp_1163_;
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
lean_dec(v_fst_1592_);
lean_dec(v_fst_1585_);
v_a_1615_ = lean_ctor_get(v___x_1599_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1599_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1599_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1599_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
}
else
{
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
return v___x_1590_;
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
lean_dec(v_snd_1586_);
lean_dec(v_fst_1585_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1623_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1588_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1588_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
else
{
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
return v___x_1583_;
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1631_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1581_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1581_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
v___jp_1639_:
{
lean_object* v___x_1646_; 
v___x_1646_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_928_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; uint8_t v___x_1648_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = lean_unbox(v_a_1647_);
lean_dec(v_a_1647_);
if (v___x_1648_ == 4)
{
uint8_t v___x_1649_; 
v___x_1649_ = 1;
v___y_1573_ = v___y_1645_;
v___y_1574_ = v___y_1643_;
v___y_1575_ = v___y_1642_;
v___y_1576_ = v___y_1640_;
v___y_1577_ = v___y_1641_;
v___y_1578_ = v___y_1644_;
v___y_1579_ = v___x_1649_;
goto v___jp_1572_;
}
else
{
uint8_t v___x_1650_; 
v___x_1650_ = 0;
v___y_1573_ = v___y_1645_;
v___y_1574_ = v___y_1643_;
v___y_1575_ = v___y_1642_;
v___y_1576_ = v___y_1640_;
v___y_1577_ = v___y_1641_;
v___y_1578_ = v___y_1644_;
v___y_1579_ = v___x_1650_;
goto v___jp_1572_;
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1651_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1646_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1646_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec(v_a_1071_);
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_2025_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_1072_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_1072_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec_ref(v_f_928_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_2033_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_1070_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_1070_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
v___jp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_939_, 0, v___y_938_);
lean_ctor_set(v___x_939_, 1, v___y_937_);
v___x_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
return v___x_940_;
}
v___jp_941_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_949_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_950_ = lean_unsigned_to_nat(2u);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_950_);
v___x_952_ = lean_array_push(v___x_951_, v___y_942_);
v___x_953_ = lean_array_push(v___x_952_, v_absorption_944_);
v___x_954_ = l_Lean_Meta_mkAppM(v___x_949_, v___x_953_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_963_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_963_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v_result_943_);
lean_ctor_set(v___x_959_, 1, v_a_955_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_959_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_dec_ref(v_result_943_);
v_a_964_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_954_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_954_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
v___jp_972_:
{
lean_object* v___x_982_; 
lean_inc(v___y_981_);
v___x_982_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v___y_981_, v___y_977_, v___y_973_, v___y_979_, v___y_974_, v___y_976_, v___y_975_);
lean_dec(v___y_977_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v___y_980_, v___y_978_, v___y_979_, v___y_974_, v___y_976_, v___y_975_);
lean_dec(v___y_978_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v_fst_986_; lean_object* v_snd_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1016_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v_fst_986_ = lean_ctor_get(v_a_985_, 0);
v_snd_987_ = lean_ctor_get(v_a_985_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_a_985_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_989_ = v_a_985_;
v_isShared_990_ = v_isSharedCheck_1016_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_snd_987_);
lean_inc(v_fst_986_);
lean_dec(v_a_985_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1016_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_991_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_992_ = lean_unsigned_to_nat(2u);
v___x_993_ = lean_mk_empty_array_with_capacity(v___x_992_);
v___x_994_ = lean_array_push(v___x_993_, v_a_983_);
v___x_995_ = lean_array_push(v___x_994_, v_snd_987_);
v___x_996_ = l_Lean_Meta_mkAppM(v___x_991_, v___x_995_, v___y_979_, v___y_974_, v___y_976_, v___y_975_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1007_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1007_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1007_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 1, v_a_997_);
v___x_1002_ = v___x_989_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_fst_986_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1004_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1002_);
v___x_1004_ = v___x_999_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_del_object(v___x_989_);
lean_dec(v_fst_986_);
v_a_1008_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_996_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_996_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
else
{
lean_dec(v_a_983_);
return v___x_984_;
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v___y_978_);
v_a_1017_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_982_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_982_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
v___jp_1025_:
{
lean_object* v___x_1034_; size_t v_sz_1035_; size_t v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_928_);
v_sz_1035_ = lean_array_size(v___x_1034_);
v___x_1036_ = ((size_t)0ULL);
lean_inc_ref(v___x_1034_);
lean_inc_ref(v_vars_927_);
lean_inc_ref(v_sorts_926_);
v___x_1037_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_926_, v_vars_927_, v_sz_1035_, v___x_1036_, v___x_1034_, v___y_1029_, v___y_1032_, v___y_1030_, v___y_1026_, v___y_1028_, v___y_1027_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; size_t v_sz_1044_; lean_object* v___x_1045_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = lean_box(0);
lean_inc(v___y_1033_);
v___x_1040_ = l_Lean_Expr_const___override(v___y_1033_, v___x_1039_);
v___x_1041_ = lean_unsigned_to_nat(0u);
v___x_1042_ = l_Array_zip___redArg(v___x_1034_, v_a_1038_);
lean_dec(v_a_1038_);
lean_dec_ref(v___x_1034_);
v___x_1043_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__2));
v_sz_1044_ = lean_array_size(v___x_1042_);
v___x_1045_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(v_sorts_926_, v_vars_927_, v___x_1040_, v___x_1042_, v_sz_1044_, v___x_1036_, v___x_1043_, v___y_1029_, v___y_1032_, v___y_1030_, v___y_1026_, v___y_1028_, v___y_1027_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v___x_1040_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v_snd_1047_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1045_, 1);
v_snd_1047_ = lean_ctor_get(v_a_1046_, 1);
lean_inc(v_snd_1047_);
if (v___y_1031_ == 0)
{
lean_object* v_fst_1048_; lean_object* v_fst_1049_; lean_object* v___x_1050_; 
v_fst_1048_ = lean_ctor_get(v_a_1046_, 0);
lean_inc(v_fst_1048_);
lean_dec(v_a_1046_);
v_fst_1049_ = lean_ctor_get(v_snd_1047_, 0);
lean_inc(v_fst_1049_);
lean_dec(v_snd_1047_);
v___x_1050_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23));
v___y_973_ = v___x_1041_;
v___y_974_ = v___y_1026_;
v___y_975_ = v___y_1027_;
v___y_976_ = v___y_1028_;
v___y_977_ = v_fst_1049_;
v___y_978_ = v_fst_1048_;
v___y_979_ = v___y_1030_;
v___y_980_ = v___y_1031_;
v___y_981_ = v___x_1050_;
goto v___jp_972_;
}
else
{
lean_object* v_fst_1051_; lean_object* v_fst_1052_; lean_object* v___x_1053_; 
v_fst_1051_ = lean_ctor_get(v_a_1046_, 0);
lean_inc(v_fst_1051_);
lean_dec(v_a_1046_);
v_fst_1052_ = lean_ctor_get(v_snd_1047_, 0);
lean_inc(v_fst_1052_);
lean_dec(v_snd_1047_);
v___x_1053_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25));
v___y_973_ = v___x_1041_;
v___y_974_ = v___y_1026_;
v___y_975_ = v___y_1027_;
v___y_976_ = v___y_1028_;
v___y_977_ = v_fst_1052_;
v___y_978_ = v_fst_1051_;
v___y_979_ = v___y_1030_;
v___y_980_ = v___y_1031_;
v___y_981_ = v___x_1053_;
goto v___jp_972_;
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1045_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1045_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec_ref(v___x_1034_);
lean_dec_ref(v_vars_927_);
lean_dec_ref(v_sorts_926_);
v_a_1062_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1037_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1037_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(lean_object* v_sorts_2041_, lean_object* v_vars_2042_, lean_object* v___x_2043_, lean_object* v_as_2044_, size_t v_sz_2045_, size_t v_i_2046_, lean_object* v_b_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_a_2056_; uint8_t v___x_2060_; 
v___x_2060_ = lean_usize_dec_lt(v_i_2046_, v_sz_2045_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; 
lean_dec_ref(v_vars_2042_);
lean_dec_ref(v_sorts_2041_);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_b_2047_);
return v___x_2061_;
}
else
{
lean_object* v_snd_2062_; lean_object* v_fst_2063_; lean_object* v_fst_2064_; lean_object* v_snd_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2130_; 
v_snd_2062_ = lean_ctor_get(v_b_2047_, 1);
lean_inc(v_snd_2062_);
v_fst_2063_ = lean_ctor_get(v_b_2047_, 0);
lean_inc(v_fst_2063_);
lean_dec_ref(v_b_2047_);
v_fst_2064_ = lean_ctor_get(v_snd_2062_, 0);
v_snd_2065_ = lean_ctor_get(v_snd_2062_, 1);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_snd_2062_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2067_ = v_snd_2062_;
v_isShared_2068_ = v_isSharedCheck_2130_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_snd_2065_);
lean_inc(v_fst_2064_);
lean_dec(v_snd_2062_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2130_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v_a_2069_; uint8_t v___x_2070_; 
v_a_2069_ = lean_array_uget(v_as_2044_, v_i_2046_);
v___x_2070_ = lean_unbox(v_snd_2065_);
if (v___x_2070_ == 0)
{
lean_object* v_fst_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2104_; 
lean_del_object(v___x_2067_);
v_fst_2071_ = lean_ctor_get(v_a_2069_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_a_2069_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v_a_2069_, 1);
lean_dec(v_unused_2105_);
v___x_2073_ = v_a_2069_;
v_isShared_2074_ = v_isSharedCheck_2104_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_fst_2071_);
lean_dec(v_a_2069_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2104_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2075_; 
lean_inc_ref(v_vars_2042_);
lean_inc_ref(v_sorts_2041_);
v___x_2075_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_2041_, v_vars_2042_, v_fst_2071_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v_fst_2077_; lean_object* v_snd_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2095_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
v_fst_2077_ = lean_ctor_get(v_a_2076_, 0);
v_snd_2078_ = lean_ctor_get(v_a_2076_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_a_2076_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2080_ = v_a_2076_;
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_snd_2078_);
lean_inc(v_fst_2077_);
lean_dec(v_a_2076_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2095_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
uint8_t v_absorbed_2083_; uint8_t v___x_2093_; 
v___x_2093_ = lean_expr_eqv(v_fst_2077_, v___x_2043_);
if (v___x_2093_ == 0)
{
uint8_t v___x_2094_; 
v___x_2094_ = lean_unbox(v_snd_2065_);
lean_dec(v_snd_2065_);
v_absorbed_2083_ = v___x_2094_;
goto v___jp_2082_;
}
else
{
lean_dec(v_snd_2065_);
v_absorbed_2083_ = v___x_2093_;
goto v___jp_2082_;
}
v___jp_2082_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2084_ = lean_array_push(v_fst_2063_, v_fst_2077_);
v___x_2085_ = lean_array_push(v_fst_2064_, v_snd_2078_);
v___x_2086_ = lean_box(v_absorbed_2083_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v___x_2086_);
lean_ctor_set(v___x_2080_, 0, v___x_2085_);
v___x_2088_ = v___x_2080_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
lean_object* v___x_2090_; 
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 1, v___x_2088_);
lean_ctor_set(v___x_2073_, 0, v___x_2084_);
v___x_2090_ = v___x_2073_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2084_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v___x_2088_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
v_a_2056_ = v___x_2090_;
goto v___jp_2055_;
}
}
}
}
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_del_object(v___x_2073_);
lean_dec(v_snd_2065_);
lean_dec(v_fst_2064_);
lean_dec(v_fst_2063_);
lean_dec_ref(v_vars_2042_);
lean_dec_ref(v_sorts_2041_);
v_a_2096_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2075_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2075_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2096_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
}
else
{
lean_object* v_snd_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2128_; 
v_snd_2106_ = lean_ctor_get(v_a_2069_, 1);
v_isSharedCheck_2128_ = !lean_is_exclusive(v_a_2069_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v_a_2069_, 0);
lean_dec(v_unused_2129_);
v___x_2108_ = v_a_2069_;
v_isShared_2109_ = v_isSharedCheck_2128_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_snd_2106_);
lean_dec(v_a_2069_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2128_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_inc(v_snd_2106_);
v___x_2110_ = lean_array_push(v_fst_2063_, v_snd_2106_);
v___x_2111_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_snd_2106_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2111_, 1);
v___x_2113_ = lean_array_push(v_fst_2064_, v_a_2112_);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 1, v_snd_2065_);
lean_ctor_set(v___x_2108_, 0, v___x_2113_);
v___x_2115_ = v___x_2108_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2113_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v_snd_2065_);
v___x_2115_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2117_; 
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 1, v___x_2115_);
lean_ctor_set(v___x_2067_, 0, v___x_2110_);
v___x_2117_ = v___x_2067_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
v_a_2056_ = v___x_2117_;
goto v___jp_2055_;
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec_ref(v___x_2110_);
lean_del_object(v___x_2108_);
lean_del_object(v___x_2067_);
lean_dec(v_snd_2065_);
lean_dec(v_fst_2064_);
lean_dec_ref(v_vars_2042_);
lean_dec_ref(v_sorts_2041_);
v_a_2120_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2111_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2111_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
}
}
}
v___jp_2055_:
{
size_t v___x_2057_; size_t v___x_2058_; 
v___x_2057_ = ((size_t)1ULL);
v___x_2058_ = lean_usize_add(v_i_2046_, v___x_2057_);
v_i_2046_ = v___x_2058_;
v_b_2047_ = v_a_2056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0___boxed(lean_object* v_sorts_2131_, lean_object* v_vars_2132_, lean_object* v___x_2133_, lean_object* v_as_2134_, lean_object* v_sz_2135_, lean_object* v_i_2136_, lean_object* v_b_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
size_t v_sz_boxed_2145_; size_t v_i_boxed_2146_; lean_object* v_res_2147_; 
v_sz_boxed_2145_ = lean_unbox_usize(v_sz_2135_);
lean_dec(v_sz_2135_);
v_i_boxed_2146_ = lean_unbox_usize(v_i_2136_);
lean_dec(v_i_2136_);
v_res_2147_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(v_sorts_2131_, v_vars_2132_, v___x_2133_, v_as_2134_, v_sz_boxed_2145_, v_i_boxed_2146_, v_b_2137_, v___y_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec_ref(v_as_2134_);
lean_dec_ref(v___x_2133_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___boxed(lean_object* v_sorts_2148_, lean_object* v_body_2149_, lean_object* v_isForall_2150_, lean_object* v_rest_2151_, lean_object* v_vars_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_){
_start:
{
uint8_t v_isForall_boxed_2160_; lean_object* v_res_2161_; 
v_isForall_boxed_2160_ = lean_unbox(v_isForall_2150_);
v_res_2161_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_2148_, v_body_2149_, v_isForall_boxed_2160_, v_rest_2151_, v_vars_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_);
lean_dec(v_a_2158_);
lean_dec_ref(v_a_2157_);
lean_dec(v_a_2156_);
lean_dec_ref(v_a_2155_);
lean_dec(v_a_2154_);
lean_dec_ref(v_a_2153_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___boxed(lean_object* v_sorts_2162_, lean_object* v_vars_2163_, lean_object* v_f_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_2162_, v_vars_2163_, v_f_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_);
lean_dec(v_a_2170_);
lean_dec_ref(v_a_2169_);
lean_dec(v_a_2168_);
lean_dec_ref(v_a_2167_);
lean_dec(v_a_2166_);
lean_dec_ref(v_a_2165_);
return v_res_2172_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1(void){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__0));
v___x_2175_ = l_Lean_stringToMessageData(v___x_2174_);
return v___x_2175_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3(void){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__2));
v___x_2178_ = l_Lean_stringToMessageData(v___x_2177_);
return v___x_2178_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2179_ = lean_box(0);
v___x_2180_ = lean_unsigned_to_nat(16u);
v___x_2181_ = lean_mk_array(v___x_2180_, v___x_2179_);
return v___x_2181_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5(void){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2182_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4);
v___x_2183_ = lean_unsigned_to_nat(0u);
v___x_2184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v___x_2182_);
return v___x_2184_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9(void){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8));
v___x_2191_ = l_Lean_stringToMessageData(v___x_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(lean_object* v_step_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_unit_2200_; lean_object* v_premises_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; 
v_unit_2200_ = lean_ctor_get(v_step_2192_, 0);
lean_inc_ref(v_unit_2200_);
v_premises_2201_ = lean_ctor_get(v_step_2192_, 1);
lean_inc_ref(v_premises_2201_);
lean_dec_ref(v_step_2192_);
v___x_2202_ = lean_array_get_size(v_premises_2201_);
v___x_2203_ = lean_unsigned_to_nat(1u);
v___x_2204_ = lean_nat_dec_eq(v___x_2202_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
lean_dec_ref(v_premises_2201_);
lean_dec_ref(v_unit_2200_);
v___x_2205_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1);
v___x_2206_ = l_Nat_reprFast(v___x_2202_);
v___x_2207_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2206_);
v___x_2208_ = l_Lean_MessageData_ofFormat(v___x_2207_);
v___x_2209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2205_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2209_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
return v___x_2210_;
}
else
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v_fst_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2211_ = lean_unsigned_to_nat(0u);
v___x_2212_ = lean_array_fget(v_premises_2201_, v___x_2211_);
lean_dec_ref(v_premises_2201_);
v_fst_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_fst_2213_);
lean_dec(v___x_2212_);
lean_inc_ref(v_unit_2200_);
v___x_2214_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2200_);
v___x_2215_ = lean_array_get_size(v___x_2214_);
v___x_2216_ = lean_nat_dec_lt(v___x_2211_, v___x_2215_);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec_ref(v___x_2214_);
lean_dec(v_fst_2213_);
lean_dec_ref(v_unit_2200_);
v___x_2217_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3);
v___x_2218_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2217_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
return v___x_2218_;
}
else
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2219_ = lean_array_fget(v___x_2214_, v___x_2211_);
lean_dec_ref(v___x_2214_);
lean_inc(v___x_2219_);
v___x_2220_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_2219_);
if (lean_obj_tag(v___x_2220_) == 1)
{
lean_object* v_val_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v_val_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_val_2221_);
lean_dec_ref_known(v___x_2220_, 1);
v___x_2222_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_2219_);
v___x_2223_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2200_);
v___x_2224_ = l_Array_append___redArg(v___x_2222_, v___x_2223_);
lean_dec_ref(v___x_2223_);
v___x_2225_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5);
v___x_2226_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v___x_2224_, v___x_2225_, v_val_2221_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v_a_2227_; lean_object* v_snd_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_a_2227_);
lean_dec_ref_known(v___x_2226_, 1);
v_snd_2228_ = lean_ctor_get(v_a_2227_, 1);
lean_inc(v_snd_2228_);
lean_dec(v_a_2227_);
v___x_2229_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7));
v___x_2230_ = lean_unsigned_to_nat(2u);
v___x_2231_ = lean_mk_empty_array_with_capacity(v___x_2230_);
v___x_2232_ = lean_array_push(v___x_2231_, v_snd_2228_);
v___x_2233_ = lean_array_push(v___x_2232_, v_fst_2213_);
v___x_2234_ = l_Lean_Meta_mkAppM(v___x_2229_, v___x_2233_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
return v___x_2234_;
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec(v_fst_2213_);
v_a_2235_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2226_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2226_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
else
{
lean_object* v___x_2243_; lean_object* v___x_2244_; 
lean_dec(v___x_2220_);
lean_dec(v___x_2219_);
lean_dec(v_fst_2213_);
lean_dec_ref(v_unit_2200_);
v___x_2243_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9);
v___x_2244_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2243_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
return v___x_2244_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___boxed(lean_object* v_step_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(v_step_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
return v_res_2253_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Simplify(uint8_t builtin) {
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
