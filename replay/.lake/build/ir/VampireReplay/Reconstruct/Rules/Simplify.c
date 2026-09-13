// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Simplify
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
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
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "VampireReplay"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__3_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(55, 108, 59, 247, 144, 93, 201, 62)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Reconstruct"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__5_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(49, 4, 52, 107, 192, 232, 179, 71)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Rules"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__7_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(1, 97, 226, 57, 100, 38, 228, 13)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Simplify"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__9_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(78, 133, 176, 19, 43, 214, 148, 149)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Vampire"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "or_drops_false_right"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "and_drops_true_right"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "or_drops_false_left"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "and_drops_true_left"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "or_absorbs_true_right"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "and_absorbs_false_right"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "or_absorbs_true_left"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "and_absorbs_false_left"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a junction with no arguments"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_congr"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(97, 254, 90, 169, 212, 147, 67, 5)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(188, 238, 216, 229, 220, 92, 101, 241)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__27_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__31_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__34 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__34_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(119, 174, 146, 132, 31, 2, 33, 24)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__1_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(0, 13, 186, 247, 100, 238, 150, 35)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__2_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(34, 57, 51, 197, 72, 11, 58, 101)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__3_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(89, 182, 168, 127, 155, 104, 67, 93)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__5_value),LEAN_SCALAR_PTR_LITERAL(179, 127, 12, 210, 156, 72, 207, 76)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "forall_false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__8_value),LEAN_SCALAR_PTR_LITERAL(22, 6, 109, 0, 208, 30, 52, 224)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "exists_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__10_value),LEAN_SCALAR_PTR_LITERAL(107, 240, 190, 238, 59, 231, 51, 151)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "forall_true"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__13_value),LEAN_SCALAR_PTR_LITERAL(206, 54, 134, 154, 123, 108, 60, 198)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
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
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__26_value),LEAN_SCALAR_PTR_LITERAL(88, 41, 145, 47, 133, 240, 45, 138)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "not_false_collapses"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__29_value),LEAN_SCALAR_PTR_LITERAL(101, 151, 178, 230, 28, 150, 20, 210)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "imp_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__31_value),LEAN_SCALAR_PTR_LITERAL(9, 246, 228, 60, 55, 221, 92, 163)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "imp_false_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__33_value),LEAN_SCALAR_PTR_LITERAL(19, 154, 124, 45, 215, 35, 68, 46)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_false_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__35_value),LEAN_SCALAR_PTR_LITERAL(228, 40, 28, 206, 141, 5, 167, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "imp_true_left"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__37_value),LEAN_SCALAR_PTR_LITERAL(157, 242, 210, 223, 155, 219, 97, 225)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "imp_true_right"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__4_value),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__39_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 77, 29, 124, 121, 215, 107)}};
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
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "reduce_false_true should be given a formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(lean_object* v_e_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_12_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___closed__2));
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v_e_6_);
v___x_14_ = lean_unsigned_to_nat(1u);
v___x_15_ = lean_mk_empty_array_with_capacity(v___x_14_);
v___x_16_ = lean_array_push(v___x_15_, v___x_13_);
v___x_17_ = l_Lean_Meta_mkAppOptM(v___x_12_, v___x_16_, v_a_7_, v_a_8_, v_a_9_, v_a_10_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg___boxed(lean_object* v_e_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_e_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(lean_object* v_e_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_e_25_, v_a_28_, v_a_29_, v_a_30_, v_a_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___boxed(lean_object* v_e_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl(v_e_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
return v_res_42_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__21));
v___x_78_ = l_Lean_stringToMessageData(v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(uint8_t v_isAnd_97_, lean_object* v_parts_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v_result_107_; lean_object* v_absorption_108_; lean_object* v___y_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___y_135_; lean_object* v___y_136_; lean_object* v___y_137_; lean_object* v___y_138_; lean_object* v___y_139_; lean_object* v___y_154_; lean_object* v___y_155_; lean_object* v___y_156_; lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v___y_175_; lean_object* v___y_176_; lean_object* v___y_177_; lean_object* v___y_178_; lean_object* v___y_193_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_221_; lean_object* v___y_222_; lean_object* v___y_223_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v_fst_405_; lean_object* v_snd_406_; 
if (v_isAnd_97_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__32));
v___x_412_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v_fst_405_ = v___x_411_;
v_snd_406_ = v___x_412_;
goto v___jp_404_;
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__34));
v___x_414_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v_fst_405_ = v___x_413_;
v_snd_406_ = v___x_414_;
goto v___jp_404_;
}
v___jp_104_:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_114_ = lean_array_push(v___y_105_, v___y_106_);
v___x_115_ = lean_array_push(v___x_114_, v_absorption_108_);
v___x_116_ = l_Lean_Meta_mkAppM(v___x_113_, v___x_115_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_125_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_125_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_125_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_result_107_);
lean_ctor_set(v___x_121_, 1, v_a_117_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_121_);
v___x_123_ = v___x_119_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
else
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_133_; 
lean_dec_ref(v_result_107_);
v_a_126_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_133_ == 0)
{
v___x_128_ = v___x_116_;
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_116_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_133_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_131_; 
if (v_isShared_129_ == 0)
{
v___x_131_ = v___x_128_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_a_126_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
v___jp_134_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
lean_inc_ref(v___y_138_);
v___x_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_140_, 0, v___y_138_);
v___x_141_ = lean_mk_empty_array_with_capacity(v___y_137_);
lean_dec(v___y_137_);
v___x_142_ = lean_array_push(v___x_141_, v___x_140_);
v___x_143_ = l_Lean_Meta_mkAppOptM(v___y_139_, v___x_142_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_object* v_a_144_; 
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_a_144_);
lean_dec_ref_known(v___x_143_, 1);
v___y_105_ = v___y_135_;
v___y_106_ = v___y_136_;
v_result_107_ = v___y_138_;
v_absorption_108_ = v_a_144_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
v___y_112_ = v_a_102_;
goto v___jp_104_;
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec_ref(v___y_138_);
lean_dec_ref(v___y_136_);
lean_dec_ref(v___y_135_);
v_a_145_ = lean_ctor_get(v___x_143_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_143_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_143_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_143_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
v___jp_153_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
lean_inc_ref(v___y_157_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v___y_157_);
v___x_160_ = lean_mk_empty_array_with_capacity(v___y_156_);
lean_dec(v___y_156_);
v___x_161_ = lean_array_push(v___x_160_, v___x_159_);
v___x_162_ = l_Lean_Meta_mkAppOptM(v___y_158_, v___x_161_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v___y_105_ = v___y_154_;
v___y_106_ = v___y_155_;
v_result_107_ = v___y_157_;
v_absorption_108_ = v_a_163_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
v___y_112_ = v_a_102_;
goto v___jp_104_;
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v___y_157_);
lean_dec_ref(v___y_155_);
lean_dec_ref(v___y_154_);
v_a_164_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_162_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_162_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
v___jp_172_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v___y_176_);
v___x_180_ = lean_mk_empty_array_with_capacity(v___y_175_);
lean_dec(v___y_175_);
v___x_181_ = lean_array_push(v___x_180_, v___x_179_);
v___x_182_ = l_Lean_Meta_mkAppOptM(v___y_178_, v___x_181_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
lean_dec_ref_known(v___x_182_, 1);
v___y_105_ = v___y_173_;
v___y_106_ = v___y_174_;
v_result_107_ = v___y_177_;
v_absorption_108_ = v_a_183_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
v___y_112_ = v_a_102_;
goto v___jp_104_;
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec_ref(v___y_177_);
lean_dec_ref(v___y_174_);
lean_dec_ref(v___y_173_);
v_a_184_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_182_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_182_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
v___jp_192_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v___y_196_);
v___x_200_ = lean_mk_empty_array_with_capacity(v___y_195_);
lean_dec(v___y_195_);
v___x_201_ = lean_array_push(v___x_200_, v___x_199_);
v___x_202_ = l_Lean_Meta_mkAppOptM(v___y_198_, v___x_201_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v___y_105_ = v___y_193_;
v___y_106_ = v___y_194_;
v_result_107_ = v___y_197_;
v_absorption_108_ = v_a_203_;
v___y_109_ = v_a_99_;
v___y_110_ = v_a_100_;
v___y_111_ = v_a_101_;
v___y_112_ = v_a_102_;
goto v___jp_104_;
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_211_; 
lean_dec_ref(v___y_197_);
lean_dec_ref(v___y_194_);
lean_dec_ref(v___y_193_);
v_a_204_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_211_ == 0)
{
v___x_206_ = v___x_202_;
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_202_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_211_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_209_; 
if (v_isShared_207_ == 0)
{
v___x_209_ = v___x_206_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_a_204_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
}
v___jp_212_:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_224_ = lean_unsigned_to_nat(2u);
v___x_225_ = lean_mk_empty_array_with_capacity(v___x_224_);
lean_inc_ref(v___x_225_);
v___x_226_ = lean_array_push(v___x_225_, v___y_220_);
v___x_227_ = lean_array_push(v___x_226_, v___y_219_);
lean_inc(v___y_223_);
v___x_228_ = l_Lean_Meta_mkAppM(v___y_223_, v___x_227_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; uint8_t v___x_230_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
v___x_230_ = lean_expr_eqv(v___y_216_, v___y_222_);
if (v___x_230_ == 0)
{
uint8_t v___x_231_; 
v___x_231_ = lean_expr_eqv(v___y_218_, v___y_222_);
if (v___x_231_ == 0)
{
uint8_t v___x_232_; 
lean_dec_ref(v___y_222_);
v___x_232_ = lean_expr_eqv(v___y_216_, v___y_215_);
if (v___x_232_ == 0)
{
uint8_t v___x_233_; 
v___x_233_ = lean_expr_eqv(v___y_218_, v___y_215_);
lean_dec_ref(v___y_215_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
lean_dec(v___y_217_);
lean_dec(v___y_213_);
lean_inc(v___y_221_);
v___x_234_ = l_Lean_Expr_const___override(v___y_221_, v___y_214_);
v___x_235_ = l_Lean_mkAppB(v___x_234_, v___y_216_, v___y_218_);
lean_inc_ref(v___x_235_);
v___x_236_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_235_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_236_, 1);
v___x_238_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_239_ = lean_array_push(v___x_225_, v_a_229_);
v___x_240_ = lean_array_push(v___x_239_, v_a_237_);
v___x_241_ = l_Lean_Meta_mkAppM(v___x_238_, v___x_240_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_250_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_250_ == 0)
{
v___x_244_ = v___x_241_;
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_250_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_235_);
lean_ctor_set(v___x_246_, 1, v_a_242_);
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 0, v___x_246_);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
else
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
lean_dec_ref(v___x_235_);
v_a_251_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_241_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_241_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
else
{
lean_object* v_a_259_; lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_266_; 
lean_dec_ref(v___x_235_);
lean_dec(v_a_229_);
lean_dec_ref(v___x_225_);
v_a_259_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_266_ == 0)
{
v___x_261_ = v___x_236_;
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
else
{
lean_inc(v_a_259_);
lean_dec(v___x_236_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_266_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_264_; 
if (v_isShared_262_ == 0)
{
v___x_264_ = v___x_261_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_a_259_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
else
{
lean_dec_ref(v___y_218_);
lean_dec(v___y_214_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_267_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_268_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_269_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_270_ = l_Lean_Name_num___override(v___x_269_, v___y_217_);
v___x_271_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_272_ = l_Lean_Name_str___override(v___x_270_, v___x_271_);
v___x_273_ = l_Lean_Name_str___override(v___x_272_, v___x_267_);
v___x_274_ = l_Lean_Name_str___override(v___x_273_, v___x_268_);
v___x_275_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__13));
v___x_276_ = l_Lean_Name_str___override(v___x_274_, v___x_275_);
v___y_135_ = v___x_225_;
v___y_136_ = v_a_229_;
v___y_137_ = v___y_213_;
v___y_138_ = v___y_216_;
v___y_139_ = v___x_276_;
goto v___jp_134_;
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_277_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_278_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_279_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_280_ = l_Lean_Name_num___override(v___x_279_, v___y_217_);
v___x_281_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_282_ = l_Lean_Name_str___override(v___x_280_, v___x_281_);
v___x_283_ = l_Lean_Name_str___override(v___x_282_, v___x_277_);
v___x_284_ = l_Lean_Name_str___override(v___x_283_, v___x_278_);
v___x_285_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__14));
v___x_286_ = l_Lean_Name_str___override(v___x_284_, v___x_285_);
v___y_135_ = v___x_225_;
v___y_136_ = v_a_229_;
v___y_137_ = v___y_213_;
v___y_138_ = v___y_216_;
v___y_139_ = v___x_286_;
goto v___jp_134_;
}
}
}
else
{
lean_dec_ref(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_287_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_288_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_289_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_290_ = l_Lean_Name_num___override(v___x_289_, v___y_217_);
v___x_291_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_292_ = l_Lean_Name_str___override(v___x_290_, v___x_291_);
v___x_293_ = l_Lean_Name_str___override(v___x_292_, v___x_287_);
v___x_294_ = l_Lean_Name_str___override(v___x_293_, v___x_288_);
v___x_295_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__15));
v___x_296_ = l_Lean_Name_str___override(v___x_294_, v___x_295_);
v___y_154_ = v___x_225_;
v___y_155_ = v_a_229_;
v___y_156_ = v___y_213_;
v___y_157_ = v___y_218_;
v___y_158_ = v___x_296_;
goto v___jp_153_;
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_297_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_298_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_299_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_300_ = l_Lean_Name_num___override(v___x_299_, v___y_217_);
v___x_301_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_302_ = l_Lean_Name_str___override(v___x_300_, v___x_301_);
v___x_303_ = l_Lean_Name_str___override(v___x_302_, v___x_297_);
v___x_304_ = l_Lean_Name_str___override(v___x_303_, v___x_298_);
v___x_305_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__16));
v___x_306_ = l_Lean_Name_str___override(v___x_304_, v___x_305_);
v___y_154_ = v___x_225_;
v___y_155_ = v_a_229_;
v___y_156_ = v___y_213_;
v___y_157_ = v___y_218_;
v___y_158_ = v___x_306_;
goto v___jp_153_;
}
}
}
else
{
lean_dec_ref(v___y_218_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_307_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_308_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_309_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_310_ = l_Lean_Name_num___override(v___x_309_, v___y_217_);
v___x_311_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_312_ = l_Lean_Name_str___override(v___x_310_, v___x_311_);
v___x_313_ = l_Lean_Name_str___override(v___x_312_, v___x_307_);
v___x_314_ = l_Lean_Name_str___override(v___x_313_, v___x_308_);
v___x_315_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__17));
v___x_316_ = l_Lean_Name_str___override(v___x_314_, v___x_315_);
v___y_173_ = v___x_225_;
v___y_174_ = v_a_229_;
v___y_175_ = v___y_213_;
v___y_176_ = v___y_216_;
v___y_177_ = v___y_222_;
v___y_178_ = v___x_316_;
goto v___jp_172_;
}
else
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_317_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_318_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_319_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_320_ = l_Lean_Name_num___override(v___x_319_, v___y_217_);
v___x_321_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_322_ = l_Lean_Name_str___override(v___x_320_, v___x_321_);
v___x_323_ = l_Lean_Name_str___override(v___x_322_, v___x_317_);
v___x_324_ = l_Lean_Name_str___override(v___x_323_, v___x_318_);
v___x_325_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__18));
v___x_326_ = l_Lean_Name_str___override(v___x_324_, v___x_325_);
v___y_173_ = v___x_225_;
v___y_174_ = v_a_229_;
v___y_175_ = v___y_213_;
v___y_176_ = v___y_216_;
v___y_177_ = v___y_222_;
v___y_178_ = v___x_326_;
goto v___jp_172_;
}
}
}
else
{
lean_dec_ref(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_327_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_328_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_329_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_330_ = l_Lean_Name_num___override(v___x_329_, v___y_217_);
v___x_331_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_332_ = l_Lean_Name_str___override(v___x_330_, v___x_331_);
v___x_333_ = l_Lean_Name_str___override(v___x_332_, v___x_327_);
v___x_334_ = l_Lean_Name_str___override(v___x_333_, v___x_328_);
v___x_335_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__19));
v___x_336_ = l_Lean_Name_str___override(v___x_334_, v___x_335_);
v___y_193_ = v___x_225_;
v___y_194_ = v_a_229_;
v___y_195_ = v___y_213_;
v___y_196_ = v___y_218_;
v___y_197_ = v___y_222_;
v___y_198_ = v___x_336_;
goto v___jp_192_;
}
else
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_337_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_338_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_339_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_340_ = l_Lean_Name_num___override(v___x_339_, v___y_217_);
v___x_341_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_342_ = l_Lean_Name_str___override(v___x_340_, v___x_341_);
v___x_343_ = l_Lean_Name_str___override(v___x_342_, v___x_337_);
v___x_344_ = l_Lean_Name_str___override(v___x_343_, v___x_338_);
v___x_345_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__20));
v___x_346_ = l_Lean_Name_str___override(v___x_344_, v___x_345_);
v___y_193_ = v___x_225_;
v___y_194_ = v_a_229_;
v___y_195_ = v___y_213_;
v___y_196_ = v___y_218_;
v___y_197_ = v___y_222_;
v___y_198_ = v___x_346_;
goto v___jp_192_;
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_354_; 
lean_dec_ref(v___x_225_);
lean_dec_ref(v___y_222_);
lean_dec_ref(v___y_218_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec(v___y_213_);
v_a_347_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_354_ == 0)
{
v___x_349_ = v___x_228_;
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_228_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_354_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_352_; 
if (v_isShared_350_ == 0)
{
v___x_352_ = v___x_349_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_a_347_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
}
v___jp_355_:
{
lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_360_ = lean_unsigned_to_nat(0u);
v___x_361_ = lean_array_get_size(v_parts_98_);
v___x_362_ = lean_nat_dec_lt(v___x_360_, v___x_361_);
if (v___x_362_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; 
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
v___x_363_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__22);
v___x_364_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_363_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
return v___x_364_;
}
else
{
lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_365_ = lean_array_fget_borrowed(v_parts_98_, v___x_360_);
v___x_366_ = lean_unsigned_to_nat(1u);
v___x_367_ = lean_nat_dec_eq(v___x_361_, v___x_366_);
if (v___x_367_ == 0)
{
lean_object* v_rest_368_; lean_object* v___x_369_; 
v_rest_368_ = l_Array_extract___redArg(v_parts_98_, v___x_366_, v___x_361_);
v___x_369_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_97_, v_rest_368_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
lean_dec_ref(v_rest_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v_fst_371_; lean_object* v_snd_372_; lean_object* v___x_373_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 1);
v_fst_371_ = lean_ctor_get(v_a_370_, 0);
lean_inc(v_fst_371_);
v_snd_372_ = lean_ctor_get(v_a_370_, 1);
lean_inc(v_snd_372_);
lean_dec(v_a_370_);
lean_inc(v___x_365_);
v___x_373_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_365_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v_absorbing_375_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
lean_inc(v___y_357_);
lean_inc(v___y_359_);
v_absorbing_375_ = l_Lean_Expr_const___override(v___y_359_, v___y_357_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_376_; 
v___x_376_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24));
lean_inc(v___x_365_);
v___y_213_ = v___x_366_;
v___y_214_ = v___y_357_;
v___y_215_ = v___y_356_;
v___y_216_ = v___x_365_;
v___y_217_ = v___x_360_;
v___y_218_ = v_fst_371_;
v___y_219_ = v_snd_372_;
v___y_220_ = v_a_374_;
v___y_221_ = v___y_358_;
v___y_222_ = v_absorbing_375_;
v___y_223_ = v___x_376_;
goto v___jp_212_;
}
else
{
lean_object* v___x_377_; 
v___x_377_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26));
lean_inc(v___x_365_);
v___y_213_ = v___x_366_;
v___y_214_ = v___y_357_;
v___y_215_ = v___y_356_;
v___y_216_ = v___x_365_;
v___y_217_ = v___x_360_;
v___y_218_ = v_fst_371_;
v___y_219_ = v_snd_372_;
v___y_220_ = v_a_374_;
v___y_221_ = v___y_358_;
v___y_222_ = v_absorbing_375_;
v___y_223_ = v___x_377_;
goto v___jp_212_;
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_snd_372_);
lean_dec(v_fst_371_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
v_a_378_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_373_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_373_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
else
{
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v___x_369_;
}
}
else
{
lean_object* v___x_386_; 
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_inc(v___x_365_);
v___x_386_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v___x_365_, v_a_99_, v_a_100_, v_a_101_, v_a_102_);
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_395_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_395_ == 0)
{
v___x_389_ = v___x_386_;
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_395_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v___x_393_; 
lean_inc(v___x_365_);
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___x_365_);
lean_ctor_set(v___x_391_, 1, v_a_387_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 0, v___x_391_);
v___x_393_ = v___x_389_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_386_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_386_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
}
v___jp_404_:
{
lean_object* v___x_407_; lean_object* v_dropped_408_; 
v___x_407_ = lean_box(0);
lean_inc(v_snd_406_);
v_dropped_408_ = l_Lean_Expr_const___override(v_snd_406_, v___x_407_);
if (v_isAnd_97_ == 0)
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___y_356_ = v_dropped_408_;
v___y_357_ = v___x_407_;
v___y_358_ = v_fst_405_;
v___y_359_ = v___x_409_;
goto v___jp_355_;
}
else
{
lean_object* v___x_410_; 
v___x_410_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___y_356_ = v_dropped_408_;
v___y_357_ = v___x_407_;
v___y_358_ = v_fst_405_;
v___y_359_ = v___x_410_;
goto v___jp_355_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___boxed(lean_object* v_isAnd_415_, lean_object* v_parts_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
uint8_t v_isAnd_boxed_422_; lean_object* v_res_423_; 
v_isAnd_boxed_422_ = lean_unbox(v_isAnd_415_);
v_res_423_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_boxed_422_, v_parts_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec_ref(v_parts_416_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(uint8_t v_isAnd_424_, lean_object* v_parts_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v_isAnd_424_, v_parts_425_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___boxed(lean_object* v_isAnd_434_, lean_object* v_parts_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
uint8_t v_isAnd_boxed_443_; lean_object* v_res_444_; 
v_isAnd_boxed_443_ = lean_unbox(v_isAnd_434_);
v_res_444_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits(v_isAnd_boxed_443_, v_parts_435_, v_a_436_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
lean_dec_ref(v_parts_435_);
return v_res_444_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__0));
v___x_447_ = l_Lean_stringToMessageData(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(lean_object* v_f_448_, lean_object* v_i_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_457_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_448_);
v___x_458_ = lean_array_get_size(v___x_457_);
v___x_459_ = lean_nat_dec_lt(v_i_449_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; 
lean_dec_ref(v___x_457_);
v___x_460_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___closed__1);
v___x_461_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_460_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
return v___x_461_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_array_fget(v___x_457_, v_i_449_);
lean_dec_ref(v___x_457_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0___boxed(lean_object* v_f_464_, lean_object* v_i_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_464_, v_i_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v_i_465_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(lean_object* v_e_474_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___x_476_ = l_Lean_Expr_isConstOf(v_e_474_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___x_478_ = l_Lean_Expr_isConstOf(v_e_474_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
v___x_479_ = lean_box(0);
return v___x_479_;
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_box(v___x_476_);
v___x_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_box(v___x_476_);
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1___boxed(lean_object* v_e_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v_e_484_);
lean_dec_ref(v_e_484_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(lean_object* v___x_489_, lean_object* v_e_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1));
v___x_492_ = l_Lean_Expr_const___override(v___x_491_, v___x_489_);
v___x_493_ = l_Lean_Expr_app___override(v___x_492_, v_e_490_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0(lean_object* v_vars_512_, uint32_t v_fst_513_, lean_object* v_sorts_514_, lean_object* v_body_515_, uint8_t v_isForall_516_, lean_object* v_tail_517_, lean_object* v_x_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
lean_inc_ref(v_x_518_);
v___x_526_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_512_, v_fst_513_, v_x_518_);
v___x_527_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_514_, v_body_515_, v_isForall_516_, v_tail_517_, v___x_526_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_612_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_612_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_612_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_612_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v_fst_532_; lean_object* v_snd_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_611_; 
v_fst_532_ = lean_ctor_get(v_a_528_, 0);
v_snd_533_ = lean_ctor_get(v_a_528_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_a_528_);
if (v_isSharedCheck_611_ == 0)
{
v___x_535_ = v_a_528_;
v_isShared_536_ = v_isSharedCheck_611_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_snd_533_);
lean_inc(v_fst_532_);
lean_dec(v_a_528_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_611_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___y_538_; lean_object* v_result_539_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; uint8_t v___x_551_; uint8_t v___x_552_; lean_object* v___x_553_; 
v___x_547_ = lean_unsigned_to_nat(1u);
v___x_548_ = lean_mk_empty_array_with_capacity(v___x_547_);
lean_inc_ref(v___x_548_);
v___x_549_ = lean_array_push(v___x_548_, v_x_518_);
v___x_550_ = 0;
v___x_551_ = 1;
v___x_552_ = 1;
v___x_553_ = l_Lean_Meta_mkLambdaFVars(v___x_549_, v_snd_533_, v___x_550_, v___x_551_, v___x_550_, v___x_551_, v___x_552_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___y_556_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
if (v_isForall_516_ == 0)
{
lean_object* v___x_601_; 
v___x_601_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__3));
v___y_556_ = v___x_601_;
goto v___jp_555_;
}
else
{
lean_object* v___x_602_; 
v___x_602_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__5));
v___y_556_ = v___x_602_;
goto v___jp_555_;
}
v___jp_555_:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_inc_ref(v___x_548_);
v___x_557_ = lean_array_push(v___x_548_, v_a_554_);
lean_inc(v___y_556_);
v___x_558_ = l_Lean_Meta_mkAppM(v___y_556_, v___x_557_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
if (lean_obj_tag(v___x_558_) == 0)
{
if (v_isForall_516_ == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_558_, 1);
lean_inc(v_fst_532_);
v___x_560_ = l_Lean_Meta_mkLambdaFVars(v___x_549_, v_fst_532_, v___x_550_, v___x_551_, v___x_550_, v___x_551_, v___x_552_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec_ref(v___x_549_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___closed__1));
v___x_563_ = lean_array_push(v___x_548_, v_a_561_);
v___x_564_ = l_Lean_Meta_mkAppM(v___x_562_, v___x_563_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
lean_inc(v_a_565_);
lean_dec_ref_known(v___x_564_, 1);
v___y_538_ = v_a_559_;
v_result_539_ = v_a_565_;
goto v___jp_537_;
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_dec(v_a_559_);
lean_del_object(v___x_535_);
lean_dec(v_fst_532_);
lean_del_object(v___x_530_);
v_a_566_ = lean_ctor_get(v___x_564_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_564_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_564_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_564_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
lean_dec(v_a_559_);
lean_dec_ref(v___x_548_);
lean_del_object(v___x_535_);
lean_dec(v_fst_532_);
lean_del_object(v___x_530_);
v_a_574_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_560_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_560_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_583_; 
lean_dec_ref(v___x_548_);
v_a_582_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_558_, 1);
lean_inc(v_fst_532_);
v___x_583_ = l_Lean_Meta_mkForallFVars(v___x_549_, v_fst_532_, v___x_550_, v___x_551_, v___x_551_, v___x_552_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec_ref(v___x_549_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
v___y_538_ = v_a_582_;
v_result_539_ = v_a_584_;
goto v___jp_537_;
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec(v_a_582_);
lean_del_object(v___x_535_);
lean_dec(v_fst_532_);
lean_del_object(v___x_530_);
v_a_585_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_583_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_583_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_dec_ref(v___x_549_);
lean_dec_ref(v___x_548_);
lean_del_object(v___x_535_);
lean_dec(v_fst_532_);
lean_del_object(v___x_530_);
v_a_593_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_558_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_558_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec_ref(v___x_549_);
lean_dec_ref(v___x_548_);
lean_del_object(v___x_535_);
lean_dec(v_fst_532_);
lean_del_object(v___x_530_);
v_a_603_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_553_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_553_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
v___jp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 1, v_fst_532_);
lean_ctor_set(v___x_535_, 0, v___y_538_);
v___x_541_ = v___x_535_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___y_538_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_fst_532_);
v___x_541_ = v_reuseFailAlloc_546_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_result_539_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 0, v___x_542_);
v___x_544_ = v___x_530_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_x_518_);
v_a_613_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_527_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_527_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___boxed(lean_object* v_vars_621_, lean_object* v_fst_622_, lean_object* v_sorts_623_, lean_object* v_body_624_, lean_object* v_isForall_625_, lean_object* v_tail_626_, lean_object* v_x_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
uint32_t v_fst_110034__boxed_635_; uint8_t v_isForall_boxed_636_; lean_object* v_res_637_; 
v_fst_110034__boxed_635_ = lean_unbox_uint32(v_fst_622_);
lean_dec(v_fst_622_);
v_isForall_boxed_636_ = lean_unbox(v_isForall_625_);
v_res_637_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0(v_vars_621_, v_fst_110034__boxed_635_, v_sorts_623_, v_body_624_, v_isForall_boxed_636_, v_tail_626_, v_x_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
lean_dec(v___y_629_);
lean_dec_ref(v___y_628_);
return v_res_637_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_655_ = lean_box(0);
v___x_656_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___x_657_ = l_Lean_Expr_const___override(v___x_656_, v___x_655_);
return v___x_657_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = lean_box(0);
v___x_667_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___x_668_ = l_Lean_Expr_const___override(v___x_667_, v___x_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(lean_object* v_sorts_673_, lean_object* v_body_674_, uint8_t v_isForall_675_, lean_object* v_rest_676_, lean_object* v_vars_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_){
_start:
{
if (lean_obj_tag(v_rest_676_) == 0)
{
lean_object* v___x_685_; 
v___x_685_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_673_, v_vars_677_, v_body_674_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
return v___x_685_;
}
else
{
lean_object* v_head_686_; lean_object* v_tail_687_; lean_object* v_fst_688_; lean_object* v_snd_689_; lean_object* v___x_690_; 
v_head_686_ = lean_ctor_get(v_rest_676_, 0);
lean_inc(v_head_686_);
v_tail_687_ = lean_ctor_get(v_rest_676_, 1);
lean_inc(v_tail_687_);
lean_dec_ref_known(v_rest_676_, 2);
v_fst_688_ = lean_ctor_get(v_head_686_, 0);
lean_inc(v_fst_688_);
v_snd_689_ = lean_ctor_get(v_head_686_, 1);
lean_inc(v_snd_689_);
lean_dec(v_head_686_);
v___x_690_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_689_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v___x_692_; lean_object* v___f_693_; lean_object* v___x_694_; uint32_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc_n(v_a_691_, 2);
lean_dec_ref_known(v___x_690_, 1);
v___x_692_ = lean_box(v_isForall_675_);
lean_inc(v_fst_688_);
v___f_693_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___lam__0___boxed), 14, 6);
lean_closure_set(v___f_693_, 0, v_vars_677_);
lean_closure_set(v___f_693_, 1, v_fst_688_);
lean_closure_set(v___f_693_, 2, v_sorts_673_);
lean_closure_set(v___f_693_, 3, v_body_674_);
lean_closure_set(v___f_693_, 4, v___x_692_);
lean_closure_set(v___f_693_, 5, v_tail_687_);
v___x_694_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__0));
v___x_695_ = lean_unbox_uint32(v_fst_688_);
lean_dec(v_fst_688_);
v___x_696_ = lean_uint32_to_nat(v___x_695_);
v___x_697_ = l_Nat_reprFast(v___x_696_);
v___x_698_ = lean_string_append(v___x_694_, v___x_697_);
lean_dec_ref(v___x_697_);
v___x_699_ = lean_box(0);
v___x_700_ = l_Lean_Name_str___override(v___x_699_, v___x_698_);
v___x_701_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_700_, v_a_691_, v___f_693_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_848_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_848_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_848_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_848_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v_snd_706_; lean_object* v_fst_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_847_; 
v_snd_706_ = lean_ctor_get(v_a_702_, 1);
v_fst_707_ = lean_ctor_get(v_a_702_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_a_702_);
if (v_isSharedCheck_847_ == 0)
{
v___x_709_ = v_a_702_;
v_isShared_710_ = v_isSharedCheck_847_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_snd_706_);
lean_inc(v_fst_707_);
lean_dec(v_a_702_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_847_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v_fst_711_; lean_object* v_snd_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_846_; 
v_fst_711_ = lean_ctor_get(v_snd_706_, 0);
v_snd_712_ = lean_ctor_get(v_snd_706_, 1);
v_isSharedCheck_846_ = !lean_is_exclusive(v_snd_706_);
if (v_isSharedCheck_846_ == 0)
{
v___x_714_ = v_snd_706_;
v_isShared_715_ = v_isSharedCheck_846_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_snd_712_);
lean_inc(v_fst_711_);
lean_dec(v_snd_706_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_846_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v_result_717_; lean_object* v_absorption_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___x_749_ = l_Lean_Expr_isConstOf(v_snd_712_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___x_751_ = l_Lean_Expr_isConstOf(v_snd_712_, v___x_750_);
lean_dec(v_snd_712_);
if (v___x_751_ == 0)
{
lean_object* v___x_753_; 
lean_del_object(v___x_714_);
lean_dec(v_a_691_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v_fst_711_);
v___x_753_ = v___x_709_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_fst_707_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_fst_711_);
v___x_753_ = v_reuseFailAlloc_757_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_753_);
v___x_755_ = v___x_704_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_753_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
lean_del_object(v___x_709_);
lean_dec(v_fst_707_);
lean_del_object(v___x_704_);
if (v_isForall_675_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_758_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__6));
v___x_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_759_, 0, v_a_691_);
v___x_760_ = lean_unsigned_to_nat(1u);
v___x_761_ = lean_mk_empty_array_with_capacity(v___x_760_);
v___x_762_ = lean_array_push(v___x_761_, v___x_759_);
v___x_763_ = l_Lean_Meta_mkAppOptM(v___x_758_, v___x_762_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_717_ = v___x_765_;
v_absorption_718_ = v_a_764_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
v___y_722_ = v_a_683_;
goto v___jp_716_;
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_773_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
v_a_766_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_773_ == 0)
{
v___x_768_ = v___x_763_;
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_763_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_773_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_771_; 
if (v_isShared_769_ == 0)
{
v___x_771_ = v___x_768_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_a_766_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
}
else
{
lean_object* v___x_774_; 
lean_inc(v_a_691_);
v___x_774_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_691_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__9));
v___x_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_777_, 0, v_a_691_);
v___x_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_778_, 0, v_a_775_);
v___x_779_ = lean_unsigned_to_nat(2u);
v___x_780_ = lean_mk_empty_array_with_capacity(v___x_779_);
v___x_781_ = lean_array_push(v___x_780_, v___x_777_);
v___x_782_ = lean_array_push(v___x_781_, v___x_778_);
v___x_783_ = l_Lean_Meta_mkAppOptM(v___x_776_, v___x_782_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_785_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
v___x_785_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_717_ = v___x_785_;
v_absorption_718_ = v_a_784_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
v___y_722_ = v_a_683_;
goto v___jp_716_;
}
else
{
lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
v_a_786_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_783_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_dec(v___x_783_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_786_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
else
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
lean_dec(v_a_691_);
v_a_794_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_774_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_774_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
}
}
else
{
lean_dec(v_snd_712_);
lean_del_object(v___x_709_);
lean_dec(v_fst_707_);
lean_del_object(v___x_704_);
if (v_isForall_675_ == 0)
{
lean_object* v___x_802_; 
lean_inc(v_a_691_);
v___x_802_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_691_, v_a_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_a_803_);
lean_dec_ref_known(v___x_802_, 1);
v___x_804_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__11));
v___x_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_805_, 0, v_a_691_);
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v_a_803_);
v___x_807_ = lean_unsigned_to_nat(2u);
v___x_808_ = lean_mk_empty_array_with_capacity(v___x_807_);
v___x_809_ = lean_array_push(v___x_808_, v___x_805_);
v___x_810_ = lean_array_push(v___x_809_, v___x_806_);
v___x_811_ = l_Lean_Meta_mkAppOptM(v___x_804_, v___x_810_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_813_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_811_, 1);
v___x_813_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_717_ = v___x_813_;
v_absorption_718_ = v_a_812_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
v___y_722_ = v_a_683_;
goto v___jp_716_;
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
v_a_814_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_811_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_811_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
lean_dec(v_a_691_);
v_a_822_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_802_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_802_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_830_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__14));
v___x_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_831_, 0, v_a_691_);
v___x_832_ = lean_unsigned_to_nat(1u);
v___x_833_ = lean_mk_empty_array_with_capacity(v___x_832_);
v___x_834_ = lean_array_push(v___x_833_, v___x_831_);
v___x_835_ = l_Lean_Meta_mkAppOptM(v___x_830_, v___x_834_, v_a_680_, v_a_681_, v_a_682_, v_a_683_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v___x_837_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
lean_dec_ref_known(v___x_835_, 1);
v___x_837_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_717_ = v___x_837_;
v_absorption_718_ = v_a_836_;
v___y_719_ = v_a_680_;
v___y_720_ = v_a_681_;
v___y_721_ = v_a_682_;
v___y_722_ = v_a_683_;
goto v___jp_716_;
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_del_object(v___x_714_);
lean_dec(v_fst_711_);
v_a_838_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_835_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_835_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
v___jp_716_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_723_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_724_ = lean_unsigned_to_nat(2u);
v___x_725_ = lean_mk_empty_array_with_capacity(v___x_724_);
v___x_726_ = lean_array_push(v___x_725_, v_fst_711_);
v___x_727_ = lean_array_push(v___x_726_, v_absorption_718_);
v___x_728_ = l_Lean_Meta_mkAppM(v___x_723_, v___x_727_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_739_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_739_ == 0)
{
v___x_731_ = v___x_728_;
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_728_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_739_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
lean_inc_ref(v_result_717_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v_a_729_);
lean_ctor_set(v___x_714_, 0, v_result_717_);
v___x_734_ = v___x_714_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_result_717_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_a_729_);
v___x_734_ = v_reuseFailAlloc_738_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_736_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_734_);
v___x_736_ = v___x_731_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
lean_del_object(v___x_714_);
v_a_740_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_728_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_728_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
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
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_856_; 
lean_dec(v_a_691_);
v_a_849_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_856_ == 0)
{
v___x_851_ = v___x_701_;
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_701_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_856_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_854_; 
if (v_isShared_852_ == 0)
{
v___x_854_ = v___x_851_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_849_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_fst_688_);
lean_dec(v_tail_687_);
lean_dec_ref(v_vars_677_);
lean_dec_ref(v_body_674_);
lean_dec_ref(v_sorts_673_);
v_a_857_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_690_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_690_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_867_ = lean_box(0);
v___x_868_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__3));
v___x_869_ = l_Lean_Expr_const___override(v___x_868_, v___x_867_);
return v___x_869_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_box(0);
v___x_893_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2___closed__1));
v___x_894_ = l_Lean_Expr_const___override(v___x_893_, v___x_892_);
return v___x_894_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__41));
v___x_926_ = l_Lean_stringToMessageData(v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(lean_object* v_sorts_927_, lean_object* v_vars_928_, lean_object* v_f_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_943_; lean_object* v_result_944_; lean_object* v_absorption_945_; lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; uint8_t v___y_981_; lean_object* v___y_982_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; uint8_t v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___x_1071_; 
lean_inc_ref(v_f_929_);
lean_inc_ref(v_vars_928_);
lean_inc_ref(v_sorts_927_);
v___x_1071_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_927_, v_vars_928_, v_f_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_929_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; uint8_t v___y_1127_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v___y_1168_; uint8_t v___y_1169_; lean_object* v_congruence_1170_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; uint8_t v___y_1580_; lean_object* v___y_1641_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; uint8_t v___x_1660_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v___x_1660_ = lean_unbox(v_a_1074_);
switch(v___x_1660_)
{
case 0:
{
lean_dec(v_a_1074_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
v___y_1101_ = v_a_935_;
goto v___jp_1097_;
}
case 11:
{
lean_dec(v_a_1074_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
v___y_1101_ = v_a_935_;
goto v___jp_1097_;
}
case 10:
{
lean_dec(v_a_1074_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
v___y_1101_ = v_a_935_;
goto v___jp_1097_;
}
case 9:
{
lean_dec(v_a_1074_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v___y_1098_ = v_a_932_;
v___y_1099_ = v_a_933_;
v___y_1100_ = v_a_934_;
v___y_1101_ = v_a_935_;
goto v___jp_1097_;
}
case 6:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1661_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1664_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1664_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_927_, v_vars_928_, v_a_1663_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v_fst_1666_; lean_object* v_snd_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1757_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1665_);
lean_dec_ref_known(v___x_1664_, 1);
v_fst_1666_ = lean_ctor_get(v_a_1665_, 0);
v_snd_1667_ = lean_ctor_get(v_a_1665_, 1);
v_isSharedCheck_1757_ = !lean_is_exclusive(v_a_1665_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1669_ = v_a_1665_;
v_isShared_1670_ = v_isSharedCheck_1757_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_snd_1667_);
lean_inc(v_fst_1666_);
lean_dec(v_a_1665_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1757_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1671_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24));
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = lean_mk_empty_array_with_capacity(v___x_1672_);
v___x_1674_ = lean_array_push(v___x_1673_, v_snd_1667_);
v___x_1675_ = l_Lean_Meta_mkAppM(v___x_1671_, v___x_1674_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1748_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1678_ = v___x_1675_;
v_isShared_1679_ = v_isSharedCheck_1748_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1675_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1748_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v_result_1681_; lean_object* v_absorption_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___x_1713_ = l_Lean_Expr_isConstOf(v_fst_1666_, v___x_1712_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1714_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___x_1715_ = l_Lean_Expr_isConstOf(v_fst_1666_, v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1720_; 
lean_del_object(v___x_1669_);
v___x_1716_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25);
v___x_1717_ = l_Lean_Expr_app___override(v___x_1716_, v_fst_1666_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
lean_ctor_set(v___x_1718_, 1, v_a_1676_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1718_);
v___x_1720_ = v___x_1678_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1718_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
else
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_del_object(v___x_1678_);
lean_dec(v_fst_1666_);
v___x_1722_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__27));
v___x_1723_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28));
v___x_1724_ = l_Lean_Meta_mkAppOptM(v___x_1722_, v___x_1723_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v___x_1726_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_a_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v_result_1681_ = v___x_1726_;
v_absorption_1682_ = v_a_1725_;
v___y_1683_ = v_a_932_;
v___y_1684_ = v_a_933_;
v___y_1685_ = v_a_934_;
v___y_1686_ = v_a_935_;
goto v___jp_1680_;
}
else
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
lean_dec(v_a_1676_);
lean_del_object(v___x_1669_);
v_a_1727_ = lean_ctor_get(v___x_1724_, 0);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1734_ == 0)
{
v___x_1729_ = v___x_1724_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1724_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_a_1727_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
}
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
lean_del_object(v___x_1678_);
lean_dec(v_fst_1666_);
v___x_1735_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__30));
v___x_1736_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__28));
v___x_1737_ = l_Lean_Meta_mkAppOptM(v___x_1735_, v___x_1736_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_object* v_a_1738_; lean_object* v___x_1739_; 
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v___x_1737_, 1);
v___x_1739_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_1681_ = v___x_1739_;
v_absorption_1682_ = v_a_1738_;
v___y_1683_ = v_a_932_;
v___y_1684_ = v_a_933_;
v___y_1685_ = v_a_934_;
v___y_1686_ = v_a_935_;
goto v___jp_1680_;
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_dec(v_a_1676_);
lean_del_object(v___x_1669_);
v_a_1740_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1737_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1737_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
v___jp_1680_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1687_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1688_ = lean_unsigned_to_nat(2u);
v___x_1689_ = lean_mk_empty_array_with_capacity(v___x_1688_);
v___x_1690_ = lean_array_push(v___x_1689_, v_a_1676_);
v___x_1691_ = lean_array_push(v___x_1690_, v_absorption_1682_);
v___x_1692_ = l_Lean_Meta_mkAppM(v___x_1687_, v___x_1691_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1703_; 
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1703_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1703_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
lean_inc_ref(v_result_1681_);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 1, v_a_1693_);
lean_ctor_set(v___x_1669_, 0, v_result_1681_);
v___x_1698_ = v___x_1669_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_result_1681_);
lean_ctor_set(v_reuseFailAlloc_1702_, 1, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
lean_object* v___x_1700_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 0, v___x_1698_);
v___x_1700_ = v___x_1695_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
else
{
lean_object* v_a_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
lean_del_object(v___x_1669_);
v_a_1704_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1711_ == 0)
{
v___x_1706_ = v___x_1692_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_a_1704_);
lean_dec(v___x_1692_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_a_1704_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
return v___x_1709_;
}
}
}
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_del_object(v___x_1669_);
lean_dec(v_fst_1666_);
v_a_1749_ = lean_ctor_get(v___x_1675_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1675_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1675_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
else
{
return v___x_1664_;
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1758_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1662_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1662_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
case 1:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1076_ = v_a_930_;
v___y_1077_ = v_a_931_;
v___y_1078_ = v_a_932_;
v___y_1079_ = v_a_933_;
v___y_1080_ = v_a_934_;
v___y_1081_ = v_a_935_;
goto v___jp_1075_;
}
case 2:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1076_ = v_a_930_;
v___y_1077_ = v_a_931_;
v___y_1078_ = v_a_932_;
v___y_1079_ = v_a_933_;
v___y_1080_ = v_a_934_;
v___y_1081_ = v_a_935_;
goto v___jp_1075_;
}
case 3:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___x_1766_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_929_);
v___x_1767_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1766_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v___x_1769_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
lean_inc_ref(v_vars_928_);
lean_inc_ref(v_sorts_927_);
v___x_1769_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_927_, v_vars_928_, v_a_1768_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_f_929_);
v___x_1772_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1771_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1772_) == 0)
{
lean_object* v_a_1773_; lean_object* v___x_1774_; 
v_a_1773_ = lean_ctor_get(v___x_1772_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v___x_1772_, 1);
lean_inc_ref(v_vars_928_);
lean_inc_ref(v_sorts_927_);
v___x_1774_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_927_, v_vars_928_, v_a_1773_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1994_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1777_ = v___x_1774_;
v_isShared_1778_ = v_isSharedCheck_1994_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1774_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1994_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v_fst_1779_; lean_object* v_snd_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1993_; 
v_fst_1779_ = lean_ctor_get(v_a_1775_, 0);
v_snd_1780_ = lean_ctor_get(v_a_1775_, 1);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_a_1775_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1782_ = v_a_1775_;
v_isShared_1783_ = v_isSharedCheck_1993_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_snd_1780_);
lean_inc(v_fst_1779_);
lean_dec(v_a_1775_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1993_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___x_1785_ = l_Lean_Expr_isConstOf(v_fst_1779_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; 
lean_del_object(v___x_1777_);
lean_dec(v_a_1770_);
v___x_1786_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1766_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_927_, v_vars_928_, v_a_1787_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1919_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1791_ = v___x_1788_;
v_isShared_1792_ = v_isSharedCheck_1919_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1788_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1919_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v_fst_1793_; lean_object* v_snd_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1918_; 
v_fst_1793_ = lean_ctor_get(v_a_1789_, 0);
v_snd_1794_ = lean_ctor_get(v_a_1789_, 1);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_a_1789_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1796_ = v_a_1789_;
v_isShared_1797_ = v_isSharedCheck_1918_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_snd_1794_);
lean_inc(v_fst_1793_);
lean_dec(v_a_1789_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1918_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1798_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32));
v___x_1799_ = lean_unsigned_to_nat(2u);
v___x_1800_ = lean_mk_empty_array_with_capacity(v___x_1799_);
lean_inc_ref(v___x_1800_);
v___x_1801_ = lean_array_push(v___x_1800_, v_snd_1794_);
v___x_1802_ = lean_array_push(v___x_1801_, v_snd_1780_);
v___x_1803_ = l_Lean_Meta_mkAppM(v___x_1798_, v___x_1802_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v_result_1806_; lean_object* v_absorption_1807_; lean_object* v___y_1808_; lean_object* v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; uint8_t v___x_1835_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___x_1803_, 1);
v___x_1835_ = l_Lean_Expr_isConstOf(v_fst_1793_, v___x_1784_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___x_1837_ = l_Lean_Expr_isConstOf(v_fst_1793_, v___x_1836_);
if (v___x_1837_ == 0)
{
uint8_t v___x_1838_; 
v___x_1838_ = l_Lean_Expr_isConstOf(v_fst_1779_, v___x_1836_);
if (v___x_1838_ == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v___x_1800_);
lean_del_object(v___x_1796_);
lean_del_object(v___x_1791_);
v___x_1839_ = l_Lean_mkArrow(v_fst_1793_, v_fst_1779_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1850_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v_a_1804_);
lean_ctor_set(v___x_1782_, 0, v_a_1840_);
v___x_1845_ = v___x_1782_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1840_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_a_1804_);
v___x_1845_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
lean_object* v___x_1847_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 0, v___x_1845_);
v___x_1847_ = v___x_1842_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
else
{
lean_object* v_a_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1858_; 
lean_dec(v_a_1804_);
lean_del_object(v___x_1782_);
v_a_1851_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1853_ = v___x_1839_;
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_a_1851_);
lean_dec(v___x_1839_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1858_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1856_; 
if (v_isShared_1854_ == 0)
{
v___x_1856_ = v___x_1853_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_a_1851_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
lean_del_object(v___x_1782_);
lean_dec(v_fst_1779_);
v___x_1859_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__34));
lean_inc(v_fst_1793_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set_tag(v___x_1791_, 1);
lean_ctor_set(v___x_1791_, 0, v_fst_1793_);
v___x_1861_ = v___x_1791_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_fst_1793_);
v___x_1861_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = lean_mk_empty_array_with_capacity(v___x_1771_);
v___x_1863_ = lean_array_push(v___x_1862_, v___x_1861_);
v___x_1864_ = l_Lean_Meta_mkAppOptM(v___x_1859_, v___x_1863_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1864_, 1);
v___x_1866_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__25);
v___x_1867_ = l_Lean_Expr_app___override(v___x_1866_, v_fst_1793_);
v_result_1806_ = v___x_1867_;
v_absorption_1807_ = v_a_1865_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
v___y_1811_ = v_a_935_;
goto v___jp_1805_;
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_a_1804_);
lean_dec_ref(v___x_1800_);
lean_del_object(v___x_1796_);
lean_dec(v_fst_1793_);
v_a_1868_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1864_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1864_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
}
}
else
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_dec(v_fst_1793_);
lean_del_object(v___x_1782_);
v___x_1877_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__36));
if (v_isShared_1792_ == 0)
{
lean_ctor_set_tag(v___x_1791_, 1);
lean_ctor_set(v___x_1791_, 0, v_fst_1779_);
v___x_1879_ = v___x_1791_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_fst_1779_);
v___x_1879_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = lean_mk_empty_array_with_capacity(v___x_1771_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1879_);
v___x_1882_ = l_Lean_Meta_mkAppOptM(v___x_1877_, v___x_1881_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
v___x_1884_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v_result_1806_ = v___x_1884_;
v_absorption_1807_ = v_a_1883_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
v___y_1811_ = v_a_935_;
goto v___jp_1805_;
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_a_1804_);
lean_dec_ref(v___x_1800_);
lean_del_object(v___x_1796_);
v_a_1885_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1882_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1882_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
}
}
else
{
lean_object* v___x_1894_; lean_object* v___x_1896_; 
lean_dec(v_fst_1793_);
lean_del_object(v___x_1782_);
v___x_1894_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__38));
lean_inc(v_fst_1779_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set_tag(v___x_1791_, 1);
lean_ctor_set(v___x_1791_, 0, v_fst_1779_);
v___x_1896_ = v___x_1791_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_fst_1779_);
v___x_1896_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1897_ = lean_mk_empty_array_with_capacity(v___x_1771_);
v___x_1898_ = lean_array_push(v___x_1897_, v___x_1896_);
v___x_1899_ = l_Lean_Meta_mkAppOptM(v___x_1894_, v___x_1898_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_a_1900_);
lean_dec_ref_known(v___x_1899_, 1);
v_result_1806_ = v_fst_1779_;
v_absorption_1807_ = v_a_1900_;
v___y_1808_ = v_a_932_;
v___y_1809_ = v_a_933_;
v___y_1810_ = v_a_934_;
v___y_1811_ = v_a_935_;
goto v___jp_1805_;
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec(v_a_1804_);
lean_dec_ref(v___x_1800_);
lean_del_object(v___x_1796_);
lean_dec(v_fst_1779_);
v_a_1901_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1899_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1899_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
}
v___jp_1805_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1812_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1813_ = lean_array_push(v___x_1800_, v_a_1804_);
v___x_1814_ = lean_array_push(v___x_1813_, v_absorption_1807_);
v___x_1815_ = l_Lean_Meta_mkAppM(v___x_1812_, v___x_1814_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1826_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1818_ = v___x_1815_;
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1815_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1826_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 1, v_a_1816_);
lean_ctor_set(v___x_1796_, 0, v_result_1806_);
v___x_1821_ = v___x_1796_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_result_1806_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1823_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set(v___x_1818_, 0, v___x_1821_);
v___x_1823_ = v___x_1818_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
lean_dec_ref(v_result_1806_);
lean_del_object(v___x_1796_);
v_a_1827_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1815_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1815_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v___x_1800_);
lean_del_object(v___x_1796_);
lean_dec(v_fst_1793_);
lean_del_object(v___x_1791_);
lean_del_object(v___x_1782_);
lean_dec(v_fst_1779_);
v_a_1910_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1803_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1803_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1782_);
lean_dec(v_snd_1780_);
lean_dec(v_fst_1779_);
return v___x_1788_;
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_del_object(v___x_1782_);
lean_dec(v_snd_1780_);
lean_dec(v_fst_1779_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1920_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1786_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1786_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v___x_1928_; 
lean_dec(v_fst_1779_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
lean_inc(v_a_1770_);
v___x_1928_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_a_1770_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_1930_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__32));
v___x_1931_ = lean_unsigned_to_nat(2u);
v___x_1932_ = lean_mk_empty_array_with_capacity(v___x_1931_);
lean_inc_ref(v___x_1932_);
v___x_1933_ = lean_array_push(v___x_1932_, v_a_1929_);
v___x_1934_ = lean_array_push(v___x_1933_, v_snd_1780_);
v___x_1935_ = l_Lean_Meta_mkAppM(v___x_1930_, v___x_1934_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1937_; lean_object* v___x_1939_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1936_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1937_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__40));
if (v_isShared_1778_ == 0)
{
lean_ctor_set_tag(v___x_1777_, 1);
lean_ctor_set(v___x_1777_, 0, v_a_1770_);
v___x_1939_ = v___x_1777_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1770_);
v___x_1939_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = lean_mk_empty_array_with_capacity(v___x_1771_);
v___x_1941_ = lean_array_push(v___x_1940_, v___x_1939_);
v___x_1942_ = l_Lean_Meta_mkAppOptM(v___x_1937_, v___x_1941_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_a_1943_);
lean_dec_ref_known(v___x_1942_, 1);
v___x_1944_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_1945_ = lean_array_push(v___x_1932_, v_a_1936_);
v___x_1946_ = lean_array_push(v___x_1945_, v_a_1943_);
v___x_1947_ = l_Lean_Meta_mkAppM(v___x_1944_, v___x_1946_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1959_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1954_; 
v___x_1952_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v_a_1948_);
lean_ctor_set(v___x_1782_, 0, v___x_1952_);
v___x_1954_ = v___x_1782_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1952_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_a_1948_);
v___x_1954_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
lean_object* v___x_1956_; 
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1954_);
v___x_1956_ = v___x_1950_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1954_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
lean_del_object(v___x_1782_);
v_a_1960_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1947_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1947_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
else
{
lean_object* v_a_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1975_; 
lean_dec(v_a_1936_);
lean_dec_ref(v___x_1932_);
lean_del_object(v___x_1782_);
v_a_1968_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1970_ = v___x_1942_;
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
else
{
lean_inc(v_a_1968_);
lean_dec(v___x_1942_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1975_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
lean_object* v___x_1973_; 
if (v_isShared_1971_ == 0)
{
v___x_1973_ = v___x_1970_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_a_1968_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
lean_dec_ref(v___x_1932_);
lean_del_object(v___x_1782_);
lean_del_object(v___x_1777_);
lean_dec(v_a_1770_);
v_a_1977_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___x_1935_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1935_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_del_object(v___x_1782_);
lean_dec(v_snd_1780_);
lean_del_object(v___x_1777_);
lean_dec(v_a_1770_);
v_a_1985_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1928_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1928_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1770_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
return v___x_1774_;
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
lean_dec(v_a_1770_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1995_ = lean_ctor_get(v___x_1772_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1772_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1772_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1772_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
else
{
lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2010_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_2003_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2005_ = v___x_1769_;
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_1769_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2010_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_a_2003_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_2011_ = lean_ctor_get(v___x_1767_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1767_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1767_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
case 4:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1641_ = v_a_930_;
v___y_1642_ = v_a_931_;
v___y_1643_ = v_a_932_;
v___y_1644_ = v_a_933_;
v___y_1645_ = v_a_934_;
v___y_1646_ = v_a_935_;
goto v___jp_1640_;
}
case 5:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1641_ = v_a_930_;
v___y_1642_ = v_a_931_;
v___y_1643_ = v_a_932_;
v___y_1644_ = v_a_933_;
v___y_1645_ = v_a_934_;
v___y_1646_ = v_a_935_;
goto v___jp_1640_;
}
case 7:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1145_ = v_a_930_;
v___y_1146_ = v_a_931_;
v___y_1147_ = v_a_932_;
v___y_1148_ = v_a_933_;
v___y_1149_ = v_a_934_;
v___y_1150_ = v_a_935_;
goto v___jp_1144_;
}
case 8:
{
lean_dec(v_a_1074_);
lean_dec(v_a_1072_);
v___y_1145_ = v_a_930_;
v___y_1146_ = v_a_931_;
v___y_1147_ = v_a_932_;
v___y_1148_ = v_a_933_;
v___y_1149_ = v_a_934_;
v___y_1150_ = v_a_935_;
goto v___jp_1144_;
}
default: 
{
lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec(v_a_1072_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v___x_2019_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__42);
v___x_2020_ = lean_unsigned_to_nat(0u);
v___x_2021_ = lean_unbox(v_a_1074_);
lean_dec(v_a_1074_);
v___x_2022_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2021_, v___x_2020_);
v___x_2023_ = l_Lean_MessageData_ofFormat(v___x_2022_);
v___x_2024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2019_);
lean_ctor_set(v___x_2024_, 1, v___x_2023_);
v___x_2025_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2024_, v_a_932_, v_a_933_, v_a_934_, v_a_935_);
return v___x_2025_;
}
}
v___jp_1075_:
{
lean_object* v___x_1082_; 
v___x_1082_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_929_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; uint8_t v___x_1084_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = lean_unbox(v_a_1083_);
lean_dec(v_a_1083_);
if (v___x_1084_ == 1)
{
uint8_t v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = 1;
v___x_1086_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__30));
v___y_1027_ = v___y_1079_;
v___y_1028_ = v___y_1081_;
v___y_1029_ = v___y_1080_;
v___y_1030_ = v___y_1078_;
v___y_1031_ = v___x_1085_;
v___y_1032_ = v___y_1077_;
v___y_1033_ = v___y_1076_;
v___y_1034_ = v___x_1086_;
goto v___jp_1026_;
}
else
{
uint8_t v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = 0;
v___x_1088_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__28));
v___y_1027_ = v___y_1079_;
v___y_1028_ = v___y_1081_;
v___y_1029_ = v___y_1080_;
v___y_1030_ = v___y_1078_;
v___y_1031_ = v___x_1087_;
v___y_1032_ = v___y_1077_;
v___y_1033_ = v___y_1076_;
v___y_1034_ = v___x_1088_;
goto v___jp_1026_;
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1089_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1082_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1082_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
v___jp_1097_:
{
lean_object* v___x_1102_; 
lean_inc(v_a_1072_);
v___x_1102_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_a_1072_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1111_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v_a_1072_);
lean_ctor_set(v___x_1107_, 1, v_a_1103_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v_a_1072_);
v_a_1112_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1102_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1102_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
v___jp_1120_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
lean_inc_ref(v_f_929_);
v___x_1128_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_929_);
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = lean_array_get_size(v___x_1128_);
v___x_1131_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_927_, v___x_1128_, v___x_1129_, v___x_1130_);
lean_dec_ref(v___x_1128_);
v___x_1132_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1129_, v___y_1125_, v___y_1124_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1126_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1132_, 1);
v___x_1134_ = lean_array_to_list(v___x_1131_);
v___x_1135_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_927_, v_a_1133_, v___y_1127_, v___x_1134_, v_vars_928_, v___y_1125_, v___y_1124_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1126_);
return v___x_1135_;
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec_ref(v___x_1131_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1136_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1132_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1132_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
v___jp_1144_:
{
lean_object* v___x_1151_; 
v___x_1151_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_929_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; uint8_t v___x_1153_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1153_ = lean_unbox(v_a_1152_);
lean_dec(v_a_1152_);
if (v___x_1153_ == 7)
{
uint8_t v___x_1154_; 
v___x_1154_ = 1;
v___y_1121_ = v___y_1147_;
v___y_1122_ = v___y_1148_;
v___y_1123_ = v___y_1149_;
v___y_1124_ = v___y_1146_;
v___y_1125_ = v___y_1145_;
v___y_1126_ = v___y_1150_;
v___y_1127_ = v___x_1154_;
goto v___jp_1120_;
}
else
{
uint8_t v___x_1155_; 
v___x_1155_ = 0;
v___y_1121_ = v___y_1147_;
v___y_1122_ = v___y_1148_;
v___y_1123_ = v___y_1149_;
v___y_1124_ = v___y_1146_;
v___y_1125_ = v___y_1145_;
v___y_1126_ = v___y_1150_;
v___y_1127_ = v___x_1155_;
goto v___jp_1120_;
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1156_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1151_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1151_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
v___jp_1164_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_box(0);
v___x_1176_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1168_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1166_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v___x_1178_; lean_object* v___x_1179_; 
lean_dec(v___y_1165_);
v___x_1178_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__4);
v___x_1179_ = l_Lean_mkAppB(v___x_1178_, v___y_1168_, v___y_1166_);
if (v___y_1169_ == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1175_, v___x_1179_);
v___y_938_ = v_congruence_1170_;
v___y_939_ = v___x_1180_;
goto v___jp_937_;
}
else
{
v___y_938_ = v_congruence_1170_;
v___y_939_ = v___x_1179_;
goto v___jp_937_;
}
}
else
{
lean_object* v_val_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1288_; 
lean_dec_ref(v___y_1166_);
v_val_1181_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1183_ = v___x_1177_;
v_isShared_1184_ = v_isSharedCheck_1288_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_val_1181_);
lean_dec(v___x_1177_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1288_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
uint8_t v___x_1185_; 
v___x_1185_ = lean_unbox(v_val_1181_);
lean_dec(v_val_1181_);
if (v___x_1185_ == 0)
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1186_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1187_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1188_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1189_ = l_Lean_Name_num___override(v___x_1188_, v___y_1165_);
v___x_1190_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1191_ = l_Lean_Name_str___override(v___x_1189_, v___x_1190_);
v___x_1192_ = l_Lean_Name_str___override(v___x_1191_, v___x_1186_);
v___x_1193_ = l_Lean_Name_str___override(v___x_1192_, v___x_1187_);
v___x_1194_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__5));
v___x_1195_ = l_Lean_Name_str___override(v___x_1193_, v___x_1194_);
lean_inc_ref(v___y_1168_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___y_1168_);
v___x_1197_ = v___x_1183_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___y_1168_);
v___x_1197_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1197_);
v___x_1200_ = l_Lean_Meta_mkAppOptM(v___x_1195_, v___x_1199_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v___x_1200_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___y_1168_;
v_absorption_945_ = v_a_1201_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1168_);
v_a_1202_ = lean_ctor_get(v___x_1200_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1200_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1200_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1211_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1212_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1213_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1214_ = l_Lean_Name_num___override(v___x_1213_, v___y_1165_);
v___x_1215_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1216_ = l_Lean_Name_str___override(v___x_1214_, v___x_1215_);
v___x_1217_ = l_Lean_Name_str___override(v___x_1216_, v___x_1211_);
v___x_1218_ = l_Lean_Name_str___override(v___x_1217_, v___x_1212_);
v___x_1219_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__6));
v___x_1220_ = l_Lean_Name_str___override(v___x_1218_, v___x_1219_);
lean_inc_ref(v___y_1168_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___y_1168_);
v___x_1222_ = v___x_1183_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___y_1168_);
v___x_1222_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1223_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1224_ = lean_array_push(v___x_1223_, v___x_1222_);
v___x_1225_ = l_Lean_Meta_mkAppOptM(v___x_1220_, v___x_1224_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1225_) == 0)
{
lean_object* v_a_1226_; lean_object* v___x_1227_; 
v_a_1226_ = lean_ctor_get(v___x_1225_, 0);
lean_inc(v_a_1226_);
lean_dec_ref_known(v___x_1225_, 1);
v___x_1227_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1175_, v___y_1168_);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1227_;
v_absorption_945_ = v_a_1226_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1168_);
v_a_1228_ = lean_ctor_get(v___x_1225_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1225_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1225_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1225_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
}
else
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1237_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1238_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1239_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1240_ = l_Lean_Name_num___override(v___x_1239_, v___y_1165_);
v___x_1241_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1242_ = l_Lean_Name_str___override(v___x_1240_, v___x_1241_);
v___x_1243_ = l_Lean_Name_str___override(v___x_1242_, v___x_1237_);
v___x_1244_ = l_Lean_Name_str___override(v___x_1243_, v___x_1238_);
v___x_1245_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__7));
v___x_1246_ = l_Lean_Name_str___override(v___x_1244_, v___x_1245_);
lean_inc_ref(v___y_1168_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___y_1168_);
v___x_1248_ = v___x_1183_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v___y_1168_);
v___x_1248_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1250_ = lean_array_push(v___x_1249_, v___x_1248_);
v___x_1251_ = l_Lean_Meta_mkAppOptM(v___x_1246_, v___x_1250_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1253_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref_known(v___x_1251_, 1);
v___x_1253_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1175_, v___y_1168_);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1253_;
v_absorption_945_ = v_a_1252_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1168_);
v_a_1254_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1251_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1251_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1263_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1264_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1265_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1266_ = l_Lean_Name_num___override(v___x_1265_, v___y_1165_);
v___x_1267_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1268_ = l_Lean_Name_str___override(v___x_1266_, v___x_1267_);
v___x_1269_ = l_Lean_Name_str___override(v___x_1268_, v___x_1263_);
v___x_1270_ = l_Lean_Name_str___override(v___x_1269_, v___x_1264_);
v___x_1271_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__8));
v___x_1272_ = l_Lean_Name_str___override(v___x_1270_, v___x_1271_);
lean_inc_ref(v___y_1168_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v___y_1168_);
v___x_1274_ = v___x_1183_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___y_1168_);
v___x_1274_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1276_ = lean_array_push(v___x_1275_, v___x_1274_);
v___x_1277_ = l_Lean_Meta_mkAppOptM(v___x_1272_, v___x_1276_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_object* v_a_1278_; 
v_a_1278_ = lean_ctor_get(v___x_1277_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1277_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___y_1168_;
v_absorption_945_ = v_a_1278_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1168_);
v_a_1279_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1277_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1277_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
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
lean_object* v_val_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___y_1168_);
v_val_1289_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1291_ = v___x_1176_;
v_isShared_1292_ = v_isSharedCheck_1572_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_val_1289_);
lean_dec(v___x_1176_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1572_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v___x_1293_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__12);
v___x_1294_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___closed__7);
v___x_1295_ = lean_unbox(v_val_1289_);
lean_dec(v_val_1289_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; 
v___x_1296_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1166_);
if (lean_obj_tag(v___x_1296_) == 0)
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1297_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1298_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1299_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1300_ = l_Lean_Name_num___override(v___x_1299_, v___y_1165_);
v___x_1301_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1302_ = l_Lean_Name_str___override(v___x_1300_, v___x_1301_);
v___x_1303_ = l_Lean_Name_str___override(v___x_1302_, v___x_1297_);
v___x_1304_ = l_Lean_Name_str___override(v___x_1303_, v___x_1298_);
v___x_1305_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__9));
v___x_1306_ = l_Lean_Name_str___override(v___x_1304_, v___x_1305_);
lean_inc_ref(v___y_1166_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___y_1166_);
v___x_1308_ = v___x_1291_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___y_1166_);
v___x_1308_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1310_ = lean_array_push(v___x_1309_, v___x_1308_);
v___x_1311_ = l_Lean_Meta_mkAppOptM(v___x_1306_, v___x_1310_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___y_1166_;
v_absorption_945_ = v_a_1312_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1320_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1166_);
v_a_1313_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1315_ = v___x_1311_;
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_a_1313_);
lean_dec(v___x_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1320_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1318_; 
if (v_isShared_1316_ == 0)
{
v___x_1318_ = v___x_1315_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v_a_1313_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
}
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1333_; 
v___x_1322_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1323_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1324_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1325_ = l_Lean_Name_num___override(v___x_1324_, v___y_1165_);
v___x_1326_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1327_ = l_Lean_Name_str___override(v___x_1325_, v___x_1326_);
v___x_1328_ = l_Lean_Name_str___override(v___x_1327_, v___x_1322_);
v___x_1329_ = l_Lean_Name_str___override(v___x_1328_, v___x_1323_);
v___x_1330_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__10));
v___x_1331_ = l_Lean_Name_str___override(v___x_1329_, v___x_1330_);
lean_inc_ref(v___y_1166_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___y_1166_);
v___x_1333_ = v___x_1291_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___y_1166_);
v___x_1333_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1333_);
v___x_1336_ = l_Lean_Meta_mkAppOptM(v___x_1331_, v___x_1335_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1336_) == 0)
{
lean_object* v_a_1337_; lean_object* v___x_1338_; 
v_a_1337_ = lean_ctor_get(v___x_1336_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1336_, 1);
v___x_1338_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1175_, v___y_1166_);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1338_;
v_absorption_945_ = v_a_1337_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1339_; lean_object* v___x_1341_; uint8_t v_isShared_1342_; uint8_t v_isSharedCheck_1346_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1166_);
v_a_1339_ = lean_ctor_get(v___x_1336_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1336_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1341_ = v___x_1336_;
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
else
{
lean_inc(v_a_1339_);
lean_dec(v___x_1336_);
v___x_1341_ = lean_box(0);
v_isShared_1342_ = v_isSharedCheck_1346_;
goto v_resetjp_1340_;
}
v_resetjp_1340_:
{
lean_object* v___x_1344_; 
if (v_isShared_1342_ == 0)
{
v___x_1344_ = v___x_1341_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1339_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
}
else
{
lean_object* v_val_1348_; uint8_t v___x_1349_; 
lean_del_object(v___x_1291_);
lean_dec_ref(v___y_1166_);
v_val_1348_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1349_ = lean_unbox(v_val_1348_);
lean_dec(v_val_1348_);
if (v___x_1349_ == 0)
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1350_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1351_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1352_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1353_ = l_Lean_Name_num___override(v___x_1352_, v___y_1165_);
v___x_1354_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1355_ = l_Lean_Name_str___override(v___x_1353_, v___x_1354_);
v___x_1356_ = l_Lean_Name_str___override(v___x_1355_, v___x_1350_);
v___x_1357_ = l_Lean_Name_str___override(v___x_1356_, v___x_1351_);
v___x_1358_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__11));
v___x_1359_ = l_Lean_Name_str___override(v___x_1357_, v___x_1358_);
v___x_1360_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1361_ = l_Lean_Meta_mkAppOptM(v___x_1359_, v___x_1360_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1294_;
v_absorption_945_ = v_a_1362_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec_ref(v_congruence_1170_);
v_a_1363_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1361_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1361_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1371_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1372_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1373_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1374_ = l_Lean_Name_num___override(v___x_1373_, v___y_1165_);
v___x_1375_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1376_ = l_Lean_Name_str___override(v___x_1374_, v___x_1375_);
v___x_1377_ = l_Lean_Name_str___override(v___x_1376_, v___x_1371_);
v___x_1378_ = l_Lean_Name_str___override(v___x_1377_, v___x_1372_);
v___x_1379_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__12));
v___x_1380_ = l_Lean_Name_str___override(v___x_1378_, v___x_1379_);
v___x_1381_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1382_ = l_Lean_Meta_mkAppOptM(v___x_1380_, v___x_1381_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_a_1383_);
lean_dec_ref_known(v___x_1382_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1293_;
v_absorption_945_ = v_a_1383_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_dec_ref(v_congruence_1170_);
v_a_1384_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1382_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1382_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
else
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1392_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1393_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1394_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1395_ = l_Lean_Name_num___override(v___x_1394_, v___y_1165_);
v___x_1396_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1397_ = l_Lean_Name_str___override(v___x_1395_, v___x_1396_);
v___x_1398_ = l_Lean_Name_str___override(v___x_1397_, v___x_1392_);
v___x_1399_ = l_Lean_Name_str___override(v___x_1398_, v___x_1393_);
v___x_1400_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__13));
v___x_1401_ = l_Lean_Name_str___override(v___x_1399_, v___x_1400_);
v___x_1402_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1403_ = l_Lean_Meta_mkAppOptM(v___x_1401_, v___x_1402_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v_a_1404_; 
v_a_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_a_1404_);
lean_dec_ref_known(v___x_1403_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1293_;
v_absorption_945_ = v_a_1404_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
lean_dec_ref(v_congruence_1170_);
v_a_1405_ = lean_ctor_get(v___x_1403_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1403_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1403_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1403_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
else
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1413_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1414_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1415_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1416_ = l_Lean_Name_num___override(v___x_1415_, v___y_1165_);
v___x_1417_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1418_ = l_Lean_Name_str___override(v___x_1416_, v___x_1417_);
v___x_1419_ = l_Lean_Name_str___override(v___x_1418_, v___x_1413_);
v___x_1420_ = l_Lean_Name_str___override(v___x_1419_, v___x_1414_);
v___x_1421_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__14));
v___x_1422_ = l_Lean_Name_str___override(v___x_1420_, v___x_1421_);
v___x_1423_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1424_ = l_Lean_Meta_mkAppOptM(v___x_1422_, v___x_1423_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1294_;
v_absorption_945_ = v_a_1425_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec_ref(v_congruence_1170_);
v_a_1426_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1424_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1424_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1434_; 
v___x_1434_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__1(v___y_1166_);
if (lean_obj_tag(v___x_1434_) == 0)
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1435_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1436_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1437_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1438_ = l_Lean_Name_num___override(v___x_1437_, v___y_1165_);
v___x_1439_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1440_ = l_Lean_Name_str___override(v___x_1438_, v___x_1439_);
v___x_1441_ = l_Lean_Name_str___override(v___x_1440_, v___x_1435_);
v___x_1442_ = l_Lean_Name_str___override(v___x_1441_, v___x_1436_);
v___x_1443_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__15));
v___x_1444_ = l_Lean_Name_str___override(v___x_1442_, v___x_1443_);
lean_inc_ref(v___y_1166_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___y_1166_);
v___x_1446_ = v___x_1291_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___y_1166_);
v___x_1446_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1447_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1448_ = lean_array_push(v___x_1447_, v___x_1446_);
v___x_1449_ = l_Lean_Meta_mkAppOptM(v___x_1444_, v___x_1448_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__2(v___x_1175_, v___y_1166_);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1451_;
v_absorption_945_ = v_a_1450_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1166_);
v_a_1452_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1449_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1449_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
}
else
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1472_; 
v___x_1461_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1462_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1463_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
v___x_1464_ = l_Lean_Name_num___override(v___x_1463_, v___y_1165_);
v___x_1465_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1466_ = l_Lean_Name_str___override(v___x_1464_, v___x_1465_);
v___x_1467_ = l_Lean_Name_str___override(v___x_1466_, v___x_1461_);
v___x_1468_ = l_Lean_Name_str___override(v___x_1467_, v___x_1462_);
v___x_1469_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__16));
v___x_1470_ = l_Lean_Name_str___override(v___x_1468_, v___x_1469_);
lean_inc_ref(v___y_1166_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 0, v___y_1166_);
v___x_1472_ = v___x_1291_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v___y_1166_);
v___x_1472_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = lean_mk_empty_array_with_capacity(v___y_1167_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1472_);
v___x_1475_ = l_Lean_Meta_mkAppOptM(v___x_1470_, v___x_1474_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___y_1166_;
v_absorption_945_ = v_a_1476_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
lean_dec_ref(v_congruence_1170_);
lean_dec_ref(v___y_1166_);
v_a_1477_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1479_ = v___x_1475_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1475_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_a_1477_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
}
}
else
{
lean_object* v_val_1486_; uint8_t v___x_1487_; 
lean_del_object(v___x_1291_);
lean_dec_ref(v___y_1166_);
v_val_1486_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_val_1486_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1487_ = lean_unbox(v_val_1486_);
lean_dec(v_val_1486_);
if (v___x_1487_ == 0)
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1488_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1489_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1490_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1491_ = l_Lean_Name_num___override(v___x_1490_, v___y_1165_);
v___x_1492_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1493_ = l_Lean_Name_str___override(v___x_1491_, v___x_1492_);
v___x_1494_ = l_Lean_Name_str___override(v___x_1493_, v___x_1488_);
v___x_1495_ = l_Lean_Name_str___override(v___x_1494_, v___x_1489_);
v___x_1496_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__17));
v___x_1497_ = l_Lean_Name_str___override(v___x_1495_, v___x_1496_);
v___x_1498_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1499_ = l_Lean_Meta_mkAppOptM(v___x_1497_, v___x_1498_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1499_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1293_;
v_absorption_945_ = v_a_1500_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec_ref(v_congruence_1170_);
v_a_1501_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1499_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1499_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1509_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1510_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1511_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1512_ = l_Lean_Name_num___override(v___x_1511_, v___y_1165_);
v___x_1513_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1514_ = l_Lean_Name_str___override(v___x_1512_, v___x_1513_);
v___x_1515_ = l_Lean_Name_str___override(v___x_1514_, v___x_1509_);
v___x_1516_ = l_Lean_Name_str___override(v___x_1515_, v___x_1510_);
v___x_1517_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__18));
v___x_1518_ = l_Lean_Name_str___override(v___x_1516_, v___x_1517_);
v___x_1519_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1520_ = l_Lean_Meta_mkAppOptM(v___x_1518_, v___x_1519_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1294_;
v_absorption_945_ = v_a_1521_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec_ref(v_congruence_1170_);
v_a_1522_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1520_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1520_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
}
else
{
if (v___y_1169_ == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1530_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1531_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1532_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1533_ = l_Lean_Name_num___override(v___x_1532_, v___y_1165_);
v___x_1534_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1535_ = l_Lean_Name_str___override(v___x_1533_, v___x_1534_);
v___x_1536_ = l_Lean_Name_str___override(v___x_1535_, v___x_1530_);
v___x_1537_ = l_Lean_Name_str___override(v___x_1536_, v___x_1531_);
v___x_1538_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__19));
v___x_1539_ = l_Lean_Name_str___override(v___x_1537_, v___x_1538_);
v___x_1540_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1541_ = l_Lean_Meta_mkAppOptM(v___x_1539_, v___x_1540_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1294_;
v_absorption_945_ = v_a_1542_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref(v_congruence_1170_);
v_a_1543_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1541_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1541_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1551_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__6));
v___x_1552_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__10));
v___x_1553_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__11));
lean_inc(v___y_1165_);
v___x_1554_ = l_Lean_Name_num___override(v___x_1553_, v___y_1165_);
v___x_1555_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__12));
v___x_1556_ = l_Lean_Name_str___override(v___x_1554_, v___x_1555_);
v___x_1557_ = l_Lean_Name_str___override(v___x_1556_, v___x_1551_);
v___x_1558_ = l_Lean_Name_str___override(v___x_1557_, v___x_1552_);
v___x_1559_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__20));
v___x_1560_ = l_Lean_Name_str___override(v___x_1558_, v___x_1559_);
v___x_1561_ = lean_mk_empty_array_with_capacity(v___y_1165_);
lean_dec(v___y_1165_);
v___x_1562_ = l_Lean_Meta_mkAppOptM(v___x_1560_, v___x_1561_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_a_1563_; 
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
lean_inc(v_a_1563_);
lean_dec_ref_known(v___x_1562_, 1);
v___y_943_ = v_congruence_1170_;
v_result_944_ = v___x_1293_;
v_absorption_945_ = v_a_1563_;
v___y_946_ = v___y_1171_;
v___y_947_ = v___y_1172_;
v___y_948_ = v___y_1173_;
v___y_949_ = v___y_1174_;
goto v___jp_942_;
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v_congruence_1170_);
v_a_1564_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1562_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1562_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
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
v___jp_1573_:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_f_929_);
v___x_1582_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1581_, v___y_1575_, v___y_1579_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1584_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1582_, 1);
lean_inc_ref(v_vars_928_);
lean_inc_ref(v_sorts_927_);
v___x_1584_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_927_, v_vars_928_, v_a_1583_, v___y_1575_, v___y_1579_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1584_) == 0)
{
lean_object* v_a_1585_; lean_object* v_fst_1586_; lean_object* v_snd_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v_a_1585_ = lean_ctor_get(v___x_1584_, 0);
lean_inc(v_a_1585_);
lean_dec_ref_known(v___x_1584_, 1);
v_fst_1586_ = lean_ctor_get(v_a_1585_, 0);
lean_inc(v_fst_1586_);
v_snd_1587_ = lean_ctor_get(v_a_1585_, 1);
lean_inc(v_snd_1587_);
lean_dec(v_a_1585_);
v___x_1588_ = lean_unsigned_to_nat(1u);
v___x_1589_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___lam__0(v_f_929_, v___x_1588_, v___y_1575_, v___y_1579_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1591_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
lean_inc(v_a_1590_);
lean_dec_ref_known(v___x_1589_, 1);
v___x_1591_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_927_, v_vars_928_, v_a_1590_, v___y_1575_, v___y_1579_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v_fst_1593_; lean_object* v_snd_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
lean_inc(v_a_1592_);
lean_dec_ref_known(v___x_1591_, 1);
v_fst_1593_ = lean_ctor_get(v_a_1592_, 0);
lean_inc(v_fst_1593_);
v_snd_1594_ = lean_ctor_get(v_a_1592_, 1);
lean_inc(v_snd_1594_);
lean_dec(v_a_1592_);
v___x_1595_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__22));
v___x_1596_ = lean_unsigned_to_nat(2u);
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1596_);
v___x_1598_ = lean_array_push(v___x_1597_, v_snd_1587_);
v___x_1599_ = lean_array_push(v___x_1598_, v_snd_1594_);
v___x_1600_ = l_Lean_Meta_mkAppM(v___x_1595_, v___x_1599_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1600_) == 0)
{
if (v___y_1580_ == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v___x_1600_, 1);
v___x_1602_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__24));
v___x_1603_ = lean_mk_empty_array_with_capacity(v___x_1588_);
v___x_1604_ = lean_array_push(v___x_1603_, v_a_1601_);
v___x_1605_ = l_Lean_Meta_mkAppM(v___x_1602_, v___x_1604_, v___y_1578_, v___y_1576_, v___y_1574_, v___y_1577_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
v___y_1165_ = v___x_1581_;
v___y_1166_ = v_fst_1593_;
v___y_1167_ = v___x_1588_;
v___y_1168_ = v_fst_1586_;
v___y_1169_ = v___y_1580_;
v_congruence_1170_ = v_a_1606_;
v___y_1171_ = v___y_1578_;
v___y_1172_ = v___y_1576_;
v___y_1173_ = v___y_1574_;
v___y_1174_ = v___y_1577_;
goto v___jp_1164_;
}
else
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
lean_dec(v_fst_1593_);
lean_dec(v_fst_1586_);
v_a_1607_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1605_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1605_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
}
else
{
lean_object* v_a_1615_; 
v_a_1615_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1600_, 1);
v___y_1165_ = v___x_1581_;
v___y_1166_ = v_fst_1593_;
v___y_1167_ = v___x_1588_;
v___y_1168_ = v_fst_1586_;
v___y_1169_ = v___y_1580_;
v_congruence_1170_ = v_a_1615_;
v___y_1171_ = v___y_1578_;
v___y_1172_ = v___y_1576_;
v___y_1173_ = v___y_1574_;
v___y_1174_ = v___y_1577_;
goto v___jp_1164_;
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec(v_fst_1593_);
lean_dec(v_fst_1586_);
v_a_1616_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1600_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1600_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
else
{
lean_dec(v_snd_1587_);
lean_dec(v_fst_1586_);
return v___x_1591_;
}
}
else
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1631_; 
lean_dec(v_snd_1587_);
lean_dec(v_fst_1586_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1624_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1626_ = v___x_1589_;
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1589_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1631_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1629_; 
if (v_isShared_1627_ == 0)
{
v___x_1629_ = v___x_1626_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_a_1624_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
else
{
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
return v___x_1584_;
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1632_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1582_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1582_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
v___jp_1640_:
{
lean_object* v___x_1647_; 
v___x_1647_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_929_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; uint8_t v___x_1649_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v___x_1649_ = lean_unbox(v_a_1648_);
lean_dec(v_a_1648_);
if (v___x_1649_ == 4)
{
uint8_t v___x_1650_; 
v___x_1650_ = 1;
v___y_1574_ = v___y_1645_;
v___y_1575_ = v___y_1641_;
v___y_1576_ = v___y_1644_;
v___y_1577_ = v___y_1646_;
v___y_1578_ = v___y_1643_;
v___y_1579_ = v___y_1642_;
v___y_1580_ = v___x_1650_;
goto v___jp_1573_;
}
else
{
uint8_t v___x_1651_; 
v___x_1651_ = 0;
v___y_1574_ = v___y_1645_;
v___y_1575_ = v___y_1641_;
v___y_1576_ = v___y_1644_;
v___y_1577_ = v___y_1646_;
v___y_1578_ = v___y_1643_;
v___y_1579_ = v___y_1642_;
v___y_1580_ = v___x_1651_;
goto v___jp_1573_;
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1652_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1647_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1647_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
}
else
{
lean_object* v_a_2026_; lean_object* v___x_2028_; uint8_t v_isShared_2029_; uint8_t v_isSharedCheck_2033_; 
lean_dec(v_a_1072_);
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_2026_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_2033_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_2033_ == 0)
{
v___x_2028_ = v___x_1073_;
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
else
{
lean_inc(v_a_2026_);
lean_dec(v___x_1073_);
v___x_2028_ = lean_box(0);
v_isShared_2029_ = v_isSharedCheck_2033_;
goto v_resetjp_2027_;
}
v_resetjp_2027_:
{
lean_object* v___x_2031_; 
if (v_isShared_2029_ == 0)
{
v___x_2031_ = v___x_2028_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v_a_2026_);
v___x_2031_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
return v___x_2031_;
}
}
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
lean_dec_ref(v_f_929_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_2034_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_1071_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_1071_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
v___jp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___y_939_);
lean_ctor_set(v___x_940_, 1, v___y_938_);
v___x_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
v___jp_942_:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_950_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_951_ = lean_unsigned_to_nat(2u);
v___x_952_ = lean_mk_empty_array_with_capacity(v___x_951_);
v___x_953_ = lean_array_push(v___x_952_, v___y_943_);
v___x_954_ = lean_array_push(v___x_953_, v_absorption_945_);
v___x_955_ = l_Lean_Meta_mkAppM(v___x_950_, v___x_954_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_964_; 
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_964_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_960_, 0, v_result_944_);
lean_ctor_set(v___x_960_, 1, v_a_956_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v___x_960_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v___x_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec_ref(v_result_944_);
v_a_965_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_955_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_955_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
v___jp_973_:
{
lean_object* v___x_983_; 
lean_inc(v___y_982_);
v___x_983_ = lp_vampireReplay_Vampire_Reconstruct_congrJunction___redArg(v___y_982_, v___y_980_, v___y_974_, v___y_979_, v___y_976_, v___y_978_, v___y_977_);
lean_dec(v___y_980_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v___x_985_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_a_984_);
lean_dec_ref_known(v___x_983_, 1);
v___x_985_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg(v___y_981_, v___y_975_, v___y_979_, v___y_976_, v___y_978_, v___y_977_);
lean_dec(v___y_975_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v_fst_987_; lean_object* v_snd_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1017_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
v_fst_987_ = lean_ctor_get(v_a_986_, 0);
v_snd_988_ = lean_ctor_get(v_a_986_, 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_a_986_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_990_ = v_a_986_;
v_isShared_991_ = v_isSharedCheck_1017_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_snd_988_);
lean_inc(v_fst_987_);
lean_dec(v_a_986_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1017_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_992_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__1));
v___x_993_ = lean_unsigned_to_nat(2u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_array_push(v___x_994_, v_a_984_);
v___x_996_ = lean_array_push(v___x_995_, v_snd_988_);
v___x_997_ = l_Lean_Meta_mkAppM(v___x_992_, v___x_996_, v___y_979_, v___y_976_, v___y_978_, v___y_977_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1008_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1008_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1008_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v_a_998_);
v___x_1003_ = v___x_990_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_fst_987_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1005_; 
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v___x_1003_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_del_object(v___x_990_);
lean_dec(v_fst_987_);
v_a_1009_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_997_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_997_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
else
{
lean_dec(v_a_984_);
return v___x_985_;
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v___y_975_);
v_a_1018_ = lean_ctor_get(v___x_983_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_983_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_983_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
v___jp_1026_:
{
lean_object* v___x_1035_; size_t v_sz_1036_; size_t v___x_1037_; lean_object* v___x_1038_; 
v___x_1035_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_929_);
v_sz_1036_ = lean_array_size(v___x_1035_);
v___x_1037_ = ((size_t)0ULL);
lean_inc_ref(v___x_1035_);
lean_inc_ref(v_vars_928_);
lean_inc_ref(v_sorts_927_);
v___x_1038_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_927_, v_vars_928_, v_sz_1036_, v___x_1037_, v___x_1035_, v___y_1033_, v___y_1032_, v___y_1030_, v___y_1027_, v___y_1029_, v___y_1028_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; size_t v_sz_1045_; lean_object* v___x_1046_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1040_ = lean_box(0);
lean_inc(v___y_1034_);
v___x_1041_ = l_Lean_Expr_const___override(v___y_1034_, v___x_1040_);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = l_Array_zip___redArg(v___x_1035_, v_a_1039_);
lean_dec(v_a_1039_);
lean_dec_ref(v___x_1035_);
v___x_1044_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___closed__2));
v_sz_1045_ = lean_array_size(v___x_1043_);
v___x_1046_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(v_sorts_927_, v_vars_928_, v___x_1041_, v___x_1043_, v_sz_1045_, v___x_1037_, v___x_1044_, v___y_1033_, v___y_1032_, v___y_1030_, v___y_1027_, v___y_1029_, v___y_1028_);
lean_dec_ref(v___x_1043_);
lean_dec_ref(v___x_1041_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v_snd_1048_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref_known(v___x_1046_, 1);
v_snd_1048_ = lean_ctor_get(v_a_1047_, 1);
lean_inc(v_snd_1048_);
if (v___y_1031_ == 0)
{
lean_object* v_fst_1049_; lean_object* v_fst_1050_; lean_object* v___x_1051_; 
v_fst_1049_ = lean_ctor_get(v_a_1047_, 0);
lean_inc(v_fst_1049_);
lean_dec(v_a_1047_);
v_fst_1050_ = lean_ctor_get(v_snd_1048_, 0);
lean_inc(v_fst_1050_);
lean_dec(v_snd_1048_);
v___x_1051_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__24));
v___y_974_ = v___x_1042_;
v___y_975_ = v_fst_1049_;
v___y_976_ = v___y_1027_;
v___y_977_ = v___y_1028_;
v___y_978_ = v___y_1029_;
v___y_979_ = v___y_1030_;
v___y_980_ = v_fst_1050_;
v___y_981_ = v___y_1031_;
v___y_982_ = v___x_1051_;
goto v___jp_973_;
}
else
{
lean_object* v_fst_1052_; lean_object* v_fst_1053_; lean_object* v___x_1054_; 
v_fst_1052_ = lean_ctor_get(v_a_1047_, 0);
lean_inc(v_fst_1052_);
lean_dec(v_a_1047_);
v_fst_1053_ = lean_ctor_get(v_snd_1048_, 0);
lean_inc(v_fst_1053_);
lean_dec(v_snd_1048_);
v___x_1054_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_absorbUnits___redArg___closed__26));
v___y_974_ = v___x_1042_;
v___y_975_ = v_fst_1052_;
v___y_976_ = v___y_1027_;
v___y_977_ = v___y_1028_;
v___y_978_ = v___y_1029_;
v___y_979_ = v___y_1030_;
v___y_980_ = v_fst_1053_;
v___y_981_ = v___y_1031_;
v___y_982_ = v___x_1054_;
goto v___jp_973_;
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
v_a_1055_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1046_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1046_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec_ref(v___x_1035_);
lean_dec_ref(v_vars_928_);
lean_dec_ref(v_sorts_927_);
v_a_1063_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1038_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1038_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(lean_object* v_sorts_2042_, lean_object* v_vars_2043_, lean_object* v___x_2044_, lean_object* v_as_2045_, size_t v_sz_2046_, size_t v_i_2047_, lean_object* v_b_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v_a_2057_; uint8_t v___x_2061_; 
v___x_2061_ = lean_usize_dec_lt(v_i_2047_, v_sz_2046_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; 
lean_dec_ref(v_vars_2043_);
lean_dec_ref(v_sorts_2042_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v_b_2048_);
return v___x_2062_;
}
else
{
lean_object* v_snd_2063_; lean_object* v_fst_2064_; lean_object* v_fst_2065_; lean_object* v_snd_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2131_; 
v_snd_2063_ = lean_ctor_get(v_b_2048_, 1);
lean_inc(v_snd_2063_);
v_fst_2064_ = lean_ctor_get(v_b_2048_, 0);
lean_inc(v_fst_2064_);
lean_dec_ref(v_b_2048_);
v_fst_2065_ = lean_ctor_get(v_snd_2063_, 0);
v_snd_2066_ = lean_ctor_get(v_snd_2063_, 1);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_snd_2063_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2068_ = v_snd_2063_;
v_isShared_2069_ = v_isSharedCheck_2131_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_snd_2066_);
lean_inc(v_fst_2065_);
lean_dec(v_snd_2063_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2131_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v_a_2070_; uint8_t v___x_2071_; 
v_a_2070_ = lean_array_uget(v_as_2045_, v_i_2047_);
v___x_2071_ = lean_unbox(v_snd_2066_);
if (v___x_2071_ == 0)
{
lean_object* v_fst_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2105_; 
lean_del_object(v___x_2068_);
v_fst_2072_ = lean_ctor_get(v_a_2070_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v_a_2070_);
if (v_isSharedCheck_2105_ == 0)
{
lean_object* v_unused_2106_; 
v_unused_2106_ = lean_ctor_get(v_a_2070_, 1);
lean_dec(v_unused_2106_);
v___x_2074_ = v_a_2070_;
v_isShared_2075_ = v_isSharedCheck_2105_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_fst_2072_);
lean_dec(v_a_2070_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2105_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2076_; 
lean_inc_ref(v_vars_2043_);
lean_inc_ref(v_sorts_2042_);
v___x_2076_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_2042_, v_vars_2043_, v_fst_2072_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; lean_object* v_fst_2078_; lean_object* v_snd_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2096_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_a_2077_);
lean_dec_ref_known(v___x_2076_, 1);
v_fst_2078_ = lean_ctor_get(v_a_2077_, 0);
v_snd_2079_ = lean_ctor_get(v_a_2077_, 1);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_a_2077_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2081_ = v_a_2077_;
v_isShared_2082_ = v_isSharedCheck_2096_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_snd_2079_);
lean_inc(v_fst_2078_);
lean_dec(v_a_2077_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2096_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
uint8_t v_absorbed_2084_; uint8_t v___x_2094_; 
v___x_2094_ = lean_expr_eqv(v_fst_2078_, v___x_2044_);
if (v___x_2094_ == 0)
{
uint8_t v___x_2095_; 
v___x_2095_ = lean_unbox(v_snd_2066_);
lean_dec(v_snd_2066_);
v_absorbed_2084_ = v___x_2095_;
goto v___jp_2083_;
}
else
{
lean_dec(v_snd_2066_);
v_absorbed_2084_ = v___x_2094_;
goto v___jp_2083_;
}
v___jp_2083_:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2085_ = lean_array_push(v_fst_2064_, v_fst_2078_);
v___x_2086_ = lean_array_push(v_fst_2065_, v_snd_2079_);
v___x_2087_ = lean_box(v_absorbed_2084_);
if (v_isShared_2082_ == 0)
{
lean_ctor_set(v___x_2081_, 1, v___x_2087_);
lean_ctor_set(v___x_2081_, 0, v___x_2086_);
v___x_2089_ = v___x_2081_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2091_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 1, v___x_2089_);
lean_ctor_set(v___x_2074_, 0, v___x_2085_);
v___x_2091_ = v___x_2074_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
v_a_2057_ = v___x_2091_;
goto v___jp_2056_;
}
}
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_del_object(v___x_2074_);
lean_dec(v_snd_2066_);
lean_dec(v_fst_2065_);
lean_dec(v_fst_2064_);
lean_dec_ref(v_vars_2043_);
lean_dec_ref(v_sorts_2042_);
v_a_2097_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2076_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2076_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
else
{
lean_object* v_snd_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2129_; 
v_snd_2107_ = lean_ctor_get(v_a_2070_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_a_2070_);
if (v_isSharedCheck_2129_ == 0)
{
lean_object* v_unused_2130_; 
v_unused_2130_ = lean_ctor_get(v_a_2070_, 0);
lean_dec(v_unused_2130_);
v___x_2109_ = v_a_2070_;
v_isShared_2110_ = v_isSharedCheck_2129_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_snd_2107_);
lean_dec(v_a_2070_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2129_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_inc(v_snd_2107_);
v___x_2111_ = lean_array_push(v_fst_2064_, v_snd_2107_);
v___x_2112_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Simplify_0__Vampire_Reconstruct_Simplify_refl___redArg(v_snd_2107_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; lean_object* v___x_2116_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = lean_array_push(v_fst_2065_, v_a_2113_);
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 1, v_snd_2066_);
lean_ctor_set(v___x_2109_, 0, v___x_2114_);
v___x_2116_ = v___x_2109_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_snd_2066_);
v___x_2116_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
lean_object* v___x_2118_; 
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 1, v___x_2116_);
lean_ctor_set(v___x_2068_, 0, v___x_2111_);
v___x_2118_ = v___x_2068_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2111_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v_a_2057_ = v___x_2118_;
goto v___jp_2056_;
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec_ref(v___x_2111_);
lean_del_object(v___x_2109_);
lean_del_object(v___x_2068_);
lean_dec(v_snd_2066_);
lean_dec(v_fst_2065_);
lean_dec_ref(v_vars_2043_);
lean_dec_ref(v_sorts_2042_);
v_a_2121_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2112_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2112_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
}
}
v___jp_2056_:
{
size_t v___x_2058_; size_t v___x_2059_; 
v___x_2058_ = ((size_t)1ULL);
v___x_2059_ = lean_usize_add(v_i_2047_, v___x_2058_);
v_i_2047_ = v___x_2059_;
v_b_2048_ = v_a_2057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0___boxed(lean_object* v_sorts_2132_, lean_object* v_vars_2133_, lean_object* v___x_2134_, lean_object* v_as_2135_, lean_object* v_sz_2136_, lean_object* v_i_2137_, lean_object* v_b_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
size_t v_sz_boxed_2146_; size_t v_i_boxed_2147_; lean_object* v_res_2148_; 
v_sz_boxed_2146_ = lean_unbox_usize(v_sz_2136_);
lean_dec(v_sz_2136_);
v_i_boxed_2147_ = lean_unbox_usize(v_i_2137_);
lean_dec(v_i_2137_);
v_res_2148_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Simplify_simplify_spec__0(v_sorts_2132_, v_vars_2133_, v___x_2134_, v_as_2135_, v_sz_boxed_2146_, v_i_boxed_2147_, v_b_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec_ref(v_as_2135_);
lean_dec_ref(v___x_2134_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified___boxed(lean_object* v_sorts_2149_, lean_object* v_body_2150_, lean_object* v_isForall_2151_, lean_object* v_rest_2152_, lean_object* v_vars_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_){
_start:
{
uint8_t v_isForall_boxed_2161_; lean_object* v_res_2162_; 
v_isForall_boxed_2161_ = lean_unbox(v_isForall_2151_);
v_res_2162_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_quantified(v_sorts_2149_, v_body_2150_, v_isForall_boxed_2161_, v_rest_2152_, v_vars_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_);
lean_dec(v_a_2159_);
lean_dec_ref(v_a_2158_);
lean_dec(v_a_2157_);
lean_dec_ref(v_a_2156_);
lean_dec(v_a_2155_);
lean_dec_ref(v_a_2154_);
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify___boxed(lean_object* v_sorts_2163_, lean_object* v_vars_2164_, lean_object* v_f_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v_sorts_2163_, v_vars_2164_, v_f_2165_, v_a_2166_, v_a_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_);
lean_dec(v_a_2171_);
lean_dec_ref(v_a_2170_);
lean_dec(v_a_2169_);
lean_dec_ref(v_a_2168_);
lean_dec(v_a_2167_);
lean_dec_ref(v_a_2166_);
return v_res_2173_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2175_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__0));
v___x_2176_ = l_Lean_stringToMessageData(v___x_2175_);
return v___x_2176_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3(void){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__2));
v___x_2179_ = l_Lean_stringToMessageData(v___x_2178_);
return v___x_2179_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4(void){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2180_ = lean_box(0);
v___x_2181_ = lean_unsigned_to_nat(16u);
v___x_2182_ = lean_mk_array(v___x_2181_, v___x_2180_);
return v___x_2182_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5(void){
_start:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2183_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__4);
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2183_);
return v___x_2185_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__8));
v___x_2192_ = l_Lean_stringToMessageData(v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(lean_object* v_step_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
lean_object* v_unit_2201_; lean_object* v_premises_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; 
v_unit_2201_ = lean_ctor_get(v_step_2193_, 0);
lean_inc_ref(v_unit_2201_);
v_premises_2202_ = lean_ctor_get(v_step_2193_, 1);
lean_inc_ref(v_premises_2202_);
lean_dec_ref(v_step_2193_);
v___x_2203_ = lean_array_get_size(v_premises_2202_);
v___x_2204_ = lean_unsigned_to_nat(1u);
v___x_2205_ = lean_nat_dec_eq(v___x_2203_, v___x_2204_);
if (v___x_2205_ == 0)
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
lean_dec_ref(v_premises_2202_);
lean_dec_ref(v_unit_2201_);
v___x_2206_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__1);
v___x_2207_ = l_Nat_reprFast(v___x_2203_);
v___x_2208_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
v___x_2209_ = l_Lean_MessageData_ofFormat(v___x_2208_);
v___x_2210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2206_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v___x_2211_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2210_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
return v___x_2211_;
}
else
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v_fst_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; uint8_t v___x_2217_; 
v___x_2212_ = lean_unsigned_to_nat(0u);
v___x_2213_ = lean_array_fget(v_premises_2202_, v___x_2212_);
lean_dec_ref(v_premises_2202_);
v_fst_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_fst_2214_);
lean_dec(v___x_2213_);
lean_inc_ref(v_unit_2201_);
v___x_2215_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2201_);
v___x_2216_ = lean_array_get_size(v___x_2215_);
v___x_2217_ = lean_nat_dec_lt(v___x_2212_, v___x_2216_);
if (v___x_2217_ == 0)
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
lean_dec_ref(v___x_2215_);
lean_dec(v_fst_2214_);
lean_dec_ref(v_unit_2201_);
v___x_2218_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__3);
v___x_2219_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2218_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
return v___x_2219_;
}
else
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = lean_array_fget(v___x_2215_, v___x_2212_);
lean_dec_ref(v___x_2215_);
lean_inc(v___x_2220_);
v___x_2221_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_2220_);
if (lean_obj_tag(v___x_2221_) == 1)
{
lean_object* v_val_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v_val_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_val_2222_);
lean_dec_ref_known(v___x_2221_, 1);
v___x_2223_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_2220_);
v___x_2224_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2201_);
v___x_2225_ = l_Array_append___redArg(v___x_2223_, v___x_2224_);
lean_dec_ref(v___x_2224_);
v___x_2226_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__5);
v___x_2227_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_simplify(v___x_2225_, v___x_2226_, v_val_2222_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v_snd_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v_snd_2229_ = lean_ctor_get(v_a_2228_, 1);
lean_inc(v_snd_2229_);
lean_dec(v_a_2228_);
v___x_2230_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__7));
v___x_2231_ = lean_unsigned_to_nat(2u);
v___x_2232_ = lean_mk_empty_array_with_capacity(v___x_2231_);
v___x_2233_ = lean_array_push(v___x_2232_, v_snd_2229_);
v___x_2234_ = lean_array_push(v___x_2233_, v_fst_2214_);
v___x_2235_ = l_Lean_Meta_mkAppM(v___x_2230_, v___x_2234_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
return v___x_2235_;
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec(v_fst_2214_);
v_a_2236_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2227_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2227_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
lean_dec(v___x_2221_);
lean_dec(v___x_2220_);
lean_dec(v_fst_2214_);
lean_dec_ref(v_unit_2201_);
v___x_2244_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9, &lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___closed__9);
v___x_2245_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2244_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
return v___x_2245_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue___boxed(lean_object* v_step_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = lp_vampireReplay_Vampire_Reconstruct_Simplify_reduceFalseTrue(v_step_2246_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_);
lean_dec(v_a_2252_);
lean_dec_ref(v_a_2251_);
lean_dec(v_a_2250_);
lean_dec_ref(v_a_2249_);
lean_dec(v_a_2248_);
lean_dec_ref(v_a_2247_);
return v_res_2254_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Simplify(uint8_t builtin) {
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
