// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Skolem
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_existsProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_skolems(lean_object*);
lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cannot relate"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nto"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "eq_comm"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__4_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 239, 253, 155, 14, 133, 114, 108)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__5_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__7_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__8_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__9_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__10_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__11_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__13 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__13_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "forall_congr'"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 255, 57, 163, 42, 11, 214, 176)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "quantifier without a body"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__4_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "and_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__6_value),LEAN_SCALAR_PTR_LITERAL(188, 238, 216, 229, 220, 92, 101, 241)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__7_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "missing subformula"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "skolemisation changed a junction's size"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "skolemisation should keep a junction"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__3_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__8_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__8_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__10_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__10_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__11_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "or_congr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__12 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__12_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__12_value),LEAN_SCALAR_PTR_LITERAL(97, 254, 90, 169, 212, 147, 67, 5)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__13_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "skolemisation should keep a universal quantifier"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__14 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__14_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__0_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trans"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__1_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__1_value),LEAN_SCALAR_PTR_LITERAL(25, 192, 189, 143, 180, 129, 112, 178)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "skolemize should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "skolemize without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "skolemize should state a formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__8_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "skolemize should be given a formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__10_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(lean_object* v_p_24_, lean_object* v_c_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v___y_32_; lean_object* v___y_33_; lean_object* v___y_34_; lean_object* v___y_35_; lean_object* v___x_44_; 
lean_inc_ref(v_c_25_);
lean_inc_ref(v_p_24_);
v___x_44_ = l_Lean_Meta_isExprDefEq(v_p_24_, v_c_25_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_103_; uint8_t v___y_117_; uint8_t v___x_139_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
lean_inc(v_a_45_);
lean_dec_ref_known(v___x_44_, 1);
v___x_139_ = lean_unbox(v_a_45_);
lean_dec(v_a_45_);
if (v___x_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__11));
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = l_Lean_Expr_isAppOfArity(v_p_24_, v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
v___y_117_ = v___x_142_;
goto v___jp_116_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = l_Lean_Expr_isAppOfArity(v_c_25_, v___x_140_, v___x_141_);
v___y_117_ = v___x_143_;
goto v___jp_116_;
}
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec_ref(v_c_25_);
v___x_144_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14));
v___x_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_145_, 0, v_p_24_);
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
v___x_148_ = lean_array_push(v___x_147_, v___x_145_);
v___x_149_ = l_Lean_Meta_mkAppOptM(v___x_144_, v___x_148_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
return v___x_149_;
}
v___jp_46_:
{
if (lean_obj_tag(v___y_47_) == 1)
{
lean_object* v_val_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_101_; 
v_val_49_ = lean_ctor_get(v___y_47_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___y_47_);
if (v_isSharedCheck_101_ == 0)
{
v___x_51_ = v___y_47_;
v_isShared_52_ = v_isSharedCheck_101_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_val_49_);
lean_dec(v___y_47_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_101_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v_snd_53_; 
v_snd_53_ = lean_ctor_get(v_val_49_, 1);
lean_inc(v_snd_53_);
if (lean_obj_tag(v___y_48_) == 1)
{
lean_object* v_val_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_100_; 
v_val_54_ = lean_ctor_get(v___y_48_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___y_48_);
if (v_isSharedCheck_100_ == 0)
{
v___x_56_ = v___y_48_;
v_isShared_57_ = v_isSharedCheck_100_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_val_54_);
lean_dec(v___y_48_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_100_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v_snd_58_; lean_object* v_fst_59_; lean_object* v_fst_60_; lean_object* v_snd_61_; lean_object* v_fst_62_; lean_object* v_snd_63_; lean_object* v___x_64_; 
v_snd_58_ = lean_ctor_get(v_val_54_, 1);
lean_inc(v_snd_58_);
lean_dec(v_val_54_);
v_fst_59_ = lean_ctor_get(v_val_49_, 0);
lean_inc(v_fst_59_);
lean_dec(v_val_49_);
v_fst_60_ = lean_ctor_get(v_snd_53_, 0);
lean_inc_n(v_fst_60_, 2);
v_snd_61_ = lean_ctor_get(v_snd_53_, 1);
lean_inc(v_snd_61_);
lean_dec(v_snd_53_);
v_fst_62_ = lean_ctor_get(v_snd_58_, 0);
lean_inc(v_fst_62_);
v_snd_63_ = lean_ctor_get(v_snd_58_, 1);
lean_inc(v_snd_63_);
lean_dec(v_snd_58_);
v___x_64_ = l_Lean_Meta_isExprDefEq(v_fst_60_, v_snd_63_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_66_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_65_);
lean_dec_ref_known(v___x_64_, 1);
lean_inc(v_snd_61_);
v___x_66_ = l_Lean_Meta_isExprDefEq(v_snd_61_, v_fst_62_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
if (lean_obj_tag(v___x_66_) == 0)
{
uint8_t v___x_67_; 
v___x_67_ = lean_unbox(v_a_65_);
lean_dec(v_a_65_);
if (v___x_67_ == 0)
{
lean_dec_ref_known(v___x_66_, 1);
lean_dec(v_snd_61_);
lean_dec(v_fst_60_);
lean_dec(v_fst_59_);
lean_del_object(v___x_56_);
lean_del_object(v___x_51_);
v___y_32_ = v_a_26_;
v___y_33_ = v_a_27_;
v___y_34_ = v_a_28_;
v___y_35_ = v_a_29_;
goto v___jp_31_;
}
else
{
lean_object* v_a_68_; uint8_t v___x_69_; 
v_a_68_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_a_68_);
lean_dec_ref_known(v___x_66_, 1);
v___x_69_ = lean_unbox(v_a_68_);
lean_dec(v_a_68_);
if (v___x_69_ == 0)
{
lean_dec(v_snd_61_);
lean_dec(v_fst_60_);
lean_dec(v_fst_59_);
lean_del_object(v___x_56_);
lean_del_object(v___x_51_);
v___y_32_ = v_a_26_;
v___y_33_ = v_a_27_;
v___y_34_ = v_a_28_;
v___y_35_ = v_a_29_;
goto v___jp_31_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_72_; 
lean_dec_ref(v_c_25_);
lean_dec_ref(v_p_24_);
v___x_70_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__5));
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v_fst_59_);
v___x_72_ = v___x_56_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_fst_59_);
v___x_72_ = v_reuseFailAlloc_83_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v___x_74_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 0, v_fst_60_);
v___x_74_ = v___x_51_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_fst_60_);
v___x_74_ = v_reuseFailAlloc_82_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_75_, 0, v_snd_61_);
v___x_76_ = lean_unsigned_to_nat(3u);
v___x_77_ = lean_mk_empty_array_with_capacity(v___x_76_);
v___x_78_ = lean_array_push(v___x_77_, v___x_72_);
v___x_79_ = lean_array_push(v___x_78_, v___x_74_);
v___x_80_ = lean_array_push(v___x_79_, v___x_75_);
v___x_81_ = l_Lean_Meta_mkAppOptM(v___x_70_, v___x_80_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
return v___x_81_;
}
}
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
lean_dec(v_a_65_);
lean_dec(v_snd_61_);
lean_dec(v_fst_60_);
lean_dec(v_fst_59_);
lean_del_object(v___x_56_);
lean_del_object(v___x_51_);
lean_dec_ref(v_c_25_);
lean_dec_ref(v_p_24_);
v_a_84_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_66_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_66_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_fst_62_);
lean_dec(v_snd_61_);
lean_dec(v_fst_60_);
lean_dec(v_fst_59_);
lean_del_object(v___x_56_);
lean_del_object(v___x_51_);
lean_dec_ref(v_c_25_);
lean_dec_ref(v_p_24_);
v_a_92_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_64_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_64_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
else
{
lean_dec(v_snd_53_);
lean_del_object(v___x_51_);
lean_dec(v_val_49_);
lean_dec(v___y_48_);
v___y_32_ = v_a_26_;
v___y_33_ = v_a_27_;
v___y_34_ = v_a_28_;
v___y_35_ = v_a_29_;
goto v___jp_31_;
}
}
}
else
{
lean_dec(v___y_48_);
lean_dec(v___y_47_);
v___y_32_ = v_a_26_;
v___y_33_ = v_a_27_;
v___y_34_ = v_a_28_;
v___y_35_ = v_a_29_;
goto v___jp_31_;
}
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__7));
v___x_105_ = lean_unsigned_to_nat(3u);
v___x_106_ = l_Lean_Expr_isAppOfArity(v_c_25_, v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_box(0);
v___y_47_ = v___y_103_;
v___y_48_ = v___x_107_;
goto v___jp_46_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_108_ = l_Lean_Expr_appFn_x21(v_c_25_);
v___x_109_ = l_Lean_Expr_appFn_x21(v___x_108_);
v___x_110_ = l_Lean_Expr_appArg_x21(v___x_109_);
lean_dec_ref(v___x_109_);
v___x_111_ = l_Lean_Expr_appArg_x21(v___x_108_);
lean_dec_ref(v___x_108_);
v___x_112_ = l_Lean_Expr_appArg_x21(v_c_25_);
v___x_113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_110_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
v___y_47_ = v___y_103_;
v___y_48_ = v___x_115_;
goto v___jp_46_;
}
}
v___jp_116_:
{
if (v___y_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__7));
v___x_119_ = lean_unsigned_to_nat(3u);
v___x_120_ = l_Lean_Expr_isAppOfArity(v_p_24_, v___x_118_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; 
v___x_121_ = lean_box(0);
v___y_103_ = v___x_121_;
goto v___jp_102_;
}
else
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_122_ = l_Lean_Expr_appFn_x21(v_p_24_);
v___x_123_ = l_Lean_Expr_appFn_x21(v___x_122_);
v___x_124_ = l_Lean_Expr_appArg_x21(v___x_123_);
lean_dec_ref(v___x_123_);
v___x_125_ = l_Lean_Expr_appArg_x21(v___x_122_);
lean_dec_ref(v___x_122_);
v___x_126_ = l_Lean_Expr_appArg_x21(v_p_24_);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_124_);
lean_ctor_set(v___x_128_, 1, v___x_127_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___y_103_ = v___x_129_;
goto v___jp_102_;
}
}
else
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_130_ = l_Lean_Expr_appArg_x21(v_p_24_);
lean_dec_ref(v_p_24_);
v___x_131_ = l_Lean_Expr_appArg_x21(v_c_25_);
lean_dec_ref(v_c_25_);
v___x_132_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(v___x_130_, v___x_131_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v_a_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_a_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_a_133_);
lean_dec_ref_known(v___x_132_, 1);
v___x_134_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__9));
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = lean_mk_empty_array_with_capacity(v___x_135_);
v___x_137_ = lean_array_push(v___x_136_, v_a_133_);
v___x_138_ = l_Lean_Meta_mkAppM(v___x_134_, v___x_137_, v_a_26_, v_a_27_, v_a_28_, v_a_29_);
return v___x_138_;
}
else
{
return v___x_132_;
}
}
}
}
else
{
lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_157_; 
lean_dec_ref(v_c_25_);
lean_dec_ref(v_p_24_);
v_a_150_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_157_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_157_ == 0)
{
v___x_152_ = v___x_44_;
v_isShared_153_ = v_isSharedCheck_157_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_44_);
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
v___jp_31_:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_36_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__1);
v___x_37_ = l_Lean_indentExpr(v_p_24_);
v___x_38_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__3);
v___x_40_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_38_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = l_Lean_indentExpr(v_c_25_);
v___x_42_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_42_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
return v___x_43_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___boxed(lean_object* v_p_158_, lean_object* v_c_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(v_p_158_, v_c_159_, v_a_160_, v_a_161_, v_a_162_, v_a_163_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff(lean_object* v_p_166_, lean_object* v_c_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(v_p_166_, v_c_167_, v_a_170_, v_a_171_, v_a_172_, v_a_173_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___boxed(lean_object* v_p_176_, lean_object* v_c_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff(v_p_176_, v_c_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars(lean_object* v_sorts_186_, lean_object* v_f_187_){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_188_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_187_);
v___x_189_ = lean_unsigned_to_nat(0u);
v___x_190_ = lean_array_get_size(v___x_188_);
v___x_191_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_186_, v___x_188_, v___x_189_, v___x_190_);
lean_dec_ref(v___x_188_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars___boxed(lean_object* v_sorts_192_, lean_object* v_f_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars(v_sorts_192_, v_f_193_);
lean_dec_ref(v_sorts_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg(lean_object* v_as_198_, size_t v_sz_199_, size_t v_i_200_, lean_object* v_b_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
uint8_t v___x_207_; 
v___x_207_ = lean_usize_dec_lt(v_i_200_, v_sz_199_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v_b_201_);
return v___x_208_;
}
else
{
lean_object* v_fst_209_; lean_object* v_snd_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_258_; 
v_fst_209_ = lean_ctor_get(v_b_201_, 0);
v_snd_210_ = lean_ctor_get(v_b_201_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_b_201_);
if (v_isSharedCheck_258_ == 0)
{
v___x_212_ = v_b_201_;
v_isShared_213_ = v_isSharedCheck_258_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_snd_210_);
lean_inc(v_fst_209_);
lean_dec(v_b_201_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_258_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_a_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; uint8_t v___x_219_; lean_object* v___x_220_; 
v_a_214_ = lean_array_uget_borrowed(v_as_198_, v_i_200_);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_mk_empty_array_with_capacity(v___x_215_);
lean_inc(v_a_214_);
lean_inc_ref(v___x_216_);
v___x_217_ = lean_array_push(v___x_216_, v_a_214_);
v___x_218_ = 0;
v___x_219_ = 1;
v___x_220_ = l_Lean_Meta_mkLambdaFVars(v___x_217_, v_snd_210_, v___x_218_, v___x_207_, v___x_218_, v___x_207_, v___x_219_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_object* v_a_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_a_221_);
lean_dec_ref_known(v___x_220_, 1);
v___x_222_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___closed__1));
v___x_223_ = lean_array_push(v___x_216_, v_a_221_);
v___x_224_ = l_Lean_Meta_mkAppM(v___x_222_, v___x_223_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = l_Lean_Meta_mkForallFVars(v___x_217_, v_fst_209_, v___x_218_, v___x_207_, v___x_207_, v___x_219_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
lean_dec_ref(v___x_217_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref_known(v___x_226_, 1);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v_a_225_);
lean_ctor_set(v___x_212_, 0, v_a_227_);
v___x_229_ = v___x_212_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_a_225_);
v___x_229_ = v_reuseFailAlloc_233_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
size_t v___x_230_; size_t v___x_231_; 
v___x_230_ = ((size_t)1ULL);
v___x_231_ = lean_usize_add(v_i_200_, v___x_230_);
v_i_200_ = v___x_231_;
v_b_201_ = v___x_229_;
goto _start;
}
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_dec(v_a_225_);
lean_del_object(v___x_212_);
v_a_234_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_226_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_226_);
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
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
lean_dec_ref(v___x_217_);
lean_del_object(v___x_212_);
lean_dec(v_fst_209_);
v_a_242_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_224_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_224_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec_ref(v___x_217_);
lean_dec_ref(v___x_216_);
lean_del_object(v___x_212_);
lean_dec(v_fst_209_);
v_a_250_ = lean_ctor_get(v___x_220_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_220_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_220_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_220_);
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
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg___boxed(lean_object* v_as_259_, lean_object* v_sz_260_, lean_object* v_i_261_, lean_object* v_b_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
size_t v_sz_boxed_268_; size_t v_i_boxed_269_; lean_object* v_res_270_; 
v_sz_boxed_268_ = lean_unbox_usize(v_sz_260_);
lean_dec(v_sz_260_);
v_i_boxed_269_ = lean_unbox_usize(v_i_261_);
lean_dec(v_i_261_);
v_res_270_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg(v_as_259_, v_sz_boxed_268_, v_i_boxed_269_, v_b_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec_ref(v_as_259_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0(lean_object* v_vars_271_, uint32_t v_fst_272_, lean_object* v_sorts_273_, lean_object* v_tail_274_, lean_object* v_body_275_, lean_object* v_x_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
lean_inc_ref(v_x_276_);
v___x_284_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_271_, v_fst_272_, v_x_276_);
v___x_285_ = lp_vampireReplay_Vampire_Reconstruct_existsProp(v_sorts_273_, v_tail_274_, v___x_284_, v_body_275_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; uint8_t v___x_291_; uint8_t v___x_292_; lean_object* v___x_293_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_285_, 1);
v___x_287_ = lean_unsigned_to_nat(1u);
v___x_288_ = lean_mk_empty_array_with_capacity(v___x_287_);
v___x_289_ = lean_array_push(v___x_288_, v_x_276_);
v___x_290_ = 0;
v___x_291_ = 1;
v___x_292_ = 1;
v___x_293_ = l_Lean_Meta_mkLambdaFVars(v___x_289_, v_a_286_, v___x_290_, v___x_291_, v___x_290_, v___x_291_, v___x_292_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec_ref(v___x_289_);
return v___x_293_;
}
else
{
lean_dec_ref(v_x_276_);
return v___x_285_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0___boxed(lean_object* v_vars_294_, lean_object* v_fst_295_, lean_object* v_sorts_296_, lean_object* v_tail_297_, lean_object* v_body_298_, lean_object* v_x_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
uint32_t v_fst_17894__boxed_307_; lean_object* v_res_308_; 
v_fst_17894__boxed_307_ = lean_unbox_uint32(v_fst_295_);
lean_dec(v_fst_295_);
v_res_308_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0(v_vars_294_, v_fst_17894__boxed_307_, v_sorts_296_, v_tail_297_, v_body_298_, v_x_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg(lean_object* v_lemma_309_, lean_object* v_fn_310_, lean_object* v_as_311_, size_t v_sz_312_, size_t v_i_313_, lean_object* v_b_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
uint8_t v___x_320_; 
v___x_320_ = lean_usize_dec_lt(v_i_313_, v_sz_312_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
lean_dec(v_fn_310_);
lean_dec(v_lemma_309_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_b_314_);
return v___x_321_;
}
else
{
lean_object* v_a_322_; lean_object* v_fst_323_; lean_object* v_snd_324_; lean_object* v_fst_325_; lean_object* v_snd_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_353_; 
v_a_322_ = lean_array_uget_borrowed(v_as_311_, v_i_313_);
v_fst_323_ = lean_ctor_get(v_a_322_, 0);
v_snd_324_ = lean_ctor_get(v_a_322_, 1);
v_fst_325_ = lean_ctor_get(v_b_314_, 0);
v_snd_326_ = lean_ctor_get(v_b_314_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_b_314_);
if (v_isSharedCheck_353_ == 0)
{
v___x_328_ = v_b_314_;
v_isShared_329_ = v_isSharedCheck_353_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snd_326_);
lean_inc(v_fst_325_);
lean_dec(v_b_314_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_353_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_330_);
lean_inc(v_snd_324_);
v___x_332_ = lean_array_push(v___x_331_, v_snd_324_);
v___x_333_ = lean_array_push(v___x_332_, v_snd_326_);
lean_inc(v_lemma_309_);
v___x_334_ = l_Lean_Meta_mkAppM(v_lemma_309_, v___x_333_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_334_, 1);
v___x_336_ = lean_box(0);
lean_inc(v_fn_310_);
v___x_337_ = l_Lean_Expr_const___override(v_fn_310_, v___x_336_);
lean_inc(v_fst_323_);
v___x_338_ = l_Lean_mkAppB(v___x_337_, v_fst_323_, v_fst_325_);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 1, v_a_335_);
lean_ctor_set(v___x_328_, 0, v___x_338_);
v___x_340_ = v___x_328_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_a_335_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
size_t v___x_341_; size_t v___x_342_; 
v___x_341_ = ((size_t)1ULL);
v___x_342_ = lean_usize_add(v_i_313_, v___x_341_);
v_i_313_ = v___x_342_;
v_b_314_ = v___x_340_;
goto _start;
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
lean_del_object(v___x_328_);
lean_dec(v_fst_325_);
lean_dec(v_fn_310_);
lean_dec(v_lemma_309_);
v_a_345_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_334_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_334_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg___boxed(lean_object* v_lemma_354_, lean_object* v_fn_355_, lean_object* v_as_356_, lean_object* v_sz_357_, lean_object* v_i_358_, lean_object* v_b_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
size_t v_sz_boxed_365_; size_t v_i_boxed_366_; lean_object* v_res_367_; 
v_sz_boxed_365_ = lean_unbox_usize(v_sz_357_);
lean_dec(v_sz_357_);
v_i_boxed_366_ = lean_unbox_usize(v_i_358_);
lean_dec(v_i_358_);
v_res_367_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg(v_lemma_354_, v_fn_355_, v_as_356_, v_sz_boxed_365_, v_i_boxed_366_, v_b_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec_ref(v_as_356_);
return v_res_367_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__0));
v___x_370_ = l_Lean_stringToMessageData(v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0___boxed(lean_object* v_sorts_371_, lean_object* v_skolems_372_, lean_object* v___x_373_, lean_object* v___x_374_, lean_object* v_vars_x27_375_, lean_object* v_locals_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0(v_sorts_371_, v_skolems_372_, v___x_373_, v___x_374_, v_vars_x27_375_, v_locals_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
return v_res_384_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__0));
v___x_396_ = l_Lean_stringToMessageData(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0(lean_object* v_conclusion_397_, lean_object* v_sorts_398_, lean_object* v_skolems_399_, lean_object* v_vars_400_, size_t v_sz_401_, size_t v_i_402_, lean_object* v_bs_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
uint8_t v___x_411_; 
v___x_411_ = lean_usize_dec_lt(v_i_402_, v_sz_401_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; 
lean_dec_ref(v_vars_400_);
lean_dec_ref(v_skolems_399_);
lean_dec_ref(v_sorts_398_);
lean_dec_ref(v_conclusion_397_);
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v_bs_403_);
return v___x_412_;
}
else
{
lean_object* v_v_413_; lean_object* v_fst_414_; lean_object* v_snd_415_; lean_object* v___x_416_; lean_object* v_bs_x27_417_; lean_object* v___y_419_; lean_object* v___x_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_v_413_ = lean_array_uget_borrowed(v_bs_403_, v_i_402_);
v_fst_414_ = lean_ctor_get(v_v_413_, 0);
lean_inc(v_fst_414_);
v_snd_415_ = lean_ctor_get(v_v_413_, 1);
lean_inc(v_snd_415_);
v___x_416_ = lean_unsigned_to_nat(0u);
v_bs_x27_417_ = lean_array_uset(v_bs_403_, v_i_402_, v___x_416_);
lean_inc_ref(v_conclusion_397_);
v___x_433_ = lp_vampireReplay_Vampire_Formula_subformulas(v_conclusion_397_);
v___x_434_ = lean_array_get_size(v___x_433_);
v___x_435_ = lean_nat_dec_lt(v_snd_415_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec_ref(v___x_433_);
lean_dec(v_snd_415_);
lean_dec(v_fst_414_);
v___x_436_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___closed__1);
v___x_437_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_436_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
v___y_419_ = v___x_437_;
goto v___jp_418_;
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = lean_array_fget(v___x_433_, v_snd_415_);
lean_dec(v_snd_415_);
lean_dec_ref(v___x_433_);
lean_inc_ref(v_vars_400_);
lean_inc_ref(v_skolems_399_);
lean_inc_ref(v_sorts_398_);
v___x_439_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(v_sorts_398_, v_skolems_399_, v_vars_400_, v_fst_414_, v___x_438_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
v___y_419_ = v___x_439_;
goto v___jp_418_;
}
v___jp_418_:
{
if (lean_obj_tag(v___y_419_) == 0)
{
lean_object* v_a_420_; size_t v___x_421_; size_t v___x_422_; lean_object* v___x_423_; 
v_a_420_ = lean_ctor_get(v___y_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___y_419_, 1);
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_add(v_i_402_, v___x_421_);
v___x_423_ = lean_array_uset(v_bs_x27_417_, v_i_402_, v_a_420_);
v_i_402_ = v___x_422_;
v_bs_403_ = v___x_423_;
goto _start;
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec_ref(v_bs_x27_417_);
lean_dec_ref(v_vars_400_);
lean_dec_ref(v_skolems_399_);
lean_dec_ref(v_sorts_398_);
lean_dec_ref(v_conclusion_397_);
v_a_425_ = lean_ctor_get(v___y_419_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___y_419_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___y_419_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___y_419_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = l_Lean_instInhabitedExpr;
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__1));
v___x_444_ = l_Lean_stringToMessageData(v___x_443_);
return v___x_444_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__3));
v___x_447_ = l_Lean_stringToMessageData(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction(lean_object* v_sorts_448_, lean_object* v_skolems_449_, lean_object* v_vars_450_, lean_object* v_premise_451_, lean_object* v_conclusion_452_, lean_object* v_fn_453_, lean_object* v_unit_454_, lean_object* v_lemma_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___x_559_; 
v___x_559_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_conclusion_452_, v_a_458_, v_a_459_, v_a_460_, v_a_461_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; uint8_t v___x_561_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v___x_559_, 1);
v___x_561_ = lean_unbox(v_a_560_);
lean_dec(v_a_560_);
switch(v___x_561_)
{
case 1:
{
v___y_538_ = v_a_456_;
v___y_539_ = v_a_457_;
v___y_540_ = v_a_458_;
v___y_541_ = v_a_459_;
v___y_542_ = v_a_460_;
v___y_543_ = v_a_461_;
goto v___jp_537_;
}
case 2:
{
v___y_538_ = v_a_456_;
v___y_539_ = v_a_457_;
v___y_540_ = v_a_458_;
v___y_541_ = v_a_459_;
v___y_542_ = v_a_460_;
v___y_543_ = v_a_461_;
goto v___jp_537_;
}
default: 
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__4);
v___x_563_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_562_, v_a_458_, v_a_459_, v_a_460_, v_a_461_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_dec_ref_known(v___x_563_, 1);
v___y_538_ = v_a_456_;
v___y_539_ = v_a_457_;
v___y_540_ = v_a_458_;
v___y_541_ = v_a_459_;
v___y_542_ = v_a_460_;
v___y_543_ = v_a_461_;
goto v___jp_537_;
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec(v_lemma_455_);
lean_dec(v_unit_454_);
lean_dec(v_fn_453_);
lean_dec_ref(v_conclusion_452_);
lean_dec_ref(v_premise_451_);
lean_dec_ref(v_vars_450_);
lean_dec_ref(v_skolems_449_);
lean_dec_ref(v_sorts_448_);
v_a_564_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_563_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_563_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec(v_lemma_455_);
lean_dec(v_unit_454_);
lean_dec(v_fn_453_);
lean_dec_ref(v_conclusion_452_);
lean_dec_ref(v_premise_451_);
lean_dec_ref(v_vars_450_);
lean_dec_ref(v_skolems_449_);
lean_dec_ref(v_sorts_448_);
v_a_572_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_559_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_559_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
v___jp_463_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; size_t v_sz_473_; size_t v___x_474_; lean_object* v___x_475_; 
v___x_470_ = lp_vampireReplay_Vampire_Formula_subformulas(v_premise_451_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Array_zipIdx___redArg(v___x_470_, v___x_471_);
v_sz_473_ = lean_array_size(v___x_472_);
v___x_474_ = ((size_t)0ULL);
v___x_475_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0(v_conclusion_452_, v_sorts_448_, v_skolems_449_, v_vars_450_, v_sz_473_, v___x_474_, v___x_472_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_475_, 1);
v___x_477_ = lean_array_get_size(v_a_476_);
v___x_478_ = lean_nat_dec_eq(v___x_477_, v___x_471_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; size_t v_sz_485_; lean_object* v___x_486_; 
lean_dec(v_unit_454_);
v___x_479_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__0);
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_sub(v___x_477_, v___x_480_);
v___x_482_ = lean_array_get(v___x_479_, v_a_476_, v___x_481_);
lean_dec(v___x_481_);
v___x_483_ = lean_array_pop(v_a_476_);
v___x_484_ = l_Array_reverse___redArg(v___x_483_);
v_sz_485_ = lean_array_size(v___x_484_);
v___x_486_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg(v_lemma_455_, v_fn_453_, v___x_484_, v_sz_485_, v___x_474_, v___x_482_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
lean_dec_ref(v___x_484_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_503_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_503_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_503_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_503_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v_fst_491_; lean_object* v_snd_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_502_; 
v_fst_491_ = lean_ctor_get(v_a_487_, 0);
v_snd_492_ = lean_ctor_get(v_a_487_, 1);
v_isSharedCheck_502_ = !lean_is_exclusive(v_a_487_);
if (v_isSharedCheck_502_ == 0)
{
v___x_494_ = v_a_487_;
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_snd_492_);
lean_inc(v_fst_491_);
lean_dec(v_a_487_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_502_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_fst_491_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_snd_492_);
v___x_497_ = v_reuseFailAlloc_501_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
lean_object* v___x_499_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v___x_497_);
v___x_499_ = v___x_489_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
else
{
return v___x_486_;
}
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
lean_dec(v_a_476_);
lean_dec(v_lemma_455_);
lean_dec(v_fn_453_);
v___x_504_ = lean_box(0);
v___x_505_ = l_Lean_Expr_const___override(v_unit_454_, v___x_504_);
v___x_506_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg___closed__14));
lean_inc_ref(v___x_505_);
v___x_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_507_, 0, v___x_505_);
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_mk_empty_array_with_capacity(v___x_508_);
v___x_510_ = lean_array_push(v___x_509_, v___x_507_);
v___x_511_ = l_Lean_Meta_mkAppOptM(v___x_506_, v___x_510_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_520_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_520_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_520_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_520_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_505_);
lean_ctor_set(v___x_516_, 1, v_a_512_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v___x_516_);
v___x_518_ = v___x_514_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec_ref(v___x_505_);
v_a_521_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_511_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_511_);
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
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec(v_lemma_455_);
lean_dec(v_unit_454_);
lean_dec(v_fn_453_);
v_a_529_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_475_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_475_);
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
v___jp_537_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
lean_inc_ref(v_premise_451_);
v___x_544_ = lp_vampireReplay_Vampire_Formula_subformulas(v_premise_451_);
v___x_545_ = lean_array_get_size(v___x_544_);
lean_dec_ref(v___x_544_);
lean_inc_ref(v_conclusion_452_);
v___x_546_ = lp_vampireReplay_Vampire_Formula_subformulas(v_conclusion_452_);
v___x_547_ = lean_array_get_size(v___x_546_);
lean_dec_ref(v___x_546_);
v___x_548_ = lean_nat_dec_eq(v___x_545_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___closed__2);
v___x_550_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_549_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_dec_ref_known(v___x_550_, 1);
v___y_464_ = v___y_538_;
v___y_465_ = v___y_539_;
v___y_466_ = v___y_540_;
v___y_467_ = v___y_541_;
v___y_468_ = v___y_542_;
v___y_469_ = v___y_543_;
goto v___jp_463_;
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
lean_dec(v_lemma_455_);
lean_dec(v_unit_454_);
lean_dec(v_fn_453_);
lean_dec_ref(v_conclusion_452_);
lean_dec_ref(v_premise_451_);
lean_dec_ref(v_vars_450_);
lean_dec_ref(v_skolems_449_);
lean_dec_ref(v_sorts_448_);
v_a_551_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_550_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_550_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
else
{
v___y_464_ = v___y_538_;
v___y_465_ = v___y_539_;
v___y_466_ = v___y_540_;
v___y_467_ = v___y_541_;
v___y_468_ = v___y_542_;
v___y_469_ = v___y_543_;
goto v___jp_463_;
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__14));
v___x_591_ = l_Lean_stringToMessageData(v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel(lean_object* v_sorts_597_, lean_object* v_skolems_598_, lean_object* v_conclusion_599_, lean_object* v_bound_600_, lean_object* v_vars_601_, lean_object* v_body_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
if (lean_obj_tag(v_bound_600_) == 0)
{
lean_object* v___x_610_; 
v___x_610_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(v_sorts_597_, v_skolems_598_, v_vars_601_, v_body_602_, v_conclusion_599_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
return v___x_610_;
}
else
{
lean_object* v_head_611_; lean_object* v_tail_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; lean_object* v___x_615_; 
v_head_611_ = lean_ctor_get(v_bound_600_, 0);
lean_inc(v_head_611_);
v_tail_612_ = lean_ctor_get(v_bound_600_, 1);
lean_inc(v_tail_612_);
lean_dec_ref_known(v_bound_600_, 2);
v_fst_613_ = lean_ctor_get(v_head_611_, 0);
lean_inc(v_fst_613_);
v_snd_614_ = lean_ctor_get(v_head_611_, 1);
lean_inc(v_snd_614_);
lean_dec(v_head_611_);
v___x_615_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_614_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___f_617_; lean_object* v___x_618_; uint32_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc_n(v_a_616_, 2);
lean_dec_ref_known(v___x_615_, 1);
lean_inc_ref(v_body_602_);
lean_inc(v_tail_612_);
lean_inc_ref(v_sorts_597_);
lean_inc(v_fst_613_);
lean_inc_ref(v_vars_601_);
v___f_617_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___lam__0___boxed), 13, 5);
lean_closure_set(v___f_617_, 0, v_vars_601_);
lean_closure_set(v___f_617_, 1, v_fst_613_);
lean_closure_set(v___f_617_, 2, v_sorts_597_);
lean_closure_set(v___f_617_, 3, v_tail_612_);
lean_closure_set(v___f_617_, 4, v_body_602_);
v___x_618_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__0));
v___x_619_ = lean_unbox_uint32(v_fst_613_);
v___x_620_ = lean_uint32_to_nat(v___x_619_);
v___x_621_ = l_Nat_reprFast(v___x_620_);
v___x_622_ = lean_string_append(v___x_618_, v___x_621_);
lean_dec_ref(v___x_621_);
v___x_623_ = lean_box(0);
v___x_624_ = l_Lean_Name_str___override(v___x_623_, v___x_622_);
v___x_625_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_624_, v_a_616_, v___f_617_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v_a_626_; lean_object* v___x_627_; 
v_a_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_a_616_, v_a_626_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v_a_628_; lean_object* v_fst_629_; lean_object* v_snd_630_; uint32_t v___x_631_; lean_object* v___x_632_; 
v_a_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_a_628_);
lean_dec_ref_known(v___x_627_, 1);
v_fst_629_ = lean_ctor_get(v_a_628_, 0);
lean_inc_n(v_fst_629_, 2);
v_snd_630_ = lean_ctor_get(v_a_628_, 1);
lean_inc(v_snd_630_);
lean_dec(v_a_628_);
v___x_631_ = lean_unbox_uint32(v_fst_613_);
v___x_632_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolem(v_skolems_598_, v_vars_601_, v___x_631_, v_fst_629_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_632_) == 0)
{
uint32_t v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec_ref_known(v___x_632_, 1);
v___x_633_ = lean_unbox_uint32(v_fst_613_);
lean_dec(v_fst_613_);
v___x_634_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_601_, v___x_633_, v_fst_629_);
v___x_635_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel(v_sorts_597_, v_skolems_598_, v_conclusion_599_, v_tail_612_, v___x_634_, v_body_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v_fst_637_; lean_object* v_snd_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_667_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v_fst_637_ = lean_ctor_get(v_a_636_, 0);
v_snd_638_ = lean_ctor_get(v_a_636_, 1);
v_isSharedCheck_667_ = !lean_is_exclusive(v_a_636_);
if (v_isSharedCheck_667_ == 0)
{
v___x_640_ = v_a_636_;
v_isShared_641_ = v_isSharedCheck_667_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_snd_638_);
lean_inc(v_fst_637_);
lean_dec(v_a_636_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_667_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_642_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___closed__2));
v___x_643_ = lean_unsigned_to_nat(2u);
v___x_644_ = lean_mk_empty_array_with_capacity(v___x_643_);
v___x_645_ = lean_array_push(v___x_644_, v_snd_630_);
v___x_646_ = lean_array_push(v___x_645_, v_snd_638_);
v___x_647_ = l_Lean_Meta_mkAppM(v___x_642_, v___x_646_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_658_; 
v_a_648_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_658_ == 0)
{
v___x_650_ = v___x_647_;
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_647_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_658_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 1, v_a_648_);
v___x_653_ = v___x_640_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_fst_637_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_a_648_);
v___x_653_ = v_reuseFailAlloc_657_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_655_; 
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_653_);
v___x_655_ = v___x_650_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_del_object(v___x_640_);
lean_dec(v_fst_637_);
v_a_659_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_647_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_647_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
}
else
{
lean_dec(v_snd_630_);
return v___x_635_;
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v_snd_630_);
lean_dec(v_fst_629_);
lean_dec(v_fst_613_);
lean_dec(v_tail_612_);
lean_dec_ref(v_body_602_);
lean_dec_ref(v_vars_601_);
lean_dec_ref(v_conclusion_599_);
lean_dec_ref(v_skolems_598_);
lean_dec_ref(v_sorts_597_);
v_a_668_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_632_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_632_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
else
{
lean_dec(v_fst_613_);
lean_dec(v_tail_612_);
lean_dec_ref(v_body_602_);
lean_dec_ref(v_vars_601_);
lean_dec_ref(v_conclusion_599_);
lean_dec_ref(v_skolems_598_);
lean_dec_ref(v_sorts_597_);
return v___x_627_;
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
lean_dec(v_a_616_);
lean_dec(v_fst_613_);
lean_dec(v_tail_612_);
lean_dec_ref(v_body_602_);
lean_dec_ref(v_vars_601_);
lean_dec_ref(v_conclusion_599_);
lean_dec_ref(v_skolems_598_);
lean_dec_ref(v_sorts_597_);
v_a_676_ = lean_ctor_get(v___x_625_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_625_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_625_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_625_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec(v_fst_613_);
lean_dec(v_tail_612_);
lean_dec_ref(v_body_602_);
lean_dec_ref(v_vars_601_);
lean_dec_ref(v_conclusion_599_);
lean_dec_ref(v_skolems_598_);
lean_dec_ref(v_sorts_597_);
v_a_684_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_615_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_615_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(lean_object* v_sorts_692_, lean_object* v_skolems_693_, lean_object* v_vars_694_, lean_object* v_premise_695_, lean_object* v_conclusion_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___x_727_; 
v___x_727_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_premise_695_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v_a_728_; uint8_t v___x_729_; 
v_a_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___x_727_, 1);
v___x_729_ = lean_unbox(v_a_728_);
lean_dec(v_a_728_);
switch(v___x_729_)
{
case 1:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_730_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__3));
v___x_731_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__5));
v___x_732_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__7));
v___x_733_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction(v_sorts_692_, v_skolems_693_, v_vars_694_, v_premise_695_, v_conclusion_696_, v___x_730_, v___x_731_, v___x_732_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_733_;
}
case 2:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__9));
v___x_735_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__11));
v___x_736_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__13));
v___x_737_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction(v_sorts_692_, v_skolems_693_, v_vars_694_, v_premise_695_, v_conclusion_696_, v___x_734_, v___x_735_, v___x_736_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_737_;
}
case 7:
{
lean_object* v___x_738_; 
v___x_738_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_conclusion_696_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; uint8_t v___x_740_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
v___x_740_ = lean_unbox(v_a_739_);
lean_dec(v_a_739_);
if (v___x_740_ == 7)
{
v___y_705_ = v_a_697_;
v___y_706_ = v_a_698_;
v___y_707_ = v_a_699_;
v___y_708_ = v_a_700_;
v___y_709_ = v_a_701_;
v___y_710_ = v_a_702_;
goto v___jp_704_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__15);
v___x_742_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_741_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_dec_ref_known(v___x_742_, 1);
v___y_705_ = v_a_697_;
v___y_706_ = v_a_698_;
v___y_707_ = v_a_699_;
v___y_708_ = v_a_700_;
v___y_709_ = v_a_701_;
v___y_710_ = v_a_702_;
goto v___jp_704_;
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v_a_743_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_742_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_742_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v_a_751_ = lean_ctor_get(v___x_738_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_738_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_738_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_738_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
case 8:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
lean_inc_ref(v_premise_695_);
v___x_759_ = lp_vampireReplay_Vampire_Formula_subformulas(v_premise_695_);
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = lean_array_get_size(v___x_759_);
v___x_762_ = lean_nat_dec_lt(v___x_760_, v___x_761_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; 
lean_dec_ref(v___x_759_);
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v___x_763_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1);
v___x_764_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_763_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_764_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_765_ = lean_array_fget(v___x_759_, v___x_760_);
lean_dec_ref(v___x_759_);
v___x_766_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars(v_sorts_692_, v_premise_695_);
v___x_767_ = lean_array_to_list(v___x_766_);
v___x_768_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel(v_sorts_692_, v_skolems_693_, v_conclusion_696_, v___x_767_, v_vars_694_, v___x_765_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
return v___x_768_;
}
}
default: 
{
lean_object* v___x_769_; 
lean_dec_ref(v_skolems_693_);
lean_inc_ref(v_vars_694_);
lean_inc_ref(v_sorts_692_);
v___x_769_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_692_, v_vars_694_, v_premise_695_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
v___x_771_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_692_, v_vars_694_, v_conclusion_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc_n(v_a_772_, 2);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Skolem_0__Vampire_Reconstruct_Skolem_literalIff___redArg(v_a_770_, v_a_772_, v_a_699_, v_a_700_, v_a_701_, v_a_702_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_782_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_782_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_782_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v_a_772_);
lean_ctor_set(v___x_778_, 1, v_a_774_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_778_);
v___x_780_ = v___x_776_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_dec(v_a_772_);
v_a_783_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_773_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_773_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
else
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_798_; 
lean_dec(v_a_770_);
v_a_791_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_798_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_798_ == 0)
{
v___x_793_ = v___x_771_;
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_771_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_798_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v___x_796_; 
if (v_isShared_794_ == 0)
{
v___x_796_ = v___x_793_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_a_791_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_sorts_692_);
v_a_799_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_769_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_769_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v_a_807_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_727_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_727_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
v___jp_704_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
lean_inc_ref(v_premise_695_);
v___x_711_ = lp_vampireReplay_Vampire_Formula_subformulas(v_premise_695_);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_array_get_size(v___x_711_);
v___x_714_ = lean_nat_dec_lt(v___x_712_, v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec_ref(v___x_711_);
lean_dec_ref(v_conclusion_696_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v___x_715_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1);
v___x_716_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_715_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
return v___x_716_;
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_717_ = lp_vampireReplay_Vampire_Formula_subformulas(v_conclusion_696_);
v___x_718_ = lean_array_get_size(v___x_717_);
v___x_719_ = lean_nat_dec_lt(v___x_712_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec_ref(v___x_717_);
lean_dec_ref(v___x_711_);
lean_dec_ref(v_premise_695_);
lean_dec_ref(v_vars_694_);
lean_dec_ref(v_skolems_693_);
lean_dec_ref(v_sorts_692_);
v___x_720_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___closed__1);
v___x_721_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_720_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
return v___x_721_;
}
else
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___f_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_722_ = lean_array_fget(v___x_711_, v___x_712_);
lean_dec_ref(v___x_711_);
v___x_723_ = lean_array_fget(v___x_717_, v___x_712_);
lean_dec_ref(v___x_717_);
lean_inc_ref(v_sorts_692_);
v___f_724_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0___boxed), 13, 4);
lean_closure_set(v___f_724_, 0, v_sorts_692_);
lean_closure_set(v___f_724_, 1, v_skolems_693_);
lean_closure_set(v___f_724_, 2, v___x_722_);
lean_closure_set(v___f_724_, 3, v___x_723_);
v___x_725_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_boundVars(v_sorts_692_, v_premise_695_);
lean_dec_ref(v_sorts_692_);
v___x_726_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_725_, v_vars_694_, v___f_724_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___lam__0(lean_object* v_sorts_815_, lean_object* v_skolems_816_, lean_object* v___x_817_, lean_object* v___x_818_, lean_object* v_vars_x27_819_, lean_object* v_locals_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(v_sorts_815_, v_skolems_816_, v_vars_x27_819_, v___x_817_, v___x_818_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_830_; size_t v_sz_831_; size_t v___x_832_; lean_object* v___x_833_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
v___x_830_ = l_Array_reverse___redArg(v_locals_820_);
v_sz_831_ = lean_array_size(v___x_830_);
v___x_832_ = ((size_t)0ULL);
v___x_833_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg(v___x_830_, v_sz_831_, v___x_832_, v_a_829_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec_ref(v___x_830_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_850_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_850_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_850_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_850_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v_fst_838_; lean_object* v_snd_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_849_; 
v_fst_838_ = lean_ctor_get(v_a_834_, 0);
v_snd_839_ = lean_ctor_get(v_a_834_, 1);
v_isSharedCheck_849_ = !lean_is_exclusive(v_a_834_);
if (v_isSharedCheck_849_ == 0)
{
v___x_841_ = v_a_834_;
v_isShared_842_ = v_isSharedCheck_849_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_snd_839_);
lean_inc(v_fst_838_);
lean_dec(v_a_834_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_849_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_fst_838_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_snd_839_);
v___x_844_ = v_reuseFailAlloc_848_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_846_; 
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 0, v___x_844_);
v___x_846_ = v___x_836_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
else
{
return v___x_833_;
}
}
else
{
lean_dec_ref(v_locals_820_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0___boxed(lean_object* v_conclusion_851_, lean_object* v_sorts_852_, lean_object* v_skolems_853_, lean_object* v_vars_854_, lean_object* v_sz_855_, lean_object* v_i_856_, lean_object* v_bs_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
size_t v_sz_boxed_865_; size_t v_i_boxed_866_; lean_object* v_res_867_; 
v_sz_boxed_865_ = lean_unbox_usize(v_sz_855_);
lean_dec(v_sz_855_);
v_i_boxed_866_ = lean_unbox_usize(v_i_856_);
lean_dec(v_i_856_);
v_res_867_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__0(v_conclusion_851_, v_sorts_852_, v_skolems_853_, v_vars_854_, v_sz_boxed_865_, v_i_boxed_866_, v_bs_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel___boxed(lean_object* v_sorts_868_, lean_object* v_skolems_869_, lean_object* v_conclusion_870_, lean_object* v_bound_871_, lean_object* v_vars_872_, lean_object* v_body_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_peel(v_sorts_868_, v_skolems_869_, v_conclusion_870_, v_bound_871_, v_vars_872_, v_body_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_, v_a_878_, v_a_879_);
lean_dec(v_a_879_);
lean_dec_ref(v_a_878_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction___boxed(lean_object* v_sorts_882_, lean_object* v_skolems_883_, lean_object* v_vars_884_, lean_object* v_premise_885_, lean_object* v_conclusion_886_, lean_object* v_fn_887_, lean_object* v_unit_888_, lean_object* v_lemma_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk_congrJunction(v_sorts_882_, v_skolems_883_, v_vars_884_, v_premise_885_, v_conclusion_886_, v_fn_887_, v_unit_888_, v_lemma_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_walk___boxed(lean_object* v_sorts_898_, lean_object* v_skolems_899_, lean_object* v_vars_900_, lean_object* v_premise_901_, lean_object* v_conclusion_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(v_sorts_898_, v_skolems_899_, v_vars_900_, v_premise_901_, v_conclusion_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_);
lean_dec(v_a_908_);
lean_dec_ref(v_a_907_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1(lean_object* v_lemma_911_, lean_object* v_fn_912_, lean_object* v_as_913_, size_t v_sz_914_, size_t v_i_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___redArg(v_lemma_911_, v_fn_912_, v_as_913_, v_sz_914_, v_i_915_, v_b_916_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1___boxed(lean_object* v_lemma_925_, lean_object* v_fn_926_, lean_object* v_as_927_, lean_object* v_sz_928_, lean_object* v_i_929_, lean_object* v_b_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
size_t v_sz_boxed_938_; size_t v_i_boxed_939_; lean_object* v_res_940_; 
v_sz_boxed_938_ = lean_unbox_usize(v_sz_928_);
lean_dec(v_sz_928_);
v_i_boxed_939_ = lean_unbox_usize(v_i_929_);
lean_dec(v_i_929_);
v_res_940_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_congrJunction_spec__1(v_lemma_925_, v_fn_926_, v_as_927_, v_sz_boxed_938_, v_i_boxed_939_, v_b_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec_ref(v_as_927_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3(lean_object* v_as_941_, size_t v_sz_942_, size_t v_i_943_, lean_object* v_b_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___redArg(v_as_941_, v_sz_942_, v_i_943_, v_b_944_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3___boxed(lean_object* v_as_953_, lean_object* v_sz_954_, lean_object* v_i_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
size_t v_sz_boxed_964_; size_t v_i_boxed_965_; lean_object* v_res_966_; 
v_sz_boxed_964_ = lean_unbox_usize(v_sz_954_);
lean_dec(v_sz_954_);
v_i_boxed_965_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_res_966_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Skolem_walk_spec__3(v_as_953_, v_sz_boxed_964_, v_i_boxed_965_, v_b_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec_ref(v_as_953_);
return v_res_966_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__0));
v___x_969_ = l_Lean_stringToMessageData(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__2));
v___x_972_ = l_Lean_stringToMessageData(v___x_971_);
return v___x_972_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_973_ = lean_box(0);
v___x_974_ = lean_unsigned_to_nat(16u);
v___x_975_ = lean_mk_array(v___x_974_, v___x_973_);
return v___x_975_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_976_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__4);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v___x_976_);
return v___x_978_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9(void){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_984_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__8));
v___x_985_ = l_Lean_stringToMessageData(v___x_984_);
return v___x_985_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11(void){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_987_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__10));
v___x_988_ = l_Lean_stringToMessageData(v___x_987_);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize(lean_object* v_step_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_unit_997_; lean_object* v_premises_998_; lean_object* v___x_999_; lean_object* v___x_1000_; uint8_t v___x_1001_; 
v_unit_997_ = lean_ctor_get(v_step_989_, 0);
lean_inc_ref(v_unit_997_);
v_premises_998_ = lean_ctor_get(v_step_989_, 1);
lean_inc_ref(v_premises_998_);
lean_dec_ref(v_step_989_);
v___x_999_ = lean_array_get_size(v_premises_998_);
v___x_1000_ = lean_unsigned_to_nat(1u);
v___x_1001_ = lean_nat_dec_eq(v___x_999_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec_ref(v_premises_998_);
lean_dec_ref(v_unit_997_);
v___x_1002_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__1);
v___x_1003_ = l_Nat_reprFast(v___x_999_);
v___x_1004_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
v___x_1005_ = l_Lean_MessageData_ofFormat(v___x_1004_);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1002_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1006_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1007_;
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v_fst_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_array_fget(v_premises_998_, v___x_1008_);
lean_dec_ref(v_premises_998_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_fst_1010_);
lean_dec(v___x_1009_);
lean_inc_ref(v_unit_997_);
v___x_1011_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_997_);
v___x_1012_ = lean_array_get_size(v___x_1011_);
v___x_1013_ = lean_nat_dec_lt(v___x_1008_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec_ref(v___x_1011_);
lean_dec(v_fst_1010_);
lean_dec_ref(v_unit_997_);
v___x_1014_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__3);
v___x_1015_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1014_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = lean_array_fget(v___x_1011_, v___x_1008_);
lean_dec_ref(v___x_1011_);
lean_inc(v___x_1016_);
v___x_1017_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_1016_);
if (lean_obj_tag(v___x_1017_) == 1)
{
lean_object* v_val_1018_; lean_object* v___x_1019_; 
v_val_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_val_1018_);
lean_dec_ref_known(v___x_1017_, 1);
lean_inc_ref(v_unit_997_);
v___x_1019_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_unit_997_);
if (lean_obj_tag(v___x_1019_) == 1)
{
lean_object* v_val_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v_skolems_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v_sorts_1027_; lean_object* v___x_1028_; 
v_val_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_val_1020_);
lean_dec_ref_known(v___x_1019_, 1);
lean_inc_ref(v_unit_997_);
v___x_1021_ = lp_vampireReplay_Vampire_Unit_skolems(v_unit_997_);
v___x_1022_ = lean_array_to_list(v___x_1021_);
v___x_1023_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__5);
v_skolems_1024_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_1022_, v___x_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_1016_);
v___x_1026_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_997_);
v_sorts_1027_ = l_Array_append___redArg(v___x_1025_, v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_walk(v_sorts_1027_, v_skolems_1024_, v___x_1023_, v_val_1018_, v_val_1020_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
if (lean_obj_tag(v___x_1028_) == 0)
{
lean_object* v_a_1029_; lean_object* v_snd_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref_known(v___x_1028_, 1);
v_snd_1030_ = lean_ctor_get(v_a_1029_, 1);
lean_inc(v_snd_1030_);
lean_dec(v_a_1029_);
v___x_1031_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__7));
v___x_1032_ = lean_unsigned_to_nat(2u);
v___x_1033_ = lean_mk_empty_array_with_capacity(v___x_1032_);
v___x_1034_ = lean_array_push(v___x_1033_, v_snd_1030_);
v___x_1035_ = lean_array_push(v___x_1034_, v_fst_1010_);
v___x_1036_ = l_Lean_Meta_mkAppM(v___x_1031_, v___x_1035_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1036_;
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec(v_fst_1010_);
v_a_1037_ = lean_ctor_get(v___x_1028_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1028_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1028_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1028_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
lean_dec(v___x_1019_);
lean_dec(v_val_1018_);
lean_dec(v___x_1016_);
lean_dec(v_fst_1010_);
lean_dec_ref(v_unit_997_);
v___x_1045_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__9);
v___x_1046_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1045_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1046_;
}
}
else
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec(v___x_1017_);
lean_dec(v___x_1016_);
lean_dec(v_fst_1010_);
lean_dec_ref(v_unit_997_);
v___x_1047_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11, &lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11_once, _init_lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___closed__11);
v___x_1048_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1047_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1048_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize___boxed(lean_object* v_step_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = lp_vampireReplay_Vampire_Reconstruct_Skolem_skolemize(v_step_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
lean_dec(v_a_1051_);
lean_dec_ref(v_a_1050_);
return v_res_1057_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Skolem(uint8_t builtin) {
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
