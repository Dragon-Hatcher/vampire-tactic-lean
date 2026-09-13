// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Splitting
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_symbol_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lp_vampireReplay_Vampire_Literal_polarity(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_isGoalSymbol___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_args(lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_render(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "the name `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "` is applied to "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", not a variable"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "a literal with an unknown predicate"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__0_value),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__0_value)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__1_value)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__2_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "a general splitting component introduces no name"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "a general splitting component is not a clause"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0(uint32_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__1_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "a missing literal"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "a literal of the half is not one of the clause's"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "the clause does not hold the name the splitting introduced"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(138, 250, 26, 166, 192, 110, 127, 170)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__5_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(94, 178, 144, 142, 106, 224, 229, 213)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__2_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__3_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "the literal"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "\nis neither of the half the name stands against nor of the conclusion"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "the conclusion does not deny the name `"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "a general splitting should have two premises, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "a general splitting should have two premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "a general splitting is not a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "a general splitting is not given a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__4));
v___x_9_ = l_Lean_stringToMessageData(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg(lean_object* v___x_10_, size_t v_sz_11_, size_t v_i_12_, lean_object* v_bs_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = lean_usize_dec_lt(v_i_12_, v_sz_11_);
if (v___x_19_ == 0)
{
lean_object* v___x_20_; 
lean_dec_ref(v___x_10_);
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v_bs_13_);
return v___x_20_;
}
else
{
lean_object* v_v_21_; lean_object* v___x_22_; lean_object* v_bs_x27_23_; uint8_t v___x_31_; 
v_v_21_ = lean_array_uget(v_bs_13_, v_i_12_);
v___x_22_ = lean_unsigned_to_nat(0u);
v_bs_x27_23_ = lean_array_uset(v_bs_13_, v_i_12_, v___x_22_);
v___x_31_ = lp_vampireReplay_Vampire_Term_isVar(v_v_21_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_32_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__1);
lean_inc_ref(v___x_10_);
v___x_33_ = l_Lean_stringToMessageData(v___x_10_);
v___x_34_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_32_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__3);
v___x_36_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_34_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
lean_inc(v_v_21_);
v___x_37_ = lp_vampireReplay_Vampire_Term_render(v_v_21_);
v___x_38_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
v___x_39_ = l_Lean_MessageData_ofFormat(v___x_38_);
v___x_40_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_36_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___closed__5);
v___x_42_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_40_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_42_, v___y_14_, v___y_15_, v___y_16_, v___y_17_);
if (lean_obj_tag(v___x_43_) == 0)
{
lean_dec_ref_known(v___x_43_, 1);
goto v___jp_24_;
}
else
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_51_; 
lean_dec_ref(v_bs_x27_23_);
lean_dec(v_v_21_);
lean_dec_ref(v___x_10_);
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_51_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_51_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_51_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_a_44_);
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
goto v___jp_24_;
}
v___jp_24_:
{
uint32_t v___x_25_; size_t v___x_26_; size_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_25_ = lp_vampireReplay_Vampire_Term_var(v_v_21_);
lean_dec(v_v_21_);
v___x_26_ = ((size_t)1ULL);
v___x_27_ = lean_usize_add(v_i_12_, v___x_26_);
v___x_28_ = lean_box_uint32(v___x_25_);
v___x_29_ = lean_array_uset(v_bs_x27_23_, v_i_12_, v___x_28_);
v_i_12_ = v___x_27_;
v_bs_13_ = v___x_29_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg___boxed(lean_object* v___x_52_, lean_object* v_sz_53_, lean_object* v_i_54_, lean_object* v_bs_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
size_t v_sz_boxed_61_; size_t v_i_boxed_62_; lean_object* v_res_63_; 
v_sz_boxed_61_ = lean_unbox_usize(v_sz_53_);
lean_dec(v_sz_53_);
v_i_boxed_62_ = lean_unbox_usize(v_i_54_);
lean_dec(v_i_54_);
v_res_63_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg(v___x_52_, v_sz_boxed_61_, v_i_boxed_62_, v_bs_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec_ref(v___y_56_);
return v_res_63_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__0));
v___x_66_ = l_Lean_stringToMessageData(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1(lean_object* v_as_67_, size_t v_sz_68_, size_t v_i_69_, lean_object* v_b_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_a_79_; uint8_t v___x_83_; 
v___x_83_ = lean_usize_dec_lt(v_i_69_, v_sz_68_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v_b_70_);
return v___x_84_;
}
else
{
lean_object* v_snd_85_; lean_object* v_fst_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_158_; 
v_snd_85_ = lean_ctor_get(v_b_70_, 1);
v_fst_86_ = lean_ctor_get(v_b_70_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v_b_70_);
if (v_isSharedCheck_158_ == 0)
{
v___x_88_ = v_b_70_;
v_isShared_89_ = v_isSharedCheck_158_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_snd_85_);
lean_inc(v_fst_86_);
lean_dec(v_b_70_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_158_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v_fst_90_; lean_object* v_snd_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_157_; 
v_fst_90_ = lean_ctor_get(v_snd_85_, 0);
v_snd_91_ = lean_ctor_get(v_snd_85_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v_snd_85_);
if (v_isSharedCheck_157_ == 0)
{
v___x_93_ = v_snd_85_;
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_snd_91_);
lean_inc(v_fst_90_);
lean_dec(v_snd_85_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_a_95_; lean_object* v___x_96_; 
v_a_95_ = lean_array_uget_borrowed(v_as_67_, v_i_69_);
v___x_96_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_a_95_);
if (lean_obj_tag(v___x_96_) == 1)
{
lean_object* v_val_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_140_; 
v_val_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_140_ == 0)
{
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_140_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_val_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_140_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v_name_101_; lean_object* v___x_102_; 
v_name_101_ = lean_ctor_get(v_val_97_, 0);
lean_inc_ref(v_name_101_);
lean_dec(v_val_97_);
v___x_102_ = lp_vampireReplay_Vampire_Reconstruct_isGoalSymbol___redArg(v_name_101_, v___y_71_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
if (lean_obj_tag(v_fst_86_) == 0)
{
uint8_t v___x_112_; 
v___x_112_ = lean_unbox(v_a_103_);
lean_dec(v_a_103_);
if (v___x_112_ == 0)
{
uint8_t v___x_113_; 
v___x_113_ = lp_vampireReplay_Vampire_Literal_polarity(v_a_95_);
if (v___x_113_ == 0)
{
lean_dec_ref(v_name_101_);
lean_del_object(v___x_99_);
goto v___jp_104_;
}
else
{
lean_object* v___x_114_; size_t v_sz_115_; size_t v___x_116_; lean_object* v___x_117_; 
lean_del_object(v___x_93_);
lean_dec(v_fst_90_);
lean_del_object(v___x_88_);
lean_inc(v_a_95_);
v___x_114_ = lp_vampireReplay_Vampire_Literal_args(v_a_95_);
v_sz_115_ = lean_array_size(v___x_114_);
v___x_116_ = ((size_t)0ULL);
lean_inc_ref(v_name_101_);
v___x_117_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg(v_name_101_, v_sz_115_, v___x_116_, v___x_114_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v_a_118_; lean_object* v___x_120_; 
v_a_118_ = lean_ctor_get(v___x_117_, 0);
lean_inc(v_a_118_);
lean_dec_ref_known(v___x_117_, 1);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v_name_101_);
v___x_120_ = v___x_99_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_name_101_);
v___x_120_ = v_reuseFailAlloc_123_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_a_118_);
lean_ctor_set(v___x_121_, 1, v_snd_91_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_120_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v_a_79_ = v___x_122_;
goto v___jp_78_;
}
}
else
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_131_; 
lean_dec_ref(v_name_101_);
lean_del_object(v___x_99_);
lean_dec(v_snd_91_);
v_a_124_ = lean_ctor_get(v___x_117_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_131_ == 0)
{
v___x_126_ = v___x_117_;
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v___x_117_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_131_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
}
else
{
lean_dec_ref(v_name_101_);
lean_del_object(v___x_99_);
goto v___jp_104_;
}
}
else
{
lean_dec(v_a_103_);
lean_dec_ref(v_name_101_);
lean_del_object(v___x_99_);
goto v___jp_104_;
}
v___jp_104_:
{
lean_object* v___x_105_; lean_object* v___x_107_; 
lean_inc(v_a_95_);
v___x_105_ = lean_array_push(v_snd_91_, v_a_95_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___x_105_);
v___x_107_ = v___x_93_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_fst_90_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v___x_105_);
v___x_107_ = v_reuseFailAlloc_111_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_109_; 
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 1, v___x_107_);
v___x_109_ = v___x_88_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_fst_86_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
v_a_79_ = v___x_109_;
goto v___jp_78_;
}
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
lean_dec_ref(v_name_101_);
lean_del_object(v___x_99_);
lean_del_object(v___x_93_);
lean_dec(v_snd_91_);
lean_dec(v_fst_90_);
lean_del_object(v___x_88_);
lean_dec(v_fst_86_);
v_a_132_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_102_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_102_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
}
else
{
lean_object* v___x_141_; lean_object* v___x_142_; 
lean_dec(v___x_96_);
v___x_141_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___closed__1);
v___x_142_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_141_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
if (lean_obj_tag(v___x_142_) == 0)
{
lean_object* v___x_144_; 
lean_dec_ref_known(v___x_142_, 1);
if (v_isShared_94_ == 0)
{
v___x_144_ = v___x_93_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_fst_90_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_snd_91_);
v___x_144_ = v_reuseFailAlloc_148_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_146_; 
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 1, v___x_144_);
v___x_146_ = v___x_88_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_fst_86_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
v_a_79_ = v___x_146_;
goto v___jp_78_;
}
}
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
lean_del_object(v___x_93_);
lean_dec(v_snd_91_);
lean_dec(v_fst_90_);
lean_del_object(v___x_88_);
lean_dec(v_fst_86_);
v_a_149_ = lean_ctor_get(v___x_142_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_142_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_142_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_142_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
}
}
v___jp_78_:
{
size_t v___x_80_; size_t v___x_81_; 
v___x_80_ = ((size_t)1ULL);
v___x_81_ = lean_usize_add(v_i_69_, v___x_80_);
v_i_69_ = v___x_81_;
v_b_70_ = v_a_79_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1___boxed(lean_object* v_as_159_, lean_object* v_sz_160_, lean_object* v_i_161_, lean_object* v_b_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
size_t v_sz_boxed_170_; size_t v_i_boxed_171_; lean_object* v_res_172_; 
v_sz_boxed_170_ = lean_unbox_usize(v_sz_160_);
lean_dec(v_sz_160_);
v_i_boxed_171_ = lean_unbox_usize(v_i_161_);
lean_dec(v_i_161_);
v_res_172_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1(v_as_159_, v_sz_boxed_170_, v_i_boxed_171_, v_b_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
lean_dec_ref(v_as_159_);
return v_res_172_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__3));
v___x_182_ = l_Lean_stringToMessageData(v___x_181_);
return v___x_182_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__5));
v___x_185_ = l_Lean_stringToMessageData(v___x_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(lean_object* v_u_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_u_186_);
if (lean_obj_tag(v___x_194_) == 1)
{
lean_object* v_val_195_; lean_object* v___x_196_; lean_object* v___x_197_; size_t v_sz_198_; size_t v___x_199_; lean_object* v___x_200_; 
v_val_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_val_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = lp_vampireReplay_Vampire_Clause_literals(v_val_195_);
v___x_197_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__2));
v_sz_198_ = lean_array_size(v___x_196_);
v___x_199_ = ((size_t)0ULL);
v___x_200_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__1(v___x_196_, v_sz_198_, v___x_199_, v___x_197_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec_ref(v___x_196_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_230_; 
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_230_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_230_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_230_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_fst_205_; 
v_fst_205_ = lean_ctor_get(v_a_201_, 0);
lean_inc(v_fst_205_);
if (lean_obj_tag(v_fst_205_) == 1)
{
lean_object* v_snd_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_226_; 
v_snd_206_ = lean_ctor_get(v_a_201_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_a_201_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; 
v_unused_227_ = lean_ctor_get(v_a_201_, 0);
lean_dec(v_unused_227_);
v___x_208_ = v_a_201_;
v_isShared_209_ = v_isSharedCheck_226_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_snd_206_);
lean_dec(v_a_201_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_226_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_val_210_; lean_object* v_fst_211_; lean_object* v_snd_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_225_; 
v_val_210_ = lean_ctor_get(v_fst_205_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v_fst_205_, 1);
v_fst_211_ = lean_ctor_get(v_snd_206_, 0);
v_snd_212_ = lean_ctor_get(v_snd_206_, 1);
v_isSharedCheck_225_ = !lean_is_exclusive(v_snd_206_);
if (v_isSharedCheck_225_ == 0)
{
v___x_214_ = v_snd_206_;
v_isShared_215_ = v_isSharedCheck_225_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_snd_212_);
lean_inc(v_fst_211_);
lean_dec(v_snd_206_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_225_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_fst_211_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v_snd_212_);
v___x_217_ = v_reuseFailAlloc_224_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_219_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_217_);
lean_ctor_set(v___x_208_, 0, v_val_210_);
v___x_219_ = v___x_208_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_val_210_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_217_);
v___x_219_ = v_reuseFailAlloc_223_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_object* v___x_221_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 0, v___x_219_);
v___x_221_ = v___x_203_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
}
else
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec(v_fst_205_);
lean_del_object(v___x_203_);
lean_dec(v_a_201_);
v___x_228_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__4);
v___x_229_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_228_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
return v___x_229_;
}
}
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
v_a_231_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_200_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_200_);
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
else
{
lean_object* v___x_239_; lean_object* v___x_240_; 
lean_dec(v___x_194_);
v___x_239_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6);
v___x_240_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_239_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___boxed(lean_object* v_u_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(v_u_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0(lean_object* v___x_250_, size_t v_sz_251_, size_t v_i_252_, lean_object* v_bs_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___redArg(v___x_250_, v_sz_251_, v_i_252_, v_bs_253_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0___boxed(lean_object* v___x_262_, lean_object* v_sz_263_, lean_object* v_i_264_, lean_object* v_bs_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
size_t v_sz_boxed_273_; size_t v_i_boxed_274_; lean_object* v_res_275_; 
v_sz_boxed_273_ = lean_unbox_usize(v_sz_263_);
lean_dec(v_sz_263_);
v_i_boxed_274_ = lean_unbox_usize(v_i_264_);
lean_dec(v_i_264_);
v_res_275_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf_spec__0(v___x_262_, v_sz_boxed_273_, v_i_boxed_274_, v_bs_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_275_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0(uint32_t v_a_276_, lean_object* v_as_277_, size_t v_i_278_, size_t v_stop_279_){
_start:
{
uint8_t v___x_280_; 
v___x_280_ = lean_usize_dec_eq(v_i_278_, v_stop_279_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; uint32_t v___x_282_; uint8_t v___x_283_; 
v___x_281_ = lean_array_uget_borrowed(v_as_277_, v_i_278_);
v___x_282_ = lean_unbox_uint32(v___x_281_);
v___x_283_ = lean_uint32_dec_eq(v_a_276_, v___x_282_);
if (v___x_283_ == 0)
{
size_t v___x_284_; size_t v___x_285_; 
v___x_284_ = ((size_t)1ULL);
v___x_285_ = lean_usize_add(v_i_278_, v___x_284_);
v_i_278_ = v___x_285_;
goto _start;
}
else
{
return v___x_283_;
}
}
else
{
uint8_t v___x_287_; 
v___x_287_ = 0;
return v___x_287_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0___boxed(lean_object* v_a_288_, lean_object* v_as_289_, lean_object* v_i_290_, lean_object* v_stop_291_){
_start:
{
uint32_t v_a_boxed_292_; size_t v_i_boxed_293_; size_t v_stop_boxed_294_; uint8_t v_res_295_; lean_object* v_r_296_; 
v_a_boxed_292_ = lean_unbox_uint32(v_a_288_);
lean_dec(v_a_288_);
v_i_boxed_293_ = lean_unbox_usize(v_i_290_);
lean_dec(v_i_290_);
v_stop_boxed_294_ = lean_unbox_usize(v_stop_291_);
lean_dec(v_stop_291_);
v_res_295_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0(v_a_boxed_292_, v_as_289_, v_i_boxed_293_, v_stop_boxed_294_);
lean_dec_ref(v_as_289_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0(lean_object* v_as_297_, uint32_t v_a_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = lean_array_get_size(v_as_297_);
v___x_301_ = lean_nat_dec_lt(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
return v___x_301_;
}
else
{
if (v___x_301_ == 0)
{
return v___x_301_;
}
else
{
size_t v___x_302_; size_t v___x_303_; uint8_t v___x_304_; 
v___x_302_ = ((size_t)0ULL);
v___x_303_ = lean_usize_of_nat(v___x_300_);
v___x_304_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0_spec__0(v_a_298_, v_as_297_, v___x_302_, v___x_303_);
return v___x_304_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0___boxed(lean_object* v_as_305_, lean_object* v_a_306_){
_start:
{
uint32_t v_a_boxed_307_; uint8_t v_res_308_; lean_object* v_r_309_; 
v_a_boxed_307_ = lean_unbox_uint32(v_a_306_);
lean_dec(v_a_306_);
v_res_308_ = lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0(v_as_305_, v_a_boxed_307_);
lean_dec_ref(v_as_305_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1(lean_object* v_arguments_310_, lean_object* v_as_311_, size_t v_i_312_, size_t v_stop_313_, lean_object* v_b_314_){
_start:
{
lean_object* v___y_316_; uint8_t v___x_320_; 
v___x_320_ = lean_usize_dec_eq(v_i_312_, v_stop_313_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v_fst_322_; uint32_t v___x_323_; uint8_t v___x_324_; 
v___x_321_ = lean_array_uget_borrowed(v_as_311_, v_i_312_);
v_fst_322_ = lean_ctor_get(v___x_321_, 0);
v___x_323_ = lean_unbox_uint32(v_fst_322_);
v___x_324_ = lp_vampireReplay_Array_contains___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__0(v_arguments_310_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; 
lean_inc(v___x_321_);
v___x_325_ = lean_array_push(v_b_314_, v___x_321_);
v___y_316_ = v___x_325_;
goto v___jp_315_;
}
else
{
v___y_316_ = v_b_314_;
goto v___jp_315_;
}
}
else
{
return v_b_314_;
}
v___jp_315_:
{
size_t v___x_317_; size_t v___x_318_; 
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_add(v_i_312_, v___x_317_);
v_i_312_ = v___x_318_;
v_b_314_ = v___y_316_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1___boxed(lean_object* v_arguments_326_, lean_object* v_as_327_, lean_object* v_i_328_, lean_object* v_stop_329_, lean_object* v_b_330_){
_start:
{
size_t v_i_boxed_331_; size_t v_stop_boxed_332_; lean_object* v_res_333_; 
v_i_boxed_331_ = lean_unbox_usize(v_i_328_);
lean_dec(v_i_328_);
v_stop_boxed_332_ = lean_unbox_usize(v_stop_329_);
lean_dec(v_stop_329_);
v_res_333_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1(v_arguments_326_, v_as_327_, v_i_boxed_331_, v_stop_boxed_332_, v_b_330_);
lean_dec_ref(v_as_327_);
lean_dec_ref(v_arguments_326_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(lean_object* v_u_336_, lean_object* v_arguments_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_338_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_336_);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_array_get_size(v___x_338_);
v___x_341_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___closed__0));
v___x_342_ = lean_nat_dec_lt(v___x_339_, v___x_340_);
if (v___x_342_ == 0)
{
lean_dec_ref(v___x_338_);
return v___x_341_;
}
else
{
uint8_t v___x_343_; 
v___x_343_ = lean_nat_dec_le(v___x_340_, v___x_340_);
if (v___x_343_ == 0)
{
if (v___x_342_ == 0)
{
lean_dec_ref(v___x_338_);
return v___x_341_;
}
else
{
size_t v___x_344_; size_t v___x_345_; lean_object* v___x_346_; 
v___x_344_ = ((size_t)0ULL);
v___x_345_ = lean_usize_of_nat(v___x_340_);
v___x_346_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1(v_arguments_337_, v___x_338_, v___x_344_, v___x_345_, v___x_341_);
lean_dec_ref(v___x_338_);
return v___x_346_;
}
}
else
{
size_t v___x_347_; size_t v___x_348_; lean_object* v___x_349_; 
v___x_347_ = ((size_t)0ULL);
v___x_348_ = lean_usize_of_nat(v___x_340_);
v___x_349_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars_spec__1(v_arguments_337_, v___x_338_, v___x_347_, v___x_348_, v___x_341_);
lean_dec_ref(v___x_338_);
return v___x_349_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars___boxed(lean_object* v_u_350_, lean_object* v_arguments_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(v_u_350_, v_arguments_351_);
lean_dec_ref(v_arguments_351_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0(lean_object* v_snd_359_, uint8_t v_a_360_, uint8_t v___x_361_, lean_object* v_vars_362_, lean_object* v_split_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
size_t v_sz_371_; size_t v___x_372_; lean_object* v___x_373_; 
v_sz_371_ = lean_array_size(v_snd_359_);
v___x_372_ = ((size_t)0ULL);
v___x_373_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_vars_362_, v_sz_371_, v___x_372_, v_snd_359_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; lean_object* v___x_379_; 
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v___x_375_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1));
v___x_376_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3));
v___x_377_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_375_, v___x_376_, v_a_374_);
v___x_378_ = 1;
v___x_379_ = l_Lean_Meta_mkForallFVars(v_split_363_, v___x_377_, v_a_360_, v___x_361_, v___x_361_, v___x_378_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_379_;
}
else
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
v_a_380_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_373_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_373_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___boxed(lean_object* v_snd_388_, lean_object* v_a_389_, lean_object* v___x_390_, lean_object* v_vars_391_, lean_object* v_split_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
uint8_t v_a_4863__boxed_400_; uint8_t v___x_4864__boxed_401_; lean_object* v_res_402_; 
v_a_4863__boxed_400_ = lean_unbox(v_a_389_);
v___x_4864__boxed_401_ = lean_unbox(v___x_390_);
v_res_402_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0(v_snd_388_, v_a_4863__boxed_400_, v___x_4864__boxed_401_, v_vars_391_, v_split_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec_ref(v_split_392_);
lean_dec_ref(v_vars_391_);
return v_res_402_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = lean_box(0);
v___x_407_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__1));
v___x_408_ = l_Lean_Expr_const___override(v___x_407_, v___x_406_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1(lean_object* v_u_409_, lean_object* v_fst_410_, lean_object* v___f_411_, uint8_t v_a_412_, uint8_t v___x_413_, lean_object* v_vars_414_, lean_object* v_locals_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(v_u_409_, v_fst_410_);
v___x_424_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_423_, v_vars_414_, v___f_411_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; lean_object* v___x_429_; 
v_a_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc(v_a_425_);
lean_dec_ref_known(v___x_424_, 1);
v___x_426_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2);
v___x_427_ = l_Lean_Expr_app___override(v___x_426_, v_a_425_);
v___x_428_ = 1;
v___x_429_ = l_Lean_Meta_mkLambdaFVars(v_locals_415_, v___x_427_, v_a_412_, v___x_413_, v_a_412_, v___x_413_, v___x_428_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
return v___x_429_;
}
else
{
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___boxed(lean_object* v_u_430_, lean_object* v_fst_431_, lean_object* v___f_432_, lean_object* v_a_433_, lean_object* v___x_434_, lean_object* v_vars_435_, lean_object* v_locals_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v_a_4944__boxed_444_; uint8_t v___x_4945__boxed_445_; lean_object* v_res_446_; 
v_a_4944__boxed_444_ = lean_unbox(v_a_433_);
v___x_4945__boxed_445_ = lean_unbox(v___x_434_);
v_res_446_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1(v_u_430_, v_fst_431_, v___f_432_, v_a_4944__boxed_444_, v___x_4945__boxed_445_, v_vars_435_, v_locals_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec_ref(v_locals_436_);
lean_dec_ref(v_fst_431_);
return v_res_446_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_box(0);
v___x_448_ = lean_unsigned_to_nat(16u);
v___x_449_ = lean_mk_array(v___x_448_, v___x_447_);
return v___x_449_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_450_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
lean_ctor_set(v___x_452_, 1, v___x_450_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register(lean_object* v_u_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v___x_461_; 
lean_inc_ref(v_u_453_);
v___x_461_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(v_u_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v_snd_463_; lean_object* v_fst_464_; lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v___x_467_; lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_522_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_461_, 1);
v_snd_463_ = lean_ctor_get(v_a_462_, 1);
lean_inc(v_snd_463_);
v_fst_464_ = lean_ctor_get(v_a_462_, 0);
lean_inc(v_fst_464_);
lean_dec(v_a_462_);
v_fst_465_ = lean_ctor_get(v_snd_463_, 0);
lean_inc(v_fst_465_);
v_snd_466_ = lean_ctor_get(v_snd_463_, 1);
lean_inc(v_snd_466_);
lean_dec(v_snd_463_);
v___x_467_ = lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(v_fst_464_, v_a_454_, v_a_455_);
v_a_468_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_522_ == 0)
{
v___x_470_ = v___x_467_;
v_isShared_471_ = v_isSharedCheck_522_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_522_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
uint8_t v___x_472_; 
v___x_472_ = lean_unbox(v_a_468_);
if (v___x_472_ == 0)
{
uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___f_475_; lean_object* v___x_476_; lean_object* v___f_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_del_object(v___x_470_);
v___x_473_ = 1;
v___x_474_ = lean_box(v___x_473_);
lean_inc(v_a_468_);
v___f_475_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___boxed), 12, 3);
lean_closure_set(v___f_475_, 0, v_snd_466_);
lean_closure_set(v___f_475_, 1, v_a_468_);
lean_closure_set(v___f_475_, 2, v___x_474_);
v___x_476_ = lean_box(v___x_473_);
lean_inc(v_fst_465_);
lean_inc_ref(v_u_453_);
v___f_477_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___boxed), 14, 5);
lean_closure_set(v___f_477_, 0, v_u_453_);
lean_closure_set(v___f_477_, 1, v_fst_465_);
lean_closure_set(v___f_477_, 2, v___f_475_);
lean_closure_set(v___f_477_, 3, v_a_468_);
lean_closure_set(v___f_477_, 4, v___x_476_);
v___x_478_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_453_);
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_array_get_size(v_fst_465_);
v___x_481_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v___x_478_, v_fst_465_, v___x_479_, v___x_480_);
lean_dec(v_fst_465_);
lean_dec_ref(v___x_478_);
v___x_482_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1);
v___x_483_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_481_, v___x_482_, v___f_477_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_509_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_509_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_509_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_509_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v_proofs_489_; lean_object* v_unimplemented_490_; lean_object* v_introduced_491_; lean_object* v_named_492_; lean_object* v_conclusions_493_; lean_object* v_shared_494_; lean_object* v_nonempty_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_508_; 
v___x_488_ = lean_st_ref_take(v_a_455_);
v_proofs_489_ = lean_ctor_get(v___x_488_, 0);
v_unimplemented_490_ = lean_ctor_get(v___x_488_, 1);
v_introduced_491_ = lean_ctor_get(v___x_488_, 2);
v_named_492_ = lean_ctor_get(v___x_488_, 3);
v_conclusions_493_ = lean_ctor_get(v___x_488_, 4);
v_shared_494_ = lean_ctor_get(v___x_488_, 5);
v_nonempty_495_ = lean_ctor_get(v___x_488_, 6);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_508_ == 0)
{
v___x_497_ = v___x_488_;
v_isShared_498_ = v_isSharedCheck_508_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_nonempty_495_);
lean_inc(v_shared_494_);
lean_inc(v_conclusions_493_);
lean_inc(v_named_492_);
lean_inc(v_introduced_491_);
lean_inc(v_unimplemented_490_);
lean_inc(v_proofs_489_);
lean_dec(v___x_488_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_508_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_499_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_491_, v_fst_464_, v_a_484_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 2, v___x_499_);
v___x_501_ = v___x_497_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_proofs_489_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_unimplemented_490_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_named_492_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_conclusions_493_);
lean_ctor_set(v_reuseFailAlloc_507_, 5, v_shared_494_);
lean_ctor_set(v_reuseFailAlloc_507_, 6, v_nonempty_495_);
v___x_501_ = v_reuseFailAlloc_507_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v___x_502_ = lean_st_ref_set(v_a_455_, v___x_501_);
v___x_503_ = lean_box(0);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_503_);
v___x_505_ = v___x_486_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
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
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_dec(v_fst_464_);
v_a_510_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_483_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_483_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v___x_518_; lean_object* v___x_520_; 
lean_dec(v_a_468_);
lean_dec(v_snd_466_);
lean_dec(v_fst_465_);
lean_dec(v_fst_464_);
lean_dec_ref(v_u_453_);
v___x_518_ = lean_box(0);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 0, v___x_518_);
v___x_520_ = v___x_470_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec_ref(v_u_453_);
v_a_523_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_461_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_461_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register___boxed(lean_object* v_u_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_register(v_u_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0(lean_object* v_snd_540_, lean_object* v_inner_541_, lean_object* v_split_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
size_t v_sz_550_; size_t v___x_551_; lean_object* v___x_552_; 
v_sz_550_ = lean_array_size(v_snd_540_);
v___x_551_ = ((size_t)0ULL);
v___x_552_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_inner_541_, v_sz_550_, v___x_551_, v_snd_540_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; uint8_t v___x_558_; uint8_t v___x_559_; lean_object* v___x_560_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
v___x_554_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1));
v___x_555_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3));
v___x_556_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_554_, v___x_555_, v_a_553_);
v___x_557_ = 0;
v___x_558_ = 1;
v___x_559_ = 1;
v___x_560_ = l_Lean_Meta_mkForallFVars(v_split_542_, v___x_556_, v___x_557_, v___x_558_, v___x_558_, v___x_559_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
return v___x_560_;
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_568_; 
v_a_561_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_568_ == 0)
{
v___x_563_ = v___x_552_;
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_552_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_568_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_566_; 
if (v_isShared_564_ == 0)
{
v___x_566_ = v___x_563_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_561_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0___boxed(lean_object* v_snd_569_, lean_object* v_inner_570_, lean_object* v_split_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0(v_snd_569_, v_inner_570_, v_split_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v_split_571_);
lean_dec_ref(v_inner_570_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(lean_object* v___x_580_, lean_object* v_as_581_, size_t v_sz_582_, size_t v_i_583_, lean_object* v_b_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
uint8_t v___x_590_; 
v___x_590_ = lean_usize_dec_lt(v_i_583_, v_sz_582_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
lean_dec_ref(v___x_580_);
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v_b_584_);
return v___x_591_;
}
else
{
lean_object* v_a_592_; lean_object* v_fst_593_; lean_object* v_snd_594_; lean_object* v___x_595_; 
v_a_592_ = lean_array_uget_borrowed(v_as_581_, v_i_583_);
v_fst_593_ = lean_ctor_get(v_a_592_, 0);
v_snd_594_ = lean_ctor_get(v_a_592_, 1);
lean_inc_ref(v___x_580_);
lean_inc(v_fst_593_);
v___x_595_ = l_Lean_Meta_isExprDefEq(v_fst_593_, v___x_580_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_608_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_608_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_608_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_608_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
uint8_t v___x_600_; 
v___x_600_ = lean_unbox(v_a_596_);
lean_dec(v_a_596_);
if (v___x_600_ == 0)
{
size_t v___x_601_; size_t v___x_602_; 
lean_del_object(v___x_598_);
v___x_601_ = ((size_t)1ULL);
v___x_602_ = lean_usize_add(v_i_583_, v___x_601_);
v_i_583_ = v___x_602_;
goto _start;
}
else
{
lean_object* v___x_604_; lean_object* v___x_606_; 
lean_dec(v_b_584_);
lean_dec_ref(v___x_580_);
lean_inc(v_snd_594_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v_snd_594_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_604_);
v___x_606_ = v___x_598_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
lean_dec(v_b_584_);
lean_dec_ref(v___x_580_);
v_a_609_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_595_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_595_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg___boxed(lean_object* v___x_617_, lean_object* v_as_618_, lean_object* v_sz_619_, lean_object* v_i_620_, lean_object* v_b_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
size_t v_sz_boxed_627_; size_t v_i_boxed_628_; lean_object* v_res_629_; 
v_sz_boxed_627_ = lean_unbox_usize(v_sz_619_);
lean_dec(v_sz_619_);
v_i_boxed_628_ = lean_unbox_usize(v_i_620_);
lean_dec(v_i_620_);
v_res_629_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(v___x_617_, v_as_618_, v_sz_boxed_627_, v_i_boxed_628_, v_b_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
lean_dec(v___y_623_);
lean_dec_ref(v___y_622_);
lean_dec_ref(v_as_618_);
return v_res_629_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__0));
v___x_632_ = l_Lean_stringToMessageData(v___x_631_);
return v___x_632_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__2));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1(lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v___x_638_, size_t v___x_639_, lean_object* v_j_640_, lean_object* v_hj_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_649_ = lean_array_get_size(v_a_636_);
v___x_650_ = lean_nat_dec_lt(v_j_640_, v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec_ref(v_hj_641_);
lean_dec_ref(v_a_637_);
v___x_651_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__1);
v___x_652_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_651_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
return v___x_652_;
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; size_t v_sz_656_; lean_object* v___x_657_; 
v___x_653_ = lean_array_fget_borrowed(v_a_636_, v_j_640_);
v___x_654_ = lean_box(0);
lean_inc_ref(v_a_637_);
v___x_655_ = l_Array_zipIdx___redArg(v_a_637_, v___x_638_);
v_sz_656_ = lean_array_size(v___x_655_);
lean_inc(v___x_653_);
v___x_657_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(v___x_653_, v___x_655_, v_sz_656_, v___x_639_, v___x_654_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
lean_dec_ref(v___x_655_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
if (lean_obj_tag(v_a_658_) == 1)
{
lean_object* v_val_659_; lean_object* v___x_660_; 
v_val_659_ = lean_ctor_get(v_a_658_, 0);
lean_inc(v_val_659_);
lean_dec_ref_known(v_a_658_, 1);
v___x_660_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_637_, v_val_659_, v_hj_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
lean_dec_ref(v_a_637_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec(v_a_658_);
lean_dec_ref(v_hj_641_);
lean_dec_ref(v_a_637_);
v___x_661_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___closed__3);
v___x_662_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_661_, v___y_644_, v___y_645_, v___y_646_, v___y_647_);
return v___x_662_;
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v_hj_641_);
lean_dec_ref(v_a_637_);
v_a_663_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_657_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_657_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___boxed(lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v___x_673_, lean_object* v___x_674_, lean_object* v_j_675_, lean_object* v_hj_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
size_t v___x_27076__boxed_684_; lean_object* v_res_685_; 
v___x_27076__boxed_684_ = lean_unbox_usize(v___x_674_);
lean_dec(v___x_674_);
v_res_685_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1(v_a_671_, v_a_672_, v___x_673_, v___x_27076__boxed_684_, v_j_675_, v_hj_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v_j_675_);
lean_dec(v___x_673_);
lean_dec_ref(v_a_671_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1(lean_object* v_a_686_, size_t v_sz_687_, size_t v_i_688_, lean_object* v_bs_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
uint8_t v___x_697_; 
v___x_697_ = lean_usize_dec_lt(v_i_688_, v_sz_687_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; 
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v_bs_689_);
return v___x_698_;
}
else
{
lean_object* v_v_699_; lean_object* v_fst_700_; lean_object* v_snd_701_; lean_object* v___x_702_; lean_object* v_bs_x27_703_; lean_object* v_a_705_; lean_object* v___y_711_; uint32_t v___x_721_; lean_object* v___x_722_; 
v_v_699_ = lean_array_uget_borrowed(v_bs_689_, v_i_688_);
v_fst_700_ = lean_ctor_get(v_v_699_, 0);
lean_inc(v_fst_700_);
v_snd_701_ = lean_ctor_get(v_v_699_, 1);
lean_inc(v_snd_701_);
v___x_702_ = lean_unsigned_to_nat(0u);
v_bs_x27_703_ = lean_array_uset(v_bs_689_, v_i_688_, v___x_702_);
v___x_721_ = lean_unbox_uint32(v_fst_700_);
lean_dec(v_fst_700_);
v___x_722_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_a_686_, v___x_721_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v___x_723_; 
v___x_723_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_701_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_724_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
v___y_711_ = v___x_725_;
goto v___jp_710_;
}
else
{
v___y_711_ = v___x_723_;
goto v___jp_710_;
}
}
else
{
lean_object* v_val_726_; 
lean_dec(v_snd_701_);
v_val_726_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v___x_722_, 1);
v_a_705_ = v_val_726_;
goto v___jp_704_;
}
v___jp_704_:
{
size_t v___x_706_; size_t v___x_707_; lean_object* v___x_708_; 
v___x_706_ = ((size_t)1ULL);
v___x_707_ = lean_usize_add(v_i_688_, v___x_706_);
v___x_708_ = lean_array_uset(v_bs_x27_703_, v_i_688_, v_a_705_);
v_i_688_ = v___x_707_;
v_bs_689_ = v___x_708_;
goto _start;
}
v___jp_710_:
{
if (lean_obj_tag(v___y_711_) == 0)
{
lean_object* v_a_712_; 
v_a_712_ = lean_ctor_get(v___y_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___y_711_, 1);
v_a_705_ = v_a_712_;
goto v___jp_704_;
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec_ref(v_bs_x27_703_);
v_a_713_ = lean_ctor_get(v___y_711_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___y_711_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___y_711_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___y_711_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1___boxed(lean_object* v_a_727_, lean_object* v_sz_728_, lean_object* v_i_729_, lean_object* v_bs_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
size_t v_sz_boxed_738_; size_t v_i_boxed_739_; lean_object* v_res_740_; 
v_sz_boxed_738_ = lean_unbox_usize(v_sz_728_);
lean_dec(v_sz_728_);
v_i_boxed_739_ = lean_unbox_usize(v_i_729_);
lean_dec(v_i_729_);
v_res_740_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1(v_a_727_, v_sz_boxed_738_, v_i_boxed_739_, v_bs_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec_ref(v_a_727_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2(lean_object* v___x_741_, lean_object* v_a_742_, size_t v___x_743_, lean_object* v_a_744_, lean_object* v___f_745_, lean_object* v___x_746_, lean_object* v_h_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
size_t v_sz_755_; lean_object* v___x_756_; 
v_sz_755_ = lean_array_size(v___x_741_);
v___x_756_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Splitting_component_spec__1(v_a_742_, v_sz_755_, v___x_743_, v___x_741_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
lean_inc_ref(v_h_747_);
v___x_758_ = l_Lean_mkAppN(v_h_747_, v_a_757_);
lean_dec(v_a_757_);
v___x_759_ = lean_box(0);
v___x_760_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_a_744_, v___f_745_, v___x_758_, v___x_746_, v___x_759_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; uint8_t v___x_766_; uint8_t v___x_767_; lean_object* v___x_768_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_761_);
lean_dec_ref_known(v___x_760_, 1);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_mk_empty_array_with_capacity(v___x_762_);
v___x_764_ = lean_array_push(v___x_763_, v_h_747_);
v___x_765_ = 0;
v___x_766_ = 1;
v___x_767_ = 1;
v___x_768_ = l_Lean_Meta_mkLambdaFVars(v___x_764_, v_a_761_, v___x_765_, v___x_766_, v___x_765_, v___x_766_, v___x_767_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec_ref(v___x_764_);
return v___x_768_;
}
else
{
lean_dec_ref(v_h_747_);
return v___x_760_;
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v_h_747_);
lean_dec(v___x_746_);
lean_dec_ref(v___f_745_);
v_a_769_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_756_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_756_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2___boxed(lean_object* v___x_777_, lean_object* v_a_778_, lean_object* v___x_779_, lean_object* v_a_780_, lean_object* v___f_781_, lean_object* v___x_782_, lean_object* v_h_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
size_t v___x_27237__boxed_791_; lean_object* v_res_792_; 
v___x_27237__boxed_791_ = lean_unbox_usize(v___x_779_);
lean_dec(v___x_779_);
v_res_792_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2(v___x_777_, v_a_778_, v___x_27237__boxed_791_, v_a_780_, v___f_781_, v___x_782_, v_h_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec_ref(v_a_780_);
lean_dec_ref(v_a_778_);
return v_res_792_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__0));
v___x_795_ = l_Lean_stringToMessageData(v___x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3(lean_object* v_a_796_, lean_object* v___x_797_, lean_object* v___x_798_, size_t v___x_799_, lean_object* v_h_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; size_t v_sz_810_; lean_object* v___x_811_; 
v___x_808_ = lean_box(0);
lean_inc_ref(v_a_796_);
v___x_809_ = l_Array_zipIdx___redArg(v_a_796_, v___x_797_);
v_sz_810_ = lean_array_size(v___x_809_);
v___x_811_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(v___x_798_, v___x_809_, v_sz_810_, v___x_799_, v___x_808_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec_ref(v___x_809_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_811_, 1);
if (lean_obj_tag(v_a_812_) == 1)
{
lean_object* v_val_813_; lean_object* v___x_814_; lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; uint8_t v___x_820_; uint8_t v___x_821_; lean_object* v___x_822_; 
v_val_813_ = lean_ctor_get(v_a_812_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v_a_812_, 1);
lean_inc_ref(v_h_800_);
v___x_814_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_796_, v_val_813_, v_h_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec_ref(v_a_796_);
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref(v___x_814_);
v___x_816_ = lean_unsigned_to_nat(1u);
v___x_817_ = lean_mk_empty_array_with_capacity(v___x_816_);
v___x_818_ = lean_array_push(v___x_817_, v_h_800_);
v___x_819_ = 0;
v___x_820_ = 1;
v___x_821_ = 1;
v___x_822_ = l_Lean_Meta_mkLambdaFVars(v___x_818_, v_a_815_, v___x_819_, v___x_820_, v___x_819_, v___x_820_, v___x_821_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec_ref(v___x_818_);
return v___x_822_;
}
else
{
lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_a_812_);
lean_dec_ref(v_h_800_);
lean_dec_ref(v_a_796_);
v___x_823_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___closed__1);
v___x_824_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_823_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v___x_824_;
}
}
else
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
lean_dec_ref(v_h_800_);
lean_dec_ref(v_a_796_);
v_a_825_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_832_ == 0)
{
v___x_827_ = v___x_811_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_811_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_828_ == 0)
{
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___boxed(lean_object* v_a_833_, lean_object* v___x_834_, lean_object* v___x_835_, lean_object* v___x_836_, lean_object* v_h_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
size_t v___x_27326__boxed_845_; lean_object* v_res_846_; 
v___x_27326__boxed_845_ = lean_unbox_usize(v___x_836_);
lean_dec(v___x_836_);
v_res_846_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3(v_a_833_, v___x_834_, v___x_835_, v___x_27326__boxed_845_, v_h_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___x_834_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4(lean_object* v___x_861_, lean_object* v_val_862_, lean_object* v_snd_863_, lean_object* v_unit_864_, lean_object* v_fst_865_, lean_object* v___f_866_, lean_object* v_xs_867_, lean_object* v___target_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; size_t v_sz_879_; size_t v___x_880_; lean_object* v___x_881_; 
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__1);
v___x_878_ = l_Array_zip___redArg(v_xs_867_, v___x_861_);
v_sz_879_ = lean_array_size(v___x_878_);
v___x_880_ = ((size_t)0ULL);
v___x_881_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_878_, v_sz_879_, v___x_880_, v___x_877_);
lean_dec_ref(v___x_878_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; size_t v_sz_884_; lean_object* v___x_885_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = lp_vampireReplay_Vampire_Clause_literals(v_val_862_);
v_sz_884_ = lean_array_size(v___x_883_);
v___x_885_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_882_, v_sz_884_, v___x_880_, v___x_883_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; size_t v_sz_887_; lean_object* v___x_888_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v_sz_887_ = lean_array_size(v_snd_863_);
v___x_888_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_882_, v_sz_887_, v___x_880_, v_snd_863_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(v_unit_864_, v_fst_865_);
lean_inc(v_a_882_);
lean_inc_ref(v___x_890_);
v___x_891_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_890_, v_a_882_, v___f_866_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___f_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc_n(v_a_892_, 2);
lean_dec_ref_known(v___x_891_, 1);
v___x_893_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1));
lean_inc(v_a_886_);
lean_inc(v_a_889_);
v___f_894_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__1___boxed), 13, 4);
lean_closure_set(v___f_894_, 0, v_a_889_);
lean_closure_set(v___f_894_, 1, v_a_886_);
lean_closure_set(v___f_894_, 2, v___x_876_);
lean_closure_set(v___f_894_, 3, v___x_893_);
v___x_895_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1));
v___f_896_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__2___boxed), 14, 6);
lean_closure_set(v___f_896_, 0, v___x_890_);
lean_closure_set(v___f_896_, 1, v_a_882_);
lean_closure_set(v___f_896_, 2, v___x_895_);
lean_closure_set(v___f_896_, 3, v_a_889_);
lean_closure_set(v___f_896_, 4, v___f_894_);
lean_closure_set(v___f_896_, 5, v___x_876_);
v___x_897_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__1));
v___x_898_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_897_, v_a_892_, v___f_896_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___f_903_; lean_object* v___x_904_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2);
lean_inc(v_a_892_);
v___x_901_ = l_Lean_Expr_app___override(v___x_900_, v_a_892_);
v___x_902_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1));
lean_inc_ref(v___x_901_);
v___f_903_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__3___boxed), 12, 4);
lean_closure_set(v___f_903_, 0, v_a_886_);
lean_closure_set(v___f_903_, 1, v___x_876_);
lean_closure_set(v___f_903_, 2, v___x_901_);
lean_closure_set(v___f_903_, 3, v___x_902_);
v___x_904_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_897_, v___x_901_, v___f_903_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_930_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_930_ == 0)
{
v___x_907_ = v___x_904_;
v_isShared_908_ = v_isSharedCheck_930_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_930_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_909_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4));
if (v_isShared_908_ == 0)
{
lean_ctor_set_tag(v___x_907_, 1);
lean_ctor_set(v___x_907_, 0, v_a_892_);
v___x_911_ = v___x_907_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_892_);
v___x_911_ = v_reuseFailAlloc_929_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = lean_unsigned_to_nat(1u);
v___x_913_ = lean_mk_empty_array_with_capacity(v___x_912_);
v___x_914_ = lean_array_push(v___x_913_, v___x_911_);
v___x_915_ = l_Lean_Meta_mkAppOptM(v___x_909_, v___x_914_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v___x_917_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6));
v___x_918_ = lean_unsigned_to_nat(3u);
v___x_919_ = lean_mk_empty_array_with_capacity(v___x_918_);
v___x_920_ = lean_array_push(v___x_919_, v_a_916_);
v___x_921_ = lean_array_push(v___x_920_, v_a_899_);
v___x_922_ = lean_array_push(v___x_921_, v_a_905_);
v___x_923_ = l_Lean_Meta_mkAppM(v___x_917_, v___x_922_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; uint8_t v___x_925_; uint8_t v___x_926_; uint8_t v___x_927_; lean_object* v___x_928_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_923_, 1);
v___x_925_ = 0;
v___x_926_ = 1;
v___x_927_ = 1;
v___x_928_ = l_Lean_Meta_mkLambdaFVars(v_xs_867_, v_a_924_, v___x_925_, v___x_926_, v___x_925_, v___x_926_, v___x_927_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
return v___x_928_;
}
else
{
return v___x_923_;
}
}
else
{
lean_dec(v_a_905_);
lean_dec(v_a_899_);
return v___x_915_;
}
}
}
}
else
{
lean_dec(v_a_899_);
lean_dec(v_a_892_);
return v___x_904_;
}
}
else
{
lean_dec(v_a_892_);
lean_dec(v_a_886_);
return v___x_898_;
}
}
else
{
lean_dec_ref(v___x_890_);
lean_dec(v_a_889_);
lean_dec(v_a_886_);
lean_dec(v_a_882_);
return v___x_891_;
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_a_886_);
lean_dec(v_a_882_);
lean_dec_ref(v___f_866_);
lean_dec_ref(v_unit_864_);
v_a_931_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_888_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_888_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
lean_dec(v_a_882_);
lean_dec_ref(v___f_866_);
lean_dec_ref(v_unit_864_);
lean_dec_ref(v_snd_863_);
v_a_939_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_885_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_885_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v___f_866_);
lean_dec_ref(v_unit_864_);
lean_dec_ref(v_snd_863_);
lean_dec_ref(v_val_862_);
v_a_947_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_881_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_881_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed(lean_object* v___x_955_, lean_object* v_val_956_, lean_object* v_snd_957_, lean_object* v_unit_958_, lean_object* v_fst_959_, lean_object* v___f_960_, lean_object* v_xs_961_, lean_object* v___target_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4(v___x_955_, v_val_956_, v_snd_957_, v_unit_958_, v_fst_959_, v___f_960_, v_xs_961_, v___target_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec_ref(v___target_962_);
lean_dec_ref(v_xs_961_);
lean_dec_ref(v_fst_959_);
lean_dec_ref(v___x_955_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component(lean_object* v_step_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_unit_979_; lean_object* v___x_980_; 
v_unit_979_ = lean_ctor_get(v_step_971_, 0);
lean_inc_ref_n(v_unit_979_, 2);
v___x_980_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_register(v_unit_979_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_981_; 
lean_dec_ref_known(v___x_980_, 1);
lean_inc_ref(v_unit_979_);
v___x_981_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(v_unit_979_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v_snd_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_986_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_a_982_);
lean_dec_ref_known(v___x_981_, 1);
v_snd_983_ = lean_ctor_get(v_a_982_, 1);
lean_inc(v_snd_983_);
lean_dec(v_a_982_);
v_fst_984_ = lean_ctor_get(v_snd_983_, 0);
lean_inc(v_fst_984_);
v_snd_985_ = lean_ctor_get(v_snd_983_, 1);
lean_inc(v_snd_985_);
lean_dec(v_snd_983_);
lean_inc_ref(v_unit_979_);
v___x_986_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_unit_979_);
if (lean_obj_tag(v___x_986_) == 1)
{
lean_object* v_val_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1002_; 
v_val_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_1002_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_val_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1002_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; 
v___x_991_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___f_993_; lean_object* v___x_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_998_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
lean_inc(v_snd_985_);
v___f_993_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__0___boxed), 10, 1);
lean_closure_set(v___f_993_, 0, v_snd_985_);
lean_inc_ref(v_unit_979_);
v___x_994_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_979_);
lean_inc_ref(v___x_994_);
v___f_995_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed), 15, 6);
lean_closure_set(v___f_995_, 0, v___x_994_);
lean_closure_set(v___f_995_, 1, v_val_987_);
lean_closure_set(v___f_995_, 2, v_snd_985_);
lean_closure_set(v___f_995_, 3, v_unit_979_);
lean_closure_set(v___f_995_, 4, v_fst_984_);
lean_closure_set(v___f_995_, 5, v___f_993_);
v___x_996_ = lean_array_get_size(v___x_994_);
lean_dec_ref(v___x_994_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 0, v___x_996_);
v___x_998_ = v___x_989_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_996_);
v___x_998_ = v_reuseFailAlloc_1001_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
uint8_t v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = 0;
v___x_1000_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_992_, v___x_998_, v___f_995_, v___x_999_, v___x_999_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
return v___x_1000_;
}
}
else
{
lean_del_object(v___x_989_);
lean_dec(v_val_987_);
lean_dec(v_snd_985_);
lean_dec(v_fst_984_);
lean_dec_ref(v_unit_979_);
return v___x_991_;
}
}
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_dec(v___x_986_);
lean_dec(v_snd_985_);
lean_dec(v_fst_984_);
lean_dec_ref(v_unit_979_);
lean_dec_ref(v_step_971_);
v___x_1003_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf___closed__6);
v___x_1004_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1003_, v_a_974_, v_a_975_, v_a_976_, v_a_977_);
return v___x_1004_;
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
lean_dec_ref(v_unit_979_);
lean_dec_ref(v_step_971_);
v_a_1005_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_981_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_981_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec_ref(v_unit_979_);
lean_dec_ref(v_step_971_);
v_a_1013_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_980_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_980_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_component___boxed(lean_object* v_step_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_component(v_step_1021_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_);
lean_dec(v_a_1027_);
lean_dec_ref(v_a_1026_);
lean_dec(v_a_1025_);
lean_dec_ref(v_a_1024_);
lean_dec(v_a_1023_);
lean_dec_ref(v_a_1022_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0(lean_object* v___x_1030_, lean_object* v_as_1031_, size_t v_sz_1032_, size_t v_i_1033_, lean_object* v_b_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___redArg(v___x_1030_, v_as_1031_, v_sz_1032_, v_i_1033_, v_b_1034_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0___boxed(lean_object* v___x_1043_, lean_object* v_as_1044_, lean_object* v_sz_1045_, lean_object* v_i_1046_, lean_object* v_b_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
size_t v_sz_boxed_1055_; size_t v_i_boxed_1056_; lean_object* v_res_1057_; 
v_sz_boxed_1055_ = lean_unbox_usize(v_sz_1045_);
lean_dec(v_sz_1045_);
v_i_boxed_1056_ = lean_unbox_usize(v_i_1046_);
lean_dec(v_i_1046_);
v_res_1057_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_component_spec__0(v___x_1043_, v_as_1044_, v_sz_boxed_1055_, v_i_boxed_1056_, v_b_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec_ref(v_as_1044_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0(lean_object* v_snd_1058_, uint8_t v___x_1059_, lean_object* v_inner_1060_, lean_object* v_bound_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
size_t v_sz_1069_; size_t v___x_1070_; lean_object* v___x_1071_; 
v_sz_1069_ = lean_array_size(v_snd_1058_);
v___x_1070_ = ((size_t)0ULL);
v___x_1071_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_inner_1060_, v_sz_1069_, v___x_1070_, v_snd_1058_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; uint8_t v___x_1077_; lean_object* v___x_1078_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__1));
v___x_1074_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__0___closed__3));
v___x_1075_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1073_, v___x_1074_, v_a_1072_);
v___x_1076_ = 0;
v___x_1077_ = 1;
v___x_1078_ = l_Lean_Meta_mkForallFVars(v_bound_1061_, v___x_1075_, v___x_1076_, v___x_1059_, v___x_1059_, v___x_1077_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1078_;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1071_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1071_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0___boxed(lean_object* v_snd_1087_, lean_object* v___x_1088_, lean_object* v_inner_1089_, lean_object* v_bound_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
uint8_t v___x_64603__boxed_1098_; lean_object* v_res_1099_; 
v___x_64603__boxed_1098_ = lean_unbox(v___x_1088_);
v_res_1099_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0(v_snd_1087_, v___x_64603__boxed_1098_, v_inner_1089_, v_bound_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec_ref(v_bound_1090_);
lean_dec_ref(v_inner_1089_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1(lean_object* v_a_1109_, lean_object* v___x_1110_, lean_object* v___x_1111_, lean_object* v_a_1112_, lean_object* v_val_1113_, uint8_t v___x_1114_, lean_object* v_h_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1123_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__1));
v___x_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1124_, 0, v_a_1109_);
v___x_1125_ = lean_mk_empty_array_with_capacity(v___x_1110_);
lean_inc_ref(v___x_1125_);
v___x_1126_ = lean_array_push(v___x_1125_, v___x_1124_);
v___x_1127_ = l_Lean_Meta_mkAppOptM(v___x_1123_, v___x_1126_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1127_, 1);
v___x_1129_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___closed__4));
v___x_1130_ = lean_mk_empty_array_with_capacity(v___x_1111_);
v___x_1131_ = lean_array_push(v___x_1130_, v_a_1128_);
lean_inc_ref(v_h_1115_);
v___x_1132_ = lean_array_push(v___x_1131_, v_h_1115_);
v___x_1133_ = l_Lean_Meta_mkAppM(v___x_1129_, v___x_1132_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; lean_object* v_a_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref_known(v___x_1133_, 1);
v___x_1135_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_1112_, v_val_1113_, v_a_1134_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref(v___x_1135_);
v___x_1137_ = lean_array_push(v___x_1125_, v_h_1115_);
v___x_1138_ = 0;
v___x_1139_ = 1;
v___x_1140_ = l_Lean_Meta_mkLambdaFVars(v___x_1137_, v_a_1136_, v___x_1138_, v___x_1114_, v___x_1138_, v___x_1114_, v___x_1139_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
lean_dec_ref(v___x_1137_);
return v___x_1140_;
}
else
{
lean_dec_ref(v___x_1125_);
lean_dec_ref(v_h_1115_);
lean_dec(v_val_1113_);
return v___x_1133_;
}
}
else
{
lean_dec_ref(v___x_1125_);
lean_dec_ref(v_h_1115_);
lean_dec(v_val_1113_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___boxed(lean_object* v_a_1141_, lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_a_1144_, lean_object* v_val_1145_, lean_object* v___x_1146_, lean_object* v_h_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
uint8_t v___x_64689__boxed_1155_; lean_object* v_res_1156_; 
v___x_64689__boxed_1155_ = lean_unbox(v___x_1146_);
v_res_1156_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1(v_a_1141_, v___x_1142_, v___x_1143_, v_a_1144_, v_val_1145_, v___x_64689__boxed_1155_, v_h_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec_ref(v_a_1144_);
lean_dec(v___x_1143_);
lean_dec(v___x_1142_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg(lean_object* v_a_1163_, lean_object* v_target_1164_, lean_object* v_hl_1165_, lean_object* v_as_1166_, size_t v_sz_1167_, size_t v_i_1168_, lean_object* v_b_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
uint8_t v___x_1175_; 
v___x_1175_ = lean_usize_dec_lt(v_i_1168_, v_sz_1167_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
lean_dec_ref(v_hl_1165_);
lean_dec_ref(v_target_1164_);
lean_dec_ref(v_a_1163_);
v___x_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1176_, 0, v_b_1169_);
return v___x_1176_;
}
else
{
lean_object* v_a_1177_; lean_object* v_fst_1178_; lean_object* v_snd_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1228_; 
lean_dec_ref(v_b_1169_);
v_a_1177_ = lean_array_uget(v_as_1166_, v_i_1168_);
v_fst_1178_ = lean_ctor_get(v_a_1177_, 0);
v_snd_1179_ = lean_ctor_get(v_a_1177_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_a_1177_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1181_ = v_a_1177_;
v_isShared_1182_ = v_isSharedCheck_1228_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_snd_1179_);
lean_inc(v_fst_1178_);
lean_dec(v_a_1177_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1228_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; 
lean_inc_ref(v_a_1163_);
v___x_1183_ = l_Lean_Meta_isExprDefEq(v_fst_1178_, v_a_1163_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref_known(v___x_1183_, 1);
v___x_1185_ = lean_box(0);
v___x_1186_ = lean_unbox(v_a_1184_);
lean_dec(v_a_1184_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; size_t v___x_1188_; size_t v___x_1189_; 
lean_del_object(v___x_1181_);
lean_dec(v_snd_1179_);
v___x_1187_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0));
v___x_1188_ = ((size_t)1ULL);
v___x_1189_ = lean_usize_add(v_i_1168_, v___x_1188_);
v_i_1168_ = v___x_1189_;
v_b_1169_ = v___x_1187_;
goto _start;
}
else
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v_a_1163_);
v___x_1191_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__1));
v___x_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_target_1164_);
v___x_1193_ = l_Lean_Expr_app___override(v_snd_1179_, v_hl_1165_);
v___x_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
v___x_1195_ = lean_unsigned_to_nat(2u);
v___x_1196_ = lean_mk_empty_array_with_capacity(v___x_1195_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1192_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1194_);
v___x_1199_ = l_Lean_Meta_mkAppOptM(v___x_1191_, v___x_1198_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1211_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1202_ = v___x_1199_;
v_isShared_1203_ = v_isSharedCheck_1211_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1199_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1211_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_a_1200_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v___x_1185_);
lean_ctor_set(v___x_1181_, 0, v___x_1204_);
v___x_1206_ = v___x_1181_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1204_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v___x_1185_);
v___x_1206_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1208_; 
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1206_);
v___x_1208_ = v___x_1202_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_del_object(v___x_1181_);
v_a_1212_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1199_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1199_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_del_object(v___x_1181_);
lean_dec(v_snd_1179_);
lean_dec_ref(v_hl_1165_);
lean_dec_ref(v_target_1164_);
lean_dec_ref(v_a_1163_);
v_a_1220_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1183_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1183_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___boxed(lean_object* v_a_1229_, lean_object* v_target_1230_, lean_object* v_hl_1231_, lean_object* v_as_1232_, lean_object* v_sz_1233_, lean_object* v_i_1234_, lean_object* v_b_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
size_t v_sz_boxed_1241_; size_t v_i_boxed_1242_; lean_object* v_res_1243_; 
v_sz_boxed_1241_ = lean_unbox_usize(v_sz_1233_);
lean_dec(v_sz_1233_);
v_i_boxed_1242_ = lean_unbox_usize(v_i_1234_);
lean_dec(v_i_1234_);
v_res_1243_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg(v_a_1229_, v_target_1230_, v_hl_1231_, v_as_1232_, v_sz_boxed_1241_, v_i_boxed_1242_, v_b_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec_ref(v_as_1232_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5(lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_hl_1246_, lean_object* v_as_1247_, size_t v_sz_1248_, size_t v_i_1249_, lean_object* v_b_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
uint8_t v___x_1258_; 
v___x_1258_ = lean_usize_dec_lt(v_i_1249_, v_sz_1248_);
if (v___x_1258_ == 0)
{
lean_object* v___x_1259_; 
lean_dec_ref(v_hl_1246_);
lean_dec_ref(v_a_1244_);
v___x_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1259_, 0, v_b_1250_);
return v___x_1259_;
}
else
{
lean_object* v_a_1260_; lean_object* v_fst_1261_; lean_object* v_snd_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v_b_1250_);
v_a_1260_ = lean_array_uget(v_as_1247_, v_i_1249_);
v_fst_1261_ = lean_ctor_get(v_a_1260_, 0);
v_snd_1262_ = lean_ctor_get(v_a_1260_, 1);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_a_1260_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1264_ = v_a_1260_;
v_isShared_1265_ = v_isSharedCheck_1303_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_snd_1262_);
lean_inc(v_fst_1261_);
lean_dec(v_a_1260_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1303_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; 
lean_inc_ref(v_a_1244_);
v___x_1266_ = l_Lean_Meta_isExprDefEq(v_fst_1261_, v_a_1244_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v___x_1268_ = lean_box(0);
v___x_1269_ = lean_unbox(v_a_1267_);
lean_dec(v_a_1267_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; size_t v___x_1271_; size_t v___x_1272_; 
lean_del_object(v___x_1264_);
lean_dec(v_snd_1262_);
v___x_1270_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0));
v___x_1271_ = ((size_t)1ULL);
v___x_1272_ = lean_usize_add(v_i_1249_, v___x_1271_);
v_i_1249_ = v___x_1272_;
v_b_1250_ = v___x_1270_;
goto _start;
}
else
{
lean_object* v___x_1274_; 
lean_dec_ref(v_a_1244_);
v___x_1274_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_1245_, v_snd_1262_, v_hl_1246_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1286_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1277_ = v___x_1274_;
v_isShared_1278_ = v_isSharedCheck_1286_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1274_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1286_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1279_, 0, v_a_1275_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 1, v___x_1268_);
lean_ctor_set(v___x_1264_, 0, v___x_1279_);
v___x_1281_ = v___x_1264_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1268_);
v___x_1281_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1283_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v___x_1281_);
v___x_1283_ = v___x_1277_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1281_);
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
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_del_object(v___x_1264_);
v_a_1287_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1274_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1274_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_del_object(v___x_1264_);
lean_dec(v_snd_1262_);
lean_dec_ref(v_hl_1246_);
lean_dec_ref(v_a_1244_);
v_a_1295_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1266_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1266_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5___boxed(lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_hl_1306_, lean_object* v_as_1307_, lean_object* v_sz_1308_, lean_object* v_i_1309_, lean_object* v_b_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
size_t v_sz_boxed_1318_; size_t v_i_boxed_1319_; lean_object* v_res_1320_; 
v_sz_boxed_1318_ = lean_unbox_usize(v_sz_1308_);
lean_dec(v_sz_1308_);
v_i_boxed_1319_ = lean_unbox_usize(v_i_1309_);
lean_dec(v_i_1309_);
v_res_1320_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5(v_a_1304_, v_a_1305_, v_hl_1306_, v_as_1307_, v_sz_boxed_1318_, v_i_boxed_1319_, v_b_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec_ref(v_as_1307_);
lean_dec_ref(v_a_1305_);
return v_res_1320_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__0));
v___x_1323_ = l_Lean_stringToMessageData(v___x_1322_);
return v___x_1323_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__2));
v___x_1326_ = l_Lean_stringToMessageData(v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2(lean_object* v_a_1327_, lean_object* v_target_1328_, size_t v___x_1329_, lean_object* v_a_1330_, lean_object* v___x_1331_, lean_object* v_x_1332_, lean_object* v_hl_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v___x_1341_; 
lean_inc(v___y_1339_);
lean_inc_ref(v___y_1338_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
lean_inc_ref(v_hl_1333_);
v___x_1341_ = lean_infer_type(v_hl_1333_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v_a_1344_; lean_object* v___x_1345_; size_t v_sz_1346_; lean_object* v___x_1347_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1343_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1342_, v___y_1337_);
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc_n(v_a_1344_, 2);
lean_dec_ref(v___x_1343_);
v___x_1345_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg___closed__0));
v_sz_1346_ = lean_array_size(v_a_1327_);
lean_inc_ref(v_hl_1333_);
v___x_1347_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg(v_a_1344_, v_target_1328_, v_hl_1333_, v_a_1327_, v_sz_1346_, v___x_1329_, v___x_1345_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1398_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1398_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1398_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1396_; 
v_fst_1352_ = lean_ctor_get(v_a_1348_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v_a_1348_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; 
v_unused_1397_ = lean_ctor_get(v_a_1348_, 1);
lean_dec(v_unused_1397_);
v___x_1354_ = v_a_1348_;
v_isShared_1355_ = v_isSharedCheck_1396_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_fst_1352_);
lean_dec(v_a_1348_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1396_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
if (lean_obj_tag(v_fst_1352_) == 0)
{
lean_object* v___x_1356_; size_t v_sz_1357_; lean_object* v___x_1358_; 
lean_del_object(v___x_1350_);
lean_inc_ref(v_a_1330_);
v___x_1356_ = l_Array_zipIdx___redArg(v_a_1330_, v___x_1331_);
v_sz_1357_ = lean_array_size(v___x_1356_);
lean_inc(v_a_1344_);
v___x_1358_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__5(v_a_1344_, v_a_1330_, v_hl_1333_, v___x_1356_, v_sz_1357_, v___x_1329_, v___x_1345_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec_ref(v___x_1356_);
lean_dec_ref(v_a_1330_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1383_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1361_ = v___x_1358_;
v_isShared_1362_ = v_isSharedCheck_1383_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1358_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1383_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v_fst_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1381_; 
v_fst_1363_ = lean_ctor_get(v_a_1359_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v_a_1359_);
if (v_isSharedCheck_1381_ == 0)
{
lean_object* v_unused_1382_; 
v_unused_1382_ = lean_ctor_get(v_a_1359_, 1);
lean_dec(v_unused_1382_);
v___x_1365_ = v_a_1359_;
v_isShared_1366_ = v_isSharedCheck_1381_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_fst_1363_);
lean_dec(v_a_1359_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1381_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
if (lean_obj_tag(v_fst_1363_) == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
lean_del_object(v___x_1361_);
v___x_1367_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__1);
v___x_1368_ = l_Lean_indentExpr(v_a_1344_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set_tag(v___x_1365_, 7);
lean_ctor_set(v___x_1365_, 1, v___x_1368_);
lean_ctor_set(v___x_1365_, 0, v___x_1367_);
v___x_1370_ = v___x_1365_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1371_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___closed__3);
if (v_isShared_1355_ == 0)
{
lean_ctor_set_tag(v___x_1354_, 7);
lean_ctor_set(v___x_1354_, 1, v___x_1371_);
lean_ctor_set(v___x_1354_, 0, v___x_1370_);
v___x_1373_ = v___x_1354_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v___x_1371_);
v___x_1373_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; 
v___x_1374_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1373_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
return v___x_1374_;
}
}
}
else
{
lean_object* v_val_1377_; lean_object* v___x_1379_; 
lean_del_object(v___x_1365_);
lean_del_object(v___x_1354_);
lean_dec(v_a_1344_);
v_val_1377_ = lean_ctor_get(v_fst_1363_, 0);
lean_inc(v_val_1377_);
lean_dec_ref_known(v_fst_1363_, 1);
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v_val_1377_);
v___x_1379_ = v___x_1361_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_val_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_del_object(v___x_1354_);
lean_dec(v_a_1344_);
v_a_1384_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1358_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1358_);
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
else
{
lean_object* v_val_1392_; lean_object* v___x_1394_; 
lean_del_object(v___x_1354_);
lean_dec(v_a_1344_);
lean_dec_ref(v_hl_1333_);
lean_dec_ref(v_a_1330_);
v_val_1392_ = lean_ctor_get(v_fst_1352_, 0);
lean_inc(v_val_1392_);
lean_dec_ref_known(v_fst_1352_, 1);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v_val_1392_);
v___x_1394_ = v___x_1350_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_val_1392_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec(v_a_1344_);
lean_dec_ref(v_hl_1333_);
lean_dec_ref(v_a_1330_);
v_a_1399_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1347_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1347_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
else
{
lean_dec_ref(v_hl_1333_);
lean_dec_ref(v_a_1330_);
lean_dec_ref(v_target_1328_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___boxed(lean_object* v_a_1407_, lean_object* v_target_1408_, lean_object* v___x_1409_, lean_object* v_a_1410_, lean_object* v___x_1411_, lean_object* v_x_1412_, lean_object* v_hl_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
size_t v___x_65052__boxed_1421_; lean_object* v_res_1422_; 
v___x_65052__boxed_1421_ = lean_unbox_usize(v___x_1409_);
lean_dec(v___x_1409_);
v_res_1422_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2(v_a_1407_, v_target_1408_, v___x_65052__boxed_1421_, v_a_1410_, v___x_1411_, v_x_1412_, v_hl_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec(v___y_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v_x_1412_);
lean_dec(v___x_1411_);
lean_dec_ref(v_a_1407_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1(lean_object* v_as_1423_, size_t v_sz_1424_, size_t v_i_1425_, lean_object* v_b_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_usize_dec_lt(v_i_1425_, v_sz_1424_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1435_, 0, v_b_1426_);
return v___x_1435_;
}
else
{
lean_object* v_a_1436_; lean_object* v_fst_1437_; lean_object* v_fst_1438_; lean_object* v_snd_1439_; lean_object* v___x_1440_; 
v_a_1436_ = lean_array_uget_borrowed(v_as_1423_, v_i_1425_);
v_fst_1437_ = lean_ctor_get(v_a_1436_, 0);
v_fst_1438_ = lean_ctor_get(v_b_1426_, 0);
lean_inc(v_fst_1438_);
v_snd_1439_ = lean_ctor_get(v_b_1426_, 1);
lean_inc(v_snd_1439_);
lean_dec_ref(v_b_1426_);
v___x_1440_ = lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(v_fst_1438_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; lean_object* v_fst_1442_; lean_object* v_snd_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1455_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v_fst_1442_ = lean_ctor_get(v_a_1441_, 0);
v_snd_1443_ = lean_ctor_get(v_a_1441_, 1);
v_isSharedCheck_1455_ = !lean_is_exclusive(v_a_1441_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1445_ = v_a_1441_;
v_isShared_1446_ = v_isSharedCheck_1455_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_snd_1443_);
lean_inc(v_fst_1442_);
lean_dec(v_a_1441_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1455_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
uint32_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1447_ = lean_unbox_uint32(v_fst_1437_);
v___x_1448_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_snd_1439_, v___x_1447_, v_fst_1442_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 1, v___x_1448_);
lean_ctor_set(v___x_1445_, 0, v_snd_1443_);
v___x_1450_ = v___x_1445_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_snd_1443_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
size_t v___x_1451_; size_t v___x_1452_; 
v___x_1451_ = ((size_t)1ULL);
v___x_1452_ = lean_usize_add(v_i_1425_, v___x_1451_);
v_i_1425_ = v___x_1452_;
v_b_1426_ = v___x_1450_;
goto _start;
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
lean_dec(v_snd_1439_);
v_a_1456_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1440_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1440_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1___boxed(lean_object* v_as_1464_, lean_object* v_sz_1465_, lean_object* v_i_1466_, lean_object* v_b_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
size_t v_sz_boxed_1475_; size_t v_i_boxed_1476_; lean_object* v_res_1477_; 
v_sz_boxed_1475_ = lean_unbox_usize(v_sz_1465_);
lean_dec(v_sz_1465_);
v_i_boxed_1476_ = lean_unbox_usize(v_i_1466_);
lean_dec(v_i_1466_);
v_res_1477_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1(v_as_1464_, v_sz_boxed_1475_, v_i_boxed_1476_, v_b_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___y_1469_);
lean_dec_ref(v___y_1468_);
lean_dec_ref(v_as_1464_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0(lean_object* v_a_1478_, lean_object* v_snd_1479_, lean_object* v___x_1480_, uint8_t v___x_1481_, lean_object* v_l_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
lean_inc_ref(v_l_1482_);
v___x_1490_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_a_1478_, v_snd_1479_, v_l_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
if (lean_obj_tag(v___x_1490_) == 0)
{
lean_object* v_a_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; uint8_t v___x_1497_; lean_object* v___x_1498_; 
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
lean_inc(v_a_1491_);
lean_dec_ref_known(v___x_1490_, 1);
v___x_1492_ = lean_unsigned_to_nat(1u);
v___x_1493_ = lean_mk_empty_array_with_capacity(v___x_1492_);
v___x_1494_ = lean_array_push(v___x_1493_, v_l_1482_);
v___x_1495_ = l_Lean_Expr_app___override(v___x_1480_, v_a_1491_);
v___x_1496_ = 0;
v___x_1497_ = 1;
v___x_1498_ = l_Lean_Meta_mkLambdaFVars(v___x_1494_, v___x_1495_, v___x_1496_, v___x_1481_, v___x_1496_, v___x_1481_, v___x_1497_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec_ref(v___x_1494_);
return v___x_1498_;
}
else
{
lean_dec_ref(v_l_1482_);
lean_dec_ref(v___x_1480_);
return v___x_1490_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0___boxed(lean_object* v_a_1499_, lean_object* v_snd_1500_, lean_object* v___x_1501_, lean_object* v___x_1502_, lean_object* v_l_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
uint8_t v___x_65297__boxed_1511_; lean_object* v_res_1512_; 
v___x_65297__boxed_1511_ = lean_unbox(v___x_1502_);
v_res_1512_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0(v_a_1499_, v_snd_1500_, v___x_1501_, v___x_65297__boxed_1511_, v_l_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec_ref(v_a_1499_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3(lean_object* v_a_1516_, lean_object* v___x_1517_, lean_object* v_as_1518_, size_t v_sz_1519_, size_t v_i_1520_, lean_object* v_b_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
uint8_t v___x_1529_; 
v___x_1529_ = lean_usize_dec_lt(v_i_1520_, v_sz_1519_);
if (v___x_1529_ == 0)
{
lean_object* v___x_1530_; 
lean_dec_ref(v___x_1517_);
lean_dec_ref(v_a_1516_);
v___x_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1530_, 0, v_b_1521_);
return v___x_1530_;
}
else
{
lean_object* v_a_1531_; lean_object* v_fst_1532_; lean_object* v_snd_1533_; lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1557_; 
v_a_1531_ = lean_array_uget(v_as_1518_, v_i_1520_);
v_fst_1532_ = lean_ctor_get(v_a_1531_, 0);
v_snd_1533_ = lean_ctor_get(v_a_1531_, 1);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_a_1531_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1535_ = v_a_1531_;
v_isShared_1536_ = v_isSharedCheck_1557_;
goto v_resetjp_1534_;
}
else
{
lean_inc(v_snd_1533_);
lean_inc(v_fst_1532_);
lean_dec(v_a_1531_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1557_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1537_ = lean_box(v___x_1529_);
lean_inc_ref(v___x_1517_);
lean_inc_ref(v_a_1516_);
v___f_1538_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___lam__0___boxed), 12, 4);
lean_closure_set(v___f_1538_, 0, v_a_1516_);
lean_closure_set(v___f_1538_, 1, v_snd_1533_);
lean_closure_set(v___f_1538_, 2, v___x_1517_);
lean_closure_set(v___f_1538_, 3, v___x_1537_);
v___x_1539_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___closed__1));
lean_inc(v_fst_1532_);
v___x_1540_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1539_, v_fst_1532_, v___f_1538_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1543_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 1, v_a_1541_);
v___x_1543_ = v___x_1535_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_fst_1532_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v_a_1541_);
v___x_1543_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1544_; size_t v___x_1545_; size_t v___x_1546_; 
v___x_1544_ = lean_array_push(v_b_1521_, v___x_1543_);
v___x_1545_ = ((size_t)1ULL);
v___x_1546_ = lean_usize_add(v_i_1520_, v___x_1545_);
v_i_1520_ = v___x_1546_;
v_b_1521_ = v___x_1544_;
goto _start;
}
}
else
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
lean_del_object(v___x_1535_);
lean_dec(v_fst_1532_);
lean_dec_ref(v_b_1521_);
lean_dec_ref(v___x_1517_);
lean_dec_ref(v_a_1516_);
v_a_1549_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1540_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1540_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3___boxed(lean_object* v_a_1558_, lean_object* v___x_1559_, lean_object* v_as_1560_, lean_object* v_sz_1561_, lean_object* v_i_1562_, lean_object* v_b_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
size_t v_sz_boxed_1571_; size_t v_i_boxed_1572_; lean_object* v_res_1573_; 
v_sz_boxed_1571_ = lean_unbox_usize(v_sz_1561_);
lean_dec(v_sz_1561_);
v_i_boxed_1572_ = lean_unbox_usize(v_i_1562_);
lean_dec(v_i_1562_);
v_res_1573_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3(v_a_1558_, v___x_1559_, v_as_1560_, v_sz_boxed_1571_, v_i_boxed_1572_, v_b_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec_ref(v_as_1560_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg(lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
if (lean_obj_tag(v_a_1574_) == 0)
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1577_, 0, v_a_1575_);
v___x_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1577_);
return v___x_1578_;
}
else
{
lean_object* v_key_1579_; lean_object* v_value_1580_; lean_object* v_tail_1581_; uint32_t v___x_1582_; lean_object* v___x_1583_; 
v_key_1579_ = lean_ctor_get(v_a_1574_, 0);
lean_inc(v_key_1579_);
v_value_1580_ = lean_ctor_get(v_a_1574_, 1);
lean_inc(v_value_1580_);
v_tail_1581_ = lean_ctor_get(v_a_1574_, 2);
lean_inc(v_tail_1581_);
lean_dec_ref_known(v_a_1574_, 3);
v___x_1582_ = lean_unbox_uint32(v_key_1579_);
lean_dec(v_key_1579_);
v___x_1583_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_a_1575_, v___x_1582_, v_value_1580_);
v_a_1574_ = v_tail_1581_;
v_a_1575_ = v___x_1583_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg___boxed(lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v___y_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg(v_a_1585_, v_a_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2(lean_object* v_as_1589_, size_t v_sz_1590_, size_t v_i_1591_, lean_object* v_b_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
uint8_t v___x_1600_; 
v___x_1600_ = lean_usize_dec_lt(v_i_1591_, v_sz_1590_);
if (v___x_1600_ == 0)
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1601_, 0, v_b_1592_);
return v___x_1601_;
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1603_; 
v_a_1602_ = lean_array_uget_borrowed(v_as_1589_, v_i_1591_);
lean_inc(v_a_1602_);
v___x_1603_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg(v_a_1602_, v_b_1592_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1616_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1606_ = v___x_1603_;
v_isShared_1607_ = v_isSharedCheck_1616_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1603_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1616_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
if (lean_obj_tag(v_a_1604_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; 
v_a_1608_ = lean_ctor_get(v_a_1604_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v_a_1604_, 1);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v_a_1608_);
v___x_1610_ = v___x_1606_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
else
{
lean_object* v_a_1612_; size_t v___x_1613_; size_t v___x_1614_; 
lean_del_object(v___x_1606_);
v_a_1612_ = lean_ctor_get(v_a_1604_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v_a_1604_, 1);
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1591_, v___x_1613_);
v_i_1591_ = v___x_1614_;
v_b_1592_ = v_a_1612_;
goto _start;
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
v_a_1617_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1603_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1603_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2___boxed(lean_object* v_as_1625_, lean_object* v_sz_1626_, lean_object* v_i_1627_, lean_object* v_b_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
size_t v_sz_boxed_1636_; size_t v_i_boxed_1637_; lean_object* v_res_1638_; 
v_sz_boxed_1636_ = lean_unbox_usize(v_sz_1626_);
lean_dec(v_sz_1626_);
v_i_boxed_1637_ = lean_unbox_usize(v_i_1627_);
lean_dec(v_i_1627_);
v_res_1638_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2(v_as_1625_, v_sz_boxed_1636_, v_i_boxed_1637_, v_b_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec_ref(v_as_1625_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3(lean_object* v___x_1639_, lean_object* v___x_1640_, size_t v___x_1641_, lean_object* v_a_1642_, lean_object* v_snd_1643_, lean_object* v___x_1644_, lean_object* v___x_1645_, lean_object* v_val_1646_, lean_object* v_target_1647_, lean_object* v_a_1648_, lean_object* v_fst_1649_, lean_object* v___x_1650_, uint8_t v___x_1651_, lean_object* v_h_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; size_t v_sz_1661_; lean_object* v___x_1662_; 
lean_inc_ref(v_h_1652_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v_h_1652_);
lean_ctor_set(v___x_1660_, 1, v___x_1639_);
v_sz_1661_ = lean_array_size(v___x_1640_);
v___x_1662_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__1(v___x_1640_, v_sz_1661_, v___x_1641_, v___x_1660_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v_snd_1664_; lean_object* v_fst_1665_; lean_object* v_buckets_1666_; size_t v_sz_1667_; lean_object* v___x_1668_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
v_snd_1664_ = lean_ctor_get(v_a_1663_, 1);
lean_inc(v_snd_1664_);
v_fst_1665_ = lean_ctor_get(v_a_1663_, 0);
lean_inc(v_fst_1665_);
lean_dec(v_a_1663_);
v_buckets_1666_ = lean_ctor_get(v_snd_1664_, 1);
lean_inc_ref(v_buckets_1666_);
lean_dec(v_snd_1664_);
v_sz_1667_ = lean_array_size(v_buckets_1666_);
v___x_1668_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__2(v_buckets_1666_, v_sz_1667_, v___x_1641_, v_a_1642_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec_ref(v_buckets_1666_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; size_t v_sz_1670_; lean_object* v___x_1671_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1668_, 1);
v_sz_1670_ = lean_array_size(v_snd_1643_);
v___x_1671_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_1669_, v_sz_1670_, v___x_1641_, v_snd_1643_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; size_t v_sz_1675_; lean_object* v___x_1676_; 
v_a_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc_n(v_a_1672_, 2);
lean_dec_ref_known(v___x_1671_, 1);
v___x_1673_ = lean_mk_empty_array_with_capacity(v___x_1644_);
v___x_1674_ = l_Array_zipIdx___redArg(v_a_1672_, v___x_1644_);
v_sz_1675_ = lean_array_size(v___x_1674_);
lean_inc_ref(v___x_1673_);
v___x_1676_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__3(v_a_1672_, v_fst_1665_, v___x_1674_, v_sz_1675_, v___x_1641_, v___x_1673_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec_ref(v___x_1674_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1678_; size_t v_sz_1679_; lean_object* v___x_1680_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1678_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_1645_);
v_sz_1679_ = lean_array_size(v___x_1678_);
v___x_1680_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(v_a_1669_, v___x_1678_, v_sz_1679_, v___x_1641_, v___x_1673_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec_ref(v___x_1678_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_a_1681_; lean_object* v___x_1682_; size_t v_sz_1683_; lean_object* v___x_1684_; 
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_a_1681_);
lean_dec_ref_known(v___x_1680_, 1);
v___x_1682_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1646_);
v_sz_1683_ = lean_array_size(v___x_1682_);
v___x_1684_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_1669_, v_sz_1683_, v___x_1641_, v___x_1682_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v_a_1669_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1686_; lean_object* v___f_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_a_1685_);
lean_dec_ref_known(v___x_1684_, 1);
v___x_1686_ = lean_box_usize(v___x_1641_);
lean_inc(v___x_1644_);
v___f_1687_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__2___boxed), 14, 5);
lean_closure_set(v___f_1687_, 0, v_a_1677_);
lean_closure_set(v___f_1687_, 1, v_target_1647_);
lean_closure_set(v___f_1687_, 2, v___x_1686_);
lean_closure_set(v___f_1687_, 3, v_a_1648_);
lean_closure_set(v___f_1687_, 4, v___x_1644_);
v___x_1688_ = l_Lean_mkAppN(v_fst_1649_, v_a_1681_);
lean_dec(v_a_1681_);
v___x_1689_ = lean_box(0);
v___x_1690_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_a_1685_, v___f_1687_, v___x_1688_, v___x_1644_, v___x_1689_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v_a_1685_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; uint8_t v___x_1695_; lean_object* v___x_1696_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref_known(v___x_1690_, 1);
v___x_1692_ = lean_mk_empty_array_with_capacity(v___x_1650_);
v___x_1693_ = lean_array_push(v___x_1692_, v_h_1652_);
v___x_1694_ = 0;
v___x_1695_ = 1;
v___x_1696_ = l_Lean_Meta_mkLambdaFVars(v___x_1693_, v_a_1691_, v___x_1694_, v___x_1651_, v___x_1694_, v___x_1651_, v___x_1695_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec_ref(v___x_1693_);
return v___x_1696_;
}
else
{
lean_dec_ref(v_h_1652_);
return v___x_1690_;
}
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec(v_a_1681_);
lean_dec(v_a_1677_);
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec(v___x_1644_);
v_a_1697_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1684_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1684_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
else
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
lean_dec(v_a_1677_);
lean_dec(v_a_1669_);
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec_ref(v_val_1646_);
lean_dec(v___x_1644_);
v_a_1705_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1680_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1680_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec_ref(v___x_1673_);
lean_dec(v_a_1669_);
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec_ref(v_val_1646_);
lean_dec_ref(v___x_1645_);
lean_dec(v___x_1644_);
v_a_1713_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1676_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1676_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1728_; 
lean_dec(v_a_1669_);
lean_dec(v_fst_1665_);
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec_ref(v_val_1646_);
lean_dec_ref(v___x_1645_);
lean_dec(v___x_1644_);
v_a_1721_ = lean_ctor_get(v___x_1671_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1723_ = v___x_1671_;
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_a_1721_);
lean_dec(v___x_1671_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1728_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v___x_1726_; 
if (v_isShared_1724_ == 0)
{
v___x_1726_ = v___x_1723_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1721_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_fst_1665_);
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec_ref(v_val_1646_);
lean_dec_ref(v___x_1645_);
lean_dec(v___x_1644_);
lean_dec_ref(v_snd_1643_);
v_a_1729_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1668_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1668_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_dec_ref(v_h_1652_);
lean_dec_ref(v_fst_1649_);
lean_dec_ref(v_a_1648_);
lean_dec_ref(v_target_1647_);
lean_dec_ref(v_val_1646_);
lean_dec_ref(v___x_1645_);
lean_dec(v___x_1644_);
lean_dec_ref(v_snd_1643_);
lean_dec_ref(v_a_1642_);
v_a_1737_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1662_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1662_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3___boxed(lean_object** _args){
lean_object* v___x_1745_ = _args[0];
lean_object* v___x_1746_ = _args[1];
lean_object* v___x_1747_ = _args[2];
lean_object* v_a_1748_ = _args[3];
lean_object* v_snd_1749_ = _args[4];
lean_object* v___x_1750_ = _args[5];
lean_object* v___x_1751_ = _args[6];
lean_object* v_val_1752_ = _args[7];
lean_object* v_target_1753_ = _args[8];
lean_object* v_a_1754_ = _args[9];
lean_object* v_fst_1755_ = _args[10];
lean_object* v___x_1756_ = _args[11];
lean_object* v___x_1757_ = _args[12];
lean_object* v_h_1758_ = _args[13];
lean_object* v___y_1759_ = _args[14];
lean_object* v___y_1760_ = _args[15];
lean_object* v___y_1761_ = _args[16];
lean_object* v___y_1762_ = _args[17];
lean_object* v___y_1763_ = _args[18];
lean_object* v___y_1764_ = _args[19];
lean_object* v___y_1765_ = _args[20];
_start:
{
size_t v___x_65534__boxed_1766_; uint8_t v___x_65543__boxed_1767_; lean_object* v_res_1768_; 
v___x_65534__boxed_1766_ = lean_unbox_usize(v___x_1747_);
lean_dec(v___x_1747_);
v___x_65543__boxed_1767_ = lean_unbox(v___x_1757_);
v_res_1768_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3(v___x_1745_, v___x_1746_, v___x_65534__boxed_1766_, v_a_1748_, v_snd_1749_, v___x_1750_, v___x_1751_, v_val_1752_, v_target_1753_, v_a_1754_, v_fst_1755_, v___x_1756_, v___x_65543__boxed_1767_, v_h_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___x_1756_);
lean_dec_ref(v___x_1746_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg(lean_object* v_fst_1769_, lean_object* v_as_1770_, size_t v_sz_1771_, size_t v_i_1772_, lean_object* v_b_1773_){
_start:
{
lean_object* v_a_1776_; uint8_t v___x_1780_; 
v___x_1780_ = lean_usize_dec_lt(v_i_1772_, v_sz_1771_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v_b_1773_);
return v___x_1781_;
}
else
{
lean_object* v_a_1782_; lean_object* v_fst_1783_; lean_object* v_snd_1784_; uint8_t v___y_1786_; lean_object* v___x_1789_; 
v_a_1782_ = lean_array_uget_borrowed(v_as_1770_, v_i_1772_);
v_fst_1783_ = lean_ctor_get(v_a_1782_, 0);
v_snd_1784_ = lean_ctor_get(v_a_1782_, 1);
v___x_1789_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_fst_1783_);
if (lean_obj_tag(v___x_1789_) == 1)
{
lean_object* v_val_1790_; lean_object* v_name_1791_; uint8_t v___x_1792_; 
v_val_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_val_1790_);
lean_dec_ref_known(v___x_1789_, 1);
v_name_1791_ = lean_ctor_get(v_val_1790_, 0);
lean_inc_ref(v_name_1791_);
lean_dec(v_val_1790_);
v___x_1792_ = lean_string_dec_eq(v_name_1791_, v_fst_1769_);
lean_dec_ref(v_name_1791_);
if (v___x_1792_ == 0)
{
v___y_1786_ = v___x_1792_;
goto v___jp_1785_;
}
else
{
uint8_t v___x_1793_; 
v___x_1793_ = lp_vampireReplay_Vampire_Literal_polarity(v_fst_1783_);
if (v___x_1793_ == 0)
{
v___y_1786_ = v___x_1792_;
goto v___jp_1785_;
}
else
{
v_a_1776_ = v_b_1773_;
goto v___jp_1775_;
}
}
}
else
{
lean_dec(v___x_1789_);
v_a_1776_ = v_b_1773_;
goto v___jp_1775_;
}
v___jp_1785_:
{
if (v___y_1786_ == 0)
{
v_a_1776_ = v_b_1773_;
goto v___jp_1775_;
}
else
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec(v_b_1773_);
lean_inc(v_snd_1784_);
v___x_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1787_, 0, v_snd_1784_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
}
}
v___jp_1775_:
{
size_t v___x_1777_; size_t v___x_1778_; 
v___x_1777_ = ((size_t)1ULL);
v___x_1778_ = lean_usize_add(v_i_1772_, v___x_1777_);
v_i_1772_ = v___x_1778_;
v_b_1773_ = v_a_1776_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg___boxed(lean_object* v_fst_1794_, lean_object* v_as_1795_, lean_object* v_sz_1796_, lean_object* v_i_1797_, lean_object* v_b_1798_, lean_object* v___y_1799_){
_start:
{
size_t v_sz_boxed_1800_; size_t v_i_boxed_1801_; lean_object* v_res_1802_; 
v_sz_boxed_1800_ = lean_unbox_usize(v_sz_1796_);
lean_dec(v_sz_1796_);
v_i_boxed_1801_ = lean_unbox_usize(v_i_1797_);
lean_dec(v_i_1797_);
v_res_1802_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg(v_fst_1794_, v_as_1795_, v_sz_boxed_1800_, v_i_boxed_1801_, v_b_1798_);
lean_dec_ref(v_as_1795_);
lean_dec_ref(v_fst_1794_);
return v_res_1802_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__0));
v___x_1805_ = l_Lean_stringToMessageData(v___x_1804_);
return v___x_1805_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__2));
v___x_1808_ = l_Lean_stringToMessageData(v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4(lean_object* v___x_1809_, lean_object* v___x_1810_, lean_object* v_val_1811_, lean_object* v___x_1812_, lean_object* v___f_1813_, lean_object* v_fst_1814_, lean_object* v___x_1815_, lean_object* v___x_1816_, uint8_t v___x_1817_, lean_object* v_snd_1818_, lean_object* v___x_1819_, lean_object* v_val_1820_, lean_object* v_fst_1821_, lean_object* v_xs_1822_, lean_object* v_target_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; size_t v_sz_1834_; size_t v___x_1835_; lean_object* v___x_1836_; 
v___x_1831_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___closed__0);
lean_inc(v___x_1809_);
v___x_1832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1809_);
lean_ctor_set(v___x_1832_, 1, v___x_1831_);
v___x_1833_ = l_Array_zip___redArg(v_xs_1822_, v___x_1810_);
v_sz_1834_ = lean_array_size(v___x_1833_);
v___x_1835_ = ((size_t)0ULL);
lean_inc_ref(v___x_1832_);
v___x_1836_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1833_, v_sz_1834_, v___x_1835_, v___x_1832_);
lean_dec_ref(v___x_1833_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1838_; size_t v_sz_1839_; lean_object* v___x_1840_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1838_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1811_);
v_sz_1839_ = lean_array_size(v___x_1838_);
lean_inc_ref(v___x_1838_);
v___x_1840_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_1837_, v_sz_1839_, v___x_1835_, v___x_1838_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
lean_inc(v_a_1837_);
lean_inc_ref(v___x_1812_);
v___x_1842_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_1812_, v_a_1837_, v___f_1813_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; size_t v_sz_1846_; lean_object* v___x_1847_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1842_, 1);
v___x_1844_ = lean_box(0);
v___x_1845_ = l_Array_zipIdx___redArg(v___x_1838_, v___x_1809_);
v_sz_1846_ = lean_array_size(v___x_1845_);
v___x_1847_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg(v_fst_1814_, v___x_1845_, v_sz_1846_, v___x_1835_, v___x_1844_);
lean_dec_ref(v___x_1845_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref_known(v___x_1847_, 1);
if (lean_obj_tag(v_a_1848_) == 1)
{
lean_object* v_val_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1884_; 
lean_dec_ref(v_fst_1814_);
v_val_1849_ = lean_ctor_get(v_a_1848_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_a_1848_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1851_ = v_a_1848_;
v_isShared_1852_ = v_isSharedCheck_1884_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_val_1849_);
lean_dec(v_a_1848_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1884_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1853_ = lean_box(v___x_1817_);
lean_inc(v_a_1841_);
lean_inc(v___x_1815_);
lean_inc_n(v_a_1843_, 2);
v___f_1854_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__1___boxed), 14, 6);
lean_closure_set(v___f_1854_, 0, v_a_1843_);
lean_closure_set(v___f_1854_, 1, v___x_1815_);
lean_closure_set(v___f_1854_, 2, v___x_1816_);
lean_closure_set(v___f_1854_, 3, v_a_1841_);
lean_closure_set(v___f_1854_, 4, v_val_1849_);
lean_closure_set(v___f_1854_, 5, v___x_1853_);
v___x_1855_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__1));
v___x_1856_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1855_, v_a_1843_, v___f_1854_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___f_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v___x_1858_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___boxed__const__1));
v___x_1859_ = lean_box(v___x_1817_);
lean_inc(v___x_1815_);
v___f_1860_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__3___boxed), 21, 13);
lean_closure_set(v___f_1860_, 0, v___x_1832_);
lean_closure_set(v___f_1860_, 1, v___x_1812_);
lean_closure_set(v___f_1860_, 2, v___x_1858_);
lean_closure_set(v___f_1860_, 3, v_a_1837_);
lean_closure_set(v___f_1860_, 4, v_snd_1818_);
lean_closure_set(v___f_1860_, 5, v___x_1809_);
lean_closure_set(v___f_1860_, 6, v___x_1819_);
lean_closure_set(v___f_1860_, 7, v_val_1820_);
lean_closure_set(v___f_1860_, 8, v_target_1823_);
lean_closure_set(v___f_1860_, 9, v_a_1841_);
lean_closure_set(v___f_1860_, 10, v_fst_1821_);
lean_closure_set(v___f_1860_, 11, v___x_1815_);
lean_closure_set(v___f_1860_, 12, v___x_1859_);
v___x_1861_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2, &lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_register___lam__1___closed__2);
lean_inc(v_a_1843_);
v___x_1862_ = l_Lean_Expr_app___override(v___x_1861_, v_a_1843_);
v___x_1863_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1855_, v___x_1862_, v___f_1860_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__4));
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 0, v_a_1843_);
v___x_1867_ = v___x_1851_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_a_1843_);
v___x_1867_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1868_ = lean_mk_empty_array_with_capacity(v___x_1815_);
lean_dec(v___x_1815_);
v___x_1869_ = lean_array_push(v___x_1868_, v___x_1867_);
v___x_1870_ = l_Lean_Meta_mkAppOptM(v___x_1865_, v___x_1869_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref_known(v___x_1870_, 1);
v___x_1872_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_component___lam__4___closed__6));
v___x_1873_ = lean_unsigned_to_nat(3u);
v___x_1874_ = lean_mk_empty_array_with_capacity(v___x_1873_);
v___x_1875_ = lean_array_push(v___x_1874_, v_a_1871_);
v___x_1876_ = lean_array_push(v___x_1875_, v_a_1857_);
v___x_1877_ = lean_array_push(v___x_1876_, v_a_1864_);
v___x_1878_ = l_Lean_Meta_mkAppM(v___x_1872_, v___x_1877_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; uint8_t v___x_1880_; uint8_t v___x_1881_; lean_object* v___x_1882_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1879_);
lean_dec_ref_known(v___x_1878_, 1);
v___x_1880_ = 0;
v___x_1881_ = 1;
v___x_1882_ = l_Lean_Meta_mkLambdaFVars(v_xs_1822_, v_a_1879_, v___x_1880_, v___x_1817_, v___x_1880_, v___x_1817_, v___x_1881_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
return v___x_1882_;
}
else
{
return v___x_1878_;
}
}
else
{
lean_dec(v_a_1864_);
lean_dec(v_a_1857_);
return v___x_1870_;
}
}
}
else
{
lean_dec(v_a_1857_);
lean_del_object(v___x_1851_);
lean_dec(v_a_1843_);
lean_dec(v___x_1815_);
return v___x_1863_;
}
}
else
{
lean_del_object(v___x_1851_);
lean_dec(v_a_1843_);
lean_dec(v_a_1841_);
lean_dec(v_a_1837_);
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1815_);
lean_dec_ref(v___x_1812_);
lean_dec(v___x_1809_);
return v___x_1856_;
}
}
}
else
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_a_1848_);
lean_dec(v_a_1843_);
lean_dec(v_a_1841_);
lean_dec(v_a_1837_);
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
lean_dec_ref(v___x_1812_);
lean_dec(v___x_1809_);
v___x_1885_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__1);
v___x_1886_ = l_Lean_stringToMessageData(v_fst_1814_);
v___x_1887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1885_);
lean_ctor_set(v___x_1887_, 1, v___x_1886_);
v___x_1888_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___closed__3);
v___x_1889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1887_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1889_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
return v___x_1890_;
}
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec(v_a_1843_);
lean_dec(v_a_1841_);
lean_dec(v_a_1837_);
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
lean_dec_ref(v_fst_1814_);
lean_dec_ref(v___x_1812_);
lean_dec(v___x_1809_);
v_a_1891_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1847_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1847_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
else
{
lean_dec(v_a_1841_);
lean_dec_ref(v___x_1838_);
lean_dec(v_a_1837_);
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
lean_dec_ref(v_fst_1814_);
lean_dec_ref(v___x_1812_);
lean_dec(v___x_1809_);
return v___x_1842_;
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec_ref(v___x_1838_);
lean_dec(v_a_1837_);
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
lean_dec_ref(v_fst_1814_);
lean_dec_ref(v___f_1813_);
lean_dec_ref(v___x_1812_);
lean_dec(v___x_1809_);
v_a_1899_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1840_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1840_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec_ref_known(v___x_1832_, 2);
lean_dec_ref(v_target_1823_);
lean_dec_ref(v_fst_1821_);
lean_dec_ref(v_val_1820_);
lean_dec_ref(v___x_1819_);
lean_dec_ref(v_snd_1818_);
lean_dec(v___x_1816_);
lean_dec(v___x_1815_);
lean_dec_ref(v_fst_1814_);
lean_dec_ref(v___f_1813_);
lean_dec_ref(v___x_1812_);
lean_dec_ref(v_val_1811_);
lean_dec(v___x_1809_);
v_a_1907_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1836_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1836_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___boxed(lean_object** _args){
lean_object* v___x_1915_ = _args[0];
lean_object* v___x_1916_ = _args[1];
lean_object* v_val_1917_ = _args[2];
lean_object* v___x_1918_ = _args[3];
lean_object* v___f_1919_ = _args[4];
lean_object* v_fst_1920_ = _args[5];
lean_object* v___x_1921_ = _args[6];
lean_object* v___x_1922_ = _args[7];
lean_object* v___x_1923_ = _args[8];
lean_object* v_snd_1924_ = _args[9];
lean_object* v___x_1925_ = _args[10];
lean_object* v_val_1926_ = _args[11];
lean_object* v_fst_1927_ = _args[12];
lean_object* v_xs_1928_ = _args[13];
lean_object* v_target_1929_ = _args[14];
lean_object* v___y_1930_ = _args[15];
lean_object* v___y_1931_ = _args[16];
lean_object* v___y_1932_ = _args[17];
lean_object* v___y_1933_ = _args[18];
lean_object* v___y_1934_ = _args[19];
lean_object* v___y_1935_ = _args[20];
lean_object* v___y_1936_ = _args[21];
_start:
{
uint8_t v___x_65824__boxed_1937_; lean_object* v_res_1938_; 
v___x_65824__boxed_1937_ = lean_unbox(v___x_1923_);
v_res_1938_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4(v___x_1915_, v___x_1916_, v_val_1917_, v___x_1918_, v___f_1919_, v_fst_1920_, v___x_1921_, v___x_1922_, v___x_65824__boxed_1937_, v_snd_1924_, v___x_1925_, v_val_1926_, v_fst_1927_, v_xs_1928_, v_target_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec_ref(v_xs_1928_);
lean_dec_ref(v___x_1916_);
return v_res_1938_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__0));
v___x_1941_ = l_Lean_stringToMessageData(v___x_1940_);
return v___x_1941_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__2));
v___x_1944_ = l_Lean_stringToMessageData(v___x_1943_);
return v___x_1944_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5(void){
_start:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__4));
v___x_1947_ = l_Lean_stringToMessageData(v___x_1946_);
return v___x_1947_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7(void){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1949_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__6));
v___x_1950_ = l_Lean_stringToMessageData(v___x_1949_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general(lean_object* v_step_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_){
_start:
{
lean_object* v_unit_1959_; lean_object* v_premises_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v_unit_1959_ = lean_ctor_get(v_step_1951_, 0);
lean_inc_ref(v_unit_1959_);
v_premises_1960_ = lean_ctor_get(v_step_1951_, 1);
v___x_1961_ = lean_array_get_size(v_premises_1960_);
v___x_1962_ = lean_unsigned_to_nat(2u);
v___x_1963_ = lean_nat_dec_eq(v___x_1961_, v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
lean_dec_ref(v_unit_1959_);
lean_dec_ref(v_step_1951_);
v___x_1964_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__1);
v___x_1965_ = l_Nat_reprFast(v___x_1961_);
v___x_1966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
v___x_1967_ = l_Lean_MessageData_ofFormat(v___x_1966_);
v___x_1968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1964_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1968_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_1969_;
}
else
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v_fst_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; 
v___x_1970_ = lean_unsigned_to_nat(0u);
v___x_1971_ = lean_array_fget_borrowed(v_premises_1960_, v___x_1970_);
v_fst_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_fst_1972_);
lean_inc_ref(v_unit_1959_);
v___x_1973_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_1959_);
v___x_1974_ = lean_array_get_size(v___x_1973_);
v___x_1975_ = lean_nat_dec_eq(v___x_1974_, v___x_1962_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
lean_dec_ref(v___x_1973_);
lean_dec(v_fst_1972_);
lean_dec_ref(v_unit_1959_);
lean_dec_ref(v_step_1951_);
v___x_1976_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__3);
v___x_1977_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1976_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_1977_;
}
else
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = lean_array_fget(v___x_1973_, v___x_1970_);
lean_inc(v___x_1978_);
v___x_1979_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v___x_1978_);
if (lean_obj_tag(v___x_1979_) == 1)
{
lean_object* v_val_1980_; lean_object* v___x_1981_; 
v_val_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_val_1980_);
lean_dec_ref_known(v___x_1979_, 1);
lean_inc_ref(v_unit_1959_);
v___x_1981_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_unit_1959_);
if (lean_obj_tag(v___x_1981_) == 1)
{
lean_object* v_val_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2016_; 
v_val_1982_ = lean_ctor_get(v___x_1981_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1981_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1984_ = v___x_1981_;
v_isShared_1985_ = v_isSharedCheck_2016_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_val_1982_);
lean_dec(v___x_1981_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2016_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1986_ = lean_unsigned_to_nat(1u);
v___x_1987_ = lean_array_fget(v___x_1973_, v___x_1986_);
lean_dec_ref(v___x_1973_);
lean_inc(v___x_1987_);
v___x_1988_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_componentOf(v___x_1987_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; lean_object* v_snd_1990_; lean_object* v_fst_1991_; lean_object* v_fst_1992_; lean_object* v_snd_1993_; lean_object* v___x_1994_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v_snd_1990_ = lean_ctor_get(v_a_1989_, 1);
lean_inc(v_snd_1990_);
v_fst_1991_ = lean_ctor_get(v_a_1989_, 0);
lean_inc(v_fst_1991_);
lean_dec(v_a_1989_);
v_fst_1992_ = lean_ctor_get(v_snd_1990_, 0);
lean_inc(v_fst_1992_);
v_snd_1993_ = lean_ctor_get(v_snd_1990_, 1);
lean_inc(v_snd_1993_);
lean_dec(v_snd_1990_);
v___x_1994_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; lean_object* v___f_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___f_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = lean_box(v___x_1975_);
lean_inc(v_snd_1993_);
v___f_1997_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1997_, 0, v_snd_1993_);
lean_closure_set(v___f_1997_, 1, v___x_1996_);
v___x_1998_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Splitting_0__Vampire_Reconstruct_Splitting_splitVars(v___x_1987_, v_fst_1992_);
lean_dec(v_fst_1992_);
v___x_1999_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_1959_);
v___x_2000_ = lean_box(v___x_1975_);
lean_inc_ref(v___x_1999_);
v___f_2001_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Splitting_general___lam__4___boxed), 22, 13);
lean_closure_set(v___f_2001_, 0, v___x_1970_);
lean_closure_set(v___f_2001_, 1, v___x_1999_);
lean_closure_set(v___f_2001_, 2, v_val_1982_);
lean_closure_set(v___f_2001_, 3, v___x_1998_);
lean_closure_set(v___f_2001_, 4, v___f_1997_);
lean_closure_set(v___f_2001_, 5, v_fst_1991_);
lean_closure_set(v___f_2001_, 6, v___x_1986_);
lean_closure_set(v___f_2001_, 7, v___x_1962_);
lean_closure_set(v___f_2001_, 8, v___x_2000_);
lean_closure_set(v___f_2001_, 9, v_snd_1993_);
lean_closure_set(v___f_2001_, 10, v___x_1978_);
lean_closure_set(v___f_2001_, 11, v_val_1980_);
lean_closure_set(v___f_2001_, 12, v_fst_1972_);
v___x_2002_ = lean_array_get_size(v___x_1999_);
lean_dec_ref(v___x_1999_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 0, v___x_2002_);
v___x_2004_ = v___x_1984_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
uint8_t v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = 0;
v___x_2006_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_1995_, v___x_2004_, v___f_2001_, v___x_2005_, v___x_2005_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_2006_;
}
}
else
{
lean_dec(v_snd_1993_);
lean_dec(v_fst_1992_);
lean_dec(v_fst_1991_);
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1982_);
lean_dec(v_val_1980_);
lean_dec(v___x_1978_);
lean_dec(v_fst_1972_);
lean_dec_ref(v_unit_1959_);
return v___x_1994_;
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v___x_1987_);
lean_del_object(v___x_1984_);
lean_dec(v_val_1982_);
lean_dec(v_val_1980_);
lean_dec(v___x_1978_);
lean_dec(v_fst_1972_);
lean_dec_ref(v_unit_1959_);
lean_dec_ref(v_step_1951_);
v_a_2008_ = lean_ctor_get(v___x_1988_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1988_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1988_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1988_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
else
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
lean_dec(v___x_1981_);
lean_dec(v_val_1980_);
lean_dec(v___x_1978_);
lean_dec_ref(v___x_1973_);
lean_dec(v_fst_1972_);
lean_dec_ref(v_unit_1959_);
lean_dec_ref(v_step_1951_);
v___x_2017_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__5);
v___x_2018_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2017_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_2018_;
}
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
lean_dec(v___x_1979_);
lean_dec(v___x_1978_);
lean_dec_ref(v___x_1973_);
lean_dec(v_fst_1972_);
lean_dec_ref(v_unit_1959_);
lean_dec_ref(v_step_1951_);
v___x_2019_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Splitting_general___closed__7);
v___x_2020_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2019_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
return v___x_2020_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_general___boxed(lean_object* v_step_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_general(v_step_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_);
lean_dec(v_a_2027_);
lean_dec_ref(v_a_2026_);
lean_dec(v_a_2025_);
lean_dec_ref(v_a_2024_);
lean_dec(v_a_2023_);
lean_dec_ref(v_a_2022_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0(lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v___x_2039_; 
v___x_2039_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___redArg(v_a_2030_, v_a_2031_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0___boxed(lean_object* v_a_2040_, lean_object* v_a_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = lp_vampireReplay___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Vampire_Reconstruct_Splitting_general_spec__0(v_a_2040_, v_a_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4(lean_object* v_a_2050_, lean_object* v_target_2051_, lean_object* v_hl_2052_, lean_object* v_as_2053_, size_t v_sz_2054_, size_t v_i_2055_, lean_object* v_b_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v___x_2064_; 
v___x_2064_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___redArg(v_a_2050_, v_target_2051_, v_hl_2052_, v_as_2053_, v_sz_2054_, v_i_2055_, v_b_2056_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4___boxed(lean_object* v_a_2065_, lean_object* v_target_2066_, lean_object* v_hl_2067_, lean_object* v_as_2068_, lean_object* v_sz_2069_, lean_object* v_i_2070_, lean_object* v_b_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
size_t v_sz_boxed_2079_; size_t v_i_boxed_2080_; lean_object* v_res_2081_; 
v_sz_boxed_2079_ = lean_unbox_usize(v_sz_2069_);
lean_dec(v_sz_2069_);
v_i_boxed_2080_ = lean_unbox_usize(v_i_2070_);
lean_dec(v_i_2070_);
v_res_2081_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__4(v_a_2065_, v_target_2066_, v_hl_2067_, v_as_2068_, v_sz_boxed_2079_, v_i_boxed_2080_, v_b_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec_ref(v_as_2068_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6(lean_object* v_fst_2082_, lean_object* v_as_2083_, size_t v_sz_2084_, size_t v_i_2085_, lean_object* v_b_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___redArg(v_fst_2082_, v_as_2083_, v_sz_2084_, v_i_2085_, v_b_2086_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6___boxed(lean_object* v_fst_2095_, lean_object* v_as_2096_, lean_object* v_sz_2097_, lean_object* v_i_2098_, lean_object* v_b_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
size_t v_sz_boxed_2107_; size_t v_i_boxed_2108_; lean_object* v_res_2109_; 
v_sz_boxed_2107_ = lean_unbox_usize(v_sz_2097_);
lean_dec(v_sz_2097_);
v_i_boxed_2108_ = lean_unbox_usize(v_i_2098_);
lean_dec(v_i_2098_);
v_res_2109_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Splitting_general_spec__6(v_fst_2095_, v_as_2096_, v_sz_boxed_2107_, v_i_boxed_2108_, v_b_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec_ref(v_as_2096_);
lean_dec_ref(v_fst_2095_);
return v_res_2109_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Splitting(uint8_t builtin) {
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
