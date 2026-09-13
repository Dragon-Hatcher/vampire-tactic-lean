// Lean compiler output
// Module: VampireReplay.Reconstruct.Choice
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Stated
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_shared___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_args(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_render(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nothing says"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 86, .m_data = "\nis inhabited: there is no `Nonempty` instance for it and the goal holds nothing of it"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6_value),LEAN_SCALAR_PTR_LITERAL(113, 209, 180, 93, 84, 117, 67, 110)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "epsilon"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 194, 5, 235, 120, 71, 56, 25)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "epsilon_spec_aux"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__3_value),LEAN_SCALAR_PTR_LITERAL(17, 100, 76, 224, 168, 179, 81, 93)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__5_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__7_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6_value),LEAN_SCALAR_PTR_LITERAL(74, 55, 158, 60, 144, 34, 77, 172)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__7_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__11_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__11_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__6_value),LEAN_SCALAR_PTR_LITERAL(176, 155, 85, 49, 105, 137, 67, 168)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 55, 178, 26, 122, 226, 82, 222)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__11_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__2_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "not a quantified formula:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "not a refutation of anything:"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_someElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_someElement___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_someElement___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 246, 154, 249, 193, 98, 251, 55)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_blockProp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_blockProp___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "a universal block did not come back negated"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_existsProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_existsProp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable X"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " has no recorded sort"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "skolem "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " was applied to "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", not a variable"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "the skolem term for X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " has no symbol"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "no skolem recorded for the existential X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "quantifier without a body"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg(lean_object* v_00_u03c4_4_, lean_object* v_as_5_, size_t v_sz_6_, size_t v_i_7_, lean_object* v_b_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_lt(v_i_7_, v_sz_6_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; 
lean_dec_ref(v_00_u03c4_4_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v_b_8_);
return v___x_15_;
}
else
{
lean_object* v_a_16_; lean_object* v___x_17_; 
lean_dec_ref(v_b_8_);
v_a_16_ = lean_array_uget_borrowed(v_as_5_, v_i_7_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v_a_16_);
v___x_17_ = lean_infer_type(v_a_16_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_17_) == 0)
{
lean_object* v_a_18_; lean_object* v___x_19_; 
v_a_18_ = lean_ctor_get(v___x_17_, 0);
lean_inc(v_a_18_);
lean_dec_ref_known(v___x_17_, 1);
lean_inc_ref(v_00_u03c4_4_);
v___x_19_ = l_Lean_Meta_isExprDefEq(v_a_18_, v_00_u03c4_4_, v___y_9_, v___y_10_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_36_; 
v_a_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_36_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_36_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_36_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = lean_box(0);
v___x_25_ = lean_unbox(v_a_20_);
lean_dec(v_a_20_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; size_t v___x_27_; size_t v___x_28_; 
lean_del_object(v___x_22_);
v___x_26_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___closed__0));
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_add(v_i_7_, v___x_27_);
v_i_7_ = v___x_28_;
v_b_8_ = v___x_26_;
goto _start;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_34_; 
lean_dec_ref(v_00_u03c4_4_);
lean_inc(v_a_16_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v_a_16_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
v___x_32_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_24_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v___x_32_);
v___x_34_ = v___x_22_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v___x_32_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
lean_dec_ref(v_00_u03c4_4_);
v_a_37_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_19_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_19_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
lean_dec_ref(v_00_u03c4_4_);
v_a_45_ = lean_ctor_get(v___x_17_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_17_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_17_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_17_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
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
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___boxed(lean_object* v_00_u03c4_53_, lean_object* v_as_54_, lean_object* v_sz_55_, lean_object* v_i_56_, lean_object* v_b_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
size_t v_sz_boxed_63_; size_t v_i_boxed_64_; lean_object* v_res_65_; 
v_sz_boxed_63_ = lean_unbox_usize(v_sz_55_);
lean_dec(v_sz_55_);
v_i_boxed_64_ = lean_unbox_usize(v_i_56_);
lean_dec(v_i_56_);
v_res_65_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg(v_00_u03c4_53_, v_as_54_, v_sz_boxed_63_, v_i_boxed_64_, v_b_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec_ref(v_as_54_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given(lean_object* v_00_u03c4_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_givens_74_; lean_object* v___x_75_; lean_object* v___x_76_; size_t v_sz_77_; size_t v___x_78_; lean_object* v___x_79_; 
v_givens_74_ = lean_ctor_get(v_a_67_, 2);
v___x_75_ = lean_box(0);
v___x_76_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg___closed__0));
v_sz_77_ = lean_array_size(v_givens_74_);
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg(v_00_u03c4_66_, v_givens_74_, v_sz_77_, v___x_78_, v___x_76_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_92_; 
v_a_80_ = lean_ctor_get(v___x_79_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_92_ == 0)
{
v___x_82_ = v___x_79_;
v_isShared_83_ = v_isSharedCheck_92_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v___x_79_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_92_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v_fst_84_; 
v_fst_84_ = lean_ctor_get(v_a_80_, 0);
lean_inc(v_fst_84_);
lean_dec(v_a_80_);
if (lean_obj_tag(v_fst_84_) == 0)
{
lean_object* v___x_86_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_75_);
v___x_86_ = v___x_82_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_75_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
else
{
lean_object* v_val_88_; lean_object* v___x_90_; 
v_val_88_ = lean_ctor_get(v_fst_84_, 0);
lean_inc(v_val_88_);
lean_dec_ref_known(v_fst_84_, 1);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v_val_88_);
v___x_90_ = v___x_82_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_val_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_a_93_ = lean_ctor_get(v___x_79_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_79_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_79_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given___boxed(lean_object* v_00_u03c4_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given(v_00_u03c4_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec(v_a_103_);
lean_dec_ref(v_a_102_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0(lean_object* v_00_u03c4_110_, lean_object* v_as_111_, size_t v_sz_112_, size_t v_i_113_, lean_object* v_b_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___redArg(v_00_u03c4_110_, v_as_111_, v_sz_112_, v_i_113_, v_b_114_, v___y_117_, v___y_118_, v___y_119_, v___y_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0___boxed(lean_object* v_00_u03c4_123_, lean_object* v_as_124_, lean_object* v_sz_125_, lean_object* v_i_126_, lean_object* v_b_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
size_t v_sz_boxed_135_; size_t v_i_boxed_136_; lean_object* v_res_137_; 
v_sz_boxed_135_ = lean_unbox_usize(v_sz_125_);
lean_dec(v_sz_125_);
v_i_boxed_136_ = lean_unbox_usize(v_i_126_);
lean_dec(v_i_126_);
v_res_137_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given_spec__0(v_00_u03c4_123_, v_as_124_, v_sz_boxed_135_, v_i_boxed_136_, v_b_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
lean_dec(v___y_129_);
lean_dec_ref(v___y_128_);
lean_dec_ref(v_as_124_);
return v_res_137_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__2));
v___x_143_ = l_Lean_stringToMessageData(v___x_142_);
return v___x_143_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__4));
v___x_146_ = l_Lean_stringToMessageData(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty(lean_object* v_00_u03c4_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_inst_160_; lean_object* v___y_161_; lean_object* v___x_180_; lean_object* v_nonempty_181_; lean_object* v___x_182_; 
v___x_180_ = lean_st_ref_get(v_a_153_);
v_nonempty_181_ = lean_ctor_get(v___x_180_, 6);
lean_inc_ref(v_nonempty_181_);
lean_dec(v___x_180_);
v___x_182_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__1___redArg(v_nonempty_181_, v_00_u03c4_151_);
lean_dec_ref(v_nonempty_181_);
if (lean_obj_tag(v___x_182_) == 1)
{
lean_object* v_val_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec_ref(v_00_u03c4_151_);
v_val_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_val_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 0);
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_val_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v___x_191_; 
lean_dec(v___x_182_);
lean_inc_ref(v_00_u03c4_151_);
v___x_191_ = l_Lean_Meta_getLevel(v_00_u03c4_151_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__1));
v___x_194_ = lean_box(0);
v___x_195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_195_, 0, v_a_192_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = l_Lean_Expr_const___override(v___x_193_, v___x_195_);
lean_inc_ref(v_00_u03c4_151_);
v___x_197_ = l_Lean_Expr_app___override(v___x_196_, v_00_u03c4_151_);
v___x_198_ = lean_box(0);
v___x_199_ = l_Lean_Meta_trySynthInstance(v___x_197_, v___x_198_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_a_200_; 
v_a_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc(v_a_200_);
lean_dec_ref_known(v___x_199_, 1);
if (lean_obj_tag(v_a_200_) == 1)
{
lean_object* v_a_201_; 
v_a_201_ = lean_ctor_get(v_a_200_, 0);
lean_inc(v_a_201_);
lean_dec_ref_known(v_a_200_, 1);
v_inst_160_ = v_a_201_;
v___y_161_ = v_a_153_;
goto v___jp_159_;
}
else
{
lean_object* v___x_202_; 
lean_dec(v_a_200_);
lean_inc_ref(v_00_u03c4_151_);
v___x_202_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Choice_0__Vampire_Reconstruct_given(v_00_u03c4_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
if (lean_obj_tag(v_a_203_) == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_204_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3, &lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__3);
v___x_205_ = l_Lean_indentExpr(v_00_u03c4_151_);
v___x_206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5, &lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__5);
v___x_208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_208_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
return v___x_209_;
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_210_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_nonempty___closed__7));
lean_inc_ref(v_00_u03c4_151_);
v___x_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_211_, 0, v_00_u03c4_151_);
v___x_212_ = lean_unsigned_to_nat(2u);
v___x_213_ = lean_mk_empty_array_with_capacity(v___x_212_);
v___x_214_ = lean_array_push(v___x_213_, v___x_211_);
v___x_215_ = lean_array_push(v___x_214_, v_a_203_);
v___x_216_ = l_Lean_Meta_mkAppOptM(v___x_210_, v___x_215_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_object* v_a_217_; 
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_216_, 1);
v_inst_160_ = v_a_217_;
v___y_161_ = v_a_153_;
goto v___jp_159_;
}
else
{
lean_dec_ref(v_00_u03c4_151_);
return v___x_216_;
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
lean_dec_ref(v_00_u03c4_151_);
v_a_218_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_202_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_202_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
lean_dec_ref(v_00_u03c4_151_);
v_a_226_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_199_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_199_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec_ref(v_00_u03c4_151_);
v_a_234_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_191_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_191_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
v___jp_159_:
{
lean_object* v___x_162_; lean_object* v_proofs_163_; lean_object* v_unimplemented_164_; lean_object* v_introduced_165_; lean_object* v_named_166_; lean_object* v_conclusions_167_; lean_object* v_shared_168_; lean_object* v_nonempty_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_179_; 
v___x_162_ = lean_st_ref_take(v___y_161_);
v_proofs_163_ = lean_ctor_get(v___x_162_, 0);
v_unimplemented_164_ = lean_ctor_get(v___x_162_, 1);
v_introduced_165_ = lean_ctor_get(v___x_162_, 2);
v_named_166_ = lean_ctor_get(v___x_162_, 3);
v_conclusions_167_ = lean_ctor_get(v___x_162_, 4);
v_shared_168_ = lean_ctor_get(v___x_162_, 5);
v_nonempty_169_ = lean_ctor_get(v___x_162_, 6);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_179_ == 0)
{
v___x_171_ = v___x_162_;
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_nonempty_169_);
lean_inc(v_shared_168_);
lean_inc(v_conclusions_167_);
lean_inc(v_named_166_);
lean_inc(v_introduced_165_);
lean_inc(v_unimplemented_164_);
lean_inc(v_proofs_163_);
lean_dec(v___x_162_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_179_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v___x_175_; 
lean_inc_ref(v_inst_160_);
v___x_173_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ForEachExpr_0__Lean_Meta_forEachExpr_x27_visit___at___00Lean_Meta_forEachExpr_x27___at___00__private_Lean_Linter_Extra_UnusedDecidableInType_0__Lean_Linter_Extra_UnusedDecidableInType_collectFVarsOutsideOfProofs_spec__0_spec__0_spec__2___redArg(v_nonempty_169_, v_00_u03c4_151_, v_inst_160_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 6, v___x_173_);
v___x_175_ = v___x_171_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_proofs_163_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_unimplemented_164_);
lean_ctor_set(v_reuseFailAlloc_178_, 2, v_introduced_165_);
lean_ctor_set(v_reuseFailAlloc_178_, 3, v_named_166_);
lean_ctor_set(v_reuseFailAlloc_178_, 4, v_conclusions_167_);
lean_ctor_set(v_reuseFailAlloc_178_, 5, v_shared_168_);
lean_ctor_set(v_reuseFailAlloc_178_, 6, v___x_173_);
v___x_175_ = v_reuseFailAlloc_178_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_st_ref_set(v___y_161_, v___x_175_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v_inst_160_);
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_nonempty___boxed(lean_object* v_00_u03c4_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = lp_vampireReplay_Vampire_Reconstruct_nonempty(v_00_u03c4_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
return v_res_250_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = l_Lean_Expr_bvar___override(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_box(0);
v___x_276_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__12));
v___x_277_ = l_Lean_Expr_const___override(v___x_276_, v___x_275_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon(lean_object* v_00_u03c4_278_, lean_object* v_p_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_){
_start:
{
lean_object* v___x_287_; 
lean_inc_ref(v_00_u03c4_278_);
v___x_287_ = l_Lean_Meta_getLevel(v_00_u03c4_278_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_289_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref_known(v___x_287_, 1);
lean_inc_ref(v_00_u03c4_278_);
v___x_289_ = lp_vampireReplay_Vampire_Reconstruct_nonempty(v_00_u03c4_278_, v_a_280_, v_a_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_);
if (lean_obj_tag(v___x_289_) == 0)
{
lean_object* v_a_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_324_; 
v_a_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc_n(v_a_290_, 2);
lean_dec_ref_known(v___x_289_, 1);
v___x_291_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__2));
v___x_292_ = lean_box(0);
v___x_293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_293_, 0, v_a_288_);
lean_ctor_set(v___x_293_, 1, v___x_292_);
lean_inc_ref(v___x_293_);
v___x_294_ = l_Lean_Expr_const___override(v___x_291_, v___x_293_);
lean_inc_ref(v_p_279_);
lean_inc_ref(v_00_u03c4_278_);
v___x_295_ = l_Lean_mkApp3(v___x_294_, v_00_u03c4_278_, v_a_290_, v_p_279_);
v___x_296_ = lp_vampireReplay_Vampire_Reconstruct_shared___redArg(v___x_295_, v_a_281_);
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_324_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_324_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_324_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_301_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__4));
lean_inc_ref_n(v___x_293_, 2);
v___x_302_ = l_Lean_Expr_const___override(v___x_301_, v___x_293_);
lean_inc_ref_n(v_p_279_, 3);
lean_inc_ref_n(v_00_u03c4_278_, 2);
v___x_303_ = l_Lean_mkApp3(v___x_302_, v_00_u03c4_278_, v_a_290_, v_p_279_);
v___x_304_ = lean_unsigned_to_nat(1u);
v___x_305_ = lean_mk_empty_array_with_capacity(v___x_304_);
lean_inc_n(v_a_297_, 2);
v___x_306_ = lean_array_push(v___x_305_, v_a_297_);
v___x_307_ = l_Lean_Expr_beta(v_p_279_, v___x_306_);
v___x_308_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__6));
v___x_309_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__8));
v___x_310_ = l_Lean_Expr_const___override(v___x_309_, v___x_293_);
v___x_311_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9, &lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__9);
v___x_312_ = l_Lean_mkApp4(v___x_310_, v_00_u03c4_278_, v_p_279_, v_a_297_, v___x_311_);
v___x_313_ = 0;
lean_inc_ref(v___x_307_);
v___x_314_ = l_Lean_Expr_lam___override(v___x_308_, v___x_307_, v___x_312_, v___x_313_);
v___x_315_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__10));
v___x_316_ = l_Lean_Expr_const___override(v___x_315_, v___x_293_);
v___x_317_ = l_Lean_mkAppB(v___x_316_, v_00_u03c4_278_, v_p_279_);
v___x_318_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13, &lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13_once, _init_lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__13);
v___x_319_ = l_Lean_mkApp4(v___x_318_, v___x_317_, v___x_307_, v___x_303_, v___x_314_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v_a_297_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_320_);
v___x_322_ = v___x_299_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
else
{
lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_332_; 
lean_dec(v_a_288_);
lean_dec_ref(v_p_279_);
lean_dec_ref(v_00_u03c4_278_);
v_a_325_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_332_ == 0)
{
v___x_327_ = v___x_289_;
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_dec(v___x_289_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_332_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_330_; 
if (v_isShared_328_ == 0)
{
v___x_330_ = v___x_327_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v_a_325_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
}
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
lean_dec_ref(v_p_279_);
lean_dec_ref(v_00_u03c4_278_);
v_a_333_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_287_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_287_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon___boxed(lean_object* v_00_u03c4_341_, lean_object* v_p_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v_res_350_; 
v_res_350_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_00_u03c4_341_, v_p_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_);
lean_dec(v_a_348_);
lean_dec_ref(v_a_347_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object* v_e_351_, lean_object* v___y_352_){
_start:
{
uint8_t v___x_354_; 
v___x_354_ = l_Lean_Expr_hasMVar(v_e_351_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; 
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v_e_351_);
return v___x_355_;
}
else
{
lean_object* v___x_356_; lean_object* v_mctx_357_; lean_object* v___x_358_; lean_object* v_fst_359_; lean_object* v_snd_360_; lean_object* v___x_361_; lean_object* v_cache_362_; lean_object* v_zetaDeltaFVarIds_363_; lean_object* v_postponed_364_; lean_object* v_diag_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v___x_356_ = lean_st_ref_get(v___y_352_);
v_mctx_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc_ref(v_mctx_357_);
lean_dec(v___x_356_);
v___x_358_ = l_Lean_instantiateMVarsCore(v_mctx_357_, v_e_351_);
v_fst_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_fst_359_);
v_snd_360_ = lean_ctor_get(v___x_358_, 1);
lean_inc(v_snd_360_);
lean_dec_ref(v___x_358_);
v___x_361_ = lean_st_ref_take(v___y_352_);
v_cache_362_ = lean_ctor_get(v___x_361_, 1);
v_zetaDeltaFVarIds_363_ = lean_ctor_get(v___x_361_, 2);
v_postponed_364_ = lean_ctor_get(v___x_361_, 3);
v_diag_365_ = lean_ctor_get(v___x_361_, 4);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v___x_361_, 0);
lean_dec(v_unused_375_);
v___x_367_ = v___x_361_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_diag_365_);
lean_inc(v_postponed_364_);
lean_inc(v_zetaDeltaFVarIds_363_);
lean_inc(v_cache_362_);
lean_dec(v___x_361_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_snd_360_);
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_snd_360_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_cache_362_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_zetaDeltaFVarIds_363_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_postponed_364_);
lean_ctor_set(v_reuseFailAlloc_373_, 4, v_diag_365_);
v___x_370_ = v_reuseFailAlloc_373_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_st_ref_set(v___y_352_, v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v_fst_359_);
return v___x_372_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg___boxed(lean_object* v_e_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_e_376_, v___y_377_);
lean_dec(v___y_377_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0(lean_object* v_e_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_e_380_, v___y_384_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___boxed(lean_object* v_e_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0(v_e_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
return v_res_397_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_box(0);
v___x_402_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__1));
v___x_403_ = l_Lean_Expr_const___override(v___x_402_, v___x_401_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0(lean_object* v_body_404_, lean_object* v_x_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; uint8_t v___x_420_; uint8_t v___x_421_; lean_object* v___x_422_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_mk_empty_array_with_capacity(v___x_413_);
lean_inc_ref(v_x_405_);
v___x_415_ = lean_array_push(v___x_414_, v_x_405_);
v___x_416_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2, &lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2);
v___x_417_ = lean_expr_instantiate1(v_body_404_, v_x_405_);
lean_dec_ref(v_x_405_);
v___x_418_ = l_Lean_Expr_app___override(v___x_416_, v___x_417_);
v___x_419_ = 0;
v___x_420_ = 1;
v___x_421_ = 1;
v___x_422_ = l_Lean_Meta_mkLambdaFVars(v___x_415_, v___x_418_, v___x_419_, v___x_420_, v___x_419_, v___x_420_, v___x_421_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
lean_dec_ref(v___x_415_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___boxed(lean_object* v_body_423_, lean_object* v_x_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0(v_body_423_, v_x_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec_ref(v_body_423_);
return v_res_432_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__4));
v___x_443_ = l_Lean_stringToMessageData(v___x_442_);
return v___x_443_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__6));
v___x_446_ = l_Lean_stringToMessageData(v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(lean_object* v_against_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v___x_455_; 
lean_inc(v_a_453_);
lean_inc_ref(v_a_452_);
lean_inc(v_a_451_);
lean_inc_ref(v_a_450_);
lean_inc_ref(v_against_447_);
v___x_455_ = lean_infer_type(v_against_447_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_457_; lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_556_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_456_);
lean_dec_ref_known(v___x_455_, 1);
v___x_457_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_456_, v_a_451_);
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_556_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_556_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_556_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; 
lean_inc(v_a_458_);
v___x_462_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_458_);
if (lean_obj_tag(v___x_462_) == 1)
{
lean_object* v_val_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_551_; 
lean_dec(v_a_458_);
v_val_463_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_551_ == 0)
{
v___x_465_ = v___x_462_;
v_isShared_466_ = v_isSharedCheck_551_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_val_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_551_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
if (lean_obj_tag(v_val_463_) == 7)
{
lean_object* v_binderName_467_; lean_object* v_binderType_468_; lean_object* v_body_469_; uint8_t v_binderInfo_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v_binderName_467_ = lean_ctor_get(v_val_463_, 0);
lean_inc_n(v_binderName_467_, 2);
v_binderType_468_ = lean_ctor_get(v_val_463_, 1);
lean_inc_ref_n(v_binderType_468_, 3);
v_body_469_ = lean_ctor_get(v_val_463_, 2);
lean_inc_ref_n(v_body_469_, 2);
v_binderInfo_470_ = lean_ctor_get_uint8(v_val_463_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_val_463_, 3);
v___x_471_ = l_Lean_Expr_lam___override(v_binderName_467_, v_binderType_468_, v_body_469_, v_binderInfo_470_);
v___x_472_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__1));
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 0, v_binderType_468_);
v___x_474_ = v___x_465_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_binderType_468_);
v___x_474_ = v_reuseFailAlloc_546_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_476_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
lean_ctor_set(v___x_460_, 0, v___x_471_);
v___x_476_ = v___x_460_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_471_);
v___x_476_ = v_reuseFailAlloc_545_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_477_ = lean_unsigned_to_nat(2u);
v___x_478_ = lean_mk_empty_array_with_capacity(v___x_477_);
lean_inc_ref(v___x_478_);
v___x_479_ = lean_array_push(v___x_478_, v___x_474_);
v___x_480_ = lean_array_push(v___x_479_, v___x_476_);
v___x_481_ = l_Lean_Meta_mkAppOptM(v___x_472_, v___x_480_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 1);
v___x_483_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__3));
lean_inc_ref(v___x_478_);
v___x_484_ = lean_array_push(v___x_478_, v_a_482_);
v___x_485_ = lean_array_push(v___x_484_, v_against_447_);
v___x_486_ = l_Lean_Meta_mkAppM(v___x_483_, v___x_485_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___f_488_; lean_object* v___x_489_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
v___f_488_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___boxed), 9, 1);
lean_closure_set(v___f_488_, 0, v_body_469_);
lean_inc_ref(v_binderType_468_);
v___x_489_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_binderName_467_, v_binderType_468_, v___f_488_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v___x_491_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_489_, 1);
v___x_491_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_binderType_468_, v_a_490_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v_fst_493_; lean_object* v_snd_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_520_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
lean_dec_ref_known(v___x_491_, 1);
v_fst_493_ = lean_ctor_get(v_a_492_, 0);
v_snd_494_ = lean_ctor_get(v_a_492_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v_a_492_);
if (v_isSharedCheck_520_ == 0)
{
v___x_496_ = v_a_492_;
v_isShared_497_ = v_isSharedCheck_520_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_snd_494_);
lean_inc(v_fst_493_);
lean_dec(v_a_492_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_520_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_array_push(v___x_478_, v_snd_494_);
v___x_499_ = lean_array_push(v___x_498_, v_a_487_);
v___x_500_ = l_Lean_Meta_mkAppM(v___x_483_, v___x_499_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_511_; 
v_a_501_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_511_ == 0)
{
v___x_503_ = v___x_500_;
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_500_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 1, v_a_501_);
v___x_506_ = v___x_496_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_fst_493_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_a_501_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v___x_506_);
v___x_508_ = v___x_503_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_del_object(v___x_496_);
lean_dec(v_fst_493_);
v_a_512_ = lean_ctor_get(v___x_500_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_500_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_500_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_500_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
else
{
lean_dec(v_a_487_);
lean_dec_ref(v___x_478_);
return v___x_491_;
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec(v_a_487_);
lean_dec_ref(v___x_478_);
lean_dec_ref(v_binderType_468_);
v_a_521_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_489_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_489_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v___x_478_);
lean_dec_ref(v_body_469_);
lean_dec_ref(v_binderType_468_);
lean_dec(v_binderName_467_);
v_a_529_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_486_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_486_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v___x_478_);
lean_dec_ref(v_body_469_);
lean_dec_ref(v_binderType_468_);
lean_dec(v_binderName_467_);
lean_dec_ref(v_against_447_);
v_a_537_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_481_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_481_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_dec_ref(v_against_447_);
v___x_547_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5, &lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__5);
v___x_548_ = l_Lean_indentExpr(v_val_463_);
v___x_549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_549_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
return v___x_550_;
}
}
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
lean_dec(v___x_462_);
lean_del_object(v___x_460_);
lean_dec_ref(v_against_447_);
v___x_552_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7, &lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___closed__7);
v___x_553_ = l_Lean_indentExpr(v_a_458_);
v___x_554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_552_);
lean_ctor_set(v___x_554_, 1, v___x_553_);
v___x_555_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_554_, v_a_450_, v_a_451_, v_a_452_, v_a_453_);
return v___x_555_;
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_against_447_);
v_a_557_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_455_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_455_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___boxed(lean_object* v_against_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(v_against_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object* v_00_u03c4_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_){
_start:
{
lean_object* v___x_586_; 
lean_inc_ref(v_00_u03c4_578_);
v___x_586_ = lp_vampireReplay_Vampire_Reconstruct_nonempty(v_00_u03c4_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_601_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_601_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_601_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_601_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_591_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_someElement___closed__1));
if (v_isShared_590_ == 0)
{
lean_ctor_set_tag(v___x_589_, 1);
lean_ctor_set(v___x_589_, 0, v_00_u03c4_578_);
v___x_593_ = v___x_589_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_00_u03c4_578_);
v___x_593_ = v_reuseFailAlloc_600_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_594_, 0, v_a_587_);
v___x_595_ = lean_unsigned_to_nat(2u);
v___x_596_ = lean_mk_empty_array_with_capacity(v___x_595_);
v___x_597_ = lean_array_push(v___x_596_, v___x_593_);
v___x_598_ = lean_array_push(v___x_597_, v___x_594_);
v___x_599_ = l_Lean_Meta_mkAppOptM(v___x_591_, v___x_598_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
return v___x_599_;
}
}
}
else
{
lean_dec_ref(v_00_u03c4_578_);
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement___boxed(lean_object* v_00_u03c4_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_00_u03c4_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
return v_res_610_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__0));
v___x_614_ = l_Lean_stringToMessageData(v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0(lean_object* v_vars_615_, uint32_t v_fst_616_, uint8_t v_positive_617_, lean_object* v_sorts_618_, lean_object* v_tail_619_, lean_object* v_body_620_, lean_object* v_x_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
lean_inc_ref(v_x_621_);
v___x_629_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_615_, v_fst_616_, v_x_621_);
v___x_630_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v_positive_617_, v_sorts_618_, v_tail_619_, v___x_629_, v_body_620_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; uint8_t v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_630_, 1);
v___x_632_ = 1;
if (v_positive_617_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_633_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__1));
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = l_Lean_Expr_isAppOfArity(v_a_631_, v___x_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_a_631_);
lean_dec_ref(v_x_621_);
v___x_636_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___closed__1);
v___x_637_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_636_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
return v___x_637_;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; lean_object* v___x_642_; 
v___x_638_ = l_Lean_Expr_appArg_x21(v_a_631_);
lean_dec(v_a_631_);
v___x_639_ = lean_mk_empty_array_with_capacity(v___x_634_);
v___x_640_ = lean_array_push(v___x_639_, v_x_621_);
v___x_641_ = 1;
v___x_642_ = l_Lean_Meta_mkForallFVars(v___x_640_, v___x_638_, v_positive_617_, v___x_632_, v___x_632_, v___x_641_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec_ref(v___x_640_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_652_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_652_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_647_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2, &lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2);
v___x_648_ = l_Lean_Expr_app___override(v___x_647_, v_a_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_648_);
v___x_650_ = v___x_645_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
return v___x_642_;
}
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v___x_653_ = lean_unsigned_to_nat(1u);
v___x_654_ = lean_mk_empty_array_with_capacity(v___x_653_);
lean_inc_ref(v___x_654_);
v___x_655_ = lean_array_push(v___x_654_, v_x_621_);
v___x_656_ = 0;
v___x_657_ = 1;
v___x_658_ = l_Lean_Meta_mkLambdaFVars(v___x_655_, v_a_631_, v___x_656_, v___x_632_, v___x_656_, v___x_632_, v___x_657_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec_ref(v___x_655_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
v___x_660_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_epsilon___closed__10));
v___x_661_ = lean_array_push(v___x_654_, v_a_659_);
v___x_662_ = l_Lean_Meta_mkAppM(v___x_660_, v___x_661_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
return v___x_662_;
}
else
{
lean_dec_ref(v___x_654_);
return v___x_658_;
}
}
}
else
{
lean_dec_ref(v_x_621_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___boxed(lean_object* v_vars_663_, lean_object* v_fst_664_, lean_object* v_positive_665_, lean_object* v_sorts_666_, lean_object* v_tail_667_, lean_object* v_body_668_, lean_object* v_x_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
uint32_t v_fst_4077__boxed_677_; uint8_t v_positive_boxed_678_; lean_object* v_res_679_; 
v_fst_4077__boxed_677_ = lean_unbox_uint32(v_fst_664_);
lean_dec(v_fst_664_);
v_positive_boxed_678_ = lean_unbox(v_positive_665_);
v_res_679_ = lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0(v_vars_663_, v_fst_4077__boxed_677_, v_positive_boxed_678_, v_sorts_666_, v_tail_667_, v_body_668_, v_x_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp(uint8_t v_positive_680_, lean_object* v_sorts_681_, lean_object* v_bound_682_, lean_object* v_vars_683_, lean_object* v_body_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
if (lean_obj_tag(v_bound_682_) == 0)
{
lean_object* v___x_692_; 
v___x_692_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_681_, v_vars_683_, v_body_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_692_) == 0)
{
if (v_positive_680_ == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_702_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_702_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_702_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_697_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2, &lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_witnessAgainst___lam__0___closed__2);
v___x_698_ = l_Lean_Expr_app___override(v___x_697_, v_a_693_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v___x_698_);
v___x_700_ = v___x_695_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v___x_698_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
else
{
return v___x_692_;
}
}
else
{
return v___x_692_;
}
}
else
{
lean_object* v_head_703_; lean_object* v_tail_704_; lean_object* v_fst_705_; lean_object* v_snd_706_; lean_object* v___x_707_; 
v_head_703_ = lean_ctor_get(v_bound_682_, 0);
lean_inc(v_head_703_);
v_tail_704_ = lean_ctor_get(v_bound_682_, 1);
lean_inc(v_tail_704_);
lean_dec_ref_known(v_bound_682_, 2);
v_fst_705_ = lean_ctor_get(v_head_703_, 0);
lean_inc(v_fst_705_);
v_snd_706_ = lean_ctor_get(v_head_703_, 1);
lean_inc(v_snd_706_);
lean_dec(v_head_703_);
v___x_707_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_706_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v___f_710_; lean_object* v___x_711_; uint32_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = lean_box(v_positive_680_);
lean_inc(v_fst_705_);
v___f_710_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_blockProp___lam__0___boxed), 14, 6);
lean_closure_set(v___f_710_, 0, v_vars_683_);
lean_closure_set(v___f_710_, 1, v_fst_705_);
lean_closure_set(v___f_710_, 2, v___x_709_);
lean_closure_set(v___f_710_, 3, v_sorts_681_);
lean_closure_set(v___f_710_, 4, v_tail_704_);
lean_closure_set(v___f_710_, 5, v_body_684_);
v___x_711_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_blockProp___closed__0));
v___x_712_ = lean_unbox_uint32(v_fst_705_);
lean_dec(v_fst_705_);
v___x_713_ = lean_uint32_to_nat(v___x_712_);
v___x_714_ = l_Nat_reprFast(v___x_713_);
v___x_715_ = lean_string_append(v___x_711_, v___x_714_);
lean_dec_ref(v___x_714_);
v___x_716_ = lean_box(0);
v___x_717_ = l_Lean_Name_str___override(v___x_716_, v___x_715_);
v___x_718_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_717_, v_a_708_, v___f_710_, v_a_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_, v_a_690_);
return v___x_718_;
}
else
{
lean_dec(v_fst_705_);
lean_dec(v_tail_704_);
lean_dec_ref(v_body_684_);
lean_dec_ref(v_vars_683_);
lean_dec_ref(v_sorts_681_);
return v___x_707_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp___boxed(lean_object* v_positive_719_, lean_object* v_sorts_720_, lean_object* v_bound_721_, lean_object* v_vars_722_, lean_object* v_body_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
uint8_t v_positive_boxed_731_; lean_object* v_res_732_; 
v_positive_boxed_731_ = lean_unbox(v_positive_719_);
v_res_732_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v_positive_boxed_731_, v_sorts_720_, v_bound_721_, v_vars_722_, v_body_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_existsProp(lean_object* v_sorts_733_, lean_object* v_bound_734_, lean_object* v_vars_735_, lean_object* v_body_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
uint8_t v___x_744_; lean_object* v___x_745_; 
v___x_744_ = 1;
v___x_745_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v___x_744_, v_sorts_733_, v_bound_734_, v_vars_735_, v_body_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_existsProp___boxed(lean_object* v_sorts_746_, lean_object* v_bound_747_, lean_object* v_vars_748_, lean_object* v_body_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = lp_vampireReplay_Vampire_Reconstruct_existsProp(v_sorts_746_, v_bound_747_, v_vars_748_, v_body_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
lean_dec(v_a_751_);
lean_dec_ref(v_a_750_);
return v_res_757_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__0));
v___x_760_ = l_Lean_stringToMessageData(v___x_759_);
return v___x_760_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__2));
v___x_763_ = l_Lean_stringToMessageData(v___x_762_);
return v___x_763_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__4));
v___x_766_ = l_Lean_stringToMessageData(v___x_765_);
return v___x_766_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__6));
v___x_769_ = l_Lean_stringToMessageData(v___x_768_);
return v___x_769_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__8));
v___x_772_ = l_Lean_stringToMessageData(v___x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg(lean_object* v_vars_773_, lean_object* v_val_774_, size_t v_sz_775_, size_t v_i_776_, lean_object* v_bs_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
uint8_t v___x_783_; 
v___x_783_ = lean_usize_dec_lt(v_i_776_, v_sz_775_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_dec_ref(v_val_774_);
v___x_784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_784_, 0, v_bs_777_);
return v___x_784_;
}
else
{
lean_object* v_v_785_; lean_object* v___x_786_; lean_object* v_bs_x27_787_; lean_object* v_a_789_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; uint8_t v___x_820_; 
v_v_785_ = lean_array_uget(v_bs_777_, v_i_776_);
v___x_786_ = lean_unsigned_to_nat(0u);
v_bs_x27_787_ = lean_array_uset(v_bs_777_, v_i_776_, v___x_786_);
v___x_820_ = lp_vampireReplay_Vampire_Term_isVar(v_v_785_);
if (v___x_820_ == 0)
{
lean_object* v_name_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v_name_821_ = lean_ctor_get(v_val_774_, 0);
v___x_822_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__5);
lean_inc_ref(v_name_821_);
v___x_823_ = l_Lean_stringToMessageData(v_name_821_);
v___x_824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v___x_825_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__7);
v___x_826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_826_, 0, v___x_824_);
lean_ctor_set(v___x_826_, 1, v___x_825_);
lean_inc(v_v_785_);
v___x_827_ = lp_vampireReplay_Vampire_Term_render(v_v_785_);
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = l_Lean_MessageData_ofFormat(v___x_828_);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_826_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__9);
v___x_832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_832_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_dec_ref_known(v___x_833_, 1);
v___y_795_ = v___y_778_;
v___y_796_ = v___y_779_;
v___y_797_ = v___y_780_;
v___y_798_ = v___y_781_;
goto v___jp_794_;
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec_ref(v_bs_x27_787_);
lean_dec(v_v_785_);
lean_dec_ref(v_val_774_);
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
else
{
v___y_795_ = v___y_778_;
v___y_796_ = v___y_779_;
v___y_797_ = v___y_780_;
v___y_798_ = v___y_781_;
goto v___jp_794_;
}
v___jp_788_:
{
size_t v___x_790_; size_t v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_add(v_i_776_, v___x_790_);
v___x_792_ = lean_array_uset(v_bs_x27_787_, v_i_776_, v_a_789_);
v_i_776_ = v___x_791_;
v_bs_777_ = v___x_792_;
goto _start;
}
v___jp_794_:
{
uint32_t v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lp_vampireReplay_Vampire_Term_var(v_v_785_);
lean_dec(v_v_785_);
v___x_800_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_vars_773_, v___x_799_);
if (lean_obj_tag(v___x_800_) == 1)
{
lean_object* v_val_801_; 
v_val_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v___x_800_, 1);
v_a_789_ = v_val_801_;
goto v___jp_788_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
lean_dec(v___x_800_);
v___x_802_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__1);
v___x_803_ = lean_uint32_to_nat(v___x_799_);
v___x_804_ = l_Nat_reprFast(v___x_803_);
v___x_805_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
v___x_806_ = l_Lean_MessageData_ofFormat(v___x_805_);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_802_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___closed__3);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_809_, v___y_795_, v___y_796_, v___y_797_, v___y_798_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v_a_789_ = v_a_811_;
goto v___jp_788_;
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec_ref(v_bs_x27_787_);
lean_dec_ref(v_val_774_);
v_a_812_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_810_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_810_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg___boxed(lean_object* v_vars_842_, lean_object* v_val_843_, lean_object* v_sz_844_, lean_object* v_i_845_, lean_object* v_bs_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
size_t v_sz_boxed_852_; size_t v_i_boxed_853_; lean_object* v_res_854_; 
v_sz_boxed_852_ = lean_unbox_usize(v_sz_844_);
lean_dec(v_sz_844_);
v_i_boxed_853_ = lean_unbox_usize(v_i_845_);
lean_dec(v_i_845_);
v_res_854_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg(v_vars_842_, v_val_843_, v_sz_boxed_852_, v_i_boxed_853_, v_bs_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec_ref(v_vars_842_);
return v_res_854_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__0));
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__2));
v___x_860_ = l_Lean_stringToMessageData(v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__4));
v___x_863_ = l_Lean_stringToMessageData(v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem(lean_object* v_skolems_864_, lean_object* v_vars_865_, uint32_t v_v_866_, lean_object* v_witness_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_skolems_864_, v_v_866_);
if (lean_obj_tag(v___x_875_) == 1)
{
lean_object* v_val_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_945_; 
v_val_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_945_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_945_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_val_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_945_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; 
v___x_880_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_val_876_);
if (lean_obj_tag(v___x_880_) == 1)
{
lean_object* v_val_881_; lean_object* v___x_882_; size_t v_sz_883_; size_t v___x_884_; lean_object* v___x_885_; 
lean_del_object(v___x_878_);
v_val_881_ = lean_ctor_get(v___x_880_, 0);
lean_inc_n(v_val_881_, 2);
lean_dec_ref_known(v___x_880_, 1);
v___x_882_ = lp_vampireReplay_Vampire_Term_args(v_val_876_);
v_sz_883_ = lean_array_size(v___x_882_);
v___x_884_ = ((size_t)0ULL);
v___x_885_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg(v_vars_865_, v_val_881_, v_sz_883_, v___x_884_, v___x_882_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; uint8_t v___x_887_; uint8_t v___x_888_; uint8_t v___x_889_; lean_object* v___x_890_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = 0;
v___x_888_ = 1;
v___x_889_ = 1;
v___x_890_ = l_Lean_Meta_mkLambdaFVars(v_a_886_, v_witness_867_, v___x_887_, v___x_888_, v___x_887_, v___x_888_, v___x_889_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
lean_dec(v_a_886_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_917_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_917_ == 0)
{
v___x_893_ = v___x_890_;
v_isShared_894_ = v_isSharedCheck_917_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_890_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_917_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; lean_object* v_proofs_896_; lean_object* v_unimplemented_897_; lean_object* v_introduced_898_; lean_object* v_named_899_; lean_object* v_conclusions_900_; lean_object* v_shared_901_; lean_object* v_nonempty_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_916_; 
v___x_895_ = lean_st_ref_take(v_a_869_);
v_proofs_896_ = lean_ctor_get(v___x_895_, 0);
v_unimplemented_897_ = lean_ctor_get(v___x_895_, 1);
v_introduced_898_ = lean_ctor_get(v___x_895_, 2);
v_named_899_ = lean_ctor_get(v___x_895_, 3);
v_conclusions_900_ = lean_ctor_get(v___x_895_, 4);
v_shared_901_ = lean_ctor_get(v___x_895_, 5);
v_nonempty_902_ = lean_ctor_get(v___x_895_, 6);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_916_ == 0)
{
v___x_904_ = v___x_895_;
v_isShared_905_ = v_isSharedCheck_916_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_nonempty_902_);
lean_inc(v_shared_901_);
lean_inc(v_conclusions_900_);
lean_inc(v_named_899_);
lean_inc(v_introduced_898_);
lean_inc(v_unimplemented_897_);
lean_inc(v_proofs_896_);
lean_dec(v___x_895_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_916_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v_name_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v_name_906_ = lean_ctor_get(v_val_881_, 0);
lean_inc_ref(v_name_906_);
lean_dec(v_val_881_);
v___x_907_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_898_, v_name_906_, v_a_891_);
if (v_isShared_905_ == 0)
{
lean_ctor_set(v___x_904_, 2, v___x_907_);
v___x_909_ = v___x_904_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_proofs_896_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v_unimplemented_897_);
lean_ctor_set(v_reuseFailAlloc_915_, 2, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_915_, 3, v_named_899_);
lean_ctor_set(v_reuseFailAlloc_915_, 4, v_conclusions_900_);
lean_ctor_set(v_reuseFailAlloc_915_, 5, v_shared_901_);
lean_ctor_set(v_reuseFailAlloc_915_, 6, v_nonempty_902_);
v___x_909_ = v_reuseFailAlloc_915_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
v___x_910_ = lean_st_ref_set(v_a_869_, v___x_909_);
v___x_911_ = lean_box(0);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_911_);
v___x_913_ = v___x_893_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_val_881_);
v_a_918_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_890_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_890_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_val_881_);
lean_dec_ref(v_witness_867_);
v_a_926_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_885_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_885_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_938_; 
lean_dec(v___x_880_);
lean_dec(v_val_876_);
lean_dec_ref(v_witness_867_);
v___x_934_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1, &lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__1);
v___x_935_ = lean_uint32_to_nat(v_v_866_);
v___x_936_ = l_Nat_reprFast(v___x_935_);
if (v_isShared_879_ == 0)
{
lean_ctor_set_tag(v___x_878_, 3);
lean_ctor_set(v___x_878_, 0, v___x_936_);
v___x_938_ = v___x_878_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_936_);
v___x_938_ = v_reuseFailAlloc_944_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_939_ = l_Lean_MessageData_ofFormat(v___x_938_);
v___x_940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_934_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3, &lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__3);
v___x_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_942_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_943_;
}
}
}
}
else
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
lean_dec(v___x_875_);
lean_dec_ref(v_witness_867_);
v___x_946_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5, &lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolem___closed__5);
v___x_947_ = lean_uint32_to_nat(v_v_866_);
v___x_948_ = l_Nat_reprFast(v___x_947_);
v___x_949_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
v___x_950_ = l_Lean_MessageData_ofFormat(v___x_949_);
v___x_951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_946_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_951_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem___boxed(lean_object* v_skolems_953_, lean_object* v_vars_954_, lean_object* v_v_955_, lean_object* v_witness_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
uint32_t v_v_boxed_964_; lean_object* v_res_965_; 
v_v_boxed_964_ = lean_unbox_uint32(v_v_955_);
lean_dec(v_v_955_);
v_res_965_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolem(v_skolems_953_, v_vars_954_, v_v_boxed_964_, v_witness_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec_ref(v_vars_954_);
lean_dec_ref(v_skolems_953_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0(lean_object* v_vars_966_, lean_object* v_val_967_, size_t v_sz_968_, size_t v_i_969_, lean_object* v_bs_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___redArg(v_vars_966_, v_val_967_, v_sz_968_, v_i_969_, v_bs_970_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0___boxed(lean_object* v_vars_979_, lean_object* v_val_980_, lean_object* v_sz_981_, lean_object* v_i_982_, lean_object* v_bs_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
size_t v_sz_boxed_991_; size_t v_i_boxed_992_; lean_object* v_res_993_; 
v_sz_boxed_991_ = lean_unbox_usize(v_sz_981_);
lean_dec(v_sz_981_);
v_i_boxed_992_ = lean_unbox_usize(v_i_982_);
lean_dec(v_i_982_);
v_res_993_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_registerSkolem_spec__0(v_vars_979_, v_val_980_, v_sz_boxed_991_, v_i_boxed_992_, v_bs_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec_ref(v_vars_979_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0(lean_object* v_vars_994_, uint32_t v_fst_995_, lean_object* v_sorts_996_, lean_object* v_tail_997_, lean_object* v_body_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_inc_ref(v_x_999_);
v___x_1007_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_994_, v_fst_995_, v_x_999_);
v___x_1008_ = lp_vampireReplay_Vampire_Reconstruct_existsProp(v_sorts_996_, v_tail_997_, v___x_1007_, v_body_998_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; uint8_t v___x_1014_; uint8_t v___x_1015_; lean_object* v___x_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = lean_unsigned_to_nat(1u);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1010_);
v___x_1012_ = lean_array_push(v___x_1011_, v_x_999_);
v___x_1013_ = 0;
v___x_1014_ = 1;
v___x_1015_ = 1;
v___x_1016_ = l_Lean_Meta_mkLambdaFVars(v___x_1012_, v_a_1009_, v___x_1013_, v___x_1014_, v___x_1013_, v___x_1014_, v___x_1015_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec_ref(v___x_1012_);
return v___x_1016_;
}
else
{
lean_dec_ref(v_x_999_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0___boxed(lean_object* v_vars_1017_, lean_object* v_fst_1018_, lean_object* v_sorts_1019_, lean_object* v_tail_1020_, lean_object* v_body_1021_, lean_object* v_x_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
uint32_t v_fst_4677__boxed_1030_; lean_object* v_res_1031_; 
v_fst_4677__boxed_1030_ = lean_unbox_uint32(v_fst_1018_);
lean_dec(v_fst_1018_);
v_res_1031_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0(v_vars_1017_, v_fst_4677__boxed_1030_, v_sorts_1019_, v_tail_1020_, v_body_1021_, v_x_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0(lean_object* v_sorts_1032_, lean_object* v_f_1033_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_1033_);
v___x_1035_ = lean_unsigned_to_nat(0u);
v___x_1036_ = lean_array_get_size(v___x_1034_);
v___x_1037_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_1032_, v___x_1034_, v___x_1035_, v___x_1036_);
lean_dec_ref(v___x_1034_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0___boxed(lean_object* v_sorts_1038_, lean_object* v_f_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0(v_sorts_1038_, v_f_1039_);
lean_dec_ref(v_sorts_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1(lean_object* v_sorts_1041_, lean_object* v_skolems_1042_, lean_object* v_vars_1043_, lean_object* v_as_1044_, size_t v_i_1045_, size_t v_stop_1046_, lean_object* v_b_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
uint8_t v___x_1055_; 
v___x_1055_ = lean_usize_dec_eq(v_i_1045_, v_stop_1046_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_array_uget_borrowed(v_as_1044_, v_i_1045_);
lean_inc(v___x_1056_);
lean_inc_ref(v_vars_1043_);
lean_inc_ref(v_skolems_1042_);
lean_inc_ref(v_sorts_1041_);
v___x_1057_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems(v_sorts_1041_, v_skolems_1042_, v_vars_1043_, v___x_1056_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v_a_1058_; size_t v___x_1059_; size_t v___x_1060_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1059_ = ((size_t)1ULL);
v___x_1060_ = lean_usize_add(v_i_1045_, v___x_1059_);
v_i_1045_ = v___x_1060_;
v_b_1047_ = v_a_1058_;
goto _start;
}
else
{
lean_dec_ref(v_vars_1043_);
lean_dec_ref(v_skolems_1042_);
lean_dec_ref(v_sorts_1041_);
return v___x_1057_;
}
}
else
{
lean_object* v___x_1062_; 
lean_dec_ref(v_vars_1043_);
lean_dec_ref(v_skolems_1042_);
lean_dec_ref(v_sorts_1041_);
v___x_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_b_1047_);
return v___x_1062_;
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__0));
v___x_1065_ = l_Lean_stringToMessageData(v___x_1064_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go(lean_object* v_sorts_1066_, lean_object* v_skolems_1067_, lean_object* v_body_1068_, lean_object* v_rest_1069_, lean_object* v_vars_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_){
_start:
{
if (lean_obj_tag(v_rest_1069_) == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems(v_sorts_1066_, v_skolems_1067_, v_vars_1070_, v_body_1068_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
return v___x_1078_;
}
else
{
lean_object* v_head_1079_; lean_object* v_tail_1080_; lean_object* v_fst_1081_; lean_object* v_snd_1082_; lean_object* v___x_1083_; 
v_head_1079_ = lean_ctor_get(v_rest_1069_, 0);
lean_inc(v_head_1079_);
v_tail_1080_ = lean_ctor_get(v_rest_1069_, 1);
lean_inc(v_tail_1080_);
lean_dec_ref_known(v_rest_1069_, 2);
v_fst_1081_ = lean_ctor_get(v_head_1079_, 0);
lean_inc(v_fst_1081_);
v_snd_1082_ = lean_ctor_get(v_head_1079_, 1);
lean_inc(v_snd_1082_);
lean_dec(v_head_1079_);
v___x_1083_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_1082_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___f_1085_; lean_object* v___x_1086_; uint32_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc_n(v_a_1084_, 2);
lean_dec_ref_known(v___x_1083_, 1);
lean_inc_ref(v_body_1068_);
lean_inc(v_tail_1080_);
lean_inc_ref(v_sorts_1066_);
lean_inc(v_fst_1081_);
lean_inc_ref(v_vars_1070_);
v___f_1085_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1085_, 0, v_vars_1070_);
lean_closure_set(v___f_1085_, 1, v_fst_1081_);
lean_closure_set(v___f_1085_, 2, v_sorts_1066_);
lean_closure_set(v___f_1085_, 3, v_tail_1080_);
lean_closure_set(v___f_1085_, 4, v_body_1068_);
v___x_1086_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_blockProp___closed__0));
v___x_1087_ = lean_unbox_uint32(v_fst_1081_);
v___x_1088_ = lean_uint32_to_nat(v___x_1087_);
v___x_1089_ = l_Nat_reprFast(v___x_1088_);
v___x_1090_ = lean_string_append(v___x_1086_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = lean_box(0);
v___x_1092_ = l_Lean_Name_str___override(v___x_1091_, v___x_1090_);
v___x_1093_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1092_, v_a_1084_, v___f_1085_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_a_1084_, v_a_1094_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v_fst_1097_; uint32_t v___x_1098_; lean_object* v___x_1099_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v_fst_1097_ = lean_ctor_get(v_a_1096_, 0);
lean_inc_n(v_fst_1097_, 2);
lean_dec(v_a_1096_);
v___x_1098_ = lean_unbox_uint32(v_fst_1081_);
v___x_1099_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolem(v_skolems_1067_, v_vars_1070_, v___x_1098_, v_fst_1097_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_);
if (lean_obj_tag(v___x_1099_) == 0)
{
uint32_t v___x_1100_; lean_object* v___x_1101_; 
lean_dec_ref_known(v___x_1099_, 1);
v___x_1100_ = lean_unbox_uint32(v_fst_1081_);
lean_dec(v_fst_1081_);
v___x_1101_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_1070_, v___x_1100_, v_fst_1097_);
v_rest_1069_ = v_tail_1080_;
v_vars_1070_ = v___x_1101_;
goto _start;
}
else
{
lean_dec(v_fst_1097_);
lean_dec(v_fst_1081_);
lean_dec(v_tail_1080_);
lean_dec_ref(v_vars_1070_);
lean_dec_ref(v_body_1068_);
lean_dec_ref(v_skolems_1067_);
lean_dec_ref(v_sorts_1066_);
return v___x_1099_;
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_dec(v_fst_1081_);
lean_dec(v_tail_1080_);
lean_dec_ref(v_vars_1070_);
lean_dec_ref(v_body_1068_);
lean_dec_ref(v_skolems_1067_);
lean_dec_ref(v_sorts_1066_);
v_a_1103_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1095_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1095_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_a_1084_);
lean_dec(v_fst_1081_);
lean_dec(v_tail_1080_);
lean_dec_ref(v_vars_1070_);
lean_dec_ref(v_body_1068_);
lean_dec_ref(v_skolems_1067_);
lean_dec_ref(v_sorts_1066_);
v_a_1111_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1093_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1093_);
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
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec(v_fst_1081_);
lean_dec(v_tail_1080_);
lean_dec_ref(v_vars_1070_);
lean_dec_ref(v_body_1068_);
lean_dec_ref(v_skolems_1067_);
lean_dec_ref(v_sorts_1066_);
v_a_1119_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1083_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1083_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1___boxed(lean_object* v_sorts_1127_, lean_object* v_skolems_1128_, lean_object* v___x_1129_, lean_object* v_vars_1130_, lean_object* v_x_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1(v_sorts_1127_, v_skolems_1128_, v___x_1129_, v_vars_1130_, v_x_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec_ref(v_x_1131_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems(lean_object* v_sorts_1140_, lean_object* v_skolems_1141_, lean_object* v_vars_1142_, lean_object* v_f_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_1143_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1204_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1204_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1204_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; uint8_t v___x_1181_; 
v___x_1181_ = lean_unbox(v_a_1152_);
lean_dec(v_a_1152_);
switch(v___x_1181_)
{
case 8:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
lean_del_object(v___x_1154_);
lean_inc_ref(v_f_1143_);
v___x_1182_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_1143_);
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = lean_array_get_size(v___x_1182_);
v___x_1185_ = lean_nat_dec_lt(v___x_1183_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec_ref(v___x_1182_);
lean_dec_ref(v_f_1143_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
v___x_1186_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1, &lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1);
v___x_1187_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1186_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
return v___x_1187_;
}
else
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
v___x_1188_ = lean_array_fget(v___x_1182_, v___x_1183_);
lean_dec_ref(v___x_1182_);
v___x_1189_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0(v_sorts_1140_, v_f_1143_);
v___x_1190_ = lean_array_to_list(v___x_1189_);
v___x_1191_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go(v_sorts_1140_, v_skolems_1141_, v___x_1188_, v___x_1190_, v_vars_1142_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
return v___x_1191_;
}
}
case 7:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
lean_del_object(v___x_1154_);
lean_inc_ref(v_f_1143_);
v___x_1192_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_1143_);
v___x_1193_ = lean_unsigned_to_nat(0u);
v___x_1194_ = lean_array_get_size(v___x_1192_);
v___x_1195_ = lean_nat_dec_lt(v___x_1193_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_dec_ref(v___x_1192_);
lean_dec_ref(v_f_1143_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
v___x_1196_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1, &lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_registerSkolems___closed__1);
v___x_1197_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1196_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
return v___x_1197_;
}
else
{
lean_object* v___x_1198_; lean_object* v___f_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1198_ = lean_array_fget(v___x_1192_, v___x_1193_);
lean_dec_ref(v___x_1192_);
lean_inc_ref(v_sorts_1140_);
v___f_1199_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1199_, 0, v_sorts_1140_);
lean_closure_set(v___f_1199_, 1, v_skolems_1141_);
lean_closure_set(v___f_1199_, 2, v___x_1198_);
v___x_1200_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__0(v_sorts_1140_, v_f_1143_);
lean_dec_ref(v_sorts_1140_);
v___x_1201_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_1200_, v_vars_1142_, v___f_1199_, v_a_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_);
return v___x_1201_;
}
}
case 1:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
case 2:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
case 6:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
case 3:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
case 4:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
case 5:
{
v___y_1157_ = v_a_1144_;
v___y_1158_ = v_a_1145_;
v___y_1159_ = v_a_1146_;
v___y_1160_ = v_a_1147_;
v___y_1161_ = v_a_1148_;
v___y_1162_ = v_a_1149_;
goto v___jp_1156_;
}
default: 
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
lean_del_object(v___x_1154_);
lean_dec_ref(v_f_1143_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
v___jp_1156_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1163_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_1143_);
v___x_1164_ = lean_unsigned_to_nat(0u);
v___x_1165_ = lean_array_get_size(v___x_1163_);
v___x_1166_ = lean_box(0);
v___x_1167_ = lean_nat_dec_lt(v___x_1164_, v___x_1165_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1169_; 
lean_dec_ref(v___x_1163_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1166_);
v___x_1169_ = v___x_1154_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1166_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
else
{
uint8_t v___x_1171_; 
v___x_1171_ = lean_nat_dec_le(v___x_1165_, v___x_1165_);
if (v___x_1171_ == 0)
{
if (v___x_1167_ == 0)
{
lean_object* v___x_1173_; 
lean_dec_ref(v___x_1163_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1166_);
v___x_1173_ = v___x_1154_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1166_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
else
{
size_t v___x_1175_; size_t v___x_1176_; lean_object* v___x_1177_; 
lean_del_object(v___x_1154_);
v___x_1175_ = ((size_t)0ULL);
v___x_1176_ = lean_usize_of_nat(v___x_1165_);
v___x_1177_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1(v_sorts_1140_, v_skolems_1141_, v_vars_1142_, v___x_1163_, v___x_1175_, v___x_1176_, v___x_1166_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec_ref(v___x_1163_);
return v___x_1177_;
}
}
else
{
size_t v___x_1178_; size_t v___x_1179_; lean_object* v___x_1180_; 
lean_del_object(v___x_1154_);
v___x_1178_ = ((size_t)0ULL);
v___x_1179_ = lean_usize_of_nat(v___x_1165_);
v___x_1180_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1(v_sorts_1140_, v_skolems_1141_, v_vars_1142_, v___x_1163_, v___x_1178_, v___x_1179_, v___x_1166_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec_ref(v___x_1163_);
return v___x_1180_;
}
}
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v_f_1143_);
lean_dec_ref(v_vars_1142_);
lean_dec_ref(v_skolems_1141_);
lean_dec_ref(v_sorts_1140_);
v_a_1205_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1151_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1151_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___lam__1(lean_object* v_sorts_1213_, lean_object* v_skolems_1214_, lean_object* v___x_1215_, lean_object* v_vars_1216_, lean_object* v_x_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems(v_sorts_1213_, v_skolems_1214_, v_vars_1216_, v___x_1215_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1___boxed(lean_object* v_sorts_1226_, lean_object* v_skolems_1227_, lean_object* v_vars_1228_, lean_object* v_as_1229_, lean_object* v_i_1230_, lean_object* v_stop_1231_, lean_object* v_b_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
size_t v_i_boxed_1240_; size_t v_stop_boxed_1241_; lean_object* v_res_1242_; 
v_i_boxed_1240_ = lean_unbox_usize(v_i_1230_);
lean_dec(v_i_1230_);
v_stop_boxed_1241_ = lean_unbox_usize(v_stop_1231_);
lean_dec(v_stop_1231_);
v_res_1242_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_registerSkolems_spec__1(v_sorts_1226_, v_skolems_1227_, v_vars_1228_, v_as_1229_, v_i_boxed_1240_, v_stop_boxed_1241_, v_b_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec_ref(v_as_1229_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go___boxed(lean_object* v_sorts_1243_, lean_object* v_skolems_1244_, lean_object* v_body_1245_, lean_object* v_rest_1246_, lean_object* v_vars_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems_go(v_sorts_1243_, v_skolems_1244_, v_body_1245_, v_rest_1246_, v_vars_1247_, v_a_1248_, v_a_1249_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec(v_a_1251_);
lean_dec_ref(v_a_1250_);
lean_dec(v_a_1249_);
lean_dec_ref(v_a_1248_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems___boxed(lean_object* v_sorts_1256_, lean_object* v_skolems_1257_, lean_object* v_vars_1258_, lean_object* v_f_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems(v_sorts_1256_, v_skolems_1257_, v_vars_1258_, v_f_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
return v_res_1267_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Stated(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Choice(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Stated(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
