// Lean compiler output
// Module: Vampire.Reconstruct.Rules.Avatar
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_SatClause_literals(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_namedFormula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_flipName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_flippedName(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_SatClause_premises(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_SatClause_origin_x3f(lean_object*);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_render(lean_object*);
uint8_t lp_vampireReplay_Vampire_Clause_isEmpty(lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_render(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_name_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_splits(lean_object*);
uint8_t l_Array_contains___at___00Lean_Server_FileWorker_handlePostRequestSpecialCases_spec__3(lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Server_Watchdog_handleRename_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_premiseUses(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(lean_object*, uint32_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(uint32_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_satPremise_x3f(lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "the definition of `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` binds X"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ", which the component does not mention"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "an avatar component clause should hold under one name, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "an avatar component clause should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "an avatar component clause without its definition"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "an avatar definition states no component"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__6_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__9_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "an avatar component clause's definition states no formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__10_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 234, 148, 175, 115, 149, 2, 231)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__4_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "not_not"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__5 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__5_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(145, 137, 207, 135, 95, 147, 196, 34)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__7 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__7_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__9 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__9_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__10 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__10_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "the negation of `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__12 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__12_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__14 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__14_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\nis not among"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__16 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__16_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "an avatar contradiction clause should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "an avatar contradiction clause without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__4_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__6_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__7_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__1_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "neither of"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nand"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "\nis the negation of the other"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "missing literal"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "literal "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " of a propositional premise is not false"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "the clauses a propositional step was derived from left nothing to contradict"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0___boxed(lean_object**);
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2___boxed(lean_object**);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__3_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "a propositional clause used before it was stated"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "a propositional clause used before it was proved"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1;
static const lean_array_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "the propositional shadow of step "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = ", which is not among the refutation's premises"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "a propositional clause proved before it was stated"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "a propositional refutation without a clause"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "the refuting clause was not proved"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__11(lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__12(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nothing refutes"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nof the clause "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ", whose components are "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "<missing formula>"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__7_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "$false"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__8_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` is not among"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 76, 64, 139, 36, 56, 191, 236)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "` was renamed to a term, not a variable"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ", which nothing relates to the clause"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` states no component"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a quantifier without a body"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "` names more components of this clause than it has renamings recorded"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__5 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "` states no formula"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__7 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__7_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "nothing says what `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__9 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__9_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` means"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__11 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__11_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "~"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1___boxed(lean_object**);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "an avatar split clause states "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ", which is not a name"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "an avatar split clause without the clause it splits"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "an avatar split clause states no formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "an avatar refutation without the propositional clause it stands on"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__0));
v___x_3_ = l_Lean_stringToMessageData(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__2));
v___x_6_ = l_Lean_stringToMessageData(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__4));
v___x_9_ = l_Lean_stringToMessageData(v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg(lean_object* v_a_10_, lean_object* v_fst_11_, size_t v_sz_12_, size_t v_i_13_, lean_object* v_bs_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = lean_usize_dec_lt(v_i_13_, v_sz_12_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; 
lean_dec_ref(v_fst_11_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v_bs_14_);
return v___x_21_;
}
else
{
lean_object* v_v_22_; lean_object* v___x_23_; lean_object* v_bs_x27_24_; lean_object* v_a_26_; uint32_t v___x_31_; lean_object* v___x_32_; 
v_v_22_ = lean_array_uget(v_bs_14_, v_i_13_);
v___x_23_ = lean_unsigned_to_nat(0u);
v_bs_x27_24_ = lean_array_uset(v_bs_14_, v_i_13_, v___x_23_);
v___x_31_ = lean_unbox_uint32(v_v_22_);
v___x_32_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_a_10_, v___x_31_);
if (lean_obj_tag(v___x_32_) == 1)
{
lean_object* v_val_33_; 
lean_dec(v_v_22_);
v_val_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v___x_32_, 1);
v_a_26_ = v_val_33_;
goto v___jp_25_;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; uint32_t v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec(v___x_32_);
v___x_34_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
lean_inc_ref(v_fst_11_);
v___x_35_ = l_Lean_stringToMessageData(v_fst_11_);
v___x_36_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_34_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3);
v___x_38_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_unbox_uint32(v_v_22_);
lean_dec(v_v_22_);
v___x_40_ = lean_uint32_to_nat(v___x_39_);
v___x_41_ = l_Nat_reprFast(v___x_40_);
v___x_42_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
v___x_43_ = l_Lean_MessageData_ofFormat(v___x_42_);
v___x_44_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_38_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__5);
v___x_46_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_46_, v___y_15_, v___y_16_, v___y_17_, v___y_18_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_a_48_);
lean_dec_ref_known(v___x_47_, 1);
v_a_26_ = v_a_48_;
goto v___jp_25_;
}
else
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
lean_dec_ref(v_bs_x27_24_);
lean_dec_ref(v_fst_11_);
v_a_49_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_47_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_47_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
v___jp_25_:
{
size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; 
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_add(v_i_13_, v___x_27_);
v___x_29_ = lean_array_uset(v_bs_x27_24_, v_i_13_, v_a_26_);
v_i_13_ = v___x_28_;
v_bs_14_ = v___x_29_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___boxed(lean_object* v_a_57_, lean_object* v_fst_58_, lean_object* v_sz_59_, lean_object* v_i_60_, lean_object* v_bs_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
size_t v_sz_boxed_67_; size_t v_i_boxed_68_; lean_object* v_res_69_; 
v_sz_boxed_67_ = lean_unbox_usize(v_sz_59_);
lean_dec(v_sz_59_);
v_i_boxed_68_ = lean_unbox_usize(v_i_60_);
lean_dec(v_i_60_);
v_res_69_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg(v_a_57_, v_fst_58_, v_sz_boxed_67_, v_i_boxed_68_, v_bs_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec_ref(v_a_57_);
return v_res_69_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_box(0);
v___x_71_ = lean_unsigned_to_nat(16u);
v___x_72_ = lean_mk_array(v___x_71_, v___x_70_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0(lean_object* v___x_73_, lean_object* v___x_74_, lean_object* v___y_75_, lean_object* v_fst_76_, lean_object* v_snd_77_, uint8_t v_a_78_, uint8_t v___x_79_, lean_object* v_xs_80_, lean_object* v_target_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; size_t v_sz_92_; size_t v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0);
v___x_90_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_73_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = l_Array_zip___redArg(v_xs_80_, v___x_74_);
v_sz_92_ = lean_array_size(v___x_91_);
v___x_93_ = ((size_t)0ULL);
v___x_94_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_91_, v_sz_92_, v___x_93_, v___x_90_);
lean_dec_ref(v___x_91_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; size_t v_sz_96_; lean_object* v___x_97_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_95_);
lean_dec_ref_known(v___x_94_, 1);
v_sz_96_ = lean_array_size(v___y_75_);
v___x_97_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg(v_a_95_, v_fst_76_, v_sz_96_, v___x_93_, v___y_75_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v_a_95_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_a_98_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_a_98_);
lean_dec_ref_known(v___x_97_, 1);
lean_inc_ref(v_snd_77_);
v___x_99_ = l_Lean_mkAppN(v_snd_77_, v_a_98_);
lean_inc(v___y_87_);
lean_inc_ref(v___y_86_);
lean_inc(v___y_85_);
lean_inc_ref(v___y_84_);
v___x_100_ = lean_infer_type(v_snd_77_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_102_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_100_, 1);
v___x_102_ = l_Lean_Meta_instantiateForall(v_a_101_, v_a_98_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v_a_98_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_104_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
v___x_104_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_a_103_, v_target_81_, v___x_99_, v___y_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; uint8_t v___x_106_; lean_object* v___x_107_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = 1;
v___x_107_ = l_Lean_Meta_mkLambdaFVars(v_xs_80_, v_a_105_, v_a_78_, v___x_79_, v_a_78_, v___x_79_, v___x_106_, v___y_84_, v___y_85_, v___y_86_, v___y_87_);
return v___x_107_;
}
else
{
return v___x_104_;
}
}
else
{
lean_dec_ref(v___x_99_);
lean_dec_ref(v_target_81_);
return v___x_102_;
}
}
else
{
lean_dec_ref(v___x_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_target_81_);
return v___x_100_;
}
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
lean_dec_ref(v_target_81_);
lean_dec_ref(v_snd_77_);
v_a_108_ = lean_ctor_get(v___x_97_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_97_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_97_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
else
{
lean_object* v_a_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_123_; 
lean_dec_ref(v_target_81_);
lean_dec_ref(v_snd_77_);
lean_dec_ref(v_fst_76_);
lean_dec_ref(v___y_75_);
v_a_116_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_123_ == 0)
{
v___x_118_ = v___x_94_;
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_a_116_);
lean_dec(v___x_94_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_123_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___x_121_; 
if (v_isShared_119_ == 0)
{
v___x_121_ = v___x_118_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_a_116_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___boxed(lean_object* v___x_124_, lean_object* v___x_125_, lean_object* v___y_126_, lean_object* v_fst_127_, lean_object* v_snd_128_, lean_object* v_a_129_, lean_object* v___x_130_, lean_object* v_xs_131_, lean_object* v_target_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
uint8_t v_a_18217__boxed_140_; uint8_t v___x_18218__boxed_141_; lean_object* v_res_142_; 
v_a_18217__boxed_140_ = lean_unbox(v_a_129_);
v___x_18218__boxed_141_ = lean_unbox(v___x_130_);
v_res_142_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0(v___x_124_, v___x_125_, v___y_126_, v_fst_127_, v_snd_128_, v_a_18217__boxed_140_, v___x_18218__boxed_141_, v_xs_131_, v_target_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec_ref(v_xs_131_);
lean_dec_ref(v___x_125_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(lean_object* v_as_143_, size_t v_i_144_, size_t v_stop_145_, lean_object* v_b_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = lean_usize_dec_eq(v_i_144_, v_stop_145_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_array_uget_borrowed(v_as_143_, v_i_144_);
v___x_154_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___x_153_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v_a_157_; uint8_t v___x_161_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref_known(v___x_154_, 1);
v___x_161_ = lean_unbox(v_a_155_);
lean_dec(v_a_155_);
if (v___x_161_ == 12)
{
v_a_157_ = v_b_146_;
goto v___jp_156_;
}
else
{
lean_object* v___x_162_; 
lean_inc(v___x_153_);
v___x_162_ = lean_array_push(v_b_146_, v___x_153_);
v_a_157_ = v___x_162_;
goto v___jp_156_;
}
v___jp_156_:
{
size_t v___x_158_; size_t v___x_159_; 
v___x_158_ = ((size_t)1ULL);
v___x_159_ = lean_usize_add(v_i_144_, v___x_158_);
v_i_144_ = v___x_159_;
v_b_146_ = v_a_157_;
goto _start;
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
lean_dec_ref(v_b_146_);
v_a_163_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v___x_154_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_154_);
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
else
{
lean_object* v___x_171_; 
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v_b_146_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg___boxed(lean_object* v_as_172_, lean_object* v_i_173_, lean_object* v_stop_174_, lean_object* v_b_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
size_t v_i_boxed_181_; size_t v_stop_boxed_182_; lean_object* v_res_183_; 
v_i_boxed_181_ = lean_unbox_usize(v_i_173_);
lean_dec(v_i_173_);
v_stop_boxed_182_ = lean_unbox_usize(v_stop_174_);
lean_dec(v_stop_174_);
v_res_183_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(v_as_172_, v_i_boxed_181_, v_stop_boxed_182_, v_b_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec_ref(v_as_172_);
return v_res_183_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__0));
v___x_186_ = l_Lean_stringToMessageData(v___x_185_);
return v___x_186_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__2));
v___x_189_ = l_Lean_stringToMessageData(v___x_188_);
return v___x_189_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__4));
v___x_192_ = l_Lean_stringToMessageData(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__6));
v___x_195_ = l_Lean_stringToMessageData(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__10));
v___x_202_ = l_Lean_stringToMessageData(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component(lean_object* v_step_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_unit_211_; lean_object* v_premises_212_; lean_object* v_assumed_213_; lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; 
v_unit_211_ = lean_ctor_get(v_step_203_, 0);
lean_inc_ref(v_unit_211_);
v_premises_212_ = lean_ctor_get(v_step_203_, 1);
v_assumed_213_ = lean_ctor_get(v_step_203_, 2);
v___x_214_ = lean_array_get_size(v_assumed_213_);
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = lean_nat_dec_eq(v___x_214_, v___x_215_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
lean_dec_ref(v_unit_211_);
lean_dec_ref(v_step_203_);
v___x_217_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__1);
v___x_218_ = l_Nat_reprFast(v___x_214_);
v___x_219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = l_Lean_MessageData_ofFormat(v___x_219_);
v___x_221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_217_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_221_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v_fst_225_; lean_object* v_snd_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_330_; 
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_array_fget(v_assumed_213_, v___x_223_);
v_fst_225_ = lean_ctor_get(v___x_224_, 0);
v_snd_226_ = lean_ctor_get(v___x_224_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_330_ == 0)
{
v___x_228_ = v___x_224_;
v_isShared_229_ = v_isSharedCheck_330_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_snd_226_);
lean_inc(v_fst_225_);
lean_dec(v___x_224_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_330_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = lean_array_get_size(v_premises_212_);
v___x_231_ = lean_nat_dec_eq(v___x_230_, v___x_215_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
lean_dec_ref(v_step_203_);
v___x_232_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__3);
v___x_233_ = l_Nat_reprFast(v___x_230_);
v___x_234_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
v___x_235_ = l_Lean_MessageData_ofFormat(v___x_234_);
if (v_isShared_229_ == 0)
{
lean_ctor_set_tag(v___x_228_, 7);
lean_ctor_set(v___x_228_, 1, v___x_235_);
lean_ctor_set(v___x_228_, 0, v___x_232_);
v___x_237_ = v___x_228_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_235_);
v___x_237_ = v_reuseFailAlloc_239_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
lean_object* v___x_238_; 
v___x_238_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_237_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_238_;
}
}
else
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
lean_del_object(v___x_228_);
lean_inc_ref(v_unit_211_);
v___x_240_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_211_);
v___x_241_ = lean_array_get_size(v___x_240_);
v___x_242_ = lean_nat_dec_lt(v___x_223_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; lean_object* v___x_244_; 
lean_dec_ref(v___x_240_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
lean_dec_ref(v_step_203_);
v___x_243_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__5);
v___x_244_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_243_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_244_;
}
else
{
lean_object* v___x_245_; 
v___x_245_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
lean_inc(v_a_209_);
lean_inc_ref(v_a_208_);
lean_inc(v_a_207_);
lean_inc_ref(v_a_206_);
lean_inc(v_snd_226_);
v___x_247_ = lean_infer_type(v_snd_226_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_329_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_329_ == 0)
{
v___x_250_ = v___x_247_;
v_isShared_251_ = v_isSharedCheck_329_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_a_248_);
lean_dec(v___x_247_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_329_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
lean_object* v___x_252_; 
lean_inc(v_a_246_);
v___x_252_ = l_Lean_Meta_isExprDefEq(v_a_248_, v_a_246_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_320_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_320_ == 0)
{
v___x_255_ = v___x_252_;
v_isShared_256_ = v_isSharedCheck_320_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_252_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_320_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___y_258_; lean_object* v_a_270_; lean_object* v___y_290_; uint8_t v___x_300_; 
v___x_300_ = lean_unbox(v_a_253_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_del_object(v___x_255_);
v___x_301_ = lean_array_fget(v___x_240_, v___x_223_);
lean_dec_ref(v___x_240_);
v___x_302_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_301_);
if (lean_obj_tag(v___x_302_) == 1)
{
lean_object* v_val_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v_val_303_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_val_303_);
lean_dec_ref_known(v___x_302_, 1);
v___x_304_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_303_);
v___x_305_ = lean_array_get_size(v___x_304_);
v___x_306_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__9));
v___x_307_ = lean_nat_dec_lt(v___x_223_, v___x_305_);
if (v___x_307_ == 0)
{
lean_dec_ref(v___x_304_);
v_a_270_ = v___x_306_;
goto v___jp_269_;
}
else
{
uint8_t v___x_308_; 
v___x_308_ = lean_nat_dec_le(v___x_305_, v___x_305_);
if (v___x_308_ == 0)
{
if (v___x_307_ == 0)
{
lean_dec_ref(v___x_304_);
v_a_270_ = v___x_306_;
goto v___jp_269_;
}
else
{
size_t v___x_309_; size_t v___x_310_; lean_object* v___x_311_; 
v___x_309_ = ((size_t)0ULL);
v___x_310_ = lean_usize_of_nat(v___x_305_);
v___x_311_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(v___x_304_, v___x_309_, v___x_310_, v___x_306_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec_ref(v___x_304_);
v___y_290_ = v___x_311_;
goto v___jp_289_;
}
}
else
{
size_t v___x_312_; size_t v___x_313_; lean_object* v___x_314_; 
v___x_312_ = ((size_t)0ULL);
v___x_313_ = lean_usize_of_nat(v___x_305_);
v___x_314_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(v___x_304_, v___x_312_, v___x_313_, v___x_306_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
lean_dec_ref(v___x_304_);
v___y_290_ = v___x_314_;
goto v___jp_289_;
}
}
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec(v___x_302_);
lean_dec(v_a_253_);
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
v___x_315_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__11);
v___x_316_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_315_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_316_;
}
}
else
{
lean_object* v___x_318_; 
lean_dec(v_a_253_);
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec_ref(v___x_240_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v_snd_226_);
v___x_318_ = v___x_255_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_snd_226_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
v___jp_257_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___f_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_259_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_211_);
v___x_260_ = lean_box(v___x_242_);
lean_inc(v_a_253_);
lean_inc_ref(v___x_259_);
v___f_261_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___boxed), 16, 7);
lean_closure_set(v___f_261_, 0, v___x_223_);
lean_closure_set(v___f_261_, 1, v___x_259_);
lean_closure_set(v___f_261_, 2, v___y_258_);
lean_closure_set(v___f_261_, 3, v_fst_225_);
lean_closure_set(v___f_261_, 4, v_snd_226_);
lean_closure_set(v___f_261_, 5, v_a_253_);
lean_closure_set(v___f_261_, 6, v___x_260_);
v___x_262_ = lean_array_get_size(v___x_259_);
lean_dec_ref(v___x_259_);
if (v_isShared_251_ == 0)
{
lean_ctor_set_tag(v___x_250_, 1);
lean_ctor_set(v___x_250_, 0, v___x_262_);
v___x_264_ = v___x_250_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_268_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
uint8_t v___x_265_; uint8_t v___x_266_; lean_object* v___x_267_; 
v___x_265_ = lean_unbox(v_a_253_);
v___x_266_ = lean_unbox(v_a_253_);
lean_dec(v_a_253_);
v___x_267_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_246_, v___x_264_, v___f_261_, v___x_265_, v___x_266_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_267_;
}
}
v___jp_269_:
{
lean_object* v___x_271_; uint8_t v___x_272_; 
v___x_271_ = lean_array_get_size(v_a_270_);
v___x_272_ = lean_nat_dec_lt(v___x_223_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref(v_a_270_);
lean_dec(v_a_253_);
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
v___x_273_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__7);
v___x_274_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_273_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
return v___x_274_;
}
else
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_array_fget(v_a_270_, v___x_223_);
lean_dec_ref(v_a_270_);
v___x_276_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___x_275_, v_a_206_, v_a_207_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; uint8_t v___x_278_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
v___x_278_ = lean_unbox(v_a_277_);
lean_dec(v_a_277_);
if (v___x_278_ == 7)
{
lean_object* v___x_279_; 
v___x_279_ = lp_vampireReplay_Vampire_Formula_boundVars(v___x_275_);
v___y_258_ = v___x_279_;
goto v___jp_257_;
}
else
{
lean_object* v___x_280_; 
lean_dec(v___x_275_);
v___x_280_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8));
v___y_258_ = v___x_280_;
goto v___jp_257_;
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
lean_dec(v___x_275_);
lean_dec(v_a_253_);
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
v_a_281_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_276_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_276_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
v___jp_289_:
{
if (lean_obj_tag(v___y_290_) == 0)
{
lean_object* v_a_291_; 
v_a_291_ = lean_ctor_get(v___y_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___y_290_, 1);
v_a_270_ = v_a_291_;
goto v___jp_269_;
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec(v_a_253_);
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
v_a_292_ = lean_ctor_get(v___y_290_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___y_290_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___y_290_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___y_290_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_del_object(v___x_250_);
lean_dec(v_a_246_);
lean_dec_ref(v___x_240_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
v_a_321_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_252_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_252_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
}
else
{
lean_dec(v_a_246_);
lean_dec_ref(v___x_240_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
return v___x_247_;
}
}
else
{
lean_dec_ref(v___x_240_);
lean_dec(v_snd_226_);
lean_dec(v_fst_225_);
lean_dec_ref(v_unit_211_);
return v___x_245_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_component___boxed(lean_object* v_step_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_component(v_step_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0(lean_object* v_a_340_, lean_object* v_fst_341_, size_t v_sz_342_, size_t v_i_343_, lean_object* v_bs_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg(v_a_340_, v_fst_341_, v_sz_342_, v_i_343_, v_bs_344_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___boxed(lean_object* v_a_353_, lean_object* v_fst_354_, lean_object* v_sz_355_, lean_object* v_i_356_, lean_object* v_bs_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
size_t v_sz_boxed_365_; size_t v_i_boxed_366_; lean_object* v_res_367_; 
v_sz_boxed_365_ = lean_unbox_usize(v_sz_355_);
lean_dec(v_sz_355_);
v_i_boxed_366_ = lean_unbox_usize(v_i_356_);
lean_dec(v_i_356_);
v_res_367_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0(v_a_353_, v_fst_354_, v_sz_boxed_365_, v_i_boxed_366_, v_bs_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_, v___y_363_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec_ref(v_a_353_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1(lean_object* v_as_368_, size_t v_i_369_, size_t v_stop_370_, lean_object* v_b_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___redArg(v_as_368_, v_i_369_, v_stop_370_, v_b_371_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1___boxed(lean_object* v_as_380_, lean_object* v_i_381_, lean_object* v_stop_382_, lean_object* v_b_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
size_t v_i_boxed_391_; size_t v_stop_boxed_392_; lean_object* v_res_393_; 
v_i_boxed_391_ = lean_unbox_usize(v_i_381_);
lean_dec(v_i_381_);
v_stop_boxed_392_ = lean_unbox_usize(v_stop_382_);
lean_dec(v_stop_382_);
v_res_393_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Avatar_component_spec__1(v_as_380_, v_i_boxed_391_, v_stop_boxed_392_, v_b_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec_ref(v_as_380_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0(lean_object* v___x_394_, lean_object* v_a_395_, lean_object* v_val_396_, lean_object* v_h_397_, uint8_t v___x_398_, lean_object* v_d_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___x_407_; 
lean_inc_ref(v_d_399_);
v___x_407_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_394_, v_a_395_, v_val_396_, v_d_399_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_408_);
lean_dec_ref_known(v___x_407_, 1);
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = lean_mk_empty_array_with_capacity(v___x_409_);
v___x_411_ = lean_array_push(v___x_410_, v_d_399_);
v___x_412_ = l_Lean_Expr_app___override(v_h_397_, v_a_408_);
v___x_413_ = 0;
v___x_414_ = 1;
v___x_415_ = l_Lean_Meta_mkLambdaFVars(v___x_411_, v___x_412_, v___x_413_, v___x_398_, v___x_413_, v___x_398_, v___x_414_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec_ref(v___x_411_);
return v___x_415_;
}
else
{
lean_dec_ref(v_d_399_);
lean_dec_ref(v_h_397_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0___boxed(lean_object* v___x_416_, lean_object* v_a_417_, lean_object* v_val_418_, lean_object* v_h_419_, lean_object* v___x_420_, lean_object* v_d_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
uint8_t v___x_13571__boxed_429_; lean_object* v_res_430_; 
v___x_13571__boxed_429_ = lean_unbox(v___x_420_);
v_res_430_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0(v___x_416_, v_a_417_, v_val_418_, v_h_419_, v___x_13571__boxed_429_, v_d_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v_val_418_);
lean_dec_ref(v_a_417_);
lean_dec(v___x_416_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg(lean_object* v_fst_431_, lean_object* v_as_432_, size_t v_sz_433_, size_t v_i_434_, lean_object* v_b_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
uint8_t v___x_441_; 
v___x_441_ = lean_usize_dec_lt(v_i_434_, v_sz_433_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
lean_dec_ref(v_fst_431_);
v___x_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_442_, 0, v_b_435_);
return v___x_442_;
}
else
{
lean_object* v_a_443_; lean_object* v_fst_444_; lean_object* v_snd_445_; lean_object* v___x_446_; 
v_a_443_ = lean_array_uget_borrowed(v_as_432_, v_i_434_);
v_fst_444_ = lean_ctor_get(v_a_443_, 0);
v_snd_445_ = lean_ctor_get(v_a_443_, 1);
lean_inc_ref(v_fst_431_);
lean_inc(v_fst_444_);
v___x_446_ = l_Lean_Meta_isExprDefEq(v_fst_444_, v_fst_431_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_459_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_459_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_459_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_459_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
uint8_t v___x_451_; 
v___x_451_ = lean_unbox(v_a_447_);
lean_dec(v_a_447_);
if (v___x_451_ == 0)
{
size_t v___x_452_; size_t v___x_453_; 
lean_del_object(v___x_449_);
v___x_452_ = ((size_t)1ULL);
v___x_453_ = lean_usize_add(v_i_434_, v___x_452_);
v_i_434_ = v___x_453_;
goto _start;
}
else
{
lean_object* v___x_455_; lean_object* v___x_457_; 
lean_dec(v_b_435_);
lean_dec_ref(v_fst_431_);
lean_inc(v_snd_445_);
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v_snd_445_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_455_);
v___x_457_ = v___x_449_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec(v_b_435_);
lean_dec_ref(v_fst_431_);
v_a_460_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_446_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_446_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg___boxed(lean_object* v_fst_468_, lean_object* v_as_469_, lean_object* v_sz_470_, lean_object* v_i_471_, lean_object* v_b_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
size_t v_sz_boxed_478_; size_t v_i_boxed_479_; lean_object* v_res_480_; 
v_sz_boxed_478_ = lean_unbox_usize(v_sz_470_);
lean_dec(v_sz_470_);
v_i_boxed_479_ = lean_unbox_usize(v_i_471_);
lean_dec(v_i_471_);
v_res_480_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg(v_fst_468_, v_as_469_, v_sz_boxed_478_, v_i_boxed_479_, v_b_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec_ref(v_as_469_);
return v_res_480_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__12));
v___x_502_ = l_Lean_stringToMessageData(v___x_501_);
return v___x_502_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__14));
v___x_505_ = l_Lean_stringToMessageData(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__16));
v___x_508_ = l_Lean_stringToMessageData(v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1(lean_object* v___x_509_, lean_object* v_a_510_, lean_object* v_h_511_, lean_object* v_as_512_, size_t v_sz_513_, size_t v_i_514_, lean_object* v_b_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_a_524_; uint8_t v___x_528_; 
v___x_528_ = lean_usize_dec_lt(v_i_514_, v_sz_513_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; 
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
v___x_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_529_, 0, v_b_515_);
return v___x_529_;
}
else
{
lean_object* v_a_530_; lean_object* v___x_531_; 
v_a_530_ = lean_array_uget_borrowed(v_as_512_, v_i_514_);
lean_inc(v_a_530_);
v___x_531_ = lp_vampireReplay_Vampire_Reconstruct_flipName(v_a_530_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v_fst_533_; lean_object* v_snd_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_613_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v_fst_533_ = lean_ctor_get(v_a_532_, 0);
v_snd_534_ = lean_ctor_get(v_a_532_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v_a_532_);
if (v_isSharedCheck_613_ == 0)
{
v___x_536_ = v_a_532_;
v_isShared_537_ = v_isSharedCheck_613_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_snd_534_);
lean_inc(v_fst_533_);
lean_dec(v_a_532_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_613_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; size_t v_sz_541_; size_t v___x_542_; lean_object* v___x_543_; 
v___x_538_ = lean_box(0);
v___x_539_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_509_);
v___x_540_ = l_Array_zipIdx___redArg(v___x_509_, v___x_539_);
v_sz_541_ = lean_array_size(v___x_540_);
v___x_542_ = ((size_t)0ULL);
lean_inc(v_fst_533_);
v___x_543_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg(v_fst_533_, v___x_540_, v_sz_541_, v___x_542_, v___x_538_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec_ref(v___x_540_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
if (lean_obj_tag(v_a_544_) == 1)
{
lean_object* v_val_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_582_; 
lean_del_object(v___x_536_);
v_val_545_ = lean_ctor_get(v_a_544_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v_a_544_);
if (v_isSharedCheck_582_ == 0)
{
v___x_547_ = v_a_544_;
v_isShared_548_ = v_isSharedCheck_582_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_val_545_);
lean_dec(v_a_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_582_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___f_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_549_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_550_ = lean_box(v___x_528_);
lean_inc_ref(v_h_511_);
lean_inc_ref(v_a_510_);
v___f_551_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___lam__0___boxed), 13, 5);
lean_closure_set(v___f_551_, 0, v___x_549_);
lean_closure_set(v___f_551_, 1, v_a_510_);
lean_closure_set(v___f_551_, 2, v_val_545_);
lean_closure_set(v___f_551_, 3, v_h_511_);
lean_closure_set(v___f_551_, 4, v___x_550_);
v___x_552_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
v___x_553_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_552_, v_fst_533_, v___f_551_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___x_555_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
lean_inc(v_a_530_);
v___x_555_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_a_530_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_555_, 1);
v___x_557_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_a_556_);
v___x_559_ = v___x_547_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_556_);
v___x_559_ = v_reuseFailAlloc_581_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_560_ = lean_unsigned_to_nat(1u);
v___x_561_ = lean_mk_empty_array_with_capacity(v___x_560_);
lean_inc_ref(v___x_561_);
v___x_562_ = lean_array_push(v___x_561_, v___x_559_);
v___x_563_ = l_Lean_Meta_mkAppOptM(v___x_557_, v___x_562_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v___x_563_, 1);
v___x_565_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8));
v___x_566_ = lean_array_push(v___x_561_, v_snd_534_);
v___x_567_ = l_Lean_Meta_mkAppM(v___x_565_, v___x_566_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v___x_569_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_570_ = lean_unsigned_to_nat(2u);
v___x_571_ = lean_mk_empty_array_with_capacity(v___x_570_);
lean_inc_ref(v___x_571_);
v___x_572_ = lean_array_push(v___x_571_, v_a_568_);
v___x_573_ = lean_array_push(v___x_572_, v_a_554_);
v___x_574_ = l_Lean_Meta_mkAppM(v___x_569_, v___x_573_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = lean_array_push(v___x_571_, v_a_564_);
v___x_577_ = lean_array_push(v___x_576_, v_a_575_);
v___x_578_ = l_Lean_Meta_mkAppM(v___x_569_, v___x_577_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v_a_579_; lean_object* v___x_580_; 
v_a_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_579_);
lean_dec_ref_known(v___x_578_, 1);
v___x_580_ = l_Lean_Expr_app___override(v_b_515_, v_a_579_);
v_a_524_ = v___x_580_;
goto v___jp_523_;
}
else
{
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_578_;
}
}
else
{
lean_dec_ref(v___x_571_);
lean_dec(v_a_564_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_574_;
}
}
else
{
lean_dec(v_a_564_);
lean_dec(v_a_554_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_567_;
}
}
else
{
lean_dec_ref(v___x_561_);
lean_dec(v_a_554_);
lean_dec(v_snd_534_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_563_;
}
}
}
else
{
lean_dec(v_a_554_);
lean_del_object(v___x_547_);
lean_dec(v_snd_534_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_555_;
}
}
else
{
lean_del_object(v___x_547_);
lean_dec(v_snd_534_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
return v___x_553_;
}
}
}
else
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
lean_dec(v_a_544_);
lean_dec(v_snd_534_);
v___x_583_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13);
lean_inc(v_a_530_);
v___x_584_ = l_Lean_stringToMessageData(v_a_530_);
if (v_isShared_537_ == 0)
{
lean_ctor_set_tag(v___x_536_, 7);
lean_ctor_set(v___x_536_, 1, v___x_584_);
lean_ctor_set(v___x_536_, 0, v___x_583_);
v___x_586_ = v___x_536_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_583_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_584_);
v___x_586_ = v_reuseFailAlloc_604_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_587_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15);
v___x_588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_indentExpr(v_fst_533_);
v___x_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__17);
v___x_592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
lean_inc_ref(v_a_510_);
v___x_593_ = l_Lean_indentExpr(v_a_510_);
v___x_594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_594_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_dec_ref_known(v___x_595_, 1);
v_a_524_ = v_b_515_;
goto v___jp_523_;
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_del_object(v___x_536_);
lean_dec(v_snd_534_);
lean_dec(v_fst_533_);
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
v_a_605_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_543_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_543_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec_ref(v_b_515_);
lean_dec_ref(v_h_511_);
lean_dec_ref(v_a_510_);
lean_dec_ref(v___x_509_);
v_a_614_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_531_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_531_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
v___jp_523_:
{
size_t v___x_525_; size_t v___x_526_; 
v___x_525_ = ((size_t)1ULL);
v___x_526_ = lean_usize_add(v_i_514_, v___x_525_);
v_i_514_ = v___x_526_;
v_b_515_ = v_a_524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___boxed(lean_object* v___x_622_, lean_object* v_a_623_, lean_object* v_h_624_, lean_object* v_as_625_, lean_object* v_sz_626_, lean_object* v_i_627_, lean_object* v_b_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
size_t v_sz_boxed_636_; size_t v_i_boxed_637_; lean_object* v_res_638_; 
v_sz_boxed_636_ = lean_unbox_usize(v_sz_626_);
lean_dec(v_sz_626_);
v_i_boxed_637_ = lean_unbox_usize(v_i_627_);
lean_dec(v_i_627_);
v_res_638_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1(v___x_622_, v_a_623_, v_h_624_, v_as_625_, v_sz_boxed_636_, v_i_boxed_637_, v_b_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec_ref(v_as_625_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0(lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v_a_641_, lean_object* v_fst_642_, lean_object* v___x_643_, uint8_t v___x_644_, lean_object* v_h_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v___x_653_; size_t v_sz_654_; size_t v___x_655_; lean_object* v___x_656_; 
v___x_653_ = lp_vampireReplay_Vampire_Unit_splits(v___x_639_);
v_sz_654_ = lean_array_size(v___x_653_);
v___x_655_ = ((size_t)0ULL);
lean_inc_ref(v_h_645_);
v___x_656_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1(v___x_640_, v_a_641_, v_h_645_, v___x_653_, v_sz_654_, v___x_655_, v_fst_642_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec_ref(v___x_653_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_object* v_a_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; uint8_t v___x_661_; lean_object* v___x_662_; 
v_a_657_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_a_657_);
lean_dec_ref_known(v___x_656_, 1);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_643_);
v___x_659_ = lean_array_push(v___x_658_, v_h_645_);
v___x_660_ = 0;
v___x_661_ = 1;
v___x_662_ = l_Lean_Meta_mkLambdaFVars(v___x_659_, v_a_657_, v___x_660_, v___x_644_, v___x_660_, v___x_644_, v___x_661_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec_ref(v___x_659_);
return v___x_662_;
}
else
{
lean_dec_ref(v_h_645_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0___boxed(lean_object* v___x_663_, lean_object* v___x_664_, lean_object* v_a_665_, lean_object* v_fst_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_h_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
uint8_t v___x_14007__boxed_677_; lean_object* v_res_678_; 
v___x_14007__boxed_677_ = lean_unbox(v___x_668_);
v_res_678_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0(v___x_663_, v___x_664_, v_a_665_, v_fst_666_, v___x_667_, v___x_14007__boxed_677_, v_h_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___x_667_);
return v_res_678_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__0));
v___x_681_ = l_Lean_stringToMessageData(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__2));
v___x_684_ = l_Lean_stringToMessageData(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8(void){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_691_ = lean_box(0);
v___x_692_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__7));
v___x_693_ = l_Lean_Expr_const___override(v___x_692_, v___x_691_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause(lean_object* v_step_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_){
_start:
{
lean_object* v_unit_702_; lean_object* v_premises_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; 
v_unit_702_ = lean_ctor_get(v_step_694_, 0);
v_premises_703_ = lean_ctor_get(v_step_694_, 1);
v___x_704_ = lean_array_get_size(v_premises_703_);
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_nat_dec_eq(v___x_704_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec_ref(v_step_694_);
v___x_707_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__1);
v___x_708_ = l_Nat_reprFast(v___x_704_);
v___x_709_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
v___x_710_ = l_Lean_MessageData_ofFormat(v___x_709_);
v___x_711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_707_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_711_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_712_;
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v_fst_715_; lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_713_ = lean_unsigned_to_nat(0u);
v___x_714_ = lean_array_fget_borrowed(v_premises_703_, v___x_713_);
v_fst_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_fst_715_);
lean_inc_ref(v_unit_702_);
v___x_716_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_702_);
v___x_717_ = lean_array_get_size(v___x_716_);
v___x_718_ = lean_nat_dec_lt(v___x_713_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; 
lean_dec_ref(v___x_716_);
lean_dec(v_fst_715_);
lean_dec_ref(v_step_694_);
v___x_719_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__3);
v___x_720_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_719_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_720_;
}
else
{
lean_object* v___x_721_; 
v___x_721_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___f_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc_n(v_a_722_, 4);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = lean_array_fget(v___x_716_, v___x_713_);
lean_dec_ref(v___x_716_);
v___x_724_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_725_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_724_, v_a_722_);
v___x_726_ = lean_box(v___x_718_);
v___f_727_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___lam__0___boxed), 14, 6);
lean_closure_set(v___f_727_, 0, v___x_723_);
lean_closure_set(v___f_727_, 1, v___x_725_);
lean_closure_set(v___f_727_, 2, v_a_722_);
lean_closure_set(v___f_727_, 3, v_fst_715_);
lean_closure_set(v___f_727_, 4, v___x_705_);
lean_closure_set(v___f_727_, 5, v___x_726_);
v___x_728_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__5));
v___x_729_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8);
v___x_730_ = l_Lean_Expr_app___override(v___x_729_, v_a_722_);
v___x_731_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_728_, v___x_730_, v___f_727_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_750_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_750_ == 0)
{
v___x_734_ = v___x_731_;
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_731_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_750_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_736_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_735_ == 0)
{
lean_ctor_set_tag(v___x_734_, 1);
lean_ctor_set(v___x_734_, 0, v_a_722_);
v___x_738_ = v___x_734_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_722_);
v___x_738_ = v_reuseFailAlloc_749_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_739_ = lean_mk_empty_array_with_capacity(v___x_705_);
v___x_740_ = lean_array_push(v___x_739_, v___x_738_);
v___x_741_ = l_Lean_Meta_mkAppOptM(v___x_736_, v___x_740_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_744_ = lean_unsigned_to_nat(2u);
v___x_745_ = lean_mk_empty_array_with_capacity(v___x_744_);
v___x_746_ = lean_array_push(v___x_745_, v_a_742_);
v___x_747_ = lean_array_push(v___x_746_, v_a_732_);
v___x_748_ = l_Lean_Meta_mkAppM(v___x_743_, v___x_747_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
return v___x_748_;
}
else
{
lean_dec(v_a_732_);
return v___x_741_;
}
}
}
}
else
{
lean_dec(v_a_722_);
return v___x_731_;
}
}
else
{
lean_dec_ref(v___x_716_);
lean_dec(v_fst_715_);
return v___x_721_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___boxed(lean_object* v_step_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause(v_step_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_);
lean_dec(v_a_757_);
lean_dec_ref(v_a_756_);
lean_dec(v_a_755_);
lean_dec_ref(v_a_754_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0(lean_object* v_fst_760_, lean_object* v_as_761_, size_t v_sz_762_, size_t v_i_763_, lean_object* v_b_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___redArg(v_fst_760_, v_as_761_, v_sz_762_, v_i_763_, v_b_764_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0___boxed(lean_object* v_fst_773_, lean_object* v_as_774_, lean_object* v_sz_775_, lean_object* v_i_776_, lean_object* v_b_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
size_t v_sz_boxed_785_; size_t v_i_boxed_786_; lean_object* v_res_787_; 
v_sz_boxed_785_ = lean_unbox_usize(v_sz_775_);
lean_dec(v_sz_775_);
v_i_boxed_786_ = lean_unbox_usize(v_i_776_);
lean_dec(v_i_776_);
v_res_787_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__0(v_fst_773_, v_as_774_, v_sz_boxed_785_, v_i_boxed_786_, v_b_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec_ref(v_as_774_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(size_t v_sz_788_, size_t v_i_789_, lean_object* v_bs_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
uint8_t v___x_798_; 
v___x_798_ = lean_usize_dec_lt(v_i_789_, v_sz_788_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_799_, 0, v_bs_790_);
return v___x_799_;
}
else
{
lean_object* v_v_800_; lean_object* v___x_801_; 
v_v_800_ = lean_array_uget_borrowed(v_bs_790_, v_i_789_);
lean_inc(v_v_800_);
v___x_801_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_v_800_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
if (lean_obj_tag(v___x_801_) == 0)
{
lean_object* v_a_802_; lean_object* v___x_803_; lean_object* v_bs_x27_804_; size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
v_a_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_801_, 1);
v___x_803_ = lean_unsigned_to_nat(0u);
v_bs_x27_804_ = lean_array_uset(v_bs_790_, v_i_789_, v___x_803_);
v___x_805_ = ((size_t)1ULL);
v___x_806_ = lean_usize_add(v_i_789_, v___x_805_);
v___x_807_ = lean_array_uset(v_bs_x27_804_, v_i_789_, v_a_802_);
v_i_789_ = v___x_806_;
v_bs_790_ = v___x_807_;
goto _start;
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec_ref(v_bs_790_);
v_a_809_ = lean_ctor_get(v___x_801_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_801_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_801_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0___boxed(lean_object* v_sz_817_, lean_object* v_i_818_, lean_object* v_bs_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
size_t v_sz_boxed_827_; size_t v_i_boxed_828_; lean_object* v_res_829_; 
v_sz_boxed_827_ = lean_unbox_usize(v_sz_817_);
lean_dec(v_sz_817_);
v_i_boxed_828_ = lean_unbox_usize(v_i_818_);
lean_dec(v_i_818_);
v_res_829_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(v_sz_boxed_827_, v_i_boxed_828_, v_bs_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts(lean_object* v_c_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v___x_841_; size_t v_sz_842_; size_t v___x_843_; lean_object* v___x_844_; 
v___x_841_ = lp_vampireReplay_Vampire_SatClause_literals(v_c_833_);
v_sz_842_ = lean_array_size(v___x_841_);
v___x_843_ = ((size_t)0ULL);
v___x_844_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(v_sz_842_, v___x_843_, v___x_841_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_856_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_856_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_849_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_850_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1));
lean_inc(v_a_845_);
v___x_851_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_849_, v___x_850_, v_a_845_);
v___x_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_852_, 0, v_a_845_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_852_);
v___x_854_ = v___x_847_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v___x_852_);
v___x_854_ = v_reuseFailAlloc_855_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
v_a_857_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_844_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_844_);
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
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___boxed(lean_object* v_c_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts(v_c_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_a_869_);
lean_dec_ref(v_a_868_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(lean_object* v_m_874_, uint32_t v_a_875_, lean_object* v_b_876_){
_start:
{
lean_object* v_size_877_; lean_object* v_buckets_878_; lean_object* v___x_879_; uint64_t v___x_880_; uint64_t v___x_881_; uint64_t v___x_882_; uint64_t v_fold_883_; uint64_t v___x_884_; uint64_t v___x_885_; uint64_t v___x_886_; size_t v___x_887_; size_t v___x_888_; size_t v___x_889_; size_t v___x_890_; size_t v___x_891_; lean_object* v_bkt_892_; uint8_t v___x_893_; 
v_size_877_ = lean_ctor_get(v_m_874_, 0);
v_buckets_878_ = lean_ctor_get(v_m_874_, 1);
v___x_879_ = lean_array_get_size(v_buckets_878_);
v___x_880_ = lean_uint32_to_uint64(v_a_875_);
v___x_881_ = 32ULL;
v___x_882_ = lean_uint64_shift_right(v___x_880_, v___x_881_);
v_fold_883_ = lean_uint64_xor(v___x_880_, v___x_882_);
v___x_884_ = 16ULL;
v___x_885_ = lean_uint64_shift_right(v_fold_883_, v___x_884_);
v___x_886_ = lean_uint64_xor(v_fold_883_, v___x_885_);
v___x_887_ = lean_uint64_to_usize(v___x_886_);
v___x_888_ = lean_usize_of_nat(v___x_879_);
v___x_889_ = ((size_t)1ULL);
v___x_890_ = lean_usize_sub(v___x_888_, v___x_889_);
v___x_891_ = lean_usize_land(v___x_887_, v___x_890_);
v_bkt_892_ = lean_array_uget_borrowed(v_buckets_878_, v___x_891_);
v___x_893_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(v_a_875_, v_bkt_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_915_; 
lean_inc_ref(v_buckets_878_);
lean_inc(v_size_877_);
v_isSharedCheck_915_ = !lean_is_exclusive(v_m_874_);
if (v_isSharedCheck_915_ == 0)
{
lean_object* v_unused_916_; lean_object* v_unused_917_; 
v_unused_916_ = lean_ctor_get(v_m_874_, 1);
lean_dec(v_unused_916_);
v_unused_917_ = lean_ctor_get(v_m_874_, 0);
lean_dec(v_unused_917_);
v___x_895_ = v_m_874_;
v_isShared_896_ = v_isSharedCheck_915_;
goto v_resetjp_894_;
}
else
{
lean_dec(v_m_874_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_915_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_897_; lean_object* v_size_x27_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_buckets_x27_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_897_ = lean_unsigned_to_nat(1u);
v_size_x27_898_ = lean_nat_add(v_size_877_, v___x_897_);
lean_dec(v_size_877_);
v___x_899_ = lean_box_uint32(v_a_875_);
lean_inc(v_bkt_892_);
v___x_900_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v_b_876_);
lean_ctor_set(v___x_900_, 2, v_bkt_892_);
v_buckets_x27_901_ = lean_array_uset(v_buckets_878_, v___x_891_, v___x_900_);
v___x_902_ = lean_unsigned_to_nat(4u);
v___x_903_ = lean_nat_mul(v_size_x27_898_, v___x_902_);
v___x_904_ = lean_unsigned_to_nat(3u);
v___x_905_ = lean_nat_div(v___x_903_, v___x_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_array_get_size(v_buckets_x27_901_);
v___x_907_ = lean_nat_dec_le(v___x_905_, v___x_906_);
lean_dec(v___x_905_);
if (v___x_907_ == 0)
{
lean_object* v_val_908_; lean_object* v___x_910_; 
v_val_908_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__1___redArg(v_buckets_x27_901_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v_val_908_);
lean_ctor_set(v___x_895_, 0, v_size_x27_898_);
v___x_910_ = v___x_895_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_size_x27_898_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_val_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
else
{
lean_object* v___x_913_; 
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v_buckets_x27_901_);
lean_ctor_set(v___x_895_, 0, v_size_x27_898_);
v___x_913_ = v___x_895_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_size_x27_898_);
lean_ctor_set(v_reuseFailAlloc_914_, 1, v_buckets_x27_901_);
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
else
{
lean_dec(v_b_876_);
return v_m_874_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg___boxed(lean_object* v_m_918_, lean_object* v_a_919_, lean_object* v_b_920_){
_start:
{
uint32_t v_a_boxed_921_; lean_object* v_res_922_; 
v_a_boxed_921_ = lean_unbox_uint32(v_a_919_);
lean_dec(v_a_919_);
v_res_922_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(v_m_918_, v_a_boxed_921_, v_b_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder(lean_object* v_c_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_fst_925_; lean_object* v_snd_926_; uint32_t v_idx_927_; uint8_t v___x_928_; 
v_fst_925_ = lean_ctor_get(v_a_924_, 0);
v_snd_926_ = lean_ctor_get(v_a_924_, 1);
v_idx_927_ = lean_ctor_get_uint32(v_c_923_, sizeof(void*)*1);
v___x_928_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v_fst_925_, v_idx_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_960_; 
lean_inc(v_snd_926_);
lean_inc(v_fst_925_);
v_isSharedCheck_960_ = !lean_is_exclusive(v_a_924_);
if (v_isSharedCheck_960_ == 0)
{
lean_object* v_unused_961_; lean_object* v_unused_962_; 
v_unused_961_ = lean_ctor_get(v_a_924_, 1);
lean_dec(v_unused_961_);
v_unused_962_ = lean_ctor_get(v_a_924_, 0);
lean_dec(v_unused_962_);
v___x_930_ = v_a_924_;
v_isShared_931_ = v_isSharedCheck_960_;
goto v_resetjp_929_;
}
else
{
lean_dec(v_a_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_960_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_932_ = lean_box(0);
v___x_933_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(v_fst_925_, v_idx_927_, v___x_932_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v___x_933_);
v___x_935_ = v___x_930_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_snd_926_);
v___x_935_ = v_reuseFailAlloc_959_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; size_t v_sz_937_; size_t v___x_938_; lean_object* v___x_939_; lean_object* v_snd_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_957_; 
lean_inc_ref(v_c_923_);
v___x_936_ = lp_vampireReplay_Vampire_SatClause_premises(v_c_923_);
v_sz_937_ = lean_array_size(v___x_936_);
v___x_938_ = ((size_t)0ULL);
v___x_939_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1(v___x_936_, v_sz_937_, v___x_938_, v___x_932_, v___x_935_);
lean_dec_ref(v___x_936_);
v_snd_940_ = lean_ctor_get(v___x_939_, 1);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_957_ == 0)
{
lean_object* v_unused_958_; 
v_unused_958_ = lean_ctor_get(v___x_939_, 0);
lean_dec(v_unused_958_);
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_957_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_snd_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_957_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v_fst_944_; lean_object* v_snd_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_956_; 
v_fst_944_ = lean_ctor_get(v_snd_940_, 0);
v_snd_945_ = lean_ctor_get(v_snd_940_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v_snd_940_);
if (v_isSharedCheck_956_ == 0)
{
v___x_947_ = v_snd_940_;
v_isShared_948_ = v_isSharedCheck_956_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_snd_945_);
lean_inc(v_fst_944_);
lean_dec(v_snd_940_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_956_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_949_ = lean_array_push(v_snd_945_, v_c_923_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 1, v___x_949_);
v___x_951_ = v___x_947_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_fst_944_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v___x_949_);
v___x_951_ = v_reuseFailAlloc_955_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
lean_object* v___x_953_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 1, v___x_951_);
lean_ctor_set(v___x_942_, 0, v___x_932_);
v___x_953_ = v___x_942_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec_ref(v_c_923_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v_a_924_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1(lean_object* v_as_965_, size_t v_sz_966_, size_t v_i_967_, lean_object* v_b_968_, lean_object* v___y_969_){
_start:
{
uint8_t v___x_970_; 
v___x_970_ = lean_usize_dec_lt(v_i_967_, v_sz_966_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; 
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v_b_968_);
lean_ctor_set(v___x_971_, 1, v___y_969_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_973_; lean_object* v_snd_974_; lean_object* v___x_975_; size_t v___x_976_; size_t v___x_977_; 
v_a_972_ = lean_array_uget_borrowed(v_as_965_, v_i_967_);
lean_inc(v_a_972_);
v___x_973_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder(v_a_972_, v___y_969_);
v_snd_974_ = lean_ctor_get(v___x_973_, 1);
lean_inc(v_snd_974_);
lean_dec_ref(v___x_973_);
v___x_975_ = lean_box(0);
v___x_976_ = ((size_t)1ULL);
v___x_977_ = lean_usize_add(v_i_967_, v___x_976_);
v_i_967_ = v___x_977_;
v_b_968_ = v___x_975_;
v___y_969_ = v_snd_974_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1___boxed(lean_object* v_as_979_, lean_object* v_sz_980_, lean_object* v_i_981_, lean_object* v_b_982_, lean_object* v___y_983_){
_start:
{
size_t v_sz_boxed_984_; size_t v_i_boxed_985_; lean_object* v_res_986_; 
v_sz_boxed_984_ = lean_unbox_usize(v_sz_980_);
lean_dec(v_sz_980_);
v_i_boxed_985_ = lean_unbox_usize(v_i_981_);
lean_dec(v_i_981_);
v_res_986_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__1(v_as_979_, v_sz_boxed_984_, v_i_boxed_985_, v_b_982_, v___y_983_);
lean_dec_ref(v_as_979_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0(lean_object* v_00_u03b2_987_, lean_object* v_m_988_, uint32_t v_a_989_, lean_object* v_b_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(v_m_988_, v_a_989_, v_b_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___boxed(lean_object* v_00_u03b2_992_, lean_object* v_m_993_, lean_object* v_a_994_, lean_object* v_b_995_){
_start:
{
uint32_t v_a_boxed_996_; lean_object* v_res_997_; 
v_a_boxed_996_ = lean_unbox_uint32(v_a_994_);
lean_dec(v_a_994_);
v_res_997_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0(v_00_u03b2_992_, v_m_993_, v_a_boxed_996_, v_b_995_);
return v_res_997_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__2));
v___x_1005_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__1));
v___x_1006_ = l_Lean_Expr_const___override(v___x_1005_, v___x_1004_);
return v___x_1006_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__4));
v___x_1009_ = l_Lean_stringToMessageData(v___x_1008_);
return v___x_1009_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__6));
v___x_1012_ = l_Lean_stringToMessageData(v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9(void){
_start:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1014_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__8));
v___x_1015_ = l_Lean_stringToMessageData(v___x_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(lean_object* v_motive_1016_, lean_object* v_says_1017_, lean_object* v_refuting_1018_, lean_object* v_h_1019_, lean_object* v_negated_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_){
_start:
{
lean_object* v_fst_1027_; lean_object* v_fst_1028_; lean_object* v_snd_1029_; lean_object* v___x_1033_; lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1033_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8);
lean_inc_ref(v_says_1017_);
v___x_1034_ = l_Lean_Expr_app___override(v___x_1033_, v_says_1017_);
v___x_1035_ = lean_expr_eqv(v_refuting_1018_, v___x_1034_);
lean_dec_ref(v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
lean_inc_ref(v_refuting_1018_);
v___x_1036_ = l_Lean_Expr_app___override(v___x_1033_, v_refuting_1018_);
v___x_1037_ = lean_expr_eqv(v_says_1017_, v___x_1036_);
lean_dec_ref(v___x_1036_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec_ref(v_negated_1020_);
lean_dec_ref(v_h_1019_);
lean_dec_ref(v_motive_1016_);
v___x_1038_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__5);
v___x_1039_ = l_Lean_indentExpr(v_says_1017_);
v___x_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1038_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__7);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = l_Lean_indentExpr(v_refuting_1018_);
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1042_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
v___x_1045_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__9);
v___x_1046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1046_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_);
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
else
{
lean_dec_ref(v_says_1017_);
v_fst_1027_ = v_negated_1020_;
v_fst_1028_ = v_refuting_1018_;
v_snd_1029_ = v_h_1019_;
goto v___jp_1026_;
}
}
else
{
lean_dec_ref(v_refuting_1018_);
v_fst_1027_ = v_h_1019_;
v_fst_1028_ = v_says_1017_;
v_snd_1029_ = v_negated_1020_;
goto v___jp_1026_;
}
v___jp_1026_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1030_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__3);
v___x_1031_ = l_Lean_mkApp4(v___x_1030_, v_fst_1028_, v_motive_1016_, v_fst_1027_, v_snd_1029_);
v___x_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
return v___x_1032_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___boxed(lean_object* v_motive_1056_, lean_object* v_says_1057_, lean_object* v_refuting_1058_, lean_object* v_h_1059_, lean_object* v_negated_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(v_motive_1056_, v_says_1057_, v_refuting_1058_, v_h_1059_, v_negated_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts(lean_object* v_motive_1067_, lean_object* v_says_1068_, lean_object* v_refuting_1069_, lean_object* v_h_1070_, lean_object* v_negated_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(v_motive_1067_, v_says_1068_, v_refuting_1069_, v_h_1070_, v_negated_1071_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___boxed(lean_object* v_motive_1080_, lean_object* v_says_1081_, lean_object* v_refuting_1082_, lean_object* v_h_1083_, lean_object* v_negated_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts(v_motive_1080_, v_says_1081_, v_refuting_1082_, v_h_1083_, v_negated_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
lean_dec(v_a_1088_);
lean_dec_ref(v_a_1087_);
lean_dec(v_a_1086_);
lean_dec_ref(v_a_1085_);
return v_res_1092_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__0));
v___x_1095_ = l_Lean_stringToMessageData(v___x_1094_);
return v___x_1095_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1097_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__2));
v___x_1098_ = l_Lean_stringToMessageData(v___x_1097_);
return v___x_1098_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__4));
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0(lean_object* v_u_1102_, lean_object* v_names_1103_, lean_object* v___x_1104_, lean_object* v_known_1105_, lean_object* v_parts_1106_, lean_object* v___x_1107_, lean_object* v_j_1108_, lean_object* v_h_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
uint8_t v___x_1117_; 
v___x_1117_ = lean_nat_dec_eq(v_j_1108_, v_u_1102_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; uint8_t v___x_1119_; 
v___x_1118_ = lean_array_get_size(v_names_1103_);
v___x_1119_ = lean_nat_dec_lt(v_j_1108_, v___x_1118_);
if (v___x_1119_ == 0)
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec_ref(v_h_1109_);
lean_dec(v_j_1108_);
lean_dec_ref(v___x_1107_);
v___x_1120_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1121_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1120_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
return v___x_1121_;
}
else
{
uint8_t v___x_1122_; 
v___x_1122_ = lean_nat_dec_lt(v_j_1108_, v___x_1104_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_dec_ref(v_h_1109_);
lean_dec(v_j_1108_);
lean_dec_ref(v___x_1107_);
v___x_1123_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1124_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1123_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
return v___x_1124_;
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_array_fget_borrowed(v_names_1103_, v_j_1108_);
lean_inc(v___x_1125_);
v___x_1126_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v___x_1125_);
v___x_1127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_known_1105_, v___x_1126_);
lean_dec_ref(v___x_1126_);
if (lean_obj_tag(v___x_1127_) == 1)
{
lean_object* v_val_1128_; lean_object* v_fst_1129_; lean_object* v_snd_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v_val_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_val_1128_);
lean_dec_ref_known(v___x_1127_, 1);
v_fst_1129_ = lean_ctor_get(v_val_1128_, 0);
lean_inc(v_fst_1129_);
v_snd_1130_ = lean_ctor_get(v_val_1128_, 1);
lean_inc(v_snd_1130_);
lean_dec(v_val_1128_);
v___x_1131_ = lean_array_fget_borrowed(v_parts_1106_, v_j_1108_);
lean_dec(v_j_1108_);
lean_inc(v___x_1131_);
v___x_1132_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(v___x_1107_, v___x_1131_, v_snd_1130_, v_h_1109_, v_fst_1129_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
lean_dec(v___x_1127_);
lean_dec_ref(v_h_1109_);
lean_dec_ref(v___x_1107_);
v___x_1133_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3);
v___x_1134_ = l_Nat_reprFast(v_j_1108_);
v___x_1135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
v___x_1136_ = l_Lean_MessageData_ofFormat(v___x_1135_);
v___x_1137_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1133_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5);
v___x_1139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___x_1140_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1139_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
return v___x_1140_;
}
}
}
}
else
{
lean_object* v___x_1141_; 
lean_dec(v_j_1108_);
lean_dec_ref(v___x_1107_);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v_h_1109_);
return v___x_1141_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___boxed(lean_object* v_u_1142_, lean_object* v_names_1143_, lean_object* v___x_1144_, lean_object* v_known_1145_, lean_object* v_parts_1146_, lean_object* v___x_1147_, lean_object* v_j_1148_, lean_object* v_h_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0(v_u_1142_, v_names_1143_, v___x_1144_, v_known_1145_, v_parts_1146_, v___x_1147_, v_j_1148_, v_h_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec_ref(v_parts_1146_);
lean_dec_ref(v_known_1145_);
lean_dec(v___x_1144_);
lean_dec_ref(v_names_1143_);
lean_dec(v_u_1142_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied(lean_object* v_parts_1158_, lean_object* v_names_1159_, lean_object* v_u_1160_, lean_object* v_known_1161_, lean_object* v_proof_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = lean_array_get_size(v_parts_1158_);
v___x_1171_ = lean_nat_dec_lt(v_u_1160_, v___x_1170_);
if (v___x_1171_ == 0)
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_dec_ref(v_proof_1162_);
lean_dec_ref(v_known_1161_);
lean_dec(v_u_1160_);
lean_dec_ref(v_names_1159_);
lean_dec_ref(v_parts_1158_);
v___x_1172_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1173_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1172_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
return v___x_1173_;
}
else
{
lean_object* v___x_1174_; lean_object* v___f_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1174_ = lean_array_fget_borrowed(v_parts_1158_, v_u_1160_);
lean_inc_n(v___x_1174_, 2);
lean_inc_ref(v_parts_1158_);
v___f_1175_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___boxed), 15, 6);
lean_closure_set(v___f_1175_, 0, v_u_1160_);
lean_closure_set(v___f_1175_, 1, v_names_1159_);
lean_closure_set(v___f_1175_, 2, v___x_1170_);
lean_closure_set(v___f_1175_, 3, v_known_1161_);
lean_closure_set(v___f_1175_, 4, v_parts_1158_);
lean_closure_set(v___f_1175_, 5, v___x_1174_);
v___x_1176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1174_);
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_parts_1158_, v___f_1175_, v_proof_1162_, v___x_1177_, v___x_1176_, v_a_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_);
lean_dec_ref(v_parts_1158_);
return v___x_1178_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___boxed(lean_object* v_parts_1179_, lean_object* v_names_1180_, lean_object* v_u_1181_, lean_object* v_known_1182_, lean_object* v_proof_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied(v_parts_1179_, v_names_1180_, v_u_1181_, v_known_1182_, v_proof_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
lean_dec(v_a_1189_);
lean_dec_ref(v_a_1188_);
lean_dec(v_a_1187_);
lean_dec_ref(v_a_1186_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0(lean_object* v_k_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v_b_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
lean_inc(v___y_1199_);
lean_inc_ref(v___y_1198_);
lean_inc(v___y_1197_);
lean_inc_ref(v___y_1196_);
lean_inc(v___y_1194_);
lean_inc_ref(v___y_1193_);
v___x_1201_ = lean_apply_8(v_k_1192_, v_b_1195_, v___y_1193_, v___y_1194_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, lean_box(0));
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0___boxed(lean_object* v_k_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v_b_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0(v_k_1202_, v___y_1203_, v___y_1204_, v_b_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(lean_object* v_name_1212_, lean_object* v_type_1213_, lean_object* v_val_1214_, lean_object* v_k_1215_, uint8_t v_nondep_1216_, uint8_t v_kind_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v___f_1225_; lean_object* v___x_1226_; 
lean_inc(v___y_1219_);
lean_inc_ref(v___y_1218_);
v___f_1225_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1225_, 0, v_k_1215_);
lean_closure_set(v___f_1225_, 1, v___y_1218_);
lean_closure_set(v___f_1225_, 2, v___y_1219_);
v___x_1226_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(v_name_1212_, v_type_1213_, v_val_1214_, v___f_1225_, v_nondep_1216_, v_kind_1217_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_);
if (lean_obj_tag(v___x_1226_) == 0)
{
return v___x_1226_;
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1226_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1226_);
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
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg___boxed(lean_object* v_name_1235_, lean_object* v_type_1236_, lean_object* v_val_1237_, lean_object* v_k_1238_, lean_object* v_nondep_1239_, lean_object* v_kind_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
uint8_t v_nondep_boxed_1248_; uint8_t v_kind_boxed_1249_; lean_object* v_res_1250_; 
v_nondep_boxed_1248_ = lean_unbox(v_nondep_1239_);
v_kind_boxed_1249_ = lean_unbox(v_kind_1240_);
v_res_1250_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(v_name_1235_, v_type_1236_, v_val_1237_, v_k_1238_, v_nondep_boxed_1248_, v_kind_boxed_1249_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1(lean_object* v_00_u03b1_1251_, lean_object* v_name_1252_, lean_object* v_type_1253_, lean_object* v_val_1254_, lean_object* v_k_1255_, uint8_t v_nondep_1256_, uint8_t v_kind_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(v_name_1252_, v_type_1253_, v_val_1254_, v_k_1255_, v_nondep_1256_, v_kind_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___boxed(lean_object* v_00_u03b1_1266_, lean_object* v_name_1267_, lean_object* v_type_1268_, lean_object* v_val_1269_, lean_object* v_k_1270_, lean_object* v_nondep_1271_, lean_object* v_kind_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
uint8_t v_nondep_boxed_1280_; uint8_t v_kind_boxed_1281_; lean_object* v_res_1282_; 
v_nondep_boxed_1280_ = lean_unbox(v_nondep_1271_);
v_kind_boxed_1281_ = lean_unbox(v_kind_1272_);
v_res_1282_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1(v_00_u03b1_1266_, v_name_1267_, v_type_1268_, v_val_1269_, v_k_1270_, v_nondep_boxed_1280_, v_kind_boxed_1281_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0(lean_object* v_known_1283_, lean_object* v_as_1284_, size_t v_i_1285_, size_t v_stop_1286_, lean_object* v_b_1287_){
_start:
{
lean_object* v___y_1289_; uint8_t v___x_1293_; 
v___x_1293_ = lean_usize_dec_eq(v_i_1285_, v_stop_1286_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v_fst_1295_; lean_object* v_snd_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1294_ = lean_array_uget_borrowed(v_as_1284_, v_i_1285_);
v_fst_1295_ = lean_ctor_get(v___x_1294_, 0);
v_snd_1296_ = lean_ctor_get(v___x_1294_, 1);
lean_inc(v_fst_1295_);
v___x_1297_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v_fst_1295_);
v___x_1298_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_known_1283_, v___x_1297_);
lean_dec_ref(v___x_1297_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1299_; 
lean_inc(v_snd_1296_);
v___x_1299_ = lean_array_push(v_b_1287_, v_snd_1296_);
v___y_1289_ = v___x_1299_;
goto v___jp_1288_;
}
else
{
lean_dec_ref_known(v___x_1298_, 1);
v___y_1289_ = v_b_1287_;
goto v___jp_1288_;
}
}
else
{
return v_b_1287_;
}
v___jp_1288_:
{
size_t v___x_1290_; size_t v___x_1291_; 
v___x_1290_ = ((size_t)1ULL);
v___x_1291_ = lean_usize_add(v_i_1285_, v___x_1290_);
v_i_1285_ = v___x_1291_;
v_b_1287_ = v___y_1289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0___boxed(lean_object* v_known_1300_, lean_object* v_as_1301_, lean_object* v_i_1302_, lean_object* v_stop_1303_, lean_object* v_b_1304_){
_start:
{
size_t v_i_boxed_1305_; size_t v_stop_boxed_1306_; lean_object* v_res_1307_; 
v_i_boxed_1305_ = lean_unbox_usize(v_i_1302_);
lean_dec(v_i_1302_);
v_stop_boxed_1306_ = lean_unbox_usize(v_stop_1303_);
lean_dec(v_stop_1303_);
v_res_1307_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0(v_known_1300_, v_as_1301_, v_i_boxed_1305_, v_stop_boxed_1306_, v_b_1304_);
lean_dec_ref(v_as_1301_);
lean_dec_ref(v_known_1300_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0(lean_object* v_known_1310_, lean_object* v_as_1311_, lean_object* v_start_1312_, lean_object* v_stop_1313_){
_start:
{
lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1314_ = ((lean_object*)(lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___closed__0));
v___x_1315_ = lean_nat_dec_lt(v_start_1312_, v_stop_1313_);
if (v___x_1315_ == 0)
{
return v___x_1314_;
}
else
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = lean_array_get_size(v_as_1311_);
v___x_1317_ = lean_nat_dec_le(v_stop_1313_, v___x_1316_);
if (v___x_1317_ == 0)
{
uint8_t v___x_1318_; 
v___x_1318_ = lean_nat_dec_lt(v_start_1312_, v___x_1316_);
if (v___x_1318_ == 0)
{
return v___x_1314_;
}
else
{
size_t v___x_1319_; size_t v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = lean_usize_of_nat(v_start_1312_);
v___x_1320_ = lean_usize_of_nat(v___x_1316_);
v___x_1321_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0(v_known_1310_, v_as_1311_, v___x_1319_, v___x_1320_, v___x_1314_);
return v___x_1321_;
}
}
else
{
size_t v___x_1322_; size_t v___x_1323_; lean_object* v___x_1324_; 
v___x_1322_ = lean_usize_of_nat(v_start_1312_);
v___x_1323_ = lean_usize_of_nat(v_stop_1313_);
v___x_1324_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0_spec__0(v_known_1310_, v_as_1311_, v___x_1322_, v___x_1323_, v___x_1314_);
return v___x_1324_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0___boxed(lean_object* v_known_1325_, lean_object* v_as_1326_, lean_object* v_start_1327_, lean_object* v_stop_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0(v_known_1325_, v_as_1326_, v_start_1327_, v_stop_1328_);
lean_dec(v_stop_1328_);
lean_dec(v_start_1327_);
lean_dec_ref(v_as_1326_);
lean_dec_ref(v_known_1325_);
return v_res_1329_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = lean_box(0);
v___x_1331_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1));
v___x_1332_ = l_Lean_Expr_const___override(v___x_1331_, v___x_1330_);
return v___x_1332_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1(lean_object* v_names_1333_, lean_object* v_fst_1334_, lean_object* v_known_1335_, lean_object* v_j_1336_, lean_object* v_h_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = lean_array_get_size(v_names_1333_);
v___x_1346_ = lean_nat_dec_lt(v_j_1336_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec_ref(v_h_1337_);
lean_dec(v_j_1336_);
v___x_1347_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1348_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1347_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
return v___x_1348_;
}
else
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = lean_array_get_size(v_fst_1334_);
v___x_1350_ = lean_nat_dec_lt(v_j_1336_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref(v_h_1337_);
lean_dec(v_j_1336_);
v___x_1351_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1352_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1351_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1353_ = lean_array_fget_borrowed(v_names_1333_, v_j_1336_);
lean_inc(v___x_1353_);
v___x_1354_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v___x_1353_);
v___x_1355_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_known_1335_, v___x_1354_);
lean_dec_ref(v___x_1354_);
if (lean_obj_tag(v___x_1355_) == 1)
{
lean_object* v_val_1356_; lean_object* v_fst_1357_; lean_object* v_snd_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v_val_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_val_1356_);
lean_dec_ref_known(v___x_1355_, 1);
v_fst_1357_ = lean_ctor_get(v_val_1356_, 0);
lean_inc(v_fst_1357_);
v_snd_1358_ = lean_ctor_get(v_val_1356_, 1);
lean_inc(v_snd_1358_);
lean_dec(v_val_1356_);
v___x_1359_ = lean_array_fget_borrowed(v_fst_1334_, v_j_1336_);
lean_dec(v_j_1336_);
v___x_1360_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0);
lean_inc(v___x_1359_);
v___x_1361_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(v___x_1360_, v___x_1359_, v_snd_1358_, v_h_1337_, v_fst_1357_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
return v___x_1361_;
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec(v___x_1355_);
lean_dec_ref(v_h_1337_);
v___x_1362_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__3);
v___x_1363_ = l_Nat_reprFast(v_j_1336_);
v___x_1364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
v___x_1365_ = l_Lean_MessageData_ofFormat(v___x_1364_);
v___x_1366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1362_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
v___x_1367_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__5);
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1368_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___boxed(lean_object* v_names_1370_, lean_object* v_fst_1371_, lean_object* v_known_1372_, lean_object* v_j_1373_, lean_object* v_h_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1(v_names_1370_, v_fst_1371_, v_known_1372_, v_j_1373_, v_h_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec_ref(v_known_1372_);
lean_dec_ref(v_fst_1371_);
lean_dec_ref(v_names_1370_);
return v_res_1382_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__0));
v___x_1385_ = l_Lean_stringToMessageData(v___x_1384_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0(lean_object* v_names_1386_, lean_object* v_fst_1387_, lean_object* v_known_1388_, lean_object* v_i_1389_, lean_object* v_states_1390_, lean_object* v_proved_1391_, lean_object* v_premises_1392_, lean_object* v_bound_1393_, lean_object* v_j_1394_, lean_object* v_h_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = lean_array_get_size(v_names_1386_);
v___x_1404_ = lean_nat_dec_lt(v_j_1394_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_h_1395_);
lean_dec_ref(v_bound_1393_);
lean_dec_ref(v_premises_1392_);
lean_dec_ref(v_proved_1391_);
lean_dec_ref(v_states_1390_);
lean_dec_ref(v_known_1388_);
v___x_1405_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1406_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1405_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1406_;
}
else
{
lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = lean_array_get_size(v_fst_1387_);
v___x_1408_ = lean_nat_dec_lt(v_j_1394_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_dec_ref(v_h_1395_);
lean_dec_ref(v_bound_1393_);
lean_dec_ref(v_premises_1392_);
lean_dec_ref(v_proved_1391_);
lean_dec_ref(v_states_1390_);
lean_dec_ref(v_known_1388_);
v___x_1409_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1410_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1409_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1410_;
}
else
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1411_ = lean_array_fget_borrowed(v_names_1386_, v_j_1394_);
v___x_1412_ = lean_array_fget_borrowed(v_fst_1387_, v_j_1394_);
lean_inc(v___x_1411_);
v___x_1413_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v___x_1411_);
v___x_1414_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_known_1388_, v___x_1413_);
lean_dec_ref(v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
lean_inc(v___x_1412_);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v_h_1395_);
lean_ctor_set(v___x_1415_, 1, v___x_1412_);
lean_inc(v___x_1411_);
v___x_1416_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_known_1388_, v___x_1411_, v___x_1415_);
v___x_1417_ = lean_unsigned_to_nat(1u);
v___x_1418_ = lean_nat_add(v_i_1389_, v___x_1417_);
v___x_1419_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(v_states_1390_, v_proved_1391_, v___x_1416_, v_premises_1392_, v___x_1418_, v_bound_1393_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1419_;
}
else
{
lean_object* v_val_1420_; lean_object* v_fst_1421_; lean_object* v_snd_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec_ref(v_bound_1393_);
lean_dec_ref(v_premises_1392_);
lean_dec_ref(v_proved_1391_);
lean_dec_ref(v_states_1390_);
lean_dec_ref(v_known_1388_);
v_val_1420_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_val_1420_);
lean_dec_ref_known(v___x_1414_, 1);
v_fst_1421_ = lean_ctor_get(v_val_1420_, 0);
lean_inc(v_fst_1421_);
v_snd_1422_ = lean_ctor_get(v_val_1420_, 1);
lean_inc(v_snd_1422_);
lean_dec(v_val_1420_);
v___x_1423_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0);
lean_inc(v___x_1412_);
v___x_1424_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg(v___x_1423_, v___x_1412_, v_snd_1422_, v_h_1395_, v_fst_1421_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1424_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0___boxed(lean_object** _args){
lean_object* v_names_1425_ = _args[0];
lean_object* v_fst_1426_ = _args[1];
lean_object* v_known_1427_ = _args[2];
lean_object* v_i_1428_ = _args[3];
lean_object* v_states_1429_ = _args[4];
lean_object* v_proved_1430_ = _args[5];
lean_object* v_premises_1431_ = _args[6];
lean_object* v_bound_1432_ = _args[7];
lean_object* v_j_1433_ = _args[8];
lean_object* v_h_1434_ = _args[9];
lean_object* v___y_1435_ = _args[10];
lean_object* v___y_1436_ = _args[11];
lean_object* v___y_1437_ = _args[12];
lean_object* v___y_1438_ = _args[13];
lean_object* v___y_1439_ = _args[14];
lean_object* v___y_1440_ = _args[15];
lean_object* v___y_1441_ = _args[16];
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0(v_names_1425_, v_fst_1426_, v_known_1427_, v_i_1428_, v_states_1429_, v_proved_1430_, v_premises_1431_, v_bound_1432_, v_j_1433_, v_h_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v_j_1433_);
lean_dec(v_i_1428_);
lean_dec_ref(v_fst_1426_);
lean_dec_ref(v_names_1425_);
return v_res_1442_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___closed__0);
v___x_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2___boxed(lean_object** _args){
lean_object* v___x_1445_ = _args[0];
lean_object* v_known_1446_ = _args[1];
lean_object* v___x_1447_ = _args[2];
lean_object* v_i_1448_ = _args[3];
lean_object* v___x_1449_ = _args[4];
lean_object* v_bound_1450_ = _args[5];
lean_object* v_states_1451_ = _args[6];
lean_object* v_proved_1452_ = _args[7];
lean_object* v_premises_1453_ = _args[8];
lean_object* v_p_1454_ = _args[9];
lean_object* v___y_1455_ = _args[10];
lean_object* v___y_1456_ = _args[11];
lean_object* v___y_1457_ = _args[12];
lean_object* v___y_1458_ = _args[13];
lean_object* v___y_1459_ = _args[14];
lean_object* v___y_1460_ = _args[15];
lean_object* v___y_1461_ = _args[16];
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2(v___x_1445_, v_known_1446_, v___x_1447_, v_i_1448_, v___x_1449_, v_bound_1450_, v_states_1451_, v_proved_1452_, v_premises_1453_, v_p_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___x_1449_);
lean_dec(v_i_1448_);
return v_res_1462_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1465_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__4));
v___x_1466_ = l_Lean_stringToMessageData(v___x_1465_);
return v___x_1466_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__6));
v___x_1469_ = l_Lean_stringToMessageData(v___x_1468_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(lean_object* v_states_1470_, lean_object* v_proved_1471_, lean_object* v_known_1472_, lean_object* v_premises_1473_, lean_object* v_i_1474_, lean_object* v_bound_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v___x_1483_; uint8_t v___x_1484_; 
v___x_1483_ = lean_array_get_size(v_premises_1473_);
v___x_1484_ = lean_nat_dec_lt(v_i_1474_, v___x_1483_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
v___x_1485_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__1);
v___x_1486_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1485_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1486_;
}
else
{
lean_object* v___x_1487_; uint32_t v_idx_1488_; lean_object* v___x_1489_; 
v___x_1487_ = lean_array_fget_borrowed(v_premises_1473_, v_i_1474_);
v_idx_1488_ = lean_ctor_get_uint32(v___x_1487_, sizeof(void*)*1);
v___x_1489_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_proved_1471_, v_idx_1488_);
if (lean_obj_tag(v___x_1489_) == 1)
{
lean_object* v_val_1490_; lean_object* v___x_1491_; 
v_val_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc(v_val_1490_);
lean_dec_ref_known(v___x_1489_, 1);
v___x_1491_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_states_1470_, v_idx_1488_);
if (lean_obj_tag(v___x_1491_) == 1)
{
lean_object* v_val_1492_; lean_object* v_fst_1493_; lean_object* v_names_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v_unassigned_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; 
v_val_1492_ = lean_ctor_get(v___x_1491_, 0);
lean_inc(v_val_1492_);
lean_dec_ref_known(v___x_1491_, 1);
v_fst_1493_ = lean_ctor_get(v_val_1492_, 0);
lean_inc(v_fst_1493_);
lean_dec(v_val_1492_);
lean_inc(v___x_1487_);
v_names_1494_ = lp_vampireReplay_Vampire_SatClause_literals(v___x_1487_);
v___x_1495_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_names_1494_);
v___x_1496_ = l_Array_zipIdx___redArg(v_names_1494_, v___x_1495_);
v___x_1497_ = lean_array_get_size(v___x_1496_);
v_unassigned_1498_ = lp_vampireReplay_Array_filterMapM___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__0(v_known_1472_, v___x_1496_, v___x_1495_, v___x_1497_);
lean_dec_ref(v___x_1496_);
v___x_1499_ = lean_array_get_size(v_unassigned_1498_);
v___x_1500_ = lean_unsigned_to_nat(1u);
v___x_1501_ = lean_nat_dec_eq(v___x_1499_, v___x_1500_);
if (v___x_1501_ == 0)
{
uint8_t v___x_1502_; 
lean_dec_ref(v_unassigned_1498_);
v___x_1502_ = lean_nat_dec_eq(v___x_1499_, v___x_1495_);
if (v___x_1502_ == 0)
{
lean_object* v___f_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_inc(v_fst_1493_);
v___f_1503_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__0___boxed), 17, 8);
lean_closure_set(v___f_1503_, 0, v_names_1494_);
lean_closure_set(v___f_1503_, 1, v_fst_1493_);
lean_closure_set(v___f_1503_, 2, v_known_1472_);
lean_closure_set(v___f_1503_, 3, v_i_1474_);
lean_closure_set(v___f_1503_, 4, v_states_1470_);
lean_closure_set(v___f_1503_, 5, v_proved_1471_);
lean_closure_set(v___f_1503_, 6, v_premises_1473_);
lean_closure_set(v___f_1503_, 7, v_bound_1475_);
v___x_1504_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2);
v___x_1505_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_fst_1493_, v___f_1503_, v_val_1490_, v___x_1495_, v___x_1504_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
lean_dec(v_fst_1493_);
return v___x_1505_;
}
else
{
lean_object* v___f_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
lean_inc(v_fst_1493_);
v___f_1506_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1506_, 0, v_names_1494_);
lean_closure_set(v___f_1506_, 1, v_fst_1493_);
lean_closure_set(v___f_1506_, 2, v_known_1472_);
v___x_1507_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2);
v___x_1508_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_fst_1493_, v___f_1506_, v_val_1490_, v___x_1495_, v___x_1507_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
lean_dec(v_fst_1493_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v___x_1510_ = 1;
v___x_1511_ = l_Lean_Meta_mkLetFVars(v_bound_1475_, v_a_1509_, v___x_1501_, v___x_1502_, v___x_1510_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
lean_dec_ref(v_bound_1475_);
return v___x_1511_;
}
else
{
lean_dec_ref(v_bound_1475_);
return v___x_1508_;
}
}
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1512_ = lean_array_fget(v_unassigned_1498_, v___x_1495_);
lean_dec_ref(v_unassigned_1498_);
v___x_1513_ = lean_array_get_size(v_fst_1493_);
v___x_1514_ = lean_nat_dec_lt(v___x_1512_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_dec(v___x_1512_);
lean_dec_ref(v_names_1494_);
lean_dec(v_fst_1493_);
lean_dec(v_val_1490_);
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
v___x_1515_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1516_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1515_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1516_;
}
else
{
lean_object* v___x_1517_; uint8_t v___x_1518_; 
v___x_1517_ = lean_array_get_size(v_names_1494_);
v___x_1518_ = lean_nat_dec_lt(v___x_1512_, v___x_1517_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec(v___x_1512_);
lean_dec_ref(v_names_1494_);
lean_dec(v_fst_1493_);
lean_dec(v_val_1490_);
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
v___x_1519_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1520_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1519_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1520_;
}
else
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1521_ = lean_array_fget(v_fst_1493_, v___x_1512_);
v___x_1522_ = lean_array_fget(v_names_1494_, v___x_1512_);
lean_inc_ref(v_known_1472_);
v___x_1523_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied(v_fst_1493_, v_names_1494_, v___x_1512_, v_known_1472_, v_val_1490_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___f_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; uint8_t v___x_1531_; uint8_t v___x_1532_; lean_object* v___x_1533_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
lean_inc(v_i_1474_);
lean_inc(v___x_1521_);
v___f_1525_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2___boxed), 17, 9);
lean_closure_set(v___f_1525_, 0, v___x_1521_);
lean_closure_set(v___f_1525_, 1, v_known_1472_);
lean_closure_set(v___f_1525_, 2, v___x_1522_);
lean_closure_set(v___f_1525_, 3, v_i_1474_);
lean_closure_set(v___f_1525_, 4, v___x_1500_);
lean_closure_set(v___f_1525_, 5, v_bound_1475_);
lean_closure_set(v___f_1525_, 6, v_states_1470_);
lean_closure_set(v___f_1525_, 7, v_proved_1471_);
lean_closure_set(v___f_1525_, 8, v_premises_1473_);
v___x_1526_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__3));
v___x_1527_ = l_Nat_reprFast(v_i_1474_);
v___x_1528_ = lean_string_append(v___x_1526_, v___x_1527_);
lean_dec_ref(v___x_1527_);
v___x_1529_ = lean_box(0);
v___x_1530_ = l_Lean_Name_str___override(v___x_1529_, v___x_1528_);
v___x_1531_ = 0;
v___x_1532_ = 0;
v___x_1533_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(v___x_1530_, v___x_1521_, v_a_1524_, v___f_1525_, v___x_1531_, v___x_1532_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1533_;
}
else
{
lean_dec(v___x_1522_);
lean_dec(v___x_1521_);
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
return v___x_1523_;
}
}
}
}
}
else
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
lean_dec(v___x_1491_);
lean_dec(v_val_1490_);
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
v___x_1534_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__5);
v___x_1535_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1534_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1535_;
}
}
else
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
lean_dec(v___x_1489_);
lean_dec_ref(v_bound_1475_);
lean_dec(v_i_1474_);
lean_dec_ref(v_premises_1473_);
lean_dec_ref(v_known_1472_);
lean_dec_ref(v_proved_1471_);
lean_dec_ref(v_states_1470_);
v___x_1536_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__7);
v___x_1537_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1536_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
return v___x_1537_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___lam__2(lean_object* v___x_1538_, lean_object* v_known_1539_, lean_object* v___x_1540_, lean_object* v_i_1541_, lean_object* v___x_1542_, lean_object* v_bound_1543_, lean_object* v_states_1544_, lean_object* v_proved_1545_, lean_object* v_premises_1546_, lean_object* v_p_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
lean_inc_ref(v_p_1547_);
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v_p_1547_);
lean_ctor_set(v___x_1555_, 1, v___x_1538_);
v___x_1556_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_known_1539_, v___x_1540_, v___x_1555_);
v___x_1557_ = lean_nat_add(v_i_1541_, v___x_1542_);
v___x_1558_ = lean_array_push(v_bound_1543_, v_p_1547_);
v___x_1559_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(v_states_1544_, v_proved_1545_, v___x_1556_, v_premises_1546_, v___x_1557_, v___x_1558_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___boxed(lean_object* v_states_1560_, lean_object* v_proved_1561_, lean_object* v_known_1562_, lean_object* v_premises_1563_, lean_object* v_i_1564_, lean_object* v_bound_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(v_states_1560_, v_proved_1561_, v_known_1562_, v_premises_1563_, v_i_1564_, v_bound_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
lean_dec(v_a_1567_);
lean_dec_ref(v_a_1566_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0(lean_object* v_fst_1574_, lean_object* v_snd_1575_, lean_object* v_n_1576_, uint8_t v___x_1577_, lean_object* v_d_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
lean_inc_ref(v_d_1578_);
v___x_1586_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_fst_1574_, v_snd_1575_, v_d_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; uint8_t v___x_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1588_ = lean_unsigned_to_nat(1u);
v___x_1589_ = lean_mk_empty_array_with_capacity(v___x_1588_);
v___x_1590_ = lean_array_push(v___x_1589_, v_d_1578_);
v___x_1591_ = l_Lean_Expr_app___override(v_n_1576_, v_a_1587_);
v___x_1592_ = 0;
v___x_1593_ = 1;
v___x_1594_ = l_Lean_Meta_mkLambdaFVars(v___x_1590_, v___x_1591_, v___x_1592_, v___x_1577_, v___x_1592_, v___x_1577_, v___x_1593_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
lean_dec_ref(v___x_1590_);
return v___x_1594_;
}
else
{
lean_dec_ref(v_d_1578_);
lean_dec_ref(v_n_1576_);
return v___x_1586_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0___boxed(lean_object* v_fst_1595_, lean_object* v_snd_1596_, lean_object* v_n_1597_, lean_object* v___x_1598_, lean_object* v_d_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
uint8_t v___x_6209__boxed_1607_; lean_object* v_res_1608_; 
v___x_6209__boxed_1607_ = lean_unbox(v___x_1598_);
v_res_1608_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0(v_fst_1595_, v_snd_1596_, v_n_1597_, v___x_6209__boxed_1607_, v_d_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec_ref(v_fst_1595_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0(lean_object* v_fst_1613_, lean_object* v_n_1614_, lean_object* v_as_1615_, size_t v_sz_1616_, size_t v_i_1617_, lean_object* v_b_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_a_1627_; uint8_t v___x_1631_; 
v___x_1631_ = lean_usize_dec_lt(v_i_1617_, v_sz_1616_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
lean_dec_ref(v_n_1614_);
lean_dec_ref(v_fst_1613_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v_b_1618_);
return v___x_1632_;
}
else
{
lean_object* v_a_1633_; lean_object* v_fst_1634_; lean_object* v_snd_1635_; lean_object* v___x_1636_; 
v_a_1633_ = lean_array_uget_borrowed(v_as_1615_, v_i_1617_);
v_fst_1634_ = lean_ctor_get(v_a_1633_, 0);
v_snd_1635_ = lean_ctor_get(v_a_1633_, 1);
lean_inc(v_fst_1634_);
v___x_1636_ = lp_vampireReplay_Vampire_Reconstruct_flipName(v_fst_1634_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; lean_object* v_fst_1638_; lean_object* v_snd_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1689_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1636_, 1);
v_fst_1638_ = lean_ctor_get(v_a_1637_, 0);
v_snd_1639_ = lean_ctor_get(v_a_1637_, 1);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_a_1637_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1641_ = v_a_1637_;
v_isShared_1642_ = v_isSharedCheck_1689_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_snd_1639_);
lean_inc(v_fst_1638_);
lean_dec(v_a_1637_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1689_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = lean_array_get_size(v_fst_1613_);
v___x_1644_ = lean_nat_dec_lt(v_snd_1635_, v___x_1643_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_del_object(v___x_1641_);
lean_dec(v_snd_1639_);
lean_dec(v_fst_1638_);
v___x_1645_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_implied___lam__0___closed__1);
v___x_1646_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1645_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_dec_ref_known(v___x_1646_, 1);
v_a_1627_ = v_b_1618_;
goto v___jp_1626_;
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec_ref(v_b_1618_);
lean_dec_ref(v_n_1614_);
lean_dec_ref(v_fst_1613_);
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1646_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1646_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
else
{
lean_object* v___x_1655_; lean_object* v___f_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1655_ = lean_box(v___x_1631_);
lean_inc_ref(v_n_1614_);
lean_inc(v_snd_1635_);
lean_inc_ref(v_fst_1613_);
v___f_1656_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___lam__0___boxed), 12, 4);
lean_closure_set(v___f_1656_, 0, v_fst_1613_);
lean_closure_set(v___f_1656_, 1, v_snd_1635_);
lean_closure_set(v___f_1656_, 2, v_n_1614_);
lean_closure_set(v___f_1656_, 3, v___x_1655_);
v___x_1657_ = lean_array_fget_borrowed(v_fst_1613_, v_snd_1635_);
v___x_1658_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
lean_inc(v___x_1657_);
v___x_1659_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1658_, v___x_1657_, v___f_1656_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_a_1660_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1661_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___closed__1));
v___x_1662_ = lean_unsigned_to_nat(2u);
v___x_1663_ = lean_mk_empty_array_with_capacity(v___x_1662_);
v___x_1664_ = lean_array_push(v___x_1663_, v_snd_1639_);
v___x_1665_ = lean_array_push(v___x_1664_, v_a_1660_);
v___x_1666_ = l_Lean_Meta_mkAppM(v___x_1661_, v___x_1665_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1668_; lean_object* v___x_1670_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
lean_inc(v_fst_1634_);
v___x_1668_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v_fst_1634_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 1, v_fst_1638_);
lean_ctor_set(v___x_1641_, 0, v_a_1667_);
v___x_1670_ = v___x_1641_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1667_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_fst_1638_);
v___x_1670_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_b_1618_, v___x_1668_, v___x_1670_);
v_a_1627_ = v___x_1671_;
goto v___jp_1626_;
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_del_object(v___x_1641_);
lean_dec(v_fst_1638_);
lean_dec_ref(v_b_1618_);
lean_dec_ref(v_n_1614_);
lean_dec_ref(v_fst_1613_);
v_a_1673_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1666_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1666_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1688_; 
lean_del_object(v___x_1641_);
lean_dec(v_snd_1639_);
lean_dec(v_fst_1638_);
lean_dec_ref(v_b_1618_);
lean_dec_ref(v_n_1614_);
lean_dec_ref(v_fst_1613_);
v_a_1681_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1683_ = v___x_1659_;
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1659_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1686_; 
if (v_isShared_1684_ == 0)
{
v___x_1686_ = v___x_1683_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1681_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
}
}
else
{
lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1697_; 
lean_dec_ref(v_b_1618_);
lean_dec_ref(v_n_1614_);
lean_dec_ref(v_fst_1613_);
v_a_1690_ = lean_ctor_get(v___x_1636_, 0);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1692_ = v___x_1636_;
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1636_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1697_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
v___jp_1626_:
{
size_t v___x_1628_; size_t v___x_1629_; 
v___x_1628_ = ((size_t)1ULL);
v___x_1629_ = lean_usize_add(v_i_1617_, v___x_1628_);
v_i_1617_ = v___x_1629_;
v_b_1618_ = v_a_1627_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0___boxed(lean_object* v_fst_1698_, lean_object* v_n_1699_, lean_object* v_as_1700_, lean_object* v_sz_1701_, lean_object* v_i_1702_, lean_object* v_b_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
size_t v_sz_boxed_1711_; size_t v_i_boxed_1712_; lean_object* v_res_1713_; 
v_sz_boxed_1711_ = lean_unbox_usize(v_sz_1701_);
lean_dec(v_sz_1701_);
v_i_boxed_1712_ = lean_unbox_usize(v_i_1702_);
lean_dec(v_i_1702_);
v_res_1713_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0(v_fst_1698_, v_n_1699_, v_as_1700_, v_sz_boxed_1711_, v_i_boxed_1712_, v_b_1703_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
lean_dec_ref(v_as_1700_);
return v_res_1713_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = lean_box(0);
v___x_1715_ = lean_unsigned_to_nat(16u);
v___x_1716_ = lean_mk_array(v___x_1715_, v___x_1714_);
return v___x_1716_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v_known_1719_; 
v___x_1717_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__0);
v___x_1718_ = lean_unsigned_to_nat(0u);
v_known_1719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_known_1719_, 0, v___x_1718_);
lean_ctor_set(v_known_1719_, 1, v___x_1717_);
return v_known_1719_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0(lean_object* v_c_1722_, lean_object* v_fst_1723_, lean_object* v_states_1724_, lean_object* v_proved_1725_, lean_object* v_n_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v___x_1734_; lean_object* v_known_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; size_t v_sz_1738_; size_t v___x_1739_; lean_object* v___x_1740_; 
v___x_1734_ = lean_unsigned_to_nat(0u);
v_known_1735_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1);
lean_inc_ref(v_c_1722_);
v___x_1736_ = lp_vampireReplay_Vampire_SatClause_literals(v_c_1722_);
v___x_1737_ = l_Array_zipIdx___redArg(v___x_1736_, v___x_1734_);
v_sz_1738_ = lean_array_size(v___x_1737_);
v___x_1739_ = ((size_t)0ULL);
lean_inc_ref(v_n_1726_);
v___x_1740_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause_spec__0(v_fst_1723_, v_n_1726_, v___x_1737_, v_sz_1738_, v___x_1739_, v_known_1735_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec_ref(v___x_1737_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref_known(v___x_1740_, 1);
v___x_1742_ = lp_vampireReplay_Vampire_SatClause_premises(v_c_1722_);
v___x_1743_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__2));
v___x_1744_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate(v_states_1724_, v_proved_1725_, v_a_1741_, v___x_1742_, v___x_1734_, v___x_1743_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; uint8_t v___x_1749_; uint8_t v___x_1750_; uint8_t v___x_1751_; lean_object* v___x_1752_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1746_ = lean_unsigned_to_nat(1u);
v___x_1747_ = lean_mk_empty_array_with_capacity(v___x_1746_);
v___x_1748_ = lean_array_push(v___x_1747_, v_n_1726_);
v___x_1749_ = 0;
v___x_1750_ = 1;
v___x_1751_ = 1;
v___x_1752_ = l_Lean_Meta_mkLambdaFVars(v___x_1748_, v_a_1745_, v___x_1749_, v___x_1750_, v___x_1749_, v___x_1750_, v___x_1751_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec_ref(v___x_1748_);
return v___x_1752_;
}
else
{
lean_dec_ref(v_n_1726_);
return v___x_1744_;
}
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec_ref(v_n_1726_);
lean_dec_ref(v_proved_1725_);
lean_dec_ref(v_states_1724_);
lean_dec_ref(v_c_1722_);
v_a_1753_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1740_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1740_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___boxed(lean_object* v_c_1761_, lean_object* v_fst_1762_, lean_object* v_states_1763_, lean_object* v_proved_1764_, lean_object* v_n_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0(v_c_1761_, v_fst_1762_, v_states_1763_, v_proved_1764_, v_n_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
return v_res_1773_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3(void){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__2));
v___x_1779_ = l_Lean_stringToMessageData(v___x_1778_);
return v___x_1779_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5(void){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__4));
v___x_1782_ = l_Lean_stringToMessageData(v___x_1781_);
return v___x_1782_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__6));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause(lean_object* v_states_1786_, lean_object* v_proved_1787_, lean_object* v_origins_1788_, lean_object* v_c_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_){
_start:
{
uint32_t v_idx_1797_; lean_object* v___x_1798_; 
v_idx_1797_ = lean_ctor_get_uint32(v_c_1789_, sizeof(void*)*1);
v___x_1798_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_states_1786_, v_idx_1797_);
if (lean_obj_tag(v___x_1798_) == 1)
{
lean_object* v_val_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1870_; 
v_val_1799_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1801_ = v___x_1798_;
v_isShared_1802_ = v_isSharedCheck_1870_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_val_1799_);
lean_dec(v___x_1798_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1870_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v_fst_1803_; lean_object* v_snd_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1869_; 
v_fst_1803_ = lean_ctor_get(v_val_1799_, 0);
v_snd_1804_ = lean_ctor_get(v_val_1799_, 1);
v_isSharedCheck_1869_ = !lean_is_exclusive(v_val_1799_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1806_ = v_val_1799_;
v_isShared_1807_ = v_isSharedCheck_1869_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_snd_1804_);
lean_inc(v_fst_1803_);
lean_dec(v_val_1799_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1869_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___f_1808_; lean_object* v___y_1810_; lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___x_1836_; 
lean_inc_ref(v_c_1789_);
v___f_1808_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___boxed), 12, 4);
lean_closure_set(v___f_1808_, 0, v_c_1789_);
lean_closure_set(v___f_1808_, 1, v_fst_1803_);
lean_closure_set(v___f_1808_, 2, v_states_1786_);
lean_closure_set(v___f_1808_, 3, v_proved_1787_);
v___x_1836_ = lp_vampireReplay_Vampire_SatClause_origin_x3f(v_c_1789_);
if (lean_obj_tag(v___x_1836_) == 1)
{
lean_object* v_val_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1868_; 
lean_dec_ref(v___f_1808_);
lean_del_object(v___x_1801_);
v_val_1837_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1839_ = v___x_1836_;
v_isShared_1840_ = v_isSharedCheck_1868_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_val_1837_);
lean_dec(v___x_1836_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1868_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
uint32_t v___x_1841_; lean_object* v___x_1842_; 
v___x_1841_ = lp_vampireReplay_Vampire_Unit_number(v_val_1837_);
lean_dec(v_val_1837_);
v___x_1842_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_origins_1788_, v___x_1841_);
if (lean_obj_tag(v___x_1842_) == 1)
{
lean_object* v_val_1843_; lean_object* v_fst_1844_; lean_object* v_snd_1845_; lean_object* v___x_1846_; 
lean_del_object(v___x_1839_);
lean_del_object(v___x_1806_);
v_val_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_val_1843_);
lean_dec_ref_known(v___x_1842_, 1);
v_fst_1844_ = lean_ctor_get(v_val_1843_, 0);
lean_inc(v_fst_1844_);
v_snd_1845_ = lean_ctor_get(v_val_1843_, 1);
lean_inc(v_snd_1845_);
lean_dec(v_val_1843_);
v___x_1846_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_snd_1845_, v_snd_1804_, v_fst_1844_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_);
return v___x_1846_;
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1851_; 
lean_dec(v___x_1842_);
lean_dec(v_snd_1804_);
v___x_1847_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__3);
v___x_1848_ = lean_uint32_to_nat(v___x_1841_);
v___x_1849_ = l_Nat_reprFast(v___x_1848_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set_tag(v___x_1839_, 3);
lean_ctor_set(v___x_1839_, 0, v___x_1849_);
v___x_1851_ = v___x_1839_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1849_);
v___x_1851_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1854_; 
v___x_1852_ = l_Lean_MessageData_ofFormat(v___x_1851_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set_tag(v___x_1806_, 7);
lean_ctor_set(v___x_1806_, 1, v___x_1852_);
lean_ctor_set(v___x_1806_, 0, v___x_1847_);
v___x_1854_ = v___x_1806_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1847_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
v___x_1855_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__5);
v___x_1856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1854_);
lean_ctor_set(v___x_1856_, 1, v___x_1855_);
v___x_1857_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1856_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_);
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1857_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1857_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_1836_);
lean_del_object(v___x_1806_);
v___y_1810_ = v_a_1790_;
v___y_1811_ = v_a_1791_;
v___y_1812_ = v_a_1792_;
v___y_1813_ = v_a_1793_;
v___y_1814_ = v_a_1794_;
v___y_1815_ = v_a_1795_;
goto v___jp_1809_;
}
v___jp_1809_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1816_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__1));
v___x_1817_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8);
lean_inc(v_snd_1804_);
v___x_1818_ = l_Lean_Expr_app___override(v___x_1817_, v_snd_1804_);
v___x_1819_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_1816_, v___x_1818_, v___f_1808_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v___x_1821_; lean_object* v___x_1823_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1820_);
lean_dec_ref_known(v___x_1819_, 1);
v___x_1821_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 0, v_snd_1804_);
v___x_1823_ = v___x_1801_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_snd_1804_);
v___x_1823_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1824_ = lean_unsigned_to_nat(1u);
v___x_1825_ = lean_mk_empty_array_with_capacity(v___x_1824_);
v___x_1826_ = lean_array_push(v___x_1825_, v___x_1823_);
v___x_1827_ = l_Lean_Meta_mkAppOptM(v___x_1821_, v___x_1826_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
v___x_1829_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_1830_ = lean_unsigned_to_nat(2u);
v___x_1831_ = lean_mk_empty_array_with_capacity(v___x_1830_);
v___x_1832_ = lean_array_push(v___x_1831_, v_a_1828_);
v___x_1833_ = lean_array_push(v___x_1832_, v_a_1820_);
v___x_1834_ = l_Lean_Meta_mkAppM(v___x_1829_, v___x_1833_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
return v___x_1834_;
}
else
{
lean_dec(v_a_1820_);
return v___x_1827_;
}
}
}
else
{
lean_dec(v_snd_1804_);
lean_del_object(v___x_1801_);
return v___x_1819_;
}
}
}
}
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
lean_dec(v___x_1798_);
lean_dec_ref(v_c_1789_);
lean_dec_ref(v_proved_1787_);
lean_dec_ref(v_states_1786_);
v___x_1871_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___closed__7);
v___x_1872_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1871_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_);
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___boxed(lean_object* v_states_1873_, lean_object* v_proved_1874_, lean_object* v_origins_1875_, lean_object* v_c_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause(v_states_1873_, v_proved_1874_, v_origins_1875_, v_c_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec_ref(v_origins_1875_);
return v_res_1884_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1(void){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__0));
v___x_1887_ = l_Lean_stringToMessageData(v___x_1886_);
return v___x_1887_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3(void){
_start:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__2));
v___x_1890_ = l_Lean_stringToMessageData(v___x_1889_);
return v___x_1890_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0___boxed(lean_object* v_i_1891_, lean_object* v_proved_1892_, lean_object* v_idx_1893_, lean_object* v_bound_1894_, lean_object* v_origins_1895_, lean_object* v_order_1896_, lean_object* v___x_1897_, lean_object* v_s_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_){
_start:
{
uint32_t v_idx_boxed_1906_; lean_object* v_res_1907_; 
v_idx_boxed_1906_ = lean_unbox_uint32(v_idx_1893_);
lean_dec(v_idx_1893_);
v_res_1907_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0(v_i_1891_, v_proved_1892_, v_idx_boxed_1906_, v_bound_1894_, v_origins_1895_, v_order_1896_, v___x_1897_, v_s_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v_i_1891_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound(lean_object* v_origins_1909_, lean_object* v_order_1910_, lean_object* v_i_1911_, lean_object* v_states_1912_, lean_object* v_proved_1913_, lean_object* v_bound_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v___x_1922_; uint8_t v___x_1923_; 
v___x_1922_ = lean_array_get_size(v_order_1910_);
v___x_1923_ = lean_nat_dec_lt(v_i_1911_, v___x_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; lean_object* v___x_1925_; uint8_t v___x_1926_; 
lean_dec_ref(v_states_1912_);
lean_dec(v_i_1911_);
lean_dec_ref(v_origins_1909_);
v___x_1924_ = lean_unsigned_to_nat(1u);
v___x_1925_ = lean_nat_sub(v___x_1922_, v___x_1924_);
v___x_1926_ = lean_nat_dec_lt(v___x_1925_, v___x_1922_);
if (v___x_1926_ == 0)
{
lean_object* v___x_1927_; lean_object* v___x_1928_; 
lean_dec(v___x_1925_);
lean_dec_ref(v_bound_1914_);
lean_dec_ref(v_proved_1913_);
lean_dec_ref(v_order_1910_);
v___x_1927_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__1);
v___x_1928_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1927_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
return v___x_1928_;
}
else
{
lean_object* v___x_1929_; uint32_t v_idx_1930_; lean_object* v___x_1931_; 
v___x_1929_ = lean_array_fget(v_order_1910_, v___x_1925_);
lean_dec(v___x_1925_);
lean_dec_ref(v_order_1910_);
v_idx_1930_ = lean_ctor_get_uint32(v___x_1929_, sizeof(void*)*1);
lean_dec(v___x_1929_);
v___x_1931_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_proved_1913_, v_idx_1930_);
lean_dec_ref(v_proved_1913_);
if (lean_obj_tag(v___x_1931_) == 1)
{
lean_object* v_val_1932_; uint8_t v___x_1933_; lean_object* v___x_1934_; 
v_val_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_val_1932_);
lean_dec_ref_known(v___x_1931_, 1);
v___x_1933_ = 1;
v___x_1934_ = l_Lean_Meta_mkLetFVars(v_bound_1914_, v_val_1932_, v___x_1923_, v___x_1926_, v___x_1933_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
lean_dec_ref(v_bound_1914_);
return v___x_1934_;
}
else
{
lean_object* v___x_1935_; lean_object* v___x_1936_; 
lean_dec(v___x_1931_);
lean_dec_ref(v_bound_1914_);
v___x_1935_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__3);
v___x_1936_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1935_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
return v___x_1936_;
}
}
}
else
{
lean_object* v_c_1937_; lean_object* v___x_1938_; 
v_c_1937_ = lean_array_fget_borrowed(v_order_1910_, v_i_1911_);
lean_inc(v_c_1937_);
v___x_1938_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts(v_c_1937_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
if (lean_obj_tag(v___x_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v_snd_1940_; uint32_t v_idx_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___x_1938_, 1);
v_snd_1940_ = lean_ctor_get(v_a_1939_, 1);
lean_inc(v_snd_1940_);
v_idx_1941_ = lean_ctor_get_uint32(v_c_1937_, sizeof(void*)*1);
v___x_1942_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_states_1912_, v_idx_1941_, v_a_1939_);
lean_inc(v_c_1937_);
lean_inc_ref(v_proved_1913_);
lean_inc_ref(v___x_1942_);
v___x_1943_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause(v___x_1942_, v_proved_1913_, v_origins_1909_, v_c_1937_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1945_; lean_object* v___f_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; uint8_t v___x_1952_; uint8_t v___x_1953_; lean_object* v___x_1954_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
lean_inc(v_a_1944_);
lean_dec_ref_known(v___x_1943_, 1);
v___x_1945_ = lean_box_uint32(v_idx_1941_);
lean_inc(v_i_1911_);
v___f_1946_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0___boxed), 15, 7);
lean_closure_set(v___f_1946_, 0, v_i_1911_);
lean_closure_set(v___f_1946_, 1, v_proved_1913_);
lean_closure_set(v___f_1946_, 2, v___x_1945_);
lean_closure_set(v___f_1946_, 3, v_bound_1914_);
lean_closure_set(v___f_1946_, 4, v_origins_1909_);
lean_closure_set(v___f_1946_, 5, v_order_1910_);
lean_closure_set(v___f_1946_, 6, v___x_1942_);
v___x_1947_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___closed__4));
v___x_1948_ = l_Nat_reprFast(v_i_1911_);
v___x_1949_ = lean_string_append(v___x_1947_, v___x_1948_);
lean_dec_ref(v___x_1948_);
v___x_1950_ = lean_box(0);
v___x_1951_ = l_Lean_Name_str___override(v___x_1950_, v___x_1949_);
v___x_1952_ = 0;
v___x_1953_ = 0;
v___x_1954_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate_spec__1___redArg(v___x_1951_, v_snd_1940_, v_a_1944_, v___f_1946_, v___x_1952_, v___x_1953_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_);
return v___x_1954_;
}
else
{
lean_dec_ref(v___x_1942_);
lean_dec(v_snd_1940_);
lean_dec_ref(v_bound_1914_);
lean_dec_ref(v_proved_1913_);
lean_dec(v_i_1911_);
lean_dec_ref(v_order_1910_);
lean_dec_ref(v_origins_1909_);
return v___x_1943_;
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_dec_ref(v_bound_1914_);
lean_dec_ref(v_proved_1913_);
lean_dec_ref(v_states_1912_);
lean_dec(v_i_1911_);
lean_dec_ref(v_order_1910_);
lean_dec_ref(v_origins_1909_);
v_a_1955_ = lean_ctor_get(v___x_1938_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1938_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1938_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1938_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___lam__0(lean_object* v_i_1963_, lean_object* v_proved_1964_, uint32_t v_idx_1965_, lean_object* v_bound_1966_, lean_object* v_origins_1967_, lean_object* v_order_1968_, lean_object* v___x_1969_, lean_object* v_s_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1978_ = lean_unsigned_to_nat(1u);
v___x_1979_ = lean_nat_add(v_i_1963_, v___x_1978_);
lean_inc_ref(v_s_1970_);
v___x_1980_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_proved_1964_, v_idx_1965_, v_s_1970_);
v___x_1981_ = lean_array_push(v_bound_1966_, v_s_1970_);
v___x_1982_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound(v_origins_1967_, v_order_1968_, v___x_1979_, v___x_1969_, v___x_1980_, v___x_1981_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound___boxed(lean_object* v_origins_1983_, lean_object* v_order_1984_, lean_object* v_i_1985_, lean_object* v_states_1986_, lean_object* v_proved_1987_, lean_object* v_bound_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound(v_origins_1983_, v_order_1984_, v_i_1985_, v_states_1986_, v_proved_1987_, v_bound_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
lean_dec(v_a_1990_);
lean_dec_ref(v_a_1989_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__11(lean_object* v_a_1997_, lean_object* v_a_1998_){
_start:
{
if (lean_obj_tag(v_a_1997_) == 0)
{
lean_object* v___x_1999_; 
v___x_1999_ = l_List_reverse___redArg(v_a_1998_);
return v___x_1999_;
}
else
{
lean_object* v_head_2000_; lean_object* v_tail_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2010_; 
v_head_2000_ = lean_ctor_get(v_a_1997_, 0);
v_tail_2001_ = lean_ctor_get(v_a_1997_, 1);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_a_1997_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2003_ = v_a_1997_;
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_tail_2001_);
lean_inc(v_head_2000_);
lean_dec(v_a_1997_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = l_Lean_stringToMessageData(v_head_2000_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 1, v_a_1998_);
lean_ctor_set(v___x_2003_, 0, v___x_2005_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2009_, 1, v_a_1998_);
v___x_2007_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
v_a_1997_ = v_tail_2001_;
v_a_1998_ = v___x_2007_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg(lean_object* v_a_2014_, lean_object* v_a_2015_, lean_object* v_as_2016_, size_t v_sz_2017_, size_t v_i_2018_, lean_object* v_b_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
uint8_t v___x_2025_; 
v___x_2025_ = lean_usize_dec_lt(v_i_2018_, v_sz_2017_);
if (v___x_2025_ == 0)
{
lean_object* v___x_2026_; 
lean_dec_ref(v_a_2015_);
lean_dec_ref(v_a_2014_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v_b_2019_);
return v___x_2026_;
}
else
{
lean_object* v_a_2027_; lean_object* v_fst_2028_; lean_object* v_snd_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2081_; 
lean_dec_ref(v_b_2019_);
v_a_2027_ = lean_array_uget(v_as_2016_, v_i_2018_);
v_fst_2028_ = lean_ctor_get(v_a_2027_, 0);
v_snd_2029_ = lean_ctor_get(v_a_2027_, 1);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_a_2027_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2031_ = v_a_2027_;
v_isShared_2032_ = v_isSharedCheck_2081_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_snd_2029_);
lean_inc(v_fst_2028_);
lean_dec(v_a_2027_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2081_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; 
lean_inc_ref(v_a_2014_);
v___x_2033_ = l_Lean_Meta_isExprDefEq(v_fst_2028_, v_a_2014_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2035_ = lean_box(0);
v___x_2036_ = lean_unbox(v_a_2034_);
lean_dec(v_a_2034_);
if (v___x_2036_ == 0)
{
lean_object* v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; 
lean_del_object(v___x_2031_);
lean_dec(v_snd_2029_);
v___x_2037_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0));
v___x_2038_ = ((size_t)1ULL);
v___x_2039_ = lean_usize_add(v_i_2018_, v___x_2038_);
v_i_2018_ = v___x_2039_;
v_b_2019_ = v___x_2037_;
goto _start;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2041_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_contradicts___redArg___closed__1));
v___x_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2042_, 0, v_a_2014_);
v___x_2043_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_propagate___closed__2);
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v_a_2015_);
v___x_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2045_, 0, v_snd_2029_);
v___x_2046_ = lean_unsigned_to_nat(4u);
v___x_2047_ = lean_mk_empty_array_with_capacity(v___x_2046_);
v___x_2048_ = lean_array_push(v___x_2047_, v___x_2042_);
v___x_2049_ = lean_array_push(v___x_2048_, v___x_2043_);
v___x_2050_ = lean_array_push(v___x_2049_, v___x_2044_);
v___x_2051_ = lean_array_push(v___x_2050_, v___x_2045_);
v___x_2052_ = l_Lean_Meta_mkAppOptM(v___x_2041_, v___x_2051_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2064_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2055_ = v___x_2052_;
v_isShared_2056_ = v_isSharedCheck_2064_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2052_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2064_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2057_, 0, v_a_2053_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 1, v___x_2035_);
lean_ctor_set(v___x_2031_, 0, v___x_2057_);
v___x_2059_ = v___x_2031_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v___x_2035_);
v___x_2059_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
lean_object* v___x_2061_; 
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2059_);
v___x_2061_ = v___x_2055_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
lean_del_object(v___x_2031_);
v_a_2065_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2052_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2052_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_del_object(v___x_2031_);
lean_dec(v_snd_2029_);
lean_dec_ref(v_a_2015_);
lean_dec_ref(v_a_2014_);
v_a_2073_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2033_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2033_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___boxed(lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_as_2084_, lean_object* v_sz_2085_, lean_object* v_i_2086_, lean_object* v_b_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
size_t v_sz_boxed_2093_; size_t v_i_boxed_2094_; lean_object* v_res_2095_; 
v_sz_boxed_2093_ = lean_unbox_usize(v_sz_2085_);
lean_dec(v_sz_2085_);
v_i_boxed_2094_ = lean_unbox_usize(v_i_2086_);
lean_dec(v_i_2086_);
v_res_2095_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg(v_a_2082_, v_a_2083_, v_as_2084_, v_sz_boxed_2093_, v_i_boxed_2094_, v_b_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec_ref(v_as_2084_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10(lean_object* v___x_2096_, lean_object* v_as_2097_, size_t v_sz_2098_, size_t v_i_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
uint8_t v___x_2108_; 
v___x_2108_ = lean_usize_dec_lt(v_i_2099_, v_sz_2098_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; 
v___x_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2109_, 0, v_b_2100_);
return v___x_2109_;
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2111_; 
lean_dec_ref(v_b_2100_);
v_a_2110_ = lean_array_uget_borrowed(v_as_2097_, v_i_2099_);
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v_a_2110_);
v___x_2111_ = lean_infer_type(v_a_2110_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2113_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2111_, 1);
v___x_2113_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2112_, v___y_2104_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; size_t v_sz_2117_; size_t v___x_2118_; lean_object* v___x_2119_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2113_, 1);
v___x_2115_ = lean_box(0);
v___x_2116_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0));
v_sz_2117_ = lean_array_size(v___x_2096_);
v___x_2118_ = ((size_t)0ULL);
lean_inc(v_a_2110_);
v___x_2119_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg(v_a_2114_, v_a_2110_, v___x_2096_, v_sz_2117_, v___x_2118_, v___x_2116_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2139_; 
v_a_2120_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2122_ = v___x_2119_;
v_isShared_2123_ = v_isSharedCheck_2139_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2119_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2139_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v_fst_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2137_; 
v_fst_2124_ = lean_ctor_get(v_a_2120_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v_a_2120_);
if (v_isSharedCheck_2137_ == 0)
{
lean_object* v_unused_2138_; 
v_unused_2138_ = lean_ctor_get(v_a_2120_, 1);
lean_dec(v_unused_2138_);
v___x_2126_ = v_a_2120_;
v_isShared_2127_ = v_isSharedCheck_2137_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_fst_2124_);
lean_dec(v_a_2120_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2137_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
if (lean_obj_tag(v_fst_2124_) == 0)
{
size_t v___x_2128_; size_t v___x_2129_; 
lean_del_object(v___x_2126_);
lean_del_object(v___x_2122_);
v___x_2128_ = ((size_t)1ULL);
v___x_2129_ = lean_usize_add(v_i_2099_, v___x_2128_);
v_i_2099_ = v___x_2129_;
v_b_2100_ = v___x_2116_;
goto _start;
}
else
{
lean_object* v___x_2132_; 
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 1, v___x_2115_);
v___x_2132_ = v___x_2126_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_fst_2124_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v___x_2115_);
v___x_2132_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2134_; 
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 0, v___x_2132_);
v___x_2134_ = v___x_2122_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
}
else
{
return v___x_2119_;
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
v_a_2140_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2113_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2113_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
else
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
v_a_2148_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_2111_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2111_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10___boxed(lean_object* v___x_2156_, lean_object* v_as_2157_, lean_object* v_sz_2158_, lean_object* v_i_2159_, lean_object* v_b_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
size_t v_sz_boxed_2168_; size_t v_i_boxed_2169_; lean_object* v_res_2170_; 
v_sz_boxed_2168_ = lean_unbox_usize(v_sz_2158_);
lean_dec(v_sz_2158_);
v_i_boxed_2169_ = lean_unbox_usize(v_i_2159_);
lean_dec(v_i_2159_);
v_res_2170_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10(v___x_2156_, v_as_2157_, v_sz_boxed_2168_, v_i_boxed_2169_, v_b_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec_ref(v_as_2157_);
lean_dec_ref(v___x_2156_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__12(lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
if (lean_obj_tag(v_a_2171_) == 0)
{
lean_object* v___x_2173_; 
v___x_2173_ = l_List_reverse___redArg(v_a_2172_);
return v___x_2173_;
}
else
{
lean_object* v_head_2174_; lean_object* v_tail_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2184_; 
v_head_2174_ = lean_ctor_get(v_a_2171_, 0);
v_tail_2175_ = lean_ctor_get(v_a_2171_, 1);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_a_2171_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2177_ = v_a_2171_;
v_isShared_2178_ = v_isSharedCheck_2184_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_tail_2175_);
lean_inc(v_head_2174_);
lean_dec(v_a_2171_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2184_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; lean_object* v___x_2181_; 
v___x_2179_ = lp_vampireReplay_Vampire_Literal_render(v_head_2174_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 1, v_a_2172_);
lean_ctor_set(v___x_2177_, 0, v___x_2179_);
v___x_2181_ = v___x_2177_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2179_);
lean_ctor_set(v_reuseFailAlloc_2183_, 1, v_a_2172_);
v___x_2181_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
v_a_2171_ = v_tail_2175_;
v_a_2172_ = v___x_2181_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2186_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__0));
v___x_2187_ = l_Lean_stringToMessageData(v___x_2186_);
return v___x_2187_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2189_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__2));
v___x_2190_ = l_Lean_stringToMessageData(v___x_2189_);
return v___x_2190_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2192_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__4));
v___x_2193_ = l_Lean_stringToMessageData(v___x_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0(lean_object* v___x_2197_, lean_object* v_snd_2198_, size_t v___x_2199_, lean_object* v_a_2200_, lean_object* v___x_2201_, lean_object* v_x_2202_, lean_object* v_hl_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v___x_2211_; 
lean_inc_ref(v_hl_2203_);
v___x_2211_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_hl_2203_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; size_t v_sz_2217_; lean_object* v___x_2218_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2213_ = lean_mk_empty_array_with_capacity(v___x_2197_);
lean_inc_ref(v_hl_2203_);
v___x_2214_ = lean_array_push(v___x_2213_, v_hl_2203_);
v___x_2215_ = l_Array_append___redArg(v___x_2214_, v_a_2212_);
lean_dec(v_a_2212_);
v___x_2216_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg___closed__0));
v_sz_2217_ = lean_array_size(v___x_2215_);
v___x_2218_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__10(v_snd_2198_, v___x_2215_, v_sz_2217_, v___x_2199_, v___x_2216_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
lean_dec_ref(v___x_2215_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2277_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2221_ = v___x_2218_;
v_isShared_2222_ = v_isSharedCheck_2277_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2218_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2277_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v_fst_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2275_; 
v_fst_2223_ = lean_ctor_get(v_a_2219_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_a_2219_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v_a_2219_, 1);
lean_dec(v_unused_2276_);
v___x_2225_ = v_a_2219_;
v_isShared_2226_ = v_isSharedCheck_2275_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_fst_2223_);
lean_dec(v_a_2219_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2275_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
if (lean_obj_tag(v_fst_2223_) == 0)
{
lean_object* v___x_2227_; 
lean_del_object(v___x_2221_);
lean_inc(v___y_2209_);
lean_inc_ref(v___y_2208_);
lean_inc(v___y_2207_);
lean_inc_ref(v___y_2206_);
v___x_2227_ = lean_infer_type(v_hl_2203_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v___x_2229_; lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2270_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
lean_dec_ref_known(v___x_2227_, 1);
v___x_2229_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2228_, v___y_2207_);
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2270_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2270_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2237_; 
v___x_2234_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__1);
v___x_2235_ = l_Lean_indentExpr(v_a_2230_);
if (v_isShared_2226_ == 0)
{
lean_ctor_set_tag(v___x_2225_, 7);
lean_ctor_set(v___x_2225_, 1, v___x_2235_);
lean_ctor_set(v___x_2225_, 0, v___x_2234_);
v___x_2237_ = v___x_2225_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v___x_2235_);
v___x_2237_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___y_2241_; lean_object* v___x_2255_; 
v___x_2238_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__3);
v___x_2239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2237_);
lean_ctor_set(v___x_2239_, 1, v___x_2238_);
lean_inc_ref(v___x_2201_);
v___x_2255_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v___x_2201_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_2201_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v___x_2257_; 
v___x_2257_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__6));
v___y_2241_ = v___x_2257_;
goto v___jp_2240_;
}
else
{
lean_object* v_val_2258_; lean_object* v___x_2259_; 
v_val_2258_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_val_2258_);
lean_dec_ref_known(v___x_2256_, 1);
v___x_2259_ = lp_vampireReplay_Vampire_Formula_render(v_val_2258_);
v___y_2241_ = v___x_2259_;
goto v___jp_2240_;
}
}
else
{
lean_object* v_val_2260_; uint8_t v___x_2261_; 
lean_dec_ref(v___x_2201_);
v_val_2260_ = lean_ctor_get(v___x_2255_, 0);
lean_inc_n(v_val_2260_, 2);
lean_dec_ref_known(v___x_2255_, 1);
v___x_2261_ = lp_vampireReplay_Vampire_Clause_isEmpty(v_val_2260_);
if (v___x_2261_ == 0)
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2262_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__7));
v___x_2263_ = lp_vampireReplay_Vampire_Clause_literals(v_val_2260_);
v___x_2264_ = lean_array_to_list(v___x_2263_);
v___x_2265_ = lean_box(0);
v___x_2266_ = lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__12(v___x_2264_, v___x_2265_);
v___x_2267_ = l_String_intercalate(v___x_2262_, v___x_2266_);
v___y_2241_ = v___x_2267_;
goto v___jp_2240_;
}
else
{
lean_object* v___x_2268_; 
lean_dec(v_val_2260_);
v___x_2268_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__8));
v___y_2241_ = v___x_2268_;
goto v___jp_2240_;
}
}
v___jp_2240_:
{
lean_object* v___x_2243_; 
if (v_isShared_2233_ == 0)
{
lean_ctor_set_tag(v___x_2232_, 3);
lean_ctor_set(v___x_2232_, 0, v___y_2241_);
v___x_2243_ = v___x_2232_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___y_2241_);
v___x_2243_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2244_ = l_Lean_MessageData_ofFormat(v___x_2243_);
v___x_2245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2239_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___closed__5);
v___x_2247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2245_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = lean_array_to_list(v_a_2200_);
v___x_2249_ = lean_box(0);
v___x_2250_ = lp_vampireReplay_List_mapTR_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__11(v___x_2248_, v___x_2249_);
v___x_2251_ = l_Lean_MessageData_ofList(v___x_2250_);
v___x_2252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2247_);
lean_ctor_set(v___x_2252_, 1, v___x_2251_);
v___x_2253_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2252_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
return v___x_2253_;
}
}
}
}
}
else
{
lean_del_object(v___x_2225_);
lean_dec_ref(v___x_2201_);
lean_dec_ref(v_a_2200_);
return v___x_2227_;
}
}
else
{
lean_object* v_val_2271_; lean_object* v___x_2273_; 
lean_del_object(v___x_2225_);
lean_dec_ref(v_hl_2203_);
lean_dec_ref(v___x_2201_);
lean_dec_ref(v_a_2200_);
v_val_2271_ = lean_ctor_get(v_fst_2223_, 0);
lean_inc(v_val_2271_);
lean_dec_ref_known(v_fst_2223_, 1);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 0, v_val_2271_);
v___x_2273_ = v___x_2221_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_val_2271_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
else
{
lean_object* v_a_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2285_; 
lean_dec_ref(v_hl_2203_);
lean_dec_ref(v___x_2201_);
lean_dec_ref(v_a_2200_);
v_a_2278_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2285_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2285_ == 0)
{
v___x_2280_ = v___x_2218_;
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_a_2278_);
lean_dec(v___x_2218_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2285_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v___x_2283_; 
if (v_isShared_2281_ == 0)
{
v___x_2283_ = v___x_2280_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_a_2278_);
v___x_2283_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
return v___x_2283_;
}
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec_ref(v_hl_2203_);
lean_dec_ref(v___x_2201_);
lean_dec_ref(v_a_2200_);
v_a_2286_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2211_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2211_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___boxed(lean_object* v___x_2294_, lean_object* v_snd_2295_, lean_object* v___x_2296_, lean_object* v_a_2297_, lean_object* v___x_2298_, lean_object* v_x_2299_, lean_object* v_hl_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
size_t v___x_131332__boxed_2308_; lean_object* v_res_2309_; 
v___x_131332__boxed_2308_ = lean_unbox_usize(v___x_2296_);
lean_dec(v___x_2296_);
v_res_2309_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0(v___x_2294_, v_snd_2295_, v___x_131332__boxed_2308_, v_a_2297_, v___x_2298_, v_x_2299_, v_hl_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v_x_2299_);
lean_dec(v_snd_2295_);
lean_dec(v___x_2294_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0(lean_object* v_a_2310_, lean_object* v_val_2311_, lean_object* v___x_2312_, lean_object* v_h_2313_, uint8_t v___x_2314_, lean_object* v_d_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
lean_inc_ref(v_d_2315_);
v___x_2324_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_2323_, v_a_2310_, v_val_2311_, v_d_2315_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; uint8_t v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = lean_array_push(v___x_2312_, v_d_2315_);
v___x_2327_ = l_Lean_Expr_app___override(v_h_2313_, v_a_2325_);
v___x_2328_ = 0;
v___x_2329_ = 1;
v___x_2330_ = l_Lean_Meta_mkLambdaFVars(v___x_2326_, v___x_2327_, v___x_2328_, v___x_2314_, v___x_2328_, v___x_2314_, v___x_2329_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec_ref(v___x_2326_);
return v___x_2330_;
}
else
{
lean_dec_ref(v_d_2315_);
lean_dec_ref(v_h_2313_);
lean_dec_ref(v___x_2312_);
return v___x_2324_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0___boxed(lean_object* v_a_2331_, lean_object* v_val_2332_, lean_object* v___x_2333_, lean_object* v_h_2334_, lean_object* v___x_2335_, lean_object* v_d_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_){
_start:
{
uint8_t v___x_131549__boxed_2344_; lean_object* v_res_2345_; 
v___x_131549__boxed_2344_ = lean_unbox(v___x_2335_);
v_res_2345_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0(v_a_2331_, v_val_2332_, v___x_2333_, v_h_2334_, v___x_131549__boxed_2344_, v_d_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
lean_dec(v___y_2338_);
lean_dec_ref(v___y_2337_);
lean_dec(v_val_2332_);
lean_dec_ref(v_a_2331_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3(lean_object* v_a_2346_, lean_object* v_as_2347_, lean_object* v_j_2348_){
_start:
{
lean_object* v___x_2349_; uint8_t v___x_2350_; 
v___x_2349_ = lean_array_get_size(v_as_2347_);
v___x_2350_ = lean_nat_dec_lt(v_j_2348_, v___x_2349_);
if (v___x_2350_ == 0)
{
lean_object* v___x_2351_; 
lean_dec(v_j_2348_);
lean_dec_ref(v_a_2346_);
v___x_2351_ = lean_box(0);
return v___x_2351_;
}
else
{
lean_object* v___x_2352_; lean_object* v___x_2353_; uint8_t v___x_2354_; 
v___x_2352_ = lean_array_fget_borrowed(v_as_2347_, v_j_2348_);
lean_inc_ref(v_a_2346_);
v___x_2353_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v_a_2346_);
v___x_2354_ = lean_string_dec_eq(v___x_2352_, v___x_2353_);
lean_dec_ref(v___x_2353_);
if (v___x_2354_ == 0)
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_unsigned_to_nat(1u);
v___x_2356_ = lean_nat_add(v_j_2348_, v___x_2355_);
lean_dec(v_j_2348_);
v_j_2348_ = v___x_2356_;
goto _start;
}
else
{
lean_object* v___x_2358_; 
lean_dec_ref(v_a_2346_);
v___x_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2358_, 0, v_j_2348_);
return v___x_2358_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3___boxed(lean_object* v_a_2359_, lean_object* v_as_2360_, lean_object* v_j_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3(v_a_2359_, v_as_2360_, v_j_2361_);
lean_dec_ref(v_as_2360_);
return v_res_2362_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2364_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__0));
v___x_2365_ = l_Lean_stringToMessageData(v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4(lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_h_2368_, lean_object* v_as_2369_, size_t v_sz_2370_, size_t v_i_2371_, lean_object* v_b_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v_a_2381_; uint8_t v___x_2385_; 
v___x_2385_ = lean_usize_dec_lt(v_i_2371_, v_sz_2370_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2386_; 
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v___x_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2386_, 0, v_b_2372_);
return v___x_2386_;
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2388_; 
v_a_2387_ = lean_array_uget_borrowed(v_as_2369_, v_i_2371_);
lean_inc(v_a_2387_);
v___x_2388_ = lp_vampireReplay_Vampire_Reconstruct_flipName(v_a_2387_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v_fst_2390_; lean_object* v_snd_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2523_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
v_fst_2390_ = lean_ctor_get(v_a_2389_, 0);
v_snd_2391_ = lean_ctor_get(v_a_2389_, 1);
v_isSharedCheck_2523_ = !lean_is_exclusive(v_a_2389_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2393_ = v_a_2389_;
v_isShared_2394_ = v_isSharedCheck_2523_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_snd_2391_);
lean_inc(v_fst_2390_);
lean_dec(v_a_2389_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2523_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v_fst_2395_; lean_object* v_snd_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2522_; 
v_fst_2395_ = lean_ctor_get(v_b_2372_, 0);
v_snd_2396_ = lean_ctor_get(v_b_2372_, 1);
v_isSharedCheck_2522_ = !lean_is_exclusive(v_b_2372_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2398_ = v_b_2372_;
v_isShared_2399_ = v_isSharedCheck_2522_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_snd_2396_);
lean_inc(v_fst_2395_);
lean_dec(v_b_2372_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2522_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_2387_);
v___x_2401_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3(v_a_2387_, v_a_2366_, v___x_2400_);
if (lean_obj_tag(v___x_2401_) == 1)
{
lean_object* v_val_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2500_; 
lean_del_object(v___x_2393_);
v_val_2402_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2500_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_val_2402_);
lean_dec(v___x_2401_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2500_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2406_; 
lean_inc(v_a_2387_);
v___x_2406_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_a_2387_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2408_; lean_object* v___x_2410_; 
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_a_2407_);
lean_dec_ref_known(v___x_2406_, 1);
v___x_2408_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 0, v_a_2407_);
v___x_2410_ = v___x_2404_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2407_);
v___x_2410_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2411_ = lean_unsigned_to_nat(1u);
v___x_2412_ = lean_mk_empty_array_with_capacity(v___x_2411_);
lean_inc_ref(v___x_2412_);
v___x_2413_ = lean_array_push(v___x_2412_, v___x_2410_);
v___x_2414_ = l_Lean_Meta_mkAppOptM(v___x_2408_, v___x_2413_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2414_, 1);
v___x_2416_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8));
lean_inc_ref(v___x_2412_);
v___x_2417_ = lean_array_push(v___x_2412_, v_snd_2391_);
v___x_2418_ = l_Lean_Meta_mkAppM(v___x_2416_, v___x_2417_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2418_) == 0)
{
lean_object* v_a_2419_; lean_object* v___x_2420_; lean_object* v___f_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v_a_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_a_2419_);
lean_dec_ref_known(v___x_2418_, 1);
v___x_2420_ = lean_box(v___x_2385_);
lean_inc_ref(v_h_2368_);
lean_inc_ref(v___x_2412_);
lean_inc_ref(v_a_2367_);
v___f_2421_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_2421_, 0, v_a_2367_);
lean_closure_set(v___f_2421_, 1, v_val_2402_);
lean_closure_set(v___f_2421_, 2, v___x_2412_);
lean_closure_set(v___f_2421_, 3, v_h_2368_);
lean_closure_set(v___f_2421_, 4, v___x_2420_);
v___x_2422_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
v___x_2423_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2422_, v_fst_2390_, v___f_2421_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v_a_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v_a_2424_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_a_2424_);
lean_dec_ref_known(v___x_2423_, 1);
v___x_2425_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_2426_ = lean_unsigned_to_nat(2u);
v___x_2427_ = lean_mk_empty_array_with_capacity(v___x_2426_);
lean_inc_ref(v___x_2427_);
v___x_2428_ = lean_array_push(v___x_2427_, v_a_2419_);
v___x_2429_ = lean_array_push(v___x_2428_, v_a_2424_);
v___x_2430_ = l_Lean_Meta_mkAppM(v___x_2425_, v___x_2429_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = lean_array_push(v___x_2427_, v_a_2415_);
v___x_2433_ = lean_array_push(v___x_2432_, v_a_2431_);
v___x_2434_ = l_Lean_Meta_mkAppM(v___x_2425_, v___x_2433_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc_n(v_a_2435_, 2);
lean_dec_ref_known(v___x_2434_, 1);
v___x_2436_ = l_Lean_Expr_app___override(v_fst_2395_, v_a_2435_);
v___x_2437_ = lean_array_push(v___x_2412_, v_a_2435_);
v___x_2438_ = l_Lean_Meta_instantiateForall(v_snd_2396_, v___x_2437_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
lean_dec_ref(v___x_2437_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v___x_2441_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref_known(v___x_2438_, 1);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 1, v_a_2439_);
lean_ctor_set(v___x_2398_, 0, v___x_2436_);
v___x_2441_ = v___x_2398_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2442_, 1, v_a_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
v_a_2381_ = v___x_2441_;
goto v___jp_2380_;
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec_ref(v___x_2436_);
lean_del_object(v___x_2398_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2443_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2438_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2438_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
lean_dec_ref(v___x_2412_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2451_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2453_ = v___x_2434_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2434_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2451_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec_ref(v___x_2427_);
lean_dec(v_a_2415_);
lean_dec_ref(v___x_2412_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2459_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2430_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2430_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v_a_2419_);
lean_dec(v_a_2415_);
lean_dec_ref(v___x_2412_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2467_ = lean_ctor_get(v___x_2423_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2423_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2423_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2423_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_a_2415_);
lean_dec_ref(v___x_2412_);
lean_dec(v_val_2402_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec(v_fst_2390_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2475_ = lean_ctor_get(v___x_2418_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2418_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2418_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2418_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec_ref(v___x_2412_);
lean_dec(v_val_2402_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2483_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2414_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2414_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_del_object(v___x_2404_);
lean_dec(v_val_2402_);
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2492_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2406_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2406_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
else
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2504_; 
lean_dec(v___x_2401_);
lean_dec(v_snd_2391_);
lean_dec(v_fst_2390_);
v___x_2501_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13);
lean_inc(v_a_2387_);
v___x_2502_ = l_Lean_stringToMessageData(v_a_2387_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set_tag(v___x_2393_, 7);
lean_ctor_set(v___x_2393_, 1, v___x_2502_);
lean_ctor_set(v___x_2393_, 0, v___x_2501_);
v___x_2504_ = v___x_2393_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v___x_2501_);
lean_ctor_set(v_reuseFailAlloc_2521_, 1, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2505_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1);
v___x_2506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
lean_inc_ref(v_a_2367_);
v___x_2507_ = l_Lean_indentExpr(v_a_2367_);
v___x_2508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2506_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2508_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v___x_2511_; 
lean_dec_ref_known(v___x_2509_, 1);
if (v_isShared_2399_ == 0)
{
v___x_2511_ = v___x_2398_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_fst_2395_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_snd_2396_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
v_a_2381_ = v___x_2511_;
goto v___jp_2380_;
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_del_object(v___x_2398_);
lean_dec(v_snd_2396_);
lean_dec(v_fst_2395_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
v_a_2513_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2509_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2509_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
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
lean_dec_ref(v_b_2372_);
lean_dec_ref(v_h_2368_);
lean_dec_ref(v_a_2367_);
return v___x_2388_;
}
}
v___jp_2380_:
{
size_t v___x_2382_; size_t v___x_2383_; 
v___x_2382_ = ((size_t)1ULL);
v___x_2383_ = lean_usize_add(v_i_2371_, v___x_2382_);
v_i_2371_ = v___x_2383_;
v_b_2372_ = v_a_2381_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___boxed(lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_h_2526_, lean_object* v_as_2527_, lean_object* v_sz_2528_, lean_object* v_i_2529_, lean_object* v_b_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
size_t v_sz_boxed_2538_; size_t v_i_boxed_2539_; lean_object* v_res_2540_; 
v_sz_boxed_2538_ = lean_unbox_usize(v_sz_2528_);
lean_dec(v_sz_2528_);
v_i_boxed_2539_ = lean_unbox_usize(v_i_2529_);
lean_dec(v_i_2529_);
v_res_2540_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4(v_a_2524_, v_a_2525_, v_h_2526_, v_as_2527_, v_sz_boxed_2538_, v_i_boxed_2539_, v_b_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
lean_dec_ref(v_as_2527_);
lean_dec_ref(v_a_2524_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4(lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_h_2543_, lean_object* v_as_2544_, size_t v_sz_2545_, size_t v_i_2546_, lean_object* v_b_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_a_2556_; uint8_t v___x_2560_; 
v___x_2560_ = lean_usize_dec_lt(v_i_2546_, v_sz_2545_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; 
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v___x_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2561_, 0, v_b_2547_);
return v___x_2561_;
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2563_; 
v_a_2562_ = lean_array_uget_borrowed(v_as_2544_, v_i_2546_);
lean_inc(v_a_2562_);
v___x_2563_ = lp_vampireReplay_Vampire_Reconstruct_flipName(v_a_2562_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v_fst_2565_; lean_object* v_snd_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2698_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v_fst_2565_ = lean_ctor_get(v_a_2564_, 0);
v_snd_2566_ = lean_ctor_get(v_a_2564_, 1);
v_isSharedCheck_2698_ = !lean_is_exclusive(v_a_2564_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2568_ = v_a_2564_;
v_isShared_2569_ = v_isSharedCheck_2698_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_snd_2566_);
lean_inc(v_fst_2565_);
lean_dec(v_a_2564_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2698_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v_fst_2570_; lean_object* v_snd_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2697_; 
v_fst_2570_ = lean_ctor_get(v_b_2547_, 0);
v_snd_2571_ = lean_ctor_get(v_b_2547_, 1);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_b_2547_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2573_ = v_b_2547_;
v_isShared_2574_ = v_isSharedCheck_2697_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_snd_2571_);
lean_inc(v_fst_2570_);
lean_dec(v_b_2547_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2697_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_2562_);
v___x_2576_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__3(v_a_2562_, v_a_2541_, v___x_2575_);
if (lean_obj_tag(v___x_2576_) == 1)
{
lean_object* v_val_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2675_; 
lean_del_object(v___x_2568_);
v_val_2577_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2579_ = v___x_2576_;
v_isShared_2580_ = v_isSharedCheck_2675_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_val_2577_);
lean_dec(v___x_2576_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2675_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2581_; 
lean_inc(v_a_2562_);
v___x_2581_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_a_2562_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; lean_object* v___x_2583_; lean_object* v___x_2585_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
v___x_2583_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v_a_2582_);
v___x_2585_ = v___x_2579_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2582_);
v___x_2585_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2586_ = lean_unsigned_to_nat(1u);
v___x_2587_ = lean_mk_empty_array_with_capacity(v___x_2586_);
lean_inc_ref(v___x_2587_);
v___x_2588_ = lean_array_push(v___x_2587_, v___x_2585_);
v___x_2589_ = l_Lean_Meta_mkAppOptM(v___x_2583_, v___x_2588_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2589_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_a_2590_);
lean_dec_ref_known(v___x_2589_, 1);
v___x_2591_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__8));
lean_inc_ref(v___x_2587_);
v___x_2592_ = lean_array_push(v___x_2587_, v_snd_2566_);
v___x_2593_ = l_Lean_Meta_mkAppM(v___x_2591_, v___x_2592_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2595_; lean_object* v___f_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v___x_2595_ = lean_box(v___x_2560_);
lean_inc_ref(v_h_2543_);
lean_inc_ref(v___x_2587_);
lean_inc_ref(v_a_2542_);
v___f_2596_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_2596_, 0, v_a_2542_);
lean_closure_set(v___f_2596_, 1, v_val_2577_);
lean_closure_set(v___f_2596_, 2, v___x_2587_);
lean_closure_set(v___f_2596_, 3, v_h_2543_);
lean_closure_set(v___f_2596_, 4, v___x_2595_);
v___x_2597_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
v___x_2598_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2597_, v_fst_2565_, v___f_2596_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v___x_2600_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_2601_ = lean_unsigned_to_nat(2u);
v___x_2602_ = lean_mk_empty_array_with_capacity(v___x_2601_);
lean_inc_ref(v___x_2602_);
v___x_2603_ = lean_array_push(v___x_2602_, v_a_2594_);
v___x_2604_ = lean_array_push(v___x_2603_, v_a_2599_);
v___x_2605_ = l_Lean_Meta_mkAppM(v___x_2600_, v___x_2604_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2605_, 1);
v___x_2607_ = lean_array_push(v___x_2602_, v_a_2590_);
v___x_2608_ = lean_array_push(v___x_2607_, v_a_2606_);
v___x_2609_ = l_Lean_Meta_mkAppM(v___x_2600_, v___x_2608_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2609_) == 0)
{
lean_object* v_a_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v_a_2610_ = lean_ctor_get(v___x_2609_, 0);
lean_inc_n(v_a_2610_, 2);
lean_dec_ref_known(v___x_2609_, 1);
v___x_2611_ = l_Lean_Expr_app___override(v_fst_2570_, v_a_2610_);
v___x_2612_ = lean_array_push(v___x_2587_, v_a_2610_);
v___x_2613_ = l_Lean_Meta_instantiateForall(v_snd_2571_, v___x_2612_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec_ref(v___x_2612_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2614_);
lean_dec_ref_known(v___x_2613_, 1);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 1, v_a_2614_);
lean_ctor_set(v___x_2573_, 0, v___x_2611_);
v___x_2616_ = v___x_2573_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2611_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_a_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
v_a_2556_ = v___x_2616_;
goto v___jp_2555_;
}
}
else
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
lean_dec_ref(v___x_2611_);
lean_del_object(v___x_2573_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2618_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2613_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2613_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec_ref(v___x_2587_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2626_ = lean_ctor_get(v___x_2609_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2609_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2609_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2609_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
lean_dec_ref(v___x_2602_);
lean_dec(v_a_2590_);
lean_dec_ref(v___x_2587_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2634_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2605_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2605_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
lean_dec(v_a_2594_);
lean_dec(v_a_2590_);
lean_dec_ref(v___x_2587_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2642_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2598_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2598_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_a_2590_);
lean_dec_ref(v___x_2587_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_fst_2565_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2650_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2593_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2593_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
else
{
lean_object* v_a_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2665_; 
lean_dec_ref(v___x_2587_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_snd_2566_);
lean_dec(v_fst_2565_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2658_ = lean_ctor_get(v___x_2589_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2665_ == 0)
{
v___x_2660_ = v___x_2589_;
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_a_2658_);
lean_dec(v___x_2589_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2665_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2663_; 
if (v_isShared_2661_ == 0)
{
v___x_2663_ = v___x_2660_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_a_2658_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
}
else
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
lean_del_object(v___x_2579_);
lean_dec(v_val_2577_);
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec(v_snd_2566_);
lean_dec(v_fst_2565_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2667_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2581_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2581_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
}
}
else
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2679_; 
lean_dec(v___x_2576_);
lean_dec(v_snd_2566_);
lean_dec(v_fst_2565_);
v___x_2676_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__13);
lean_inc(v_a_2562_);
v___x_2677_ = l_Lean_stringToMessageData(v_a_2562_);
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 7);
lean_ctor_set(v___x_2568_, 1, v___x_2677_);
lean_ctor_set(v___x_2568_, 0, v___x_2676_);
v___x_2679_ = v___x_2568_;
goto v_reusejp_2678_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2676_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v___x_2677_);
v___x_2679_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2678_;
}
v_reusejp_2678_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2680_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4___closed__1);
v___x_2681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
lean_inc_ref(v_a_2542_);
v___x_2682_ = l_Lean_indentExpr(v_a_2542_);
v___x_2683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2683_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v___x_2686_; 
lean_dec_ref_known(v___x_2684_, 1);
if (v_isShared_2574_ == 0)
{
v___x_2686_ = v___x_2573_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_fst_2570_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v_snd_2571_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
v_a_2556_ = v___x_2686_;
goto v___jp_2555_;
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_del_object(v___x_2573_);
lean_dec(v_snd_2571_);
lean_dec(v_fst_2570_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
v_a_2688_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2684_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2684_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
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
lean_dec_ref(v_b_2547_);
lean_dec_ref(v_h_2543_);
lean_dec_ref(v_a_2542_);
return v___x_2563_;
}
}
v___jp_2555_:
{
size_t v___x_2557_; size_t v___x_2558_; lean_object* v___x_2559_; 
v___x_2557_ = ((size_t)1ULL);
v___x_2558_ = lean_usize_add(v_i_2546_, v___x_2557_);
v___x_2559_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4_spec__4(v_a_2541_, v_a_2542_, v_h_2543_, v_as_2544_, v_sz_2545_, v___x_2558_, v_a_2556_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4___boxed(lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_h_2701_, lean_object* v_as_2702_, lean_object* v_sz_2703_, lean_object* v_i_2704_, lean_object* v_b_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_){
_start:
{
size_t v_sz_boxed_2713_; size_t v_i_boxed_2714_; lean_object* v_res_2715_; 
v_sz_boxed_2713_ = lean_unbox_usize(v_sz_2703_);
lean_dec(v_sz_2703_);
v_i_boxed_2714_ = lean_unbox_usize(v_i_2704_);
lean_dec(v_i_2704_);
v_res_2715_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4(v_a_2699_, v_a_2700_, v_h_2701_, v_as_2702_, v_sz_boxed_2713_, v_i_boxed_2714_, v_b_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
lean_dec(v___y_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec_ref(v_as_2702_);
lean_dec_ref(v_a_2699_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0(lean_object* v___x_2716_, lean_object* v___x_2717_, lean_object* v_snd_2718_, lean_object* v___x_2719_, uint8_t v___x_2720_, uint8_t v___x_2721_, lean_object* v_l_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v___x_2730_; 
lean_inc_ref(v_l_2722_);
v___x_2730_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_2716_, v___x_2717_, v_snd_2718_, v_l_2722_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; uint8_t v___x_2736_; lean_object* v___x_2737_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___x_2730_, 1);
v___x_2732_ = lean_unsigned_to_nat(1u);
v___x_2733_ = lean_mk_empty_array_with_capacity(v___x_2732_);
v___x_2734_ = lean_array_push(v___x_2733_, v_l_2722_);
v___x_2735_ = l_Lean_Expr_app___override(v___x_2719_, v_a_2731_);
v___x_2736_ = 1;
v___x_2737_ = l_Lean_Meta_mkLambdaFVars(v___x_2734_, v___x_2735_, v___x_2720_, v___x_2721_, v___x_2720_, v___x_2721_, v___x_2736_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
lean_dec_ref(v___x_2734_);
return v___x_2737_;
}
else
{
lean_dec_ref(v_l_2722_);
lean_dec_ref(v___x_2719_);
return v___x_2730_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0___boxed(lean_object* v___x_2738_, lean_object* v___x_2739_, lean_object* v_snd_2740_, lean_object* v___x_2741_, lean_object* v___x_2742_, lean_object* v___x_2743_, lean_object* v_l_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
uint8_t v___x_132301__boxed_2752_; uint8_t v___x_132302__boxed_2753_; lean_object* v_res_2754_; 
v___x_132301__boxed_2752_ = lean_unbox(v___x_2742_);
v___x_132302__boxed_2753_ = lean_unbox(v___x_2743_);
v_res_2754_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0(v___x_2738_, v___x_2739_, v_snd_2740_, v___x_2741_, v___x_132301__boxed_2752_, v___x_132302__boxed_2753_, v_l_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v_snd_2740_);
lean_dec_ref(v___x_2739_);
lean_dec(v___x_2738_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7(lean_object* v___x_2758_, lean_object* v___x_2759_, uint8_t v___x_2760_, lean_object* v_as_2761_, size_t v_sz_2762_, size_t v_i_2763_, lean_object* v_b_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
uint8_t v___x_2772_; 
v___x_2772_ = lean_usize_dec_lt(v_i_2763_, v_sz_2762_);
if (v___x_2772_ == 0)
{
lean_object* v___x_2773_; 
lean_dec_ref(v___x_2759_);
lean_dec_ref(v___x_2758_);
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_b_2764_);
return v___x_2773_;
}
else
{
lean_object* v_a_2774_; lean_object* v_fst_2775_; lean_object* v_snd_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2802_; 
v_a_2774_ = lean_array_uget(v_as_2761_, v_i_2763_);
v_fst_2775_ = lean_ctor_get(v_a_2774_, 0);
v_snd_2776_ = lean_ctor_get(v_a_2774_, 1);
v_isSharedCheck_2802_ = !lean_is_exclusive(v_a_2774_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2778_ = v_a_2774_;
v_isShared_2779_ = v_isSharedCheck_2802_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_snd_2776_);
lean_inc(v_fst_2775_);
lean_dec(v_a_2774_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2802_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___f_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2780_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_2781_ = lean_box(v___x_2760_);
v___x_2782_ = lean_box(v___x_2772_);
lean_inc_ref(v___x_2759_);
lean_inc_ref(v___x_2758_);
v___f_2783_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___lam__0___boxed), 14, 6);
lean_closure_set(v___f_2783_, 0, v___x_2780_);
lean_closure_set(v___f_2783_, 1, v___x_2758_);
lean_closure_set(v___f_2783_, 2, v_snd_2776_);
lean_closure_set(v___f_2783_, 3, v___x_2759_);
lean_closure_set(v___f_2783_, 4, v___x_2781_);
lean_closure_set(v___f_2783_, 5, v___x_2782_);
v___x_2784_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___closed__1));
lean_inc(v_fst_2775_);
v___x_2785_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2784_, v_fst_2775_, v___f_2783_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2785_, 1);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 1, v_a_2786_);
v___x_2788_ = v___x_2778_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_fst_2775_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v_a_2786_);
v___x_2788_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
lean_object* v___x_2789_; size_t v___x_2790_; size_t v___x_2791_; 
v___x_2789_ = lean_array_push(v_b_2764_, v___x_2788_);
v___x_2790_ = ((size_t)1ULL);
v___x_2791_ = lean_usize_add(v_i_2763_, v___x_2790_);
v_i_2763_ = v___x_2791_;
v_b_2764_ = v___x_2789_;
goto _start;
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_del_object(v___x_2778_);
lean_dec(v_fst_2775_);
lean_dec_ref(v_b_2764_);
lean_dec_ref(v___x_2759_);
lean_dec_ref(v___x_2758_);
v_a_2794_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2785_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2785_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7___boxed(lean_object* v___x_2803_, lean_object* v___x_2804_, lean_object* v___x_2805_, lean_object* v_as_2806_, lean_object* v_sz_2807_, lean_object* v_i_2808_, lean_object* v_b_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
uint8_t v___x_132364__boxed_2817_; size_t v_sz_boxed_2818_; size_t v_i_boxed_2819_; lean_object* v_res_2820_; 
v___x_132364__boxed_2817_ = lean_unbox(v___x_2805_);
v_sz_boxed_2818_ = lean_unbox_usize(v_sz_2807_);
lean_dec(v_sz_2807_);
v_i_boxed_2819_ = lean_unbox_usize(v_i_2808_);
lean_dec(v_i_2808_);
v_res_2820_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7(v___x_2803_, v___x_2804_, v___x_132364__boxed_2817_, v_as_2806_, v_sz_boxed_2818_, v_i_boxed_2819_, v_b_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_);
lean_dec(v___y_2815_);
lean_dec_ref(v___y_2814_);
lean_dec(v___y_2813_);
lean_dec_ref(v___y_2812_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec_ref(v_as_2806_);
return v_res_2820_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(uint8_t v___x_2824_, lean_object* v_as_2825_, size_t v_sz_2826_, size_t v_i_2827_, lean_object* v_b_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v___x_2834_; 
v___x_2834_ = lean_usize_dec_lt(v_i_2827_, v_sz_2826_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; 
v___x_2835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2835_, 0, v_b_2828_);
return v___x_2835_;
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2837_; 
lean_dec_ref(v_b_2828_);
v_a_2836_ = lean_array_uget_borrowed(v_as_2825_, v_i_2827_);
v___x_2837_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_a_2836_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2856_; 
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2840_ = v___x_2837_;
v_isShared_2841_ = v_isSharedCheck_2856_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2837_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2856_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v_a_2843_; lean_object* v___x_2847_; lean_object* v___x_2848_; uint8_t v___x_2849_; 
v___x_2847_ = lean_box(0);
v___x_2848_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0));
v___x_2849_ = lean_unbox(v_a_2838_);
lean_dec(v_a_2838_);
if (v___x_2849_ == 12)
{
lean_del_object(v___x_2840_);
v_a_2843_ = v___x_2848_;
goto v___jp_2842_;
}
else
{
if (v___x_2824_ == 0)
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
lean_inc(v_a_2836_);
v___x_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2850_, 0, v_a_2836_);
v___x_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
lean_ctor_set(v___x_2852_, 1, v___x_2847_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 0, v___x_2852_);
v___x_2854_ = v___x_2840_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
else
{
lean_del_object(v___x_2840_);
v_a_2843_ = v___x_2848_;
goto v___jp_2842_;
}
}
v___jp_2842_:
{
size_t v___x_2844_; size_t v___x_2845_; 
v___x_2844_ = ((size_t)1ULL);
v___x_2845_ = lean_usize_add(v_i_2827_, v___x_2844_);
lean_inc_ref(v_a_2843_);
v_i_2827_ = v___x_2845_;
v_b_2828_ = v_a_2843_;
goto _start;
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
v_a_2857_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2837_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2837_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___boxed(lean_object* v___x_2865_, lean_object* v_as_2866_, lean_object* v_sz_2867_, lean_object* v_i_2868_, lean_object* v_b_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
uint8_t v___x_132461__boxed_2875_; size_t v_sz_boxed_2876_; size_t v_i_boxed_2877_; lean_object* v_res_2878_; 
v___x_132461__boxed_2875_ = lean_unbox(v___x_2865_);
v_sz_boxed_2876_ = lean_unbox_usize(v_sz_2867_);
lean_dec(v_sz_2867_);
v_i_boxed_2877_ = lean_unbox_usize(v_i_2868_);
lean_dec(v_i_2868_);
v_res_2878_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(v___x_132461__boxed_2875_, v_as_2866_, v_sz_boxed_2876_, v_i_boxed_2877_, v_b_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec_ref(v_as_2866_);
return v_res_2878_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1(void){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2880_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__0));
v___x_2881_ = l_Lean_stringToMessageData(v___x_2880_);
return v___x_2881_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2883_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__2));
v___x_2884_ = l_Lean_stringToMessageData(v___x_2883_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6(lean_object* v___x_2885_, lean_object* v_fst_2886_, lean_object* v_as_2887_, size_t v_sz_2888_, size_t v_i_2889_, lean_object* v_b_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_a_2899_; uint8_t v___x_2903_; 
v___x_2903_ = lean_usize_dec_lt(v_i_2889_, v_sz_2888_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; 
lean_dec_ref(v_fst_2886_);
v___x_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2904_, 0, v_b_2890_);
return v___x_2904_;
}
else
{
lean_object* v_snd_2905_; lean_object* v_fst_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2994_; 
v_snd_2905_ = lean_ctor_get(v_b_2890_, 1);
v_fst_2906_ = lean_ctor_get(v_b_2890_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_b_2890_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2908_ = v_b_2890_;
v_isShared_2909_ = v_isSharedCheck_2994_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_snd_2905_);
lean_inc(v_fst_2906_);
lean_dec(v_b_2890_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2994_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v_fst_2910_; lean_object* v_snd_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2993_; 
v_fst_2910_ = lean_ctor_get(v_snd_2905_, 0);
v_snd_2911_ = lean_ctor_get(v_snd_2905_, 1);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_snd_2905_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2913_ = v_snd_2905_;
v_isShared_2914_ = v_isSharedCheck_2993_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_snd_2911_);
lean_inc(v_fst_2910_);
lean_dec(v_snd_2905_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2993_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2915_; 
v___x_2915_ = lp_vampireReplay_Vampire_Reconstruct_witnessAgainst(v_fst_2910_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v_fst_2917_; lean_object* v_snd_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2984_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2915_, 1);
v_fst_2917_ = lean_ctor_get(v_a_2916_, 0);
v_snd_2918_ = lean_ctor_get(v_a_2916_, 1);
v_isSharedCheck_2984_ = !lean_is_exclusive(v_a_2916_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2920_ = v_a_2916_;
v_isShared_2921_ = v_isSharedCheck_2984_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_snd_2918_);
lean_inc(v_fst_2917_);
lean_dec(v_a_2916_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2984_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v_a_2922_; uint32_t v___x_2923_; lean_object* v___x_2924_; 
v_a_2922_ = lean_array_uget_borrowed(v_as_2887_, v_i_2889_);
v___x_2923_ = lean_unbox_uint32(v_a_2922_);
v___x_2924_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v___x_2885_, v___x_2923_);
if (lean_obj_tag(v___x_2924_) == 1)
{
lean_object* v_val_2925_; uint8_t v___x_2937_; 
v_val_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_val_2925_);
lean_dec_ref_known(v___x_2924_, 1);
v___x_2937_ = lp_vampireReplay_Vampire_Term_isVar(v_val_2925_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2941_; 
v___x_2938_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15);
lean_inc_ref(v_fst_2886_);
v___x_2939_ = l_Lean_stringToMessageData(v_fst_2886_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set_tag(v___x_2908_, 7);
lean_ctor_set(v___x_2908_, 1, v___x_2939_);
lean_ctor_set(v___x_2908_, 0, v___x_2938_);
v___x_2941_ = v___x_2908_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v___x_2939_);
v___x_2941_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2942_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__1);
v___x_2943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2941_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
v___x_2944_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2943_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_dec_ref_known(v___x_2944_, 1);
goto v___jp_2926_;
}
else
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2952_; 
lean_dec(v_val_2925_);
lean_del_object(v___x_2920_);
lean_dec(v_snd_2918_);
lean_dec(v_fst_2917_);
lean_del_object(v___x_2913_);
lean_dec(v_snd_2911_);
lean_dec(v_fst_2906_);
lean_dec_ref(v_fst_2886_);
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2947_ = v___x_2944_;
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2944_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2948_ == 0)
{
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_a_2945_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
}
}
else
{
lean_del_object(v___x_2908_);
goto v___jp_2926_;
}
v___jp_2926_:
{
uint32_t v___x_2927_; lean_object* v___x_2928_; uint32_t v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2927_ = lean_unbox_uint32(v_a_2922_);
lean_inc(v_fst_2917_);
v___x_2928_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_snd_2911_, v___x_2927_, v_fst_2917_);
v___x_2929_ = lp_vampireReplay_Vampire_Term_var(v_val_2925_);
lean_dec(v_val_2925_);
v___x_2930_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_fst_2906_, v___x_2929_, v_fst_2917_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 1, v___x_2928_);
lean_ctor_set(v___x_2920_, 0, v_snd_2918_);
v___x_2932_ = v___x_2920_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_snd_2918_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v___x_2928_);
v___x_2932_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
lean_object* v___x_2934_; 
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 1, v___x_2932_);
lean_ctor_set(v___x_2913_, 0, v___x_2930_);
v___x_2934_ = v___x_2913_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2930_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v___x_2932_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
v_a_2899_ = v___x_2934_;
goto v___jp_2898_;
}
}
}
}
else
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2957_; 
lean_dec(v___x_2924_);
lean_dec(v_fst_2917_);
v___x_2954_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
lean_inc_ref(v_fst_2886_);
v___x_2955_ = l_Lean_stringToMessageData(v_fst_2886_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set_tag(v___x_2908_, 7);
lean_ctor_set(v___x_2908_, 1, v___x_2955_);
lean_ctor_set(v___x_2908_, 0, v___x_2954_);
v___x_2957_ = v___x_2908_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2954_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v___x_2955_);
v___x_2957_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; uint32_t v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2958_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__3);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2957_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = lean_unbox_uint32(v_a_2922_);
v___x_2961_ = lean_uint32_to_nat(v___x_2960_);
v___x_2962_ = l_Nat_reprFast(v___x_2961_);
v___x_2963_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
v___x_2964_ = l_Lean_MessageData_ofFormat(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2959_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
v___x_2966_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___closed__3);
v___x_2967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2965_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2967_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v___x_2970_; 
lean_dec_ref_known(v___x_2968_, 1);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 1, v_snd_2911_);
lean_ctor_set(v___x_2920_, 0, v_snd_2918_);
v___x_2970_ = v___x_2920_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_snd_2918_);
lean_ctor_set(v_reuseFailAlloc_2974_, 1, v_snd_2911_);
v___x_2970_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2972_; 
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 1, v___x_2970_);
lean_ctor_set(v___x_2913_, 0, v_fst_2906_);
v___x_2972_ = v___x_2913_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_fst_2906_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v___x_2970_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
v_a_2899_ = v___x_2972_;
goto v___jp_2898_;
}
}
}
else
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2982_; 
lean_del_object(v___x_2920_);
lean_dec(v_snd_2918_);
lean_del_object(v___x_2913_);
lean_dec(v_snd_2911_);
lean_dec(v_fst_2906_);
lean_dec_ref(v_fst_2886_);
v_a_2975_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2977_ = v___x_2968_;
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2968_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_del_object(v___x_2913_);
lean_dec(v_snd_2911_);
lean_del_object(v___x_2908_);
lean_dec(v_fst_2906_);
lean_dec_ref(v_fst_2886_);
v_a_2985_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2915_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2915_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
}
v___jp_2898_:
{
size_t v___x_2900_; size_t v___x_2901_; 
v___x_2900_ = ((size_t)1ULL);
v___x_2901_ = lean_usize_add(v_i_2889_, v___x_2900_);
v_i_2889_ = v___x_2901_;
v_b_2890_ = v_a_2899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6___boxed(lean_object* v___x_2995_, lean_object* v_fst_2996_, lean_object* v_as_2997_, lean_object* v_sz_2998_, lean_object* v_i_2999_, lean_object* v_b_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
size_t v_sz_boxed_3008_; size_t v_i_boxed_3009_; lean_object* v_res_3010_; 
v_sz_boxed_3008_ = lean_unbox_usize(v_sz_2998_);
lean_dec(v_sz_2998_);
v_i_boxed_3009_ = lean_unbox_usize(v_i_2999_);
lean_dec(v_i_2999_);
v_res_3010_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6(v___x_2995_, v_fst_2996_, v_as_2997_, v_sz_boxed_3008_, v_i_boxed_3009_, v_b_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec_ref(v_as_2997_);
lean_dec_ref(v___x_2995_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0(lean_object* v_a_3011_, lean_object* v_snd_3012_, lean_object* v___x_3013_, lean_object* v_h_3014_, uint8_t v___x_3015_, uint8_t v___x_3016_, lean_object* v_d_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
lean_inc_ref(v_d_3017_);
v___x_3026_ = lp_vampireReplay_Vampire_Reconstruct_injectPart___redArg(v___x_3025_, v_a_3011_, v_snd_3012_, v_d_3017_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; lean_object* v___x_3032_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v___x_3028_ = lean_mk_empty_array_with_capacity(v___x_3013_);
v___x_3029_ = lean_array_push(v___x_3028_, v_d_3017_);
v___x_3030_ = l_Lean_Expr_app___override(v_h_3014_, v_a_3027_);
v___x_3031_ = 1;
v___x_3032_ = l_Lean_Meta_mkLambdaFVars(v___x_3029_, v___x_3030_, v___x_3015_, v___x_3016_, v___x_3015_, v___x_3016_, v___x_3031_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_);
lean_dec_ref(v___x_3029_);
return v___x_3032_;
}
else
{
lean_dec_ref(v_d_3017_);
lean_dec_ref(v_h_3014_);
return v___x_3026_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0___boxed(lean_object* v_a_3033_, lean_object* v_snd_3034_, lean_object* v___x_3035_, lean_object* v_h_3036_, lean_object* v___x_3037_, lean_object* v___x_3038_, lean_object* v_d_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
uint8_t v___x_132788__boxed_3047_; uint8_t v___x_132789__boxed_3048_; lean_object* v_res_3049_; 
v___x_132788__boxed_3047_ = lean_unbox(v___x_3037_);
v___x_132789__boxed_3048_ = lean_unbox(v___x_3038_);
v_res_3049_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0(v_a_3033_, v_snd_3034_, v___x_3035_, v_h_3036_, v___x_132788__boxed_3047_, v___x_132789__boxed_3048_, v_d_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___x_3035_);
lean_dec(v_snd_3034_);
lean_dec_ref(v_a_3033_);
return v_res_3049_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__0));
v___x_3052_ = l_Lean_stringToMessageData(v___x_3051_);
return v___x_3052_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__2));
v___x_3055_ = l_Lean_stringToMessageData(v___x_3054_);
return v___x_3055_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3056_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0, &lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_component___lam__0___closed__0);
v___x_3057_ = lean_unsigned_to_nat(0u);
v___x_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3057_);
lean_ctor_set(v___x_3058_, 1, v___x_3056_);
return v___x_3058_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__5));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__7));
v___x_3064_ = l_Lean_stringToMessageData(v___x_3063_);
return v___x_3064_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__9));
v___x_3067_ = l_Lean_stringToMessageData(v___x_3066_);
return v___x_3067_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12(void){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__11));
v___x_3070_ = l_Lean_stringToMessageData(v___x_3069_);
return v___x_3070_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13));
v___x_3073_ = lean_string_utf8_byte_size(v___x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9(lean_object* v___x_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_h_3077_, lean_object* v_as_3078_, size_t v_sz_3079_, size_t v_i_3080_, lean_object* v_b_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_){
_start:
{
lean_object* v_a_3090_; uint8_t v___x_3094_; 
v___x_3094_ = lean_usize_dec_lt(v_i_3080_, v_sz_3079_);
if (v___x_3094_ == 0)
{
lean_object* v___x_3095_; 
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v_b_3081_);
return v___x_3095_;
}
else
{
lean_object* v_a_3096_; lean_object* v_snd_3097_; lean_object* v_fst_3098_; lean_object* v_snd_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3467_; 
v_a_3096_ = lean_array_uget(v_as_3078_, v_i_3080_);
v_snd_3097_ = lean_ctor_get(v_b_3081_, 1);
lean_inc(v_snd_3097_);
v_fst_3098_ = lean_ctor_get(v_a_3096_, 0);
v_snd_3099_ = lean_ctor_get(v_a_3096_, 1);
v_isSharedCheck_3467_ = !lean_is_exclusive(v_a_3096_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3101_ = v_a_3096_;
v_isShared_3102_ = v_isSharedCheck_3467_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_snd_3099_);
lean_inc(v_fst_3098_);
lean_dec(v_a_3096_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3467_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v_fst_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3465_; 
v_fst_3103_ = lean_ctor_get(v_b_3081_, 0);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_b_3081_);
if (v_isSharedCheck_3465_ == 0)
{
lean_object* v_unused_3466_; 
v_unused_3466_ = lean_ctor_get(v_b_3081_, 1);
lean_dec(v_unused_3466_);
v___x_3105_ = v_b_3081_;
v_isShared_3106_ = v_isSharedCheck_3465_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_fst_3103_);
lean_dec(v_b_3081_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3465_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v_fst_3107_; lean_object* v_snd_3108_; lean_object* v___x_3110_; uint8_t v_isShared_3111_; uint8_t v_isSharedCheck_3464_; 
v_fst_3107_ = lean_ctor_get(v_snd_3097_, 0);
v_snd_3108_ = lean_ctor_get(v_snd_3097_, 1);
v_isSharedCheck_3464_ = !lean_is_exclusive(v_snd_3097_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3110_ = v_snd_3097_;
v_isShared_3111_ = v_isSharedCheck_3464_;
goto v_resetjp_3109_;
}
else
{
lean_inc(v_snd_3108_);
lean_inc(v_fst_3107_);
lean_dec(v_snd_3097_);
v___x_3110_ = lean_box(0);
v_isShared_3111_ = v_isSharedCheck_3464_;
goto v_resetjp_3109_;
}
v_resetjp_3109_:
{
lean_object* v___y_3113_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
lean_inc(v_fst_3098_);
v___x_3134_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v_fst_3098_);
v___x_3135_ = l_Array_contains___at___00Lean_Server_FileWorker_handlePostRequestSpecialCases_spec__3(v___x_3074_, v___x_3134_);
lean_dec_ref(v___x_3134_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; lean_object* v___y_3138_; size_t v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v_parts_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; size_t v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; size_t v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___y_3202_; lean_object* v___y_3203_; lean_object* v___y_3204_; lean_object* v___y_3205_; lean_object* v___y_3206_; lean_object* v___y_3207_; lean_object* v___x_3209_; lean_object* v___y_3211_; size_t v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___y_3216_; lean_object* v_component_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3220_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; size_t v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; lean_object* v___y_3243_; lean_object* v___y_3244_; lean_object* v___x_3260_; size_t v___y_3262_; lean_object* v___y_3263_; uint8_t v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; size_t v___y_3316_; uint8_t v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___f_3326_; uint8_t v___y_3328_; lean_object* v___y_3329_; uint8_t v___y_3449_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; uint8_t v___x_3458_; 
v___x_3136_ = lean_unsigned_to_nat(0u);
v___x_3209_ = lean_unsigned_to_nat(1u);
v___x_3260_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4);
v___x_3324_ = lean_box(v___x_3135_);
v___x_3325_ = lean_box(v___x_3094_);
lean_inc_ref(v_h_3077_);
lean_inc_ref(v_a_3076_);
v___f_3326_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0___boxed), 14, 6);
lean_closure_set(v___f_3326_, 0, v_a_3076_);
lean_closure_set(v___f_3326_, 1, v_snd_3099_);
lean_closure_set(v___f_3326_, 2, v___x_3209_);
lean_closure_set(v___f_3326_, 3, v_h_3077_);
lean_closure_set(v___f_3326_, 4, v___x_3324_);
lean_closure_set(v___f_3326_, 5, v___x_3325_);
v___x_3455_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13));
v___x_3456_ = lean_string_utf8_byte_size(v_fst_3098_);
v___x_3457_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14);
v___x_3458_ = lean_nat_dec_le(v___x_3457_, v___x_3456_);
if (v___x_3458_ == 0)
{
v___y_3449_ = v___x_3135_;
goto v___jp_3448_;
}
else
{
uint8_t v___x_3459_; 
v___x_3459_ = lean_string_memcmp(v_fst_3098_, v___x_3455_, v___x_3136_, v___x_3136_, v___x_3457_);
v___y_3449_ = v___x_3459_;
goto v___jp_3448_;
}
v___jp_3137_:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; size_t v_sz_3153_; lean_object* v___x_3154_; 
v___x_3149_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_3150_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1));
lean_inc_ref(v_parts_3142_);
v___x_3151_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_3149_, v___x_3150_, v_parts_3142_);
v___x_3152_ = l_Array_zipIdx___redArg(v_parts_3142_, v___x_3136_);
v_sz_3153_ = lean_array_size(v___x_3152_);
v___x_3154_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7(v___x_3151_, v___y_3140_, v___x_3135_, v___x_3152_, v_sz_3153_, v___y_3139_, v_snd_3108_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_);
lean_dec_ref(v___x_3152_);
if (lean_obj_tag(v___x_3154_) == 0)
{
lean_object* v_a_3155_; lean_object* v___x_3157_; 
v_a_3155_ = lean_ctor_get(v___x_3154_, 0);
lean_inc(v_a_3155_);
lean_dec_ref_known(v___x_3154_, 1);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 1, v_a_3155_);
lean_ctor_set(v___x_3101_, 0, v___y_3141_);
v___x_3157_ = v___x_3101_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v___y_3141_);
lean_ctor_set(v_reuseFailAlloc_3159_, 1, v_a_3155_);
v___x_3157_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; 
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___y_3138_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
v_a_3090_ = v___x_3158_;
goto v___jp_3089_;
}
}
else
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3167_; 
lean_dec_ref(v___y_3141_);
lean_dec(v___y_3138_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3160_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3162_ = v___x_3154_;
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___x_3154_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3167_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___x_3165_; 
if (v_isShared_3163_ == 0)
{
v___x_3165_ = v___x_3162_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3160_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
return v___x_3165_;
}
}
}
}
v___jp_3168_:
{
lean_object* v___x_3182_; size_t v_sz_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lp_vampireReplay_Vampire_Unit_varSorts(v___y_3177_);
v_sz_3183_ = lean_array_size(v___y_3181_);
v___x_3184_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v___x_3182_, v___y_3174_, v_sz_3183_, v___y_3169_, v___y_3181_, v___y_3176_, v___y_3180_, v___y_3172_, v___y_3178_, v___y_3171_, v___y_3179_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v___y_3138_ = v___y_3170_;
v___y_3139_ = v___y_3169_;
v___y_3140_ = v___y_3173_;
v___y_3141_ = v___y_3175_;
v_parts_3142_ = v_a_3185_;
v___y_3143_ = v___y_3176_;
v___y_3144_ = v___y_3180_;
v___y_3145_ = v___y_3172_;
v___y_3146_ = v___y_3178_;
v___y_3147_ = v___y_3171_;
v___y_3148_ = v___y_3179_;
goto v___jp_3137_;
}
else
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3173_);
lean_dec(v___y_3170_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3186_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3188_ = v___x_3184_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3184_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_a_3186_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
}
v___jp_3194_:
{
lean_object* v___x_3208_; 
v___x_3208_ = lp_vampireReplay_Vampire_Formula_subformulas(v___y_3205_);
v___y_3169_ = v___y_3195_;
v___y_3170_ = v___y_3196_;
v___y_3171_ = v___y_3197_;
v___y_3172_ = v___y_3198_;
v___y_3173_ = v___y_3199_;
v___y_3174_ = v___y_3200_;
v___y_3175_ = v___y_3201_;
v___y_3176_ = v___y_3202_;
v___y_3177_ = v___y_3203_;
v___y_3178_ = v___y_3204_;
v___y_3179_ = v___y_3206_;
v___y_3180_ = v___y_3207_;
v___y_3181_ = v___x_3208_;
goto v___jp_3168_;
}
v___jp_3210_:
{
lean_object* v___x_3224_; 
v___x_3224_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_component_3217_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; uint8_t v___x_3226_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3224_, 1);
v___x_3226_ = lean_unbox(v_a_3225_);
lean_dec(v_a_3225_);
if (v___x_3226_ == 2)
{
v___y_3195_ = v___y_3212_;
v___y_3196_ = v___y_3211_;
v___y_3197_ = v___y_3222_;
v___y_3198_ = v___y_3220_;
v___y_3199_ = v___y_3214_;
v___y_3200_ = v___y_3215_;
v___y_3201_ = v___y_3216_;
v___y_3202_ = v___y_3218_;
v___y_3203_ = v___y_3213_;
v___y_3204_ = v___y_3221_;
v___y_3205_ = v_component_3217_;
v___y_3206_ = v___y_3223_;
v___y_3207_ = v___y_3219_;
goto v___jp_3194_;
}
else
{
if (v___x_3135_ == 0)
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = lean_mk_empty_array_with_capacity(v___x_3209_);
v___x_3228_ = lean_array_push(v___x_3227_, v_component_3217_);
v___y_3169_ = v___y_3212_;
v___y_3170_ = v___y_3211_;
v___y_3171_ = v___y_3222_;
v___y_3172_ = v___y_3220_;
v___y_3173_ = v___y_3214_;
v___y_3174_ = v___y_3215_;
v___y_3175_ = v___y_3216_;
v___y_3176_ = v___y_3218_;
v___y_3177_ = v___y_3213_;
v___y_3178_ = v___y_3221_;
v___y_3179_ = v___y_3223_;
v___y_3180_ = v___y_3219_;
v___y_3181_ = v___x_3228_;
goto v___jp_3168_;
}
else
{
v___y_3195_ = v___y_3212_;
v___y_3196_ = v___y_3211_;
v___y_3197_ = v___y_3222_;
v___y_3198_ = v___y_3220_;
v___y_3199_ = v___y_3214_;
v___y_3200_ = v___y_3215_;
v___y_3201_ = v___y_3216_;
v___y_3202_ = v___y_3218_;
v___y_3203_ = v___y_3213_;
v___y_3204_ = v___y_3221_;
v___y_3205_ = v_component_3217_;
v___y_3206_ = v___y_3223_;
v___y_3207_ = v___y_3219_;
goto v___jp_3194_;
}
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
lean_dec_ref(v_component_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec(v___y_3214_);
lean_dec_ref(v___y_3213_);
lean_dec(v___y_3211_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3229_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3231_ = v___x_3224_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3224_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3229_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
}
v___jp_3237_:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; uint8_t v___x_3247_; 
v___x_3245_ = lp_vampireReplay_Vampire_Formula_subformulas(v___y_3242_);
v___x_3246_ = lean_array_get_size(v___x_3245_);
v___x_3247_ = lean_nat_dec_lt(v___x_3136_, v___x_3246_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
lean_dec_ref(v___x_3245_);
v___x_3248_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3);
v___x_3249_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3248_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
lean_inc(v_a_3250_);
lean_dec_ref_known(v___x_3249_, 1);
v___y_3211_ = v___y_3239_;
v___y_3212_ = v___y_3238_;
v___y_3213_ = v___y_3240_;
v___y_3214_ = v___y_3241_;
v___y_3215_ = v___y_3243_;
v___y_3216_ = v___y_3244_;
v_component_3217_ = v_a_3250_;
v___y_3218_ = v___y_3082_;
v___y_3219_ = v___y_3083_;
v___y_3220_ = v___y_3084_;
v___y_3221_ = v___y_3085_;
v___y_3222_ = v___y_3086_;
v___y_3223_ = v___y_3087_;
goto v___jp_3210_;
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec_ref(v___y_3244_);
lean_dec(v___y_3243_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3251_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3249_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3249_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
else
{
lean_object* v___x_3259_; 
v___x_3259_ = lean_array_fget(v___x_3245_, v___x_3136_);
lean_dec_ref(v___x_3245_);
v___y_3211_ = v___y_3239_;
v___y_3212_ = v___y_3238_;
v___y_3213_ = v___y_3240_;
v___y_3214_ = v___y_3241_;
v___y_3215_ = v___y_3243_;
v___y_3216_ = v___y_3244_;
v_component_3217_ = v___x_3259_;
v___y_3218_ = v___y_3082_;
v___y_3219_ = v___y_3083_;
v___y_3220_ = v___y_3084_;
v___y_3221_ = v___y_3085_;
v___y_3222_ = v___y_3086_;
v___y_3223_ = v___y_3087_;
goto v___jp_3210_;
}
}
v___jp_3261_:
{
lean_object* v_bindings_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; size_t v_sz_3275_; lean_object* v___x_3276_; 
v_bindings_3270_ = lean_ctor_get(v___y_3265_, 2);
lean_inc_ref(v_bindings_3270_);
lean_dec_ref(v___y_3265_);
v___x_3271_ = lean_array_to_list(v_bindings_3270_);
v___x_3272_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_3271_, v___x_3260_);
lean_dec(v___x_3271_);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___y_3268_);
lean_ctor_set(v___x_3273_, 1, v___x_3260_);
v___x_3274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3274_, 0, v_fst_3103_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v_sz_3275_ = lean_array_size(v___y_3269_);
lean_inc(v_fst_3098_);
v___x_3276_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6(v___x_3272_, v_fst_3098_, v___y_3269_, v_sz_3275_, v___y_3262_, v___x_3274_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec_ref(v___y_3269_);
lean_dec_ref(v___x_3272_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v_snd_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v_snd_3278_ = lean_ctor_get(v_a_3277_, 1);
lean_inc(v_snd_3278_);
if (v___y_3264_ == 0)
{
lean_object* v_fst_3279_; lean_object* v_fst_3280_; lean_object* v_snd_3281_; lean_object* v___x_3282_; 
lean_dec(v_fst_3098_);
v_fst_3279_ = lean_ctor_get(v_a_3277_, 0);
lean_inc(v_fst_3279_);
lean_dec(v_a_3277_);
v_fst_3280_ = lean_ctor_get(v_snd_3278_, 0);
lean_inc(v_fst_3280_);
v_snd_3281_ = lean_ctor_get(v_snd_3278_, 1);
lean_inc(v_snd_3281_);
lean_dec(v_snd_3278_);
v___x_3282_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___y_3266_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v_a_3283_; uint8_t v___x_3284_; 
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref_known(v___x_3282_, 1);
v___x_3284_ = lean_unbox(v_a_3283_);
lean_dec(v_a_3283_);
if (v___x_3284_ == 7)
{
v___y_3238_ = v___y_3262_;
v___y_3239_ = v_fst_3279_;
v___y_3240_ = v___y_3263_;
v___y_3241_ = v_fst_3280_;
v___y_3242_ = v___y_3266_;
v___y_3243_ = v_snd_3281_;
v___y_3244_ = v___y_3267_;
goto v___jp_3237_;
}
else
{
if (v___x_3135_ == 0)
{
v___y_3211_ = v_fst_3279_;
v___y_3212_ = v___y_3262_;
v___y_3213_ = v___y_3263_;
v___y_3214_ = v_fst_3280_;
v___y_3215_ = v_snd_3281_;
v___y_3216_ = v___y_3267_;
v_component_3217_ = v___y_3266_;
v___y_3218_ = v___y_3082_;
v___y_3219_ = v___y_3083_;
v___y_3220_ = v___y_3084_;
v___y_3221_ = v___y_3085_;
v___y_3222_ = v___y_3086_;
v___y_3223_ = v___y_3087_;
goto v___jp_3210_;
}
else
{
v___y_3238_ = v___y_3262_;
v___y_3239_ = v_fst_3279_;
v___y_3240_ = v___y_3263_;
v___y_3241_ = v_fst_3280_;
v___y_3242_ = v___y_3266_;
v___y_3243_ = v_snd_3281_;
v___y_3244_ = v___y_3267_;
goto v___jp_3237_;
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec(v_snd_3281_);
lean_dec(v_fst_3280_);
lean_dec(v_fst_3279_);
lean_dec_ref(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec_ref(v___y_3263_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3285_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3282_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3282_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v_fst_3293_; lean_object* v_fst_3294_; lean_object* v___x_3295_; 
lean_dec_ref(v___y_3266_);
lean_dec_ref(v___y_3263_);
v_fst_3293_ = lean_ctor_get(v_a_3277_, 0);
lean_inc(v_fst_3293_);
lean_dec(v_a_3277_);
v_fst_3294_ = lean_ctor_get(v_snd_3278_, 0);
lean_inc(v_fst_3294_);
lean_dec(v_snd_3278_);
v___x_3295_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_fst_3098_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3295_) == 0)
{
lean_object* v_a_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_a_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3295_, 1);
v___x_3297_ = lean_mk_empty_array_with_capacity(v___x_3209_);
v___x_3298_ = lean_array_push(v___x_3297_, v_a_3296_);
v___y_3138_ = v_fst_3293_;
v___y_3139_ = v___y_3262_;
v___y_3140_ = v_fst_3294_;
v___y_3141_ = v___y_3267_;
v_parts_3142_ = v___x_3298_;
v___y_3143_ = v___y_3082_;
v___y_3144_ = v___y_3083_;
v___y_3145_ = v___y_3084_;
v___y_3146_ = v___y_3085_;
v___y_3147_ = v___y_3086_;
v___y_3148_ = v___y_3087_;
goto v___jp_3137_;
}
else
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3306_; 
lean_dec(v_fst_3294_);
lean_dec(v_fst_3293_);
lean_dec_ref(v___y_3267_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3299_ = lean_ctor_get(v___x_3295_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3295_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3301_ = v___x_3295_;
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3295_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3304_; 
if (v_isShared_3302_ == 0)
{
v___x_3304_ = v___x_3301_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v_a_3299_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
}
else
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3314_; 
lean_dec_ref(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec_ref(v___y_3263_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3101_);
lean_dec(v_fst_3098_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3307_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3309_ = v___x_3276_;
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v___x_3276_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3307_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
v___jp_3315_:
{
lean_object* v___x_3323_; 
lean_inc_ref(v___y_3320_);
v___x_3323_ = lp_vampireReplay_Vampire_Formula_boundVars(v___y_3320_);
v___y_3262_ = v___y_3316_;
v___y_3263_ = v___y_3318_;
v___y_3264_ = v___y_3317_;
v___y_3265_ = v___y_3319_;
v___y_3266_ = v___y_3320_;
v___y_3267_ = v___y_3322_;
v___y_3268_ = v___y_3321_;
v___y_3269_ = v___x_3323_;
goto v___jp_3261_;
}
v___jp_3327_:
{
lean_object* v___x_3330_; 
v___x_3330_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_a_3075_, v___y_3329_);
if (lean_obj_tag(v___x_3330_) == 1)
{
lean_object* v_val_3331_; lean_object* v_fst_3332_; lean_object* v_snd_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3431_; 
v_val_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_val_3331_);
lean_dec_ref_known(v___x_3330_, 1);
v_fst_3332_ = lean_ctor_get(v_val_3331_, 0);
v_snd_3333_ = lean_ctor_get(v_val_3331_, 1);
v_isSharedCheck_3431_ = !lean_is_exclusive(v_val_3331_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3335_ = v_val_3331_;
v_isShared_3336_ = v_isSharedCheck_3431_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_snd_3333_);
lean_inc(v_fst_3332_);
lean_dec(v_val_3331_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3431_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; uint8_t v___x_3341_; 
v___x_3337_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Server_Watchdog_handleRename_spec__1___redArg(v_fst_3107_, v___y_3329_, v___x_3136_);
v___x_3338_ = lean_nat_add(v___x_3337_, v___x_3209_);
v___x_3339_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_fst_3107_, v___y_3329_, v___x_3338_);
v___x_3340_ = lean_array_get_size(v_snd_3333_);
v___x_3341_ = lean_nat_dec_lt(v___x_3337_, v___x_3340_);
if (v___x_3341_ == 0)
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_dec_ref(v___f_3326_);
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_del_object(v___x_3101_);
v___x_3342_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15);
v___x_3343_ = l_Lean_stringToMessageData(v_fst_3098_);
v___x_3344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3342_);
lean_ctor_set(v___x_3344_, 1, v___x_3343_);
v___x_3345_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6);
v___x_3346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3344_);
lean_ctor_set(v___x_3346_, 1, v___x_3345_);
v___x_3347_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3346_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v___x_3349_; 
lean_dec_ref_known(v___x_3347_, 1);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 1, v_snd_3108_);
lean_ctor_set(v___x_3335_, 0, v___x_3339_);
v___x_3349_ = v___x_3335_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v_snd_3108_);
v___x_3349_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v_fst_3103_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v_a_3090_ = v___x_3350_;
goto v___jp_3089_;
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec_ref(v___x_3339_);
lean_del_object(v___x_3335_);
lean_dec(v_snd_3108_);
lean_dec(v_fst_3103_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3352_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3347_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3347_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
else
{
lean_object* v___x_3360_; 
lean_inc(v_fst_3098_);
v___x_3360_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_fst_3098_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_a_3361_);
lean_dec_ref_known(v___x_3360_, 1);
v___x_3362_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
v___x_3363_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3362_, v_a_3361_, v___f_3326_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3365_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3364_);
lean_dec_ref_known(v___x_3363_, 1);
lean_inc(v_fst_3332_);
v___x_3365_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_fst_3332_);
if (lean_obj_tag(v___x_3365_) == 1)
{
lean_object* v_val_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; size_t v_sz_3369_; size_t v___x_3370_; lean_object* v___x_3371_; 
lean_del_object(v___x_3335_);
v_val_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_val_3366_);
lean_dec_ref_known(v___x_3365_, 1);
v___x_3367_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_3366_);
v___x_3368_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0));
v_sz_3369_ = lean_array_size(v___x_3367_);
v___x_3370_ = ((size_t)0ULL);
v___x_3371_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(v___x_3135_, v___x_3367_, v_sz_3369_, v___x_3370_, v___x_3368_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
lean_dec_ref(v___x_3367_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v_fst_3373_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
v_fst_3373_ = lean_ctor_get(v_a_3372_, 0);
lean_inc(v_fst_3373_);
lean_dec(v_a_3372_);
if (lean_obj_tag(v_fst_3373_) == 0)
{
lean_dec(v_a_3364_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_del_object(v___x_3101_);
v___y_3113_ = v___x_3339_;
goto v___jp_3112_;
}
else
{
lean_object* v_val_3374_; 
v_val_3374_ = lean_ctor_get(v_fst_3373_, 0);
lean_inc(v_val_3374_);
lean_dec_ref_known(v_fst_3373_, 1);
if (lean_obj_tag(v_val_3374_) == 1)
{
lean_object* v_val_3375_; lean_object* v___x_3376_; 
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
v_val_3375_ = lean_ctor_get(v_val_3374_, 0);
lean_inc(v_val_3375_);
lean_dec_ref_known(v_val_3374_, 1);
v___x_3376_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_val_3375_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3376_) == 0)
{
lean_object* v_a_3377_; lean_object* v___x_3378_; uint8_t v___x_3379_; 
v_a_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_a_3377_);
lean_dec_ref_known(v___x_3376_, 1);
v___x_3378_ = lean_array_fget(v_snd_3333_, v___x_3337_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
v___x_3379_ = lean_unbox(v_a_3377_);
lean_dec(v_a_3377_);
if (v___x_3379_ == 7)
{
v___y_3316_ = v___x_3370_;
v___y_3317_ = v___y_3328_;
v___y_3318_ = v_fst_3332_;
v___y_3319_ = v___x_3378_;
v___y_3320_ = v_val_3375_;
v___y_3321_ = v_a_3364_;
v___y_3322_ = v___x_3339_;
goto v___jp_3315_;
}
else
{
if (v___x_3135_ == 0)
{
lean_object* v___x_3380_; 
v___x_3380_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8));
v___y_3262_ = v___x_3370_;
v___y_3263_ = v_fst_3332_;
v___y_3264_ = v___y_3328_;
v___y_3265_ = v___x_3378_;
v___y_3266_ = v_val_3375_;
v___y_3267_ = v___x_3339_;
v___y_3268_ = v_a_3364_;
v___y_3269_ = v___x_3380_;
goto v___jp_3261_;
}
else
{
v___y_3316_ = v___x_3370_;
v___y_3317_ = v___y_3328_;
v___y_3318_ = v_fst_3332_;
v___y_3319_ = v___x_3378_;
v___y_3320_ = v_val_3375_;
v___y_3321_ = v_a_3364_;
v___y_3322_ = v___x_3339_;
goto v___jp_3315_;
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_val_3375_);
lean_dec(v_a_3364_);
lean_dec_ref(v___x_3339_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_dec(v_snd_3108_);
lean_dec(v_fst_3103_);
lean_del_object(v___x_3101_);
lean_dec(v_fst_3098_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3381_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3376_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3376_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_dec(v_val_3374_);
lean_dec(v_a_3364_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_del_object(v___x_3101_);
v___y_3113_ = v___x_3339_;
goto v___jp_3112_;
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec(v_a_3364_);
lean_dec_ref(v___x_3339_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_del_object(v___x_3110_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3105_);
lean_dec(v_fst_3103_);
lean_del_object(v___x_3101_);
lean_dec(v_fst_3098_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3389_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3371_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3371_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
else
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
lean_dec(v___x_3365_);
lean_dec(v_a_3364_);
lean_dec(v___x_3337_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_del_object(v___x_3101_);
v___x_3397_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
v___x_3398_ = l_Lean_stringToMessageData(v_fst_3098_);
v___x_3399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8);
v___x_3401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3399_);
lean_ctor_set(v___x_3401_, 1, v___x_3400_);
v___x_3402_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3401_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v___x_3404_; 
lean_dec_ref_known(v___x_3402_, 1);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 1, v_snd_3108_);
lean_ctor_set(v___x_3335_, 0, v___x_3339_);
v___x_3404_ = v___x_3335_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v___x_3339_);
lean_ctor_set(v_reuseFailAlloc_3406_, 1, v_snd_3108_);
v___x_3404_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3405_, 0, v_fst_3103_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v_a_3090_ = v___x_3405_;
goto v___jp_3089_;
}
}
else
{
lean_object* v_a_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3414_; 
lean_dec_ref(v___x_3339_);
lean_del_object(v___x_3335_);
lean_dec(v_snd_3108_);
lean_dec(v_fst_3103_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3407_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3409_ = v___x_3402_;
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_a_3407_);
lean_dec(v___x_3402_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3414_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3412_; 
if (v_isShared_3410_ == 0)
{
v___x_3412_ = v___x_3409_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_a_3407_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
lean_dec_ref(v___x_3339_);
lean_dec(v___x_3337_);
lean_del_object(v___x_3335_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_del_object(v___x_3110_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3105_);
lean_dec(v_fst_3103_);
lean_del_object(v___x_3101_);
lean_dec(v_fst_3098_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3415_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3363_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3363_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec_ref(v___x_3339_);
lean_dec(v___x_3337_);
lean_del_object(v___x_3335_);
lean_dec(v_snd_3333_);
lean_dec(v_fst_3332_);
lean_dec_ref(v___f_3326_);
lean_del_object(v___x_3110_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3105_);
lean_dec(v_fst_3103_);
lean_del_object(v___x_3101_);
lean_dec(v_fst_3098_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3423_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3360_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3360_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
}
}
else
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
lean_dec(v___x_3330_);
lean_dec_ref(v___y_3329_);
lean_dec_ref(v___f_3326_);
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_del_object(v___x_3101_);
v___x_3432_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10);
v___x_3433_ = l_Lean_stringToMessageData(v_fst_3098_);
v___x_3434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12);
v___x_3436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3436_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
lean_dec_ref_known(v___x_3437_, 1);
v___x_3438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3438_, 0, v_fst_3107_);
lean_ctor_set(v___x_3438_, 1, v_snd_3108_);
v___x_3439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3439_, 0, v_fst_3103_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v_a_3090_ = v___x_3439_;
goto v___jp_3089_;
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
lean_dec(v_snd_3108_);
lean_dec(v_fst_3107_);
lean_dec(v_fst_3103_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3440_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3437_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3437_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
v___jp_3448_:
{
if (v___y_3449_ == 0)
{
lean_inc(v_fst_3098_);
v___y_3328_ = v___y_3449_;
v___y_3329_ = v_fst_3098_;
goto v___jp_3327_;
}
else
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; 
v___x_3450_ = lean_string_utf8_byte_size(v_fst_3098_);
lean_inc_n(v_fst_3098_, 2);
v___x_3451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3451_, 0, v_fst_3098_);
lean_ctor_set(v___x_3451_, 1, v___x_3136_);
lean_ctor_set(v___x_3451_, 2, v___x_3450_);
v___x_3452_ = l_String_Slice_Pos_nextn(v___x_3451_, v___x_3136_, v___x_3209_);
lean_dec_ref_known(v___x_3451_, 3);
v___x_3453_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3453_, 0, v_fst_3098_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
lean_ctor_set(v___x_3453_, 2, v___x_3450_);
v___x_3454_ = l_String_Slice_toString(v___x_3453_);
lean_dec_ref_known(v___x_3453_, 3);
v___y_3328_ = v___y_3449_;
v___y_3329_ = v___x_3454_;
goto v___jp_3327_;
}
}
}
else
{
lean_object* v___x_3461_; 
lean_del_object(v___x_3110_);
lean_del_object(v___x_3105_);
lean_dec(v_snd_3099_);
lean_dec(v_fst_3098_);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 1, v_snd_3108_);
lean_ctor_set(v___x_3101_, 0, v_fst_3107_);
v___x_3461_ = v___x_3101_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_fst_3107_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v_snd_3108_);
v___x_3461_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3462_, 0, v_fst_3103_);
lean_ctor_set(v___x_3462_, 1, v___x_3461_);
v_a_3090_ = v___x_3462_;
goto v___jp_3089_;
}
}
v___jp_3112_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3114_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
v___x_3115_ = l_Lean_stringToMessageData(v_fst_3098_);
v___x_3116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1);
v___x_3118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3116_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3118_, v___y_3084_, v___y_3085_, v___y_3086_, v___y_3087_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v___x_3121_; 
lean_dec_ref_known(v___x_3119_, 1);
if (v_isShared_3111_ == 0)
{
lean_ctor_set(v___x_3110_, 0, v___y_3113_);
v___x_3121_ = v___x_3110_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___y_3113_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v_snd_3108_);
v___x_3121_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3123_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 1, v___x_3121_);
v___x_3123_ = v___x_3105_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_fst_3103_);
lean_ctor_set(v_reuseFailAlloc_3124_, 1, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
v_a_3090_ = v___x_3123_;
goto v___jp_3089_;
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_dec_ref(v___y_3113_);
lean_del_object(v___x_3110_);
lean_dec(v_snd_3108_);
lean_del_object(v___x_3105_);
lean_dec(v_fst_3103_);
lean_dec_ref(v_h_3077_);
lean_dec_ref(v_a_3076_);
v_a_3126_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3119_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3119_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
}
}
}
}
v___jp_3089_:
{
size_t v___x_3091_; size_t v___x_3092_; 
v___x_3091_ = ((size_t)1ULL);
v___x_3092_ = lean_usize_add(v_i_3080_, v___x_3091_);
v_i_3080_ = v___x_3092_;
v_b_3081_ = v_a_3090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___boxed(lean_object* v___x_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_h_3471_, lean_object* v_as_3472_, lean_object* v_sz_3473_, lean_object* v_i_3474_, lean_object* v_b_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
size_t v_sz_boxed_3483_; size_t v_i_boxed_3484_; lean_object* v_res_3485_; 
v_sz_boxed_3483_ = lean_unbox_usize(v_sz_3473_);
lean_dec(v_sz_3473_);
v_i_boxed_3484_ = lean_unbox_usize(v_i_3474_);
lean_dec(v_i_3474_);
v_res_3485_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9(v___x_3468_, v_a_3469_, v_a_3470_, v_h_3471_, v_as_3472_, v_sz_boxed_3483_, v_i_boxed_3484_, v_b_3475_, v___y_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec(v___y_3479_);
lean_dec_ref(v___y_3478_);
lean_dec(v___y_3477_);
lean_dec_ref(v___y_3476_);
lean_dec_ref(v_as_3472_);
lean_dec_ref(v_a_3469_);
lean_dec_ref(v___x_3468_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8(lean_object* v___x_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_h_3489_, lean_object* v_as_3490_, size_t v_sz_3491_, size_t v_i_3492_, lean_object* v_b_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_a_3502_; uint8_t v___x_3506_; 
v___x_3506_ = lean_usize_dec_lt(v_i_3492_, v_sz_3491_);
if (v___x_3506_ == 0)
{
lean_object* v___x_3507_; 
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v_b_3493_);
return v___x_3507_;
}
else
{
lean_object* v_a_3508_; lean_object* v_snd_3509_; lean_object* v_fst_3510_; lean_object* v_snd_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3879_; 
v_a_3508_ = lean_array_uget(v_as_3490_, v_i_3492_);
v_snd_3509_ = lean_ctor_get(v_b_3493_, 1);
lean_inc(v_snd_3509_);
v_fst_3510_ = lean_ctor_get(v_a_3508_, 0);
v_snd_3511_ = lean_ctor_get(v_a_3508_, 1);
v_isSharedCheck_3879_ = !lean_is_exclusive(v_a_3508_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3513_ = v_a_3508_;
v_isShared_3514_ = v_isSharedCheck_3879_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_snd_3511_);
lean_inc(v_fst_3510_);
lean_dec(v_a_3508_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3879_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v_fst_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3877_; 
v_fst_3515_ = lean_ctor_get(v_b_3493_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v_b_3493_);
if (v_isSharedCheck_3877_ == 0)
{
lean_object* v_unused_3878_; 
v_unused_3878_ = lean_ctor_get(v_b_3493_, 1);
lean_dec(v_unused_3878_);
v___x_3517_ = v_b_3493_;
v_isShared_3518_ = v_isSharedCheck_3877_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_fst_3515_);
lean_dec(v_b_3493_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3877_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v_fst_3519_; lean_object* v_snd_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3876_; 
v_fst_3519_ = lean_ctor_get(v_snd_3509_, 0);
v_snd_3520_ = lean_ctor_get(v_snd_3509_, 1);
v_isSharedCheck_3876_ = !lean_is_exclusive(v_snd_3509_);
if (v_isSharedCheck_3876_ == 0)
{
v___x_3522_ = v_snd_3509_;
v_isShared_3523_ = v_isSharedCheck_3876_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_snd_3520_);
lean_inc(v_fst_3519_);
lean_dec(v_snd_3509_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3876_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___y_3525_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
lean_inc(v_fst_3510_);
v___x_3546_ = lp_vampireReplay_Vampire_Reconstruct_flippedName(v_fst_3510_);
v___x_3547_ = l_Array_contains___at___00Lean_Server_FileWorker_handlePostRequestSpecialCases_spec__3(v___x_3486_, v___x_3546_);
lean_dec_ref(v___x_3546_);
if (v___x_3547_ == 0)
{
lean_object* v___x_3548_; lean_object* v___y_3550_; lean_object* v___y_3551_; lean_object* v___y_3552_; size_t v___y_3553_; lean_object* v_parts_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; lean_object* v___y_3559_; lean_object* v___y_3560_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; size_t v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; size_t v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___x_3621_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; size_t v___y_3628_; lean_object* v_component_3629_; lean_object* v___y_3630_; lean_object* v___y_3631_; lean_object* v___y_3632_; lean_object* v___y_3633_; lean_object* v___y_3634_; lean_object* v___y_3635_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3653_; lean_object* v___y_3654_; size_t v___y_3655_; lean_object* v___y_3656_; lean_object* v___x_3672_; lean_object* v___y_3674_; uint8_t v___y_3675_; lean_object* v___y_3676_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; size_t v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3728_; uint8_t v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; size_t v___y_3733_; lean_object* v___y_3734_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___f_3738_; uint8_t v___y_3740_; lean_object* v___y_3741_; uint8_t v___y_3861_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; uint8_t v___x_3870_; 
v___x_3548_ = lean_unsigned_to_nat(0u);
v___x_3621_ = lean_unsigned_to_nat(1u);
v___x_3672_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4);
v___x_3736_ = lean_box(v___x_3547_);
v___x_3737_ = lean_box(v___x_3506_);
lean_inc_ref(v_h_3489_);
lean_inc_ref(v_a_3488_);
v___f_3738_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___lam__0___boxed), 14, 6);
lean_closure_set(v___f_3738_, 0, v_a_3488_);
lean_closure_set(v___f_3738_, 1, v_snd_3511_);
lean_closure_set(v___f_3738_, 2, v___x_3621_);
lean_closure_set(v___f_3738_, 3, v_h_3489_);
lean_closure_set(v___f_3738_, 4, v___x_3736_);
lean_closure_set(v___f_3738_, 5, v___x_3737_);
v___x_3867_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__13));
v___x_3868_ = lean_string_utf8_byte_size(v_fst_3510_);
v___x_3869_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__14);
v___x_3870_ = lean_nat_dec_le(v___x_3869_, v___x_3868_);
if (v___x_3870_ == 0)
{
v___y_3861_ = v___x_3547_;
goto v___jp_3860_;
}
else
{
uint8_t v___x_3871_; 
v___x_3871_ = lean_string_memcmp(v_fst_3510_, v___x_3867_, v___x_3548_, v___x_3548_, v___x_3869_);
v___y_3861_ = v___x_3871_;
goto v___jp_3860_;
}
v___jp_3549_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; size_t v_sz_3565_; lean_object* v___x_3566_; 
v___x_3561_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__1));
v___x_3562_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts___closed__1));
lean_inc_ref(v_parts_3554_);
v___x_3563_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_3561_, v___x_3562_, v_parts_3554_);
v___x_3564_ = l_Array_zipIdx___redArg(v_parts_3554_, v___x_3548_);
v_sz_3565_ = lean_array_size(v___x_3564_);
v___x_3566_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__7(v___x_3563_, v___y_3550_, v___x_3547_, v___x_3564_, v_sz_3565_, v___y_3553_, v_snd_3520_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
lean_dec_ref(v___x_3564_);
if (lean_obj_tag(v___x_3566_) == 0)
{
lean_object* v_a_3567_; lean_object* v___x_3569_; 
v_a_3567_ = lean_ctor_get(v___x_3566_, 0);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3566_, 1);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 1, v_a_3567_);
lean_ctor_set(v___x_3513_, 0, v___y_3551_);
v___x_3569_ = v___x_3513_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___y_3551_);
lean_ctor_set(v_reuseFailAlloc_3571_, 1, v_a_3567_);
v___x_3569_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
lean_object* v___x_3570_; 
v___x_3570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___y_3552_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v_a_3502_ = v___x_3570_;
goto v___jp_3501_;
}
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3572_ = lean_ctor_get(v___x_3566_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3566_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_3566_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3566_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_a_3572_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
v___jp_3580_:
{
lean_object* v___x_3594_; size_t v_sz_3595_; lean_object* v___x_3596_; 
v___x_3594_ = lp_vampireReplay_Vampire_Unit_varSorts(v___y_3582_);
v_sz_3595_ = lean_array_size(v___y_3593_);
v___x_3596_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v___x_3594_, v___y_3588_, v_sz_3595_, v___y_3586_, v___y_3593_, v___y_3590_, v___y_3585_, v___y_3589_, v___y_3591_, v___y_3592_, v___y_3587_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v___x_3596_, 1);
v___y_3550_ = v___y_3581_;
v___y_3551_ = v___y_3583_;
v___y_3552_ = v___y_3584_;
v___y_3553_ = v___y_3586_;
v_parts_3554_ = v_a_3597_;
v___y_3555_ = v___y_3590_;
v___y_3556_ = v___y_3585_;
v___y_3557_ = v___y_3589_;
v___y_3558_ = v___y_3591_;
v___y_3559_ = v___y_3592_;
v___y_3560_ = v___y_3587_;
goto v___jp_3549_;
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec(v___y_3581_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3598_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3596_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3596_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
v___jp_3606_:
{
lean_object* v___x_3620_; 
v___x_3620_ = lp_vampireReplay_Vampire_Formula_subformulas(v___y_3613_);
v___y_3581_ = v___y_3607_;
v___y_3582_ = v___y_3608_;
v___y_3583_ = v___y_3609_;
v___y_3584_ = v___y_3610_;
v___y_3585_ = v___y_3611_;
v___y_3586_ = v___y_3612_;
v___y_3587_ = v___y_3614_;
v___y_3588_ = v___y_3615_;
v___y_3589_ = v___y_3616_;
v___y_3590_ = v___y_3617_;
v___y_3591_ = v___y_3618_;
v___y_3592_ = v___y_3619_;
v___y_3593_ = v___x_3620_;
goto v___jp_3580_;
}
v___jp_3622_:
{
lean_object* v___x_3636_; 
v___x_3636_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_component_3629_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; uint8_t v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = lean_unbox(v_a_3637_);
lean_dec(v_a_3637_);
if (v___x_3638_ == 2)
{
v___y_3607_ = v___y_3624_;
v___y_3608_ = v___y_3625_;
v___y_3609_ = v___y_3626_;
v___y_3610_ = v___y_3627_;
v___y_3611_ = v___y_3631_;
v___y_3612_ = v___y_3628_;
v___y_3613_ = v_component_3629_;
v___y_3614_ = v___y_3635_;
v___y_3615_ = v___y_3623_;
v___y_3616_ = v___y_3632_;
v___y_3617_ = v___y_3630_;
v___y_3618_ = v___y_3633_;
v___y_3619_ = v___y_3634_;
goto v___jp_3606_;
}
else
{
if (v___x_3547_ == 0)
{
lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3639_ = lean_mk_empty_array_with_capacity(v___x_3621_);
v___x_3640_ = lean_array_push(v___x_3639_, v_component_3629_);
v___y_3581_ = v___y_3624_;
v___y_3582_ = v___y_3625_;
v___y_3583_ = v___y_3626_;
v___y_3584_ = v___y_3627_;
v___y_3585_ = v___y_3631_;
v___y_3586_ = v___y_3628_;
v___y_3587_ = v___y_3635_;
v___y_3588_ = v___y_3623_;
v___y_3589_ = v___y_3632_;
v___y_3590_ = v___y_3630_;
v___y_3591_ = v___y_3633_;
v___y_3592_ = v___y_3634_;
v___y_3593_ = v___x_3640_;
goto v___jp_3580_;
}
else
{
v___y_3607_ = v___y_3624_;
v___y_3608_ = v___y_3625_;
v___y_3609_ = v___y_3626_;
v___y_3610_ = v___y_3627_;
v___y_3611_ = v___y_3631_;
v___y_3612_ = v___y_3628_;
v___y_3613_ = v_component_3629_;
v___y_3614_ = v___y_3635_;
v___y_3615_ = v___y_3623_;
v___y_3616_ = v___y_3632_;
v___y_3617_ = v___y_3630_;
v___y_3618_ = v___y_3633_;
v___y_3619_ = v___y_3634_;
goto v___jp_3606_;
}
}
}
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
lean_dec_ref(v_component_3629_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v___y_3624_);
lean_dec(v___y_3623_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3641_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3636_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3636_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
v___jp_3649_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; uint8_t v___x_3659_; 
v___x_3657_ = lp_vampireReplay_Vampire_Formula_subformulas(v___y_3656_);
v___x_3658_ = lean_array_get_size(v___x_3657_);
v___x_3659_ = lean_nat_dec_lt(v___x_3548_, v___x_3658_);
if (v___x_3659_ == 0)
{
lean_object* v___x_3660_; lean_object* v___x_3661_; 
lean_dec_ref(v___x_3657_);
v___x_3660_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__3);
v___x_3661_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3660_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
v___y_3623_ = v___y_3651_;
v___y_3624_ = v___y_3650_;
v___y_3625_ = v___y_3652_;
v___y_3626_ = v___y_3653_;
v___y_3627_ = v___y_3654_;
v___y_3628_ = v___y_3655_;
v_component_3629_ = v_a_3662_;
v___y_3630_ = v___y_3494_;
v___y_3631_ = v___y_3495_;
v___y_3632_ = v___y_3496_;
v___y_3633_ = v___y_3497_;
v___y_3634_ = v___y_3498_;
v___y_3635_ = v___y_3499_;
goto v___jp_3622_;
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
lean_dec(v___y_3654_);
lean_dec_ref(v___y_3653_);
lean_dec_ref(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec(v___y_3650_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3663_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3661_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3661_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
else
{
lean_object* v___x_3671_; 
v___x_3671_ = lean_array_fget(v___x_3657_, v___x_3548_);
lean_dec_ref(v___x_3657_);
v___y_3623_ = v___y_3651_;
v___y_3624_ = v___y_3650_;
v___y_3625_ = v___y_3652_;
v___y_3626_ = v___y_3653_;
v___y_3627_ = v___y_3654_;
v___y_3628_ = v___y_3655_;
v_component_3629_ = v___x_3671_;
v___y_3630_ = v___y_3494_;
v___y_3631_ = v___y_3495_;
v___y_3632_ = v___y_3496_;
v___y_3633_ = v___y_3497_;
v___y_3634_ = v___y_3498_;
v___y_3635_ = v___y_3499_;
goto v___jp_3622_;
}
}
v___jp_3673_:
{
lean_object* v_bindings_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; size_t v_sz_3687_; lean_object* v___x_3688_; 
v_bindings_3682_ = lean_ctor_get(v___y_3678_, 2);
lean_inc_ref(v_bindings_3682_);
lean_dec_ref(v___y_3678_);
v___x_3683_ = lean_array_to_list(v_bindings_3682_);
v___x_3684_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_3683_, v___x_3672_);
lean_dec(v___x_3683_);
v___x_3685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___y_3677_);
lean_ctor_set(v___x_3685_, 1, v___x_3672_);
v___x_3686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3686_, 0, v_fst_3515_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v_sz_3687_ = lean_array_size(v___y_3681_);
lean_inc(v_fst_3510_);
v___x_3688_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__6(v___x_3684_, v_fst_3510_, v___y_3681_, v_sz_3687_, v___y_3680_, v___x_3686_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec_ref(v___y_3681_);
lean_dec_ref(v___x_3684_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; lean_object* v_snd_3690_; 
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___x_3688_, 1);
v_snd_3690_ = lean_ctor_get(v_a_3689_, 1);
lean_inc(v_snd_3690_);
if (v___y_3675_ == 0)
{
lean_object* v_fst_3691_; lean_object* v_fst_3692_; lean_object* v_snd_3693_; lean_object* v___x_3694_; 
lean_dec(v_fst_3510_);
v_fst_3691_ = lean_ctor_get(v_a_3689_, 0);
lean_inc(v_fst_3691_);
lean_dec(v_a_3689_);
v_fst_3692_ = lean_ctor_get(v_snd_3690_, 0);
lean_inc(v_fst_3692_);
v_snd_3693_ = lean_ctor_get(v_snd_3690_, 1);
lean_inc(v_snd_3693_);
lean_dec(v_snd_3690_);
v___x_3694_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___y_3679_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; uint8_t v___x_3696_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v___x_3696_ = lean_unbox(v_a_3695_);
lean_dec(v_a_3695_);
if (v___x_3696_ == 7)
{
v___y_3650_ = v_fst_3692_;
v___y_3651_ = v_snd_3693_;
v___y_3652_ = v___y_3674_;
v___y_3653_ = v___y_3676_;
v___y_3654_ = v_fst_3691_;
v___y_3655_ = v___y_3680_;
v___y_3656_ = v___y_3679_;
goto v___jp_3649_;
}
else
{
if (v___x_3547_ == 0)
{
v___y_3623_ = v_snd_3693_;
v___y_3624_ = v_fst_3692_;
v___y_3625_ = v___y_3674_;
v___y_3626_ = v___y_3676_;
v___y_3627_ = v_fst_3691_;
v___y_3628_ = v___y_3680_;
v_component_3629_ = v___y_3679_;
v___y_3630_ = v___y_3494_;
v___y_3631_ = v___y_3495_;
v___y_3632_ = v___y_3496_;
v___y_3633_ = v___y_3497_;
v___y_3634_ = v___y_3498_;
v___y_3635_ = v___y_3499_;
goto v___jp_3622_;
}
else
{
v___y_3650_ = v_fst_3692_;
v___y_3651_ = v_snd_3693_;
v___y_3652_ = v___y_3674_;
v___y_3653_ = v___y_3676_;
v___y_3654_ = v_fst_3691_;
v___y_3655_ = v___y_3680_;
v___y_3656_ = v___y_3679_;
goto v___jp_3649_;
}
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3704_; 
lean_dec(v_snd_3693_);
lean_dec(v_fst_3692_);
lean_dec(v_fst_3691_);
lean_dec_ref(v___y_3679_);
lean_dec_ref(v___y_3676_);
lean_dec_ref(v___y_3674_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3697_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3699_ = v___x_3694_;
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3694_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3702_; 
if (v_isShared_3700_ == 0)
{
v___x_3702_ = v___x_3699_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3697_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
else
{
lean_object* v_fst_3705_; lean_object* v_fst_3706_; lean_object* v___x_3707_; 
lean_dec_ref(v___y_3679_);
lean_dec_ref(v___y_3674_);
v_fst_3705_ = lean_ctor_get(v_a_3689_, 0);
lean_inc(v_fst_3705_);
lean_dec(v_a_3689_);
v_fst_3706_ = lean_ctor_get(v_snd_3690_, 0);
lean_inc(v_fst_3706_);
lean_dec(v_snd_3690_);
v___x_3707_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_fst_3510_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v___x_3707_, 1);
v___x_3709_ = lean_mk_empty_array_with_capacity(v___x_3621_);
v___x_3710_ = lean_array_push(v___x_3709_, v_a_3708_);
v___y_3550_ = v_fst_3706_;
v___y_3551_ = v___y_3676_;
v___y_3552_ = v_fst_3705_;
v___y_3553_ = v___y_3680_;
v_parts_3554_ = v___x_3710_;
v___y_3555_ = v___y_3494_;
v___y_3556_ = v___y_3495_;
v___y_3557_ = v___y_3496_;
v___y_3558_ = v___y_3497_;
v___y_3559_ = v___y_3498_;
v___y_3560_ = v___y_3499_;
goto v___jp_3549_;
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_dec(v_fst_3706_);
lean_dec(v_fst_3705_);
lean_dec_ref(v___y_3676_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3711_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3707_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3707_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec_ref(v___y_3679_);
lean_dec_ref(v___y_3676_);
lean_dec_ref(v___y_3674_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3513_);
lean_dec(v_fst_3510_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3719_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3688_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3688_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
v___jp_3727_:
{
lean_object* v___x_3735_; 
lean_inc_ref(v___y_3734_);
v___x_3735_ = lp_vampireReplay_Vampire_Formula_boundVars(v___y_3734_);
v___y_3674_ = v___y_3728_;
v___y_3675_ = v___y_3729_;
v___y_3676_ = v___y_3730_;
v___y_3677_ = v___y_3731_;
v___y_3678_ = v___y_3732_;
v___y_3679_ = v___y_3734_;
v___y_3680_ = v___y_3733_;
v___y_3681_ = v___x_3735_;
goto v___jp_3673_;
}
v___jp_3739_:
{
lean_object* v___x_3742_; 
v___x_3742_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_a_3487_, v___y_3741_);
if (lean_obj_tag(v___x_3742_) == 1)
{
lean_object* v_val_3743_; lean_object* v_fst_3744_; lean_object* v_snd_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3843_; 
v_val_3743_ = lean_ctor_get(v___x_3742_, 0);
lean_inc(v_val_3743_);
lean_dec_ref_known(v___x_3742_, 1);
v_fst_3744_ = lean_ctor_get(v_val_3743_, 0);
v_snd_3745_ = lean_ctor_get(v_val_3743_, 1);
v_isSharedCheck_3843_ = !lean_is_exclusive(v_val_3743_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3747_ = v_val_3743_;
v_isShared_3748_ = v_isSharedCheck_3843_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_snd_3745_);
lean_inc(v_fst_3744_);
lean_dec(v_val_3743_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3843_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3749_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Server_Watchdog_handleRename_spec__1___redArg(v_fst_3519_, v___y_3741_, v___x_3548_);
v___x_3750_ = lean_nat_add(v___x_3749_, v___x_3621_);
v___x_3751_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_fst_3519_, v___y_3741_, v___x_3750_);
v___x_3752_ = lean_array_get_size(v_snd_3745_);
v___x_3753_ = lean_nat_dec_lt(v___x_3749_, v___x_3752_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_dec_ref(v___f_3738_);
lean_del_object(v___x_3522_);
lean_del_object(v___x_3517_);
lean_del_object(v___x_3513_);
v___x_3754_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__15);
v___x_3755_ = l_Lean_stringToMessageData(v_fst_3510_);
v___x_3756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__6);
v___x_3758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3758_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v___x_3761_; 
lean_dec_ref_known(v___x_3759_, 1);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 1, v_snd_3520_);
lean_ctor_set(v___x_3747_, 0, v___x_3751_);
v___x_3761_ = v___x_3747_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3763_, 1, v_snd_3520_);
v___x_3761_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
lean_object* v___x_3762_; 
v___x_3762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3762_, 0, v_fst_3515_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v_a_3502_ = v___x_3762_;
goto v___jp_3501_;
}
}
else
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
lean_dec_ref(v___x_3751_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3520_);
lean_dec(v_fst_3515_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3764_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___x_3759_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3759_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
else
{
lean_object* v___x_3772_; 
lean_inc(v_fst_3510_);
v___x_3772_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_fst_3510_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3772_) == 0)
{
lean_object* v_a_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v_a_3773_ = lean_ctor_get(v___x_3772_, 0);
lean_inc(v_a_3773_);
lean_dec_ref_known(v___x_3772_, 1);
v___x_3774_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__3));
v___x_3775_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3774_, v_a_3773_, v___f_3738_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v_a_3776_; lean_object* v___x_3777_; 
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
lean_inc(v_a_3776_);
lean_dec_ref_known(v___x_3775_, 1);
lean_inc(v_fst_3744_);
v___x_3777_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_fst_3744_);
if (lean_obj_tag(v___x_3777_) == 1)
{
lean_object* v_val_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; size_t v_sz_3781_; size_t v___x_3782_; lean_object* v___x_3783_; 
lean_del_object(v___x_3747_);
v_val_3778_ = lean_ctor_get(v___x_3777_, 0);
lean_inc(v_val_3778_);
lean_dec_ref_known(v___x_3777_, 1);
v___x_3779_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_3778_);
v___x_3780_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg___closed__0));
v_sz_3781_ = lean_array_size(v___x_3779_);
v___x_3782_ = ((size_t)0ULL);
v___x_3783_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(v___x_3547_, v___x_3779_, v_sz_3781_, v___x_3782_, v___x_3780_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec_ref(v___x_3779_);
if (lean_obj_tag(v___x_3783_) == 0)
{
lean_object* v_a_3784_; lean_object* v_fst_3785_; 
v_a_3784_ = lean_ctor_get(v___x_3783_, 0);
lean_inc(v_a_3784_);
lean_dec_ref_known(v___x_3783_, 1);
v_fst_3785_ = lean_ctor_get(v_a_3784_, 0);
lean_inc(v_fst_3785_);
lean_dec(v_a_3784_);
if (lean_obj_tag(v_fst_3785_) == 0)
{
lean_dec(v_a_3776_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_del_object(v___x_3513_);
v___y_3525_ = v___x_3751_;
goto v___jp_3524_;
}
else
{
lean_object* v_val_3786_; 
v_val_3786_ = lean_ctor_get(v_fst_3785_, 0);
lean_inc(v_val_3786_);
lean_dec_ref_known(v_fst_3785_, 1);
if (lean_obj_tag(v_val_3786_) == 1)
{
lean_object* v_val_3787_; lean_object* v___x_3788_; 
lean_del_object(v___x_3522_);
lean_del_object(v___x_3517_);
v_val_3787_ = lean_ctor_get(v_val_3786_, 0);
lean_inc(v_val_3787_);
lean_dec_ref_known(v_val_3786_, 1);
v___x_3788_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_val_3787_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_a_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; 
v_a_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3788_, 1);
v___x_3790_ = lean_array_fget(v_snd_3745_, v___x_3749_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
v___x_3791_ = lean_unbox(v_a_3789_);
lean_dec(v_a_3789_);
if (v___x_3791_ == 7)
{
v___y_3728_ = v_fst_3744_;
v___y_3729_ = v___y_3740_;
v___y_3730_ = v___x_3751_;
v___y_3731_ = v_a_3776_;
v___y_3732_ = v___x_3790_;
v___y_3733_ = v___x_3782_;
v___y_3734_ = v_val_3787_;
goto v___jp_3727_;
}
else
{
if (v___x_3547_ == 0)
{
lean_object* v___x_3792_; 
v___x_3792_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_component___closed__8));
v___y_3674_ = v_fst_3744_;
v___y_3675_ = v___y_3740_;
v___y_3676_ = v___x_3751_;
v___y_3677_ = v_a_3776_;
v___y_3678_ = v___x_3790_;
v___y_3679_ = v_val_3787_;
v___y_3680_ = v___x_3782_;
v___y_3681_ = v___x_3792_;
goto v___jp_3673_;
}
else
{
v___y_3728_ = v_fst_3744_;
v___y_3729_ = v___y_3740_;
v___y_3730_ = v___x_3751_;
v___y_3731_ = v_a_3776_;
v___y_3732_ = v___x_3790_;
v___y_3733_ = v___x_3782_;
v___y_3734_ = v_val_3787_;
goto v___jp_3727_;
}
}
}
else
{
lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
lean_dec(v_val_3787_);
lean_dec(v_a_3776_);
lean_dec_ref(v___x_3751_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_dec(v_snd_3520_);
lean_dec(v_fst_3515_);
lean_del_object(v___x_3513_);
lean_dec(v_fst_3510_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3793_ = lean_ctor_get(v___x_3788_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3788_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3788_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3788_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3798_; 
if (v_isShared_3796_ == 0)
{
v___x_3798_ = v___x_3795_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3793_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
}
}
else
{
lean_dec(v_val_3786_);
lean_dec(v_a_3776_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_del_object(v___x_3513_);
v___y_3525_ = v___x_3751_;
goto v___jp_3524_;
}
}
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3808_; 
lean_dec(v_a_3776_);
lean_dec_ref(v___x_3751_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_del_object(v___x_3522_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3517_);
lean_dec(v_fst_3515_);
lean_del_object(v___x_3513_);
lean_dec(v_fst_3510_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3801_ = lean_ctor_get(v___x_3783_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v___x_3783_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3803_ = v___x_3783_;
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3783_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3806_; 
if (v_isShared_3804_ == 0)
{
v___x_3806_ = v___x_3803_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v_a_3801_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
else
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
lean_dec(v___x_3777_);
lean_dec(v_a_3776_);
lean_dec(v___x_3749_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_del_object(v___x_3522_);
lean_del_object(v___x_3517_);
lean_del_object(v___x_3513_);
v___x_3809_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
v___x_3810_ = l_Lean_stringToMessageData(v_fst_3510_);
v___x_3811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3809_);
lean_ctor_set(v___x_3811_, 1, v___x_3810_);
v___x_3812_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__8);
v___x_3813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3811_);
lean_ctor_set(v___x_3813_, 1, v___x_3812_);
v___x_3814_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3813_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v___x_3816_; 
lean_dec_ref_known(v___x_3814_, 1);
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 1, v_snd_3520_);
lean_ctor_set(v___x_3747_, 0, v___x_3751_);
v___x_3816_ = v___x_3747_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3818_, 1, v_snd_3520_);
v___x_3816_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3817_, 0, v_fst_3515_);
lean_ctor_set(v___x_3817_, 1, v___x_3816_);
v_a_3502_ = v___x_3817_;
goto v___jp_3501_;
}
}
else
{
lean_object* v_a_3819_; lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3826_; 
lean_dec_ref(v___x_3751_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3520_);
lean_dec(v_fst_3515_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3819_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3826_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3821_ = v___x_3814_;
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
else
{
lean_inc(v_a_3819_);
lean_dec(v___x_3814_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3826_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3824_; 
if (v_isShared_3822_ == 0)
{
v___x_3824_ = v___x_3821_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_a_3819_);
v___x_3824_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
return v___x_3824_;
}
}
}
}
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
lean_dec_ref(v___x_3751_);
lean_dec(v___x_3749_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_del_object(v___x_3522_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3517_);
lean_dec(v_fst_3515_);
lean_del_object(v___x_3513_);
lean_dec(v_fst_3510_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3827_ = lean_ctor_get(v___x_3775_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3775_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3775_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
else
{
lean_object* v_a_3835_; lean_object* v___x_3837_; uint8_t v_isShared_3838_; uint8_t v_isSharedCheck_3842_; 
lean_dec_ref(v___x_3751_);
lean_dec(v___x_3749_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3745_);
lean_dec(v_fst_3744_);
lean_dec_ref(v___f_3738_);
lean_del_object(v___x_3522_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3517_);
lean_dec(v_fst_3515_);
lean_del_object(v___x_3513_);
lean_dec(v_fst_3510_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3835_ = lean_ctor_get(v___x_3772_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3772_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3837_ = v___x_3772_;
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
else
{
lean_inc(v_a_3835_);
lean_dec(v___x_3772_);
v___x_3837_ = lean_box(0);
v_isShared_3838_ = v_isSharedCheck_3842_;
goto v_resetjp_3836_;
}
v_resetjp_3836_:
{
lean_object* v___x_3840_; 
if (v_isShared_3838_ == 0)
{
v___x_3840_ = v___x_3837_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3835_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
}
}
}
else
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; 
lean_dec(v___x_3742_);
lean_dec_ref(v___y_3741_);
lean_dec_ref(v___f_3738_);
lean_del_object(v___x_3522_);
lean_del_object(v___x_3517_);
lean_del_object(v___x_3513_);
v___x_3844_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__10);
v___x_3845_ = l_Lean_stringToMessageData(v_fst_3510_);
v___x_3846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3844_);
lean_ctor_set(v___x_3846_, 1, v___x_3845_);
v___x_3847_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__12);
v___x_3848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3846_);
lean_ctor_set(v___x_3848_, 1, v___x_3847_);
v___x_3849_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3848_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v___x_3850_; lean_object* v___x_3851_; 
lean_dec_ref_known(v___x_3849_, 1);
v___x_3850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3850_, 0, v_fst_3519_);
lean_ctor_set(v___x_3850_, 1, v_snd_3520_);
v___x_3851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3851_, 0, v_fst_3515_);
lean_ctor_set(v___x_3851_, 1, v___x_3850_);
v_a_3502_ = v___x_3851_;
goto v___jp_3501_;
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
lean_dec(v_snd_3520_);
lean_dec(v_fst_3519_);
lean_dec(v_fst_3515_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3852_ = lean_ctor_get(v___x_3849_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3849_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3849_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3849_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
}
}
v___jp_3860_:
{
if (v___y_3861_ == 0)
{
lean_inc(v_fst_3510_);
v___y_3740_ = v___y_3861_;
v___y_3741_ = v_fst_3510_;
goto v___jp_3739_;
}
else
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v___x_3862_ = lean_string_utf8_byte_size(v_fst_3510_);
lean_inc_n(v_fst_3510_, 2);
v___x_3863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3863_, 0, v_fst_3510_);
lean_ctor_set(v___x_3863_, 1, v___x_3548_);
lean_ctor_set(v___x_3863_, 2, v___x_3862_);
v___x_3864_ = l_String_Slice_Pos_nextn(v___x_3863_, v___x_3548_, v___x_3621_);
lean_dec_ref_known(v___x_3863_, 3);
v___x_3865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3865_, 0, v_fst_3510_);
lean_ctor_set(v___x_3865_, 1, v___x_3864_);
lean_ctor_set(v___x_3865_, 2, v___x_3862_);
v___x_3866_ = l_String_Slice_toString(v___x_3865_);
lean_dec_ref_known(v___x_3865_, 3);
v___y_3740_ = v___y_3861_;
v___y_3741_ = v___x_3866_;
goto v___jp_3739_;
}
}
}
else
{
lean_object* v___x_3873_; 
lean_del_object(v___x_3522_);
lean_del_object(v___x_3517_);
lean_dec(v_snd_3511_);
lean_dec(v_fst_3510_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 1, v_snd_3520_);
lean_ctor_set(v___x_3513_, 0, v_fst_3519_);
v___x_3873_ = v___x_3513_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v_fst_3519_);
lean_ctor_set(v_reuseFailAlloc_3875_, 1, v_snd_3520_);
v___x_3873_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
lean_object* v___x_3874_; 
v___x_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3874_, 0, v_fst_3515_);
lean_ctor_set(v___x_3874_, 1, v___x_3873_);
v_a_3502_ = v___x_3874_;
goto v___jp_3501_;
}
}
v___jp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3526_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_component_spec__0___redArg___closed__1);
v___x_3527_ = l_Lean_stringToMessageData(v_fst_3510_);
v___x_3528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3526_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
v___x_3529_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__1);
v___x_3530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3528_);
lean_ctor_set(v___x_3530_, 1, v___x_3529_);
v___x_3531_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3530_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v___x_3533_; 
lean_dec_ref_known(v___x_3531_, 1);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v___y_3525_);
v___x_3533_ = v___x_3522_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___y_3525_);
lean_ctor_set(v_reuseFailAlloc_3537_, 1, v_snd_3520_);
v___x_3533_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
lean_object* v___x_3535_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 1, v___x_3533_);
v___x_3535_ = v___x_3517_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_fst_3515_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
v_a_3502_ = v___x_3535_;
goto v___jp_3501_;
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3545_; 
lean_dec_ref(v___y_3525_);
lean_del_object(v___x_3522_);
lean_dec(v_snd_3520_);
lean_del_object(v___x_3517_);
lean_dec(v_fst_3515_);
lean_dec_ref(v_h_3489_);
lean_dec_ref(v_a_3488_);
v_a_3538_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3540_ = v___x_3531_;
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3531_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3543_; 
if (v_isShared_3541_ == 0)
{
v___x_3543_ = v___x_3540_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3538_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
}
}
}
}
}
v___jp_3501_:
{
size_t v___x_3503_; size_t v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = ((size_t)1ULL);
v___x_3504_ = lean_usize_add(v_i_3492_, v___x_3503_);
v___x_3505_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9(v___x_3486_, v_a_3487_, v_a_3488_, v_h_3489_, v_as_3490_, v_sz_3491_, v___x_3504_, v_a_3502_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
return v___x_3505_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8___boxed(lean_object* v___x_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_h_3883_, lean_object* v_as_3884_, lean_object* v_sz_3885_, lean_object* v_i_3886_, lean_object* v_b_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
size_t v_sz_boxed_3895_; size_t v_i_boxed_3896_; lean_object* v_res_3897_; 
v_sz_boxed_3895_ = lean_unbox_usize(v_sz_3885_);
lean_dec(v_sz_3885_);
v_i_boxed_3896_ = lean_unbox_usize(v_i_3886_);
lean_dec(v_i_3886_);
v_res_3897_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8(v___x_3880_, v_a_3881_, v_a_3882_, v_h_3883_, v_as_3884_, v_sz_boxed_3895_, v_i_boxed_3896_, v_b_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec_ref(v_as_3884_);
lean_dec_ref(v_a_3881_);
lean_dec_ref(v___x_3880_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1(lean_object* v_snd_3898_, lean_object* v___x_3899_, lean_object* v_fst_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, size_t v___x_3903_, lean_object* v___x_3904_, lean_object* v___x_3905_, lean_object* v_a_3906_, lean_object* v___x_3907_, uint8_t v___x_3908_, lean_object* v_h_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v___x_3917_; lean_object* v_a_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; size_t v_sz_3921_; lean_object* v___x_3922_; 
v___x_3917_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_3898_, v___y_3913_);
v_a_3918_ = lean_ctor_get(v___x_3917_, 0);
lean_inc(v_a_3918_);
lean_dec_ref(v___x_3917_);
lean_inc_ref(v___x_3899_);
v___x_3919_ = lp_vampireReplay_Vampire_Unit_splits(v___x_3899_);
v___x_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3920_, 0, v_fst_3900_);
lean_ctor_set(v___x_3920_, 1, v_a_3918_);
v_sz_3921_ = lean_array_size(v___x_3919_);
lean_inc_ref(v_h_3909_);
lean_inc_ref(v_a_3902_);
v___x_3922_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__4(v_a_3901_, v_a_3902_, v_h_3909_, v___x_3919_, v_sz_3921_, v___x_3903_, v___x_3920_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; size_t v_sz_3931_; lean_object* v___x_3932_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref_known(v___x_3922_, 1);
v___x_3924_ = lean_box(0);
v___x_3925_ = lean_mk_array(v___x_3904_, v___x_3924_);
lean_inc(v___x_3905_);
v___x_3926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3905_);
lean_ctor_set(v___x_3926_, 1, v___x_3925_);
v___x_3927_ = lean_mk_empty_array_with_capacity(v___x_3905_);
lean_inc_ref(v_a_3901_);
v___x_3928_ = l_Array_zipIdx___redArg(v_a_3901_, v___x_3905_);
lean_inc_ref(v___x_3927_);
lean_inc_ref(v___x_3926_);
v___x_3929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3926_);
lean_ctor_set(v___x_3929_, 1, v___x_3927_);
v___x_3930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3926_);
lean_ctor_set(v___x_3930_, 1, v___x_3929_);
v_sz_3931_ = lean_array_size(v___x_3928_);
lean_inc_ref(v_h_3909_);
lean_inc_ref(v_a_3902_);
v___x_3932_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8(v___x_3919_, v_a_3906_, v_a_3902_, v_h_3909_, v___x_3928_, v_sz_3931_, v___x_3903_, v___x_3930_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec_ref(v___x_3928_);
lean_dec_ref(v___x_3919_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_a_3933_; lean_object* v_fst_3934_; lean_object* v_snd_3935_; lean_object* v___x_3936_; size_t v_sz_3937_; lean_object* v___x_3938_; 
v_a_3933_ = lean_ctor_get(v___x_3932_, 0);
lean_inc(v_a_3933_);
lean_dec_ref_known(v___x_3932_, 1);
v_fst_3934_ = lean_ctor_get(v_a_3933_, 0);
lean_inc(v_fst_3934_);
v_snd_3935_ = lean_ctor_get(v_a_3933_, 1);
lean_inc(v_snd_3935_);
lean_dec(v_a_3933_);
lean_inc_ref(v___x_3899_);
v___x_3936_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_3899_);
v_sz_3937_ = lean_array_size(v___x_3936_);
v___x_3938_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(v_fst_3934_, v___x_3936_, v_sz_3937_, v___x_3903_, v___x_3927_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec_ref(v___x_3936_);
lean_dec(v_fst_3934_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; lean_object* v_fst_3940_; lean_object* v_snd_3941_; lean_object* v___x_3942_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref_known(v___x_3938_, 1);
v_fst_3940_ = lean_ctor_get(v_a_3923_, 0);
lean_inc(v_fst_3940_);
v_snd_3941_ = lean_ctor_get(v_a_3923_, 1);
lean_inc(v_snd_3941_);
lean_dec(v_a_3923_);
v___x_3942_ = l_Lean_Meta_instantiateForall(v_snd_3941_, v_a_3939_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v_a_3943_; lean_object* v_snd_3944_; lean_object* v___x_3945_; lean_object* v___f_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; 
v_a_3943_ = lean_ctor_get(v___x_3942_, 0);
lean_inc(v_a_3943_);
lean_dec_ref_known(v___x_3942_, 1);
v_snd_3944_ = lean_ctor_get(v_snd_3935_, 1);
lean_inc(v_snd_3944_);
lean_dec(v_snd_3935_);
v___x_3945_ = lean_box_usize(v___x_3903_);
lean_inc(v___x_3907_);
v___f_3946_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3946_, 0, v___x_3907_);
lean_closure_set(v___f_3946_, 1, v_snd_3944_);
lean_closure_set(v___f_3946_, 2, v___x_3945_);
lean_closure_set(v___f_3946_, 3, v_a_3901_);
lean_closure_set(v___f_3946_, 4, v___x_3899_);
v___x_3947_ = l_Lean_mkAppN(v_fst_3940_, v_a_3939_);
lean_dec(v_a_3939_);
v___x_3948_ = lp_vampireReplay_Vampire_Reconstruct_elimParts(v_a_3943_, v___x_3905_, v___f_3946_, v___x_3947_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec(v_a_3943_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3972_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3951_ = v___x_3948_;
v_isShared_3952_ = v_isSharedCheck_3972_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3972_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3953_; lean_object* v___x_3955_; 
v___x_3953_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__6));
if (v_isShared_3952_ == 0)
{
lean_ctor_set_tag(v___x_3951_, 1);
lean_ctor_set(v___x_3951_, 0, v_a_3902_);
v___x_3955_ = v___x_3951_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3902_);
v___x_3955_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v___x_3956_ = lean_mk_empty_array_with_capacity(v___x_3907_);
lean_dec(v___x_3907_);
lean_inc_ref(v___x_3956_);
v___x_3957_ = lean_array_push(v___x_3956_, v___x_3955_);
v___x_3958_ = l_Lean_Meta_mkAppOptM(v___x_3953_, v___x_3957_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v_a_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; uint8_t v___x_3962_; lean_object* v___x_3963_; 
v_a_3959_ = lean_ctor_get(v___x_3958_, 0);
lean_inc(v_a_3959_);
lean_dec_ref_known(v___x_3958_, 1);
v___x_3960_ = lean_array_push(v___x_3956_, v_h_3909_);
v___x_3961_ = 0;
v___x_3962_ = 1;
v___x_3963_ = l_Lean_Meta_mkLambdaFVars(v___x_3960_, v_a_3949_, v___x_3961_, v___x_3908_, v___x_3961_, v___x_3908_, v___x_3962_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec_ref(v___x_3960_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v___x_3963_, 1);
v___x_3965_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_contradictionClause_spec__1___closed__11));
v___x_3966_ = lean_unsigned_to_nat(2u);
v___x_3967_ = lean_mk_empty_array_with_capacity(v___x_3966_);
v___x_3968_ = lean_array_push(v___x_3967_, v_a_3959_);
v___x_3969_ = lean_array_push(v___x_3968_, v_a_3964_);
v___x_3970_ = l_Lean_Meta_mkAppM(v___x_3965_, v___x_3969_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
return v___x_3970_;
}
else
{
lean_dec(v_a_3959_);
return v___x_3963_;
}
}
else
{
lean_dec_ref(v___x_3956_);
lean_dec(v_a_3949_);
lean_dec_ref(v_h_3909_);
return v___x_3958_;
}
}
}
}
else
{
lean_dec_ref(v_h_3909_);
lean_dec(v___x_3907_);
lean_dec_ref(v_a_3902_);
return v___x_3948_;
}
}
else
{
lean_dec(v_fst_3940_);
lean_dec(v_a_3939_);
lean_dec(v_snd_3935_);
lean_dec_ref(v_h_3909_);
lean_dec(v___x_3907_);
lean_dec(v___x_3905_);
lean_dec_ref(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec_ref(v___x_3899_);
return v___x_3942_;
}
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec(v_snd_3935_);
lean_dec(v_a_3923_);
lean_dec_ref(v_h_3909_);
lean_dec(v___x_3907_);
lean_dec(v___x_3905_);
lean_dec_ref(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec_ref(v___x_3899_);
v_a_3973_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3938_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3938_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec_ref(v___x_3927_);
lean_dec(v_a_3923_);
lean_dec_ref(v_h_3909_);
lean_dec(v___x_3907_);
lean_dec(v___x_3905_);
lean_dec_ref(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec_ref(v___x_3899_);
v_a_3981_ = lean_ctor_get(v___x_3932_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3932_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3932_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
else
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_dec_ref(v___x_3919_);
lean_dec_ref(v_h_3909_);
lean_dec(v___x_3907_);
lean_dec(v___x_3905_);
lean_dec(v___x_3904_);
lean_dec_ref(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec_ref(v___x_3899_);
v_a_3989_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3922_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3922_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1___boxed(lean_object** _args){
lean_object* v_snd_3997_ = _args[0];
lean_object* v___x_3998_ = _args[1];
lean_object* v_fst_3999_ = _args[2];
lean_object* v_a_4000_ = _args[3];
lean_object* v_a_4001_ = _args[4];
lean_object* v___x_4002_ = _args[5];
lean_object* v___x_4003_ = _args[6];
lean_object* v___x_4004_ = _args[7];
lean_object* v_a_4005_ = _args[8];
lean_object* v___x_4006_ = _args[9];
lean_object* v___x_4007_ = _args[10];
lean_object* v_h_4008_ = _args[11];
lean_object* v___y_4009_ = _args[12];
lean_object* v___y_4010_ = _args[13];
lean_object* v___y_4011_ = _args[14];
lean_object* v___y_4012_ = _args[15];
lean_object* v___y_4013_ = _args[16];
lean_object* v___y_4014_ = _args[17];
lean_object* v___y_4015_ = _args[18];
_start:
{
size_t v___x_134527__boxed_4016_; uint8_t v___x_134532__boxed_4017_; lean_object* v_res_4018_; 
v___x_134527__boxed_4016_ = lean_unbox_usize(v___x_4002_);
lean_dec(v___x_4002_);
v___x_134532__boxed_4017_ = lean_unbox(v___x_4007_);
v_res_4018_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1(v_snd_3997_, v___x_3998_, v_fst_3999_, v_a_4000_, v_a_4001_, v___x_134527__boxed_4016_, v___x_4003_, v___x_4004_, v_a_4005_, v___x_4006_, v___x_134532__boxed_4017_, v_h_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec_ref(v_a_4005_);
return v_res_4018_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4020_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__0));
v___x_4021_ = l_Lean_stringToMessageData(v___x_4020_);
return v___x_4021_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4023_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__2));
v___x_4024_ = l_Lean_stringToMessageData(v___x_4023_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg(size_t v_sz_4025_, size_t v_i_4026_, lean_object* v_bs_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
uint8_t v___x_4033_; 
v___x_4033_ = lean_usize_dec_lt(v_i_4026_, v_sz_4025_);
if (v___x_4033_ == 0)
{
lean_object* v___x_4034_; 
v___x_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4034_, 0, v_bs_4027_);
return v___x_4034_;
}
else
{
lean_object* v_v_4035_; lean_object* v___x_4036_; lean_object* v_bs_x27_4037_; lean_object* v_a_4039_; lean_object* v___x_4044_; 
v_v_4035_ = lean_array_uget(v_bs_4027_, v_i_4026_);
v___x_4036_ = lean_unsigned_to_nat(0u);
v_bs_x27_4037_ = lean_array_uset(v_bs_4027_, v_i_4026_, v___x_4036_);
v___x_4044_ = lp_vampireReplay_Vampire_Formula_name_x3f(v_v_4035_);
if (lean_obj_tag(v___x_4044_) == 1)
{
lean_object* v_val_4045_; 
lean_dec(v_v_4035_);
v_val_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_val_4045_);
lean_dec_ref_known(v___x_4044_, 1);
v_a_4039_ = v_val_4045_;
goto v___jp_4038_;
}
else
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
lean_dec(v___x_4044_);
v___x_4046_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__1);
v___x_4047_ = lp_vampireReplay_Vampire_Formula_render(v_v_4035_);
v___x_4048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
v___x_4049_ = l_Lean_MessageData_ofFormat(v___x_4048_);
v___x_4050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4050_, 0, v___x_4046_);
lean_ctor_set(v___x_4050_, 1, v___x_4049_);
v___x_4051_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___closed__3);
v___x_4052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4050_);
lean_ctor_set(v___x_4052_, 1, v___x_4051_);
v___x_4053_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4052_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4053_, 1);
v_a_4039_ = v_a_4054_;
goto v___jp_4038_;
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
lean_dec_ref(v_bs_x27_4037_);
v_a_4055_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4057_ = v___x_4053_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_4053_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4055_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
}
v___jp_4038_:
{
size_t v___x_4040_; size_t v___x_4041_; lean_object* v___x_4042_; 
v___x_4040_ = ((size_t)1ULL);
v___x_4041_ = lean_usize_add(v_i_4026_, v___x_4040_);
v___x_4042_ = lean_array_uset(v_bs_x27_4037_, v_i_4026_, v_a_4039_);
v_i_4026_ = v___x_4041_;
v_bs_4027_ = v___x_4042_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg___boxed(lean_object* v_sz_4063_, lean_object* v_i_4064_, lean_object* v_bs_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
size_t v_sz_boxed_4071_; size_t v_i_boxed_4072_; lean_object* v_res_4073_; 
v_sz_boxed_4071_ = lean_unbox_usize(v_sz_4063_);
lean_dec(v_sz_4063_);
v_i_boxed_4072_ = lean_unbox_usize(v_i_4064_);
lean_dec(v_i_4064_);
v_res_4073_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg(v_sz_boxed_4071_, v_i_boxed_4072_, v_bs_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg(lean_object* v_as_4077_, size_t v_sz_4078_, size_t v_i_4079_, lean_object* v_b_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
uint8_t v___x_4086_; 
v___x_4086_ = lean_usize_dec_lt(v_i_4079_, v_sz_4078_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4087_; 
v___x_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4087_, 0, v_b_4080_);
return v___x_4087_;
}
else
{
lean_object* v_a_4088_; lean_object* v___x_4089_; 
lean_dec_ref(v_b_4080_);
v_a_4088_ = lean_array_uget_borrowed(v_as_4077_, v_i_4079_);
v___x_4089_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_a_4088_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4108_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4092_ = v___x_4089_;
v_isShared_4093_ = v_isSharedCheck_4108_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_a_4090_);
lean_dec(v___x_4089_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4108_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v_a_4095_; lean_object* v___x_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; 
v___x_4099_ = lean_box(0);
v___x_4100_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___closed__0));
v___x_4101_ = lean_unbox(v_a_4090_);
lean_dec(v_a_4090_);
if (v___x_4101_ == 12)
{
lean_object* v___x_4102_; 
v___x_4102_ = lp_vampireReplay_Vampire_Formula_name_x3f(v_a_4088_);
if (lean_obj_tag(v___x_4102_) == 1)
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4106_; 
v___x_4103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4102_);
v___x_4104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
lean_ctor_set(v___x_4104_, 1, v___x_4099_);
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 0, v___x_4104_);
v___x_4106_ = v___x_4092_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v___x_4104_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
else
{
lean_dec(v___x_4102_);
lean_del_object(v___x_4092_);
v_a_4095_ = v___x_4100_;
goto v___jp_4094_;
}
}
else
{
lean_del_object(v___x_4092_);
v_a_4095_ = v___x_4100_;
goto v___jp_4094_;
}
v___jp_4094_:
{
size_t v___x_4096_; size_t v___x_4097_; 
v___x_4096_ = ((size_t)1ULL);
v___x_4097_ = lean_usize_add(v_i_4079_, v___x_4096_);
lean_inc_ref(v_a_4095_);
v_i_4079_ = v___x_4097_;
v_b_4080_ = v_a_4095_;
goto _start;
}
}
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
v_a_4109_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4089_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4089_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___boxed(lean_object* v_as_4117_, lean_object* v_sz_4118_, lean_object* v_i_4119_, lean_object* v_b_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
size_t v_sz_boxed_4126_; size_t v_i_boxed_4127_; lean_object* v_res_4128_; 
v_sz_boxed_4126_ = lean_unbox_usize(v_sz_4118_);
lean_dec(v_sz_4118_);
v_i_boxed_4127_ = lean_unbox_usize(v_i_4119_);
lean_dec(v_i_4119_);
v_res_4128_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg(v_as_4117_, v_sz_boxed_4126_, v_i_boxed_4127_, v_b_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec_ref(v_as_4117_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2(lean_object* v___x_4131_, lean_object* v_as_4132_, size_t v_sz_4133_, size_t v_i_4134_, lean_object* v_b_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v_a_4144_; uint8_t v___x_4148_; 
v___x_4148_ = lean_usize_dec_lt(v_i_4134_, v_sz_4133_);
if (v___x_4148_ == 0)
{
lean_object* v___x_4149_; 
lean_dec_ref(v___x_4131_);
v___x_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4149_, 0, v_b_4135_);
return v___x_4149_;
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4151_; 
v_a_4150_ = lean_array_uget_borrowed(v_as_4132_, v_i_4134_);
lean_inc(v_a_4150_);
v___x_4151_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_a_4150_);
if (lean_obj_tag(v___x_4151_) == 1)
{
lean_object* v_val_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; size_t v_sz_4155_; size_t v___x_4156_; lean_object* v___x_4157_; 
v_val_4152_ = lean_ctor_get(v___x_4151_, 0);
lean_inc(v_val_4152_);
lean_dec_ref_known(v___x_4151_, 1);
v___x_4153_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_4152_);
v___x_4154_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg___closed__0));
v_sz_4155_ = lean_array_size(v___x_4153_);
v___x_4156_ = ((size_t)0ULL);
v___x_4157_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg(v___x_4153_, v_sz_4155_, v___x_4156_, v___x_4154_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
lean_dec_ref(v___x_4153_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_object* v_a_4158_; lean_object* v_fst_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4183_; 
v_a_4158_ = lean_ctor_get(v___x_4157_, 0);
lean_inc(v_a_4158_);
lean_dec_ref_known(v___x_4157_, 1);
v_fst_4159_ = lean_ctor_get(v_a_4158_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_a_4158_);
if (v_isSharedCheck_4183_ == 0)
{
lean_object* v_unused_4184_; 
v_unused_4184_ = lean_ctor_get(v_a_4158_, 1);
lean_dec(v_unused_4184_);
v___x_4161_ = v_a_4158_;
v_isShared_4162_ = v_isSharedCheck_4183_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_fst_4159_);
lean_dec(v_a_4158_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4183_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
if (lean_obj_tag(v_fst_4159_) == 0)
{
lean_del_object(v___x_4161_);
v_a_4144_ = v_b_4135_;
goto v___jp_4143_;
}
else
{
lean_object* v_val_4163_; 
v_val_4163_ = lean_ctor_get(v_fst_4159_, 0);
lean_inc(v_val_4163_);
lean_dec_ref_known(v_fst_4159_, 1);
if (lean_obj_tag(v_val_4163_) == 1)
{
lean_object* v_val_4164_; lean_object* v___x_4165_; lean_object* v___y_4167_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; uint8_t v___x_4177_; 
v_val_4164_ = lean_ctor_get(v_val_4163_, 0);
lean_inc(v_val_4164_);
lean_dec_ref_known(v_val_4163_, 1);
v___x_4165_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_4131_);
v___x_4174_ = lp_vampireReplay_Vampire_Unit_premiseUses(v___x_4131_);
v___x_4175_ = lean_array_get_size(v___x_4174_);
v___x_4176_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___closed__0));
v___x_4177_ = lean_nat_dec_lt(v___x_4165_, v___x_4175_);
if (v___x_4177_ == 0)
{
lean_dec_ref(v___x_4174_);
v___y_4167_ = v___x_4176_;
goto v___jp_4166_;
}
else
{
uint8_t v___x_4178_; 
v___x_4178_ = lean_nat_dec_le(v___x_4175_, v___x_4175_);
if (v___x_4178_ == 0)
{
if (v___x_4177_ == 0)
{
lean_dec_ref(v___x_4174_);
v___y_4167_ = v___x_4176_;
goto v___jp_4166_;
}
else
{
size_t v___x_4179_; lean_object* v___x_4180_; 
v___x_4179_ = lean_usize_of_nat(v___x_4175_);
v___x_4180_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v_a_4150_, v___x_4174_, v___x_4156_, v___x_4179_, v___x_4176_);
lean_dec_ref(v___x_4174_);
v___y_4167_ = v___x_4180_;
goto v___jp_4166_;
}
}
else
{
size_t v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_usize_of_nat(v___x_4175_);
v___x_4182_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v_a_4150_, v___x_4174_, v___x_4156_, v___x_4181_, v___x_4176_);
lean_dec_ref(v___x_4174_);
v___y_4167_ = v___x_4182_;
goto v___jp_4166_;
}
}
v___jp_4166_:
{
lean_object* v___x_4168_; uint8_t v___x_4169_; 
v___x_4168_ = lean_array_get_size(v___y_4167_);
v___x_4169_ = lean_nat_dec_eq(v___x_4168_, v___x_4165_);
if (v___x_4169_ == 0)
{
lean_object* v___x_4171_; 
lean_inc(v_a_4150_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 1, v___y_4167_);
lean_ctor_set(v___x_4161_, 0, v_a_4150_);
v___x_4171_ = v___x_4161_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4150_);
lean_ctor_set(v_reuseFailAlloc_4173_, 1, v___y_4167_);
v___x_4171_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
lean_object* v___x_4172_; 
v___x_4172_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_b_4135_, v_val_4164_, v___x_4171_);
v_a_4144_ = v___x_4172_;
goto v___jp_4143_;
}
}
else
{
lean_dec_ref(v___y_4167_);
lean_dec(v_val_4164_);
lean_del_object(v___x_4161_);
v_a_4144_ = v_b_4135_;
goto v___jp_4143_;
}
}
}
else
{
lean_dec(v_val_4163_);
lean_del_object(v___x_4161_);
v_a_4144_ = v_b_4135_;
goto v___jp_4143_;
}
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec_ref(v_b_4135_);
lean_dec_ref(v___x_4131_);
v_a_4185_ = lean_ctor_get(v___x_4157_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4157_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4157_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4157_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
else
{
lean_dec(v___x_4151_);
v_a_4144_ = v_b_4135_;
goto v___jp_4143_;
}
}
v___jp_4143_:
{
size_t v___x_4145_; size_t v___x_4146_; 
v___x_4145_ = ((size_t)1ULL);
v___x_4146_ = lean_usize_add(v_i_4134_, v___x_4145_);
v_i_4134_ = v___x_4146_;
v_b_4135_ = v_a_4144_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2___boxed(lean_object* v___x_4193_, lean_object* v_as_4194_, lean_object* v_sz_4195_, lean_object* v_i_4196_, lean_object* v_b_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_){
_start:
{
size_t v_sz_boxed_4205_; size_t v_i_boxed_4206_; lean_object* v_res_4207_; 
v_sz_boxed_4205_ = lean_unbox_usize(v_sz_4195_);
lean_dec(v_sz_4195_);
v_i_boxed_4206_ = lean_unbox_usize(v_i_4196_);
lean_dec(v_i_4196_);
v_res_4207_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2(v___x_4193_, v_as_4194_, v_sz_boxed_4205_, v_i_boxed_4206_, v_b_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_, v___y_4203_);
lean_dec(v___y_4203_);
lean_dec_ref(v___y_4202_);
lean_dec(v___y_4201_);
lean_dec_ref(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec_ref(v_as_4194_);
return v_res_4207_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1(void){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__0));
v___x_4210_ = l_Lean_stringToMessageData(v___x_4209_);
return v___x_4210_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3(void){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4212_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__2));
v___x_4213_ = l_Lean_stringToMessageData(v___x_4212_);
return v___x_4213_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause(lean_object* v_step_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_unit_4224_; lean_object* v_premises_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; uint8_t v___x_4228_; 
v_unit_4224_ = lean_ctor_get(v_step_4216_, 0);
lean_inc_ref(v_unit_4224_);
v_premises_4225_ = lean_ctor_get(v_step_4216_, 1);
v___x_4226_ = lean_unsigned_to_nat(0u);
v___x_4227_ = lean_array_get_size(v_premises_4225_);
v___x_4228_ = lean_nat_dec_lt(v___x_4226_, v___x_4227_);
if (v___x_4228_ == 0)
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
lean_dec_ref(v_unit_4224_);
lean_dec_ref(v_step_4216_);
v___x_4229_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1);
v___x_4230_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4229_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
return v___x_4230_;
}
else
{
lean_object* v___x_4231_; lean_object* v_fst_4232_; lean_object* v_snd_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; uint8_t v___x_4236_; 
v___x_4231_ = lean_array_fget_borrowed(v_premises_4225_, v___x_4226_);
v_fst_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_fst_4232_);
v_snd_4233_ = lean_ctor_get(v___x_4231_, 1);
lean_inc(v_snd_4233_);
lean_inc_ref(v_unit_4224_);
v___x_4234_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_4224_);
v___x_4235_ = lean_array_get_size(v___x_4234_);
v___x_4236_ = lean_nat_dec_lt(v___x_4226_, v___x_4235_);
if (v___x_4236_ == 0)
{
lean_object* v___x_4237_; lean_object* v___x_4238_; 
lean_dec_ref(v___x_4234_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
lean_dec_ref(v_unit_4224_);
lean_dec_ref(v_step_4216_);
v___x_4237_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__1);
v___x_4238_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4237_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
return v___x_4238_;
}
else
{
lean_object* v___x_4239_; 
lean_inc_ref(v_unit_4224_);
v___x_4239_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_unit_4224_);
if (lean_obj_tag(v___x_4239_) == 1)
{
lean_object* v_val_4240_; lean_object* v___x_4241_; 
v_val_4240_ = lean_ctor_get(v___x_4239_, 0);
lean_inc(v_val_4240_);
lean_dec_ref_known(v___x_4239_, 1);
v___x_4241_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_val_4240_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4243_; lean_object* v___y_4245_; uint8_t v___x_4286_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
lean_inc(v_a_4242_);
lean_dec_ref_known(v___x_4241_, 1);
v___x_4243_ = lean_array_fget(v___x_4234_, v___x_4226_);
v___x_4286_ = lean_unbox(v_a_4242_);
lean_dec(v_a_4242_);
if (v___x_4286_ == 2)
{
if (v___x_4236_ == 0)
{
goto v___jp_4282_;
}
else
{
lean_object* v___x_4287_; 
v___x_4287_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_4240_);
v___y_4245_ = v___x_4287_;
goto v___jp_4244_;
}
}
else
{
goto v___jp_4282_;
}
v___jp_4244_:
{
size_t v_sz_4246_; size_t v___x_4247_; lean_object* v___x_4248_; 
v_sz_4246_ = lean_array_size(v___y_4245_);
v___x_4247_ = ((size_t)0ULL);
v___x_4248_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg(v_sz_4246_, v___x_4247_, v___y_4245_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
if (lean_obj_tag(v___x_4248_) == 0)
{
lean_object* v_a_4249_; lean_object* v___x_4250_; 
v_a_4249_ = lean_ctor_get(v___x_4248_, 0);
lean_inc(v_a_4249_);
lean_dec_ref_known(v___x_4248_, 1);
v___x_4250_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_4216_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_object* v_a_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; size_t v_sz_4256_; lean_object* v___x_4257_; 
v_a_4251_ = lean_ctor_get(v___x_4250_, 0);
lean_inc(v_a_4251_);
lean_dec_ref_known(v___x_4250_, 1);
v___x_4252_ = lean_unsigned_to_nat(16u);
v___x_4253_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClause___lam__0___closed__1);
v___x_4254_ = lean_unsigned_to_nat(1u);
v___x_4255_ = l_Array_extract___redArg(v___x_4234_, v___x_4254_, v___x_4235_);
lean_dec_ref(v___x_4234_);
v_sz_4256_ = lean_array_size(v___x_4255_);
v___x_4257_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__2(v_unit_4224_, v___x_4255_, v_sz_4256_, v___x_4247_, v___x_4253_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
lean_dec_ref(v___x_4255_);
if (lean_obj_tag(v___x_4257_) == 0)
{
lean_object* v_a_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___f_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; 
v_a_4258_ = lean_ctor_get(v___x_4257_, 0);
lean_inc(v_a_4258_);
lean_dec_ref_known(v___x_4257_, 1);
v___x_4259_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed__const__1));
v___x_4260_ = lean_box(v___x_4236_);
lean_inc(v_a_4251_);
v___f_4261_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___lam__1___boxed), 19, 11);
lean_closure_set(v___f_4261_, 0, v_snd_4233_);
lean_closure_set(v___f_4261_, 1, v___x_4243_);
lean_closure_set(v___f_4261_, 2, v_fst_4232_);
lean_closure_set(v___f_4261_, 3, v_a_4249_);
lean_closure_set(v___f_4261_, 4, v_a_4251_);
lean_closure_set(v___f_4261_, 5, v___x_4259_);
lean_closure_set(v___f_4261_, 6, v___x_4252_);
lean_closure_set(v___f_4261_, 7, v___x_4226_);
lean_closure_set(v___f_4261_, 8, v_a_4258_);
lean_closure_set(v___f_4261_, 9, v___x_4254_);
lean_closure_set(v___f_4261_, 10, v___x_4260_);
v___x_4262_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__5));
v___x_4263_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_contradictionClause___closed__8);
v___x_4264_ = l_Lean_Expr_app___override(v___x_4263_, v_a_4251_);
v___x_4265_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4262_, v___x_4264_, v___f_4261_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
return v___x_4265_;
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec(v_a_4251_);
lean_dec(v_a_4249_);
lean_dec(v___x_4243_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
v_a_4266_ = lean_ctor_get(v___x_4257_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4257_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4257_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4257_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_dec(v_a_4249_);
lean_dec(v___x_4243_);
lean_dec_ref(v___x_4234_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
lean_dec_ref(v_unit_4224_);
return v___x_4250_;
}
}
else
{
lean_object* v_a_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4281_; 
lean_dec(v___x_4243_);
lean_dec_ref(v___x_4234_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
lean_dec_ref(v_unit_4224_);
lean_dec_ref(v_step_4216_);
v_a_4274_ = lean_ctor_get(v___x_4248_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4276_ = v___x_4248_;
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_a_4274_);
lean_dec(v___x_4248_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4281_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4279_; 
if (v_isShared_4277_ == 0)
{
v___x_4279_ = v___x_4276_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v_a_4274_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
v___jp_4282_:
{
lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
v___x_4283_ = lean_unsigned_to_nat(1u);
v___x_4284_ = lean_mk_empty_array_with_capacity(v___x_4283_);
v___x_4285_ = lean_array_push(v___x_4284_, v_val_4240_);
v___y_4245_ = v___x_4285_;
goto v___jp_4244_;
}
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4295_; 
lean_dec(v_val_4240_);
lean_dec_ref(v___x_4234_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
lean_dec_ref(v_unit_4224_);
lean_dec_ref(v_step_4216_);
v_a_4288_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4290_ = v___x_4241_;
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_a_4288_);
lean_dec(v___x_4241_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4295_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v___x_4293_; 
if (v_isShared_4291_ == 0)
{
v___x_4293_ = v___x_4290_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_a_4288_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
}
else
{
lean_object* v___x_4296_; lean_object* v___x_4297_; 
lean_dec(v___x_4239_);
lean_dec_ref(v___x_4234_);
lean_dec(v_snd_4233_);
lean_dec(v_fst_4232_);
lean_dec_ref(v_unit_4224_);
lean_dec_ref(v_step_4216_);
v___x_4296_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___closed__3);
v___x_4297_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4296_, v_a_4219_, v_a_4220_, v_a_4221_, v_a_4222_);
return v___x_4297_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause___boxed(lean_object* v_step_4298_, lean_object* v_a_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_){
_start:
{
lean_object* v_res_4306_; 
v_res_4306_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_splitClause(v_step_4298_, v_a_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_, v_a_4304_);
lean_dec(v_a_4304_);
lean_dec_ref(v_a_4303_);
lean_dec(v_a_4302_);
lean_dec_ref(v_a_4301_);
lean_dec(v_a_4300_);
lean_dec_ref(v_a_4299_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0(size_t v_sz_4307_, size_t v_i_4308_, lean_object* v_bs_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
lean_object* v___x_4317_; 
v___x_4317_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___redArg(v_sz_4307_, v_i_4308_, v_bs_4309_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0___boxed(lean_object* v_sz_4318_, lean_object* v_i_4319_, lean_object* v_bs_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_){
_start:
{
size_t v_sz_boxed_4328_; size_t v_i_boxed_4329_; lean_object* v_res_4330_; 
v_sz_boxed_4328_ = lean_unbox_usize(v_sz_4318_);
lean_dec(v_sz_4318_);
v_i_boxed_4329_ = lean_unbox_usize(v_i_4319_);
lean_dec(v_i_4319_);
v_res_4330_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Avatar_splitClause_spec__0(v_sz_boxed_4328_, v_i_boxed_4329_, v_bs_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
lean_dec(v___y_4326_);
lean_dec_ref(v___y_4325_);
lean_dec(v___y_4324_);
lean_dec_ref(v___y_4323_);
lean_dec(v___y_4322_);
lean_dec_ref(v___y_4321_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1(lean_object* v_as_4331_, size_t v_sz_4332_, size_t v_i_4333_, lean_object* v_b_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___redArg(v_as_4331_, v_sz_4332_, v_i_4333_, v_b_4334_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1___boxed(lean_object* v_as_4343_, lean_object* v_sz_4344_, lean_object* v_i_4345_, lean_object* v_b_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
size_t v_sz_boxed_4354_; size_t v_i_boxed_4355_; lean_object* v_res_4356_; 
v_sz_boxed_4354_ = lean_unbox_usize(v_sz_4344_);
lean_dec(v_sz_4344_);
v_i_boxed_4355_ = lean_unbox_usize(v_i_4345_);
lean_dec(v_i_4345_);
v_res_4356_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__1(v_as_4343_, v_sz_boxed_4354_, v_i_boxed_4355_, v_b_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec_ref(v_as_4343_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5(uint8_t v___x_4357_, lean_object* v_as_4358_, size_t v_sz_4359_, size_t v_i_4360_, lean_object* v_b_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_){
_start:
{
lean_object* v___x_4369_; 
v___x_4369_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___redArg(v___x_4357_, v_as_4358_, v_sz_4359_, v_i_4360_, v_b_4361_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
return v___x_4369_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5___boxed(lean_object* v___x_4370_, lean_object* v_as_4371_, lean_object* v_sz_4372_, lean_object* v_i_4373_, lean_object* v_b_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_){
_start:
{
uint8_t v___x_135260__boxed_4382_; size_t v_sz_boxed_4383_; size_t v_i_boxed_4384_; lean_object* v_res_4385_; 
v___x_135260__boxed_4382_ = lean_unbox(v___x_4370_);
v_sz_boxed_4383_ = lean_unbox_usize(v_sz_4372_);
lean_dec(v_sz_4372_);
v_i_boxed_4384_ = lean_unbox_usize(v_i_4373_);
lean_dec(v_i_4373_);
v_res_4385_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__5(v___x_135260__boxed_4382_, v_as_4371_, v_sz_boxed_4383_, v_i_boxed_4384_, v_b_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec_ref(v_as_4371_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9(lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_as_4388_, size_t v_sz_4389_, size_t v_i_4390_, lean_object* v_b_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_){
_start:
{
lean_object* v___x_4399_; 
v___x_4399_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___redArg(v_a_4386_, v_a_4387_, v_as_4388_, v_sz_4389_, v_i_4390_, v_b_4391_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_);
return v___x_4399_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9___boxed(lean_object* v_a_4400_, lean_object* v_a_4401_, lean_object* v_as_4402_, lean_object* v_sz_4403_, lean_object* v_i_4404_, lean_object* v_b_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_){
_start:
{
size_t v_sz_boxed_4413_; size_t v_i_boxed_4414_; lean_object* v_res_4415_; 
v_sz_boxed_4413_ = lean_unbox_usize(v_sz_4403_);
lean_dec(v_sz_4403_);
v_i_boxed_4414_ = lean_unbox_usize(v_i_4404_);
lean_dec(v_i_4404_);
v_res_4415_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__9(v_a_4400_, v_a_4401_, v_as_4402_, v_sz_boxed_4413_, v_i_boxed_4414_, v_b_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_);
lean_dec(v___y_4411_);
lean_dec_ref(v___y_4410_);
lean_dec(v___y_4409_);
lean_dec_ref(v___y_4408_);
lean_dec(v___y_4407_);
lean_dec_ref(v___y_4406_);
lean_dec_ref(v_as_4402_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg(lean_object* v_as_4416_, size_t v_sz_4417_, size_t v_i_4418_, lean_object* v_b_4419_){
_start:
{
uint8_t v___x_4421_; 
v___x_4421_ = lean_usize_dec_lt(v_i_4418_, v_sz_4417_);
if (v___x_4421_ == 0)
{
lean_object* v___x_4422_; 
v___x_4422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4422_, 0, v_b_4419_);
return v___x_4422_;
}
else
{
lean_object* v_a_4423_; lean_object* v_fst_4424_; lean_object* v_snd_4425_; uint32_t v___x_4426_; lean_object* v___x_4427_; size_t v___x_4428_; size_t v___x_4429_; 
v_a_4423_ = lean_array_uget_borrowed(v_as_4416_, v_i_4418_);
v_fst_4424_ = lean_ctor_get(v_a_4423_, 0);
v_snd_4425_ = lean_ctor_get(v_a_4423_, 1);
v___x_4426_ = lp_vampireReplay_Vampire_Unit_number(v_fst_4424_);
lean_inc(v_snd_4425_);
v___x_4427_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_4419_, v___x_4426_, v_snd_4425_);
v___x_4428_ = ((size_t)1ULL);
v___x_4429_ = lean_usize_add(v_i_4418_, v___x_4428_);
v_i_4418_ = v___x_4429_;
v_b_4419_ = v___x_4427_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg___boxed(lean_object* v_as_4431_, lean_object* v_sz_4432_, lean_object* v_i_4433_, lean_object* v_b_4434_, lean_object* v___y_4435_){
_start:
{
size_t v_sz_boxed_4436_; size_t v_i_boxed_4437_; lean_object* v_res_4438_; 
v_sz_boxed_4436_ = lean_unbox_usize(v_sz_4432_);
lean_dec(v_sz_4432_);
v_i_boxed_4437_ = lean_unbox_usize(v_i_4433_);
lean_dec(v_i_4433_);
v_res_4438_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg(v_as_4431_, v_sz_boxed_4436_, v_i_boxed_4437_, v_b_4434_);
lean_dec_ref(v_as_4431_);
return v_res_4438_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1(void){
_start:
{
lean_object* v___x_4441_; lean_object* v_origins_4442_; lean_object* v___x_4443_; 
v___x_4441_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__0));
v_origins_4442_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4);
v___x_4443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4443_, 0, v_origins_4442_);
lean_ctor_set(v___x_4443_, 1, v___x_4441_);
return v___x_4443_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3(void){
_start:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4445_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__2));
v___x_4446_ = l_Lean_stringToMessageData(v___x_4445_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation(lean_object* v_step_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_){
_start:
{
lean_object* v_unit_4455_; lean_object* v_premises_4456_; lean_object* v___x_4457_; 
v_unit_4455_ = lean_ctor_get(v_step_4447_, 0);
lean_inc_ref_n(v_unit_4455_, 2);
v_premises_4456_ = lean_ctor_get(v_step_4447_, 1);
lean_inc_ref(v_premises_4456_);
lean_dec_ref(v_step_4447_);
v___x_4457_ = lp_vampireReplay_Vampire_Unit_satPremise_x3f(v_unit_4455_);
if (lean_obj_tag(v___x_4457_) == 1)
{
lean_object* v_val_4458_; lean_object* v___x_4459_; lean_object* v_origins_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; size_t v_sz_4463_; size_t v___x_4464_; lean_object* v___x_4465_; 
v_val_4458_ = lean_ctor_get(v___x_4457_, 0);
lean_inc(v_val_4458_);
lean_dec_ref_known(v___x_4457_, 1);
v___x_4459_ = lean_unsigned_to_nat(0u);
v_origins_4460_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_splitClause_spec__8_spec__9___closed__4);
v___x_4461_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_4455_);
v___x_4462_ = l_Array_zip___redArg(v___x_4461_, v_premises_4456_);
lean_dec_ref(v_premises_4456_);
lean_dec_ref(v___x_4461_);
v_sz_4463_ = lean_array_size(v___x_4462_);
v___x_4464_ = ((size_t)0ULL);
v___x_4465_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg(v___x_4462_, v_sz_4463_, v___x_4464_, v_origins_4460_);
lean_dec_ref(v___x_4462_);
if (lean_obj_tag(v___x_4465_) == 0)
{
lean_object* v_a_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v_snd_4470_; lean_object* v_snd_4471_; lean_object* v___x_4472_; 
v_a_4466_ = lean_ctor_get(v___x_4465_, 0);
lean_inc(v_a_4466_);
lean_dec_ref_known(v___x_4465_, 1);
v___x_4467_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__0));
v___x_4468_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__1);
v___x_4469_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder(v_val_4458_, v___x_4468_);
v_snd_4470_ = lean_ctor_get(v___x_4469_, 1);
lean_inc(v_snd_4470_);
lean_dec_ref(v___x_4469_);
v_snd_4471_ = lean_ctor_get(v_snd_4470_, 1);
lean_inc(v_snd_4471_);
lean_dec(v_snd_4470_);
v___x_4472_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satBound(v_a_4466_, v_snd_4471_, v___x_4459_, v_origins_4460_, v_origins_4460_, v___x_4467_, v_a_4448_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_);
return v___x_4472_;
}
else
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4480_; 
lean_dec(v_val_4458_);
v_a_4473_ = lean_ctor_get(v___x_4465_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4465_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4475_ = v___x_4465_;
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4465_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___x_4478_; 
if (v_isShared_4476_ == 0)
{
v___x_4478_ = v___x_4475_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
return v___x_4478_;
}
}
}
}
else
{
lean_object* v___x_4481_; lean_object* v___x_4482_; 
lean_dec(v___x_4457_);
lean_dec_ref(v_premises_4456_);
lean_dec_ref(v_unit_4455_);
v___x_4481_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___closed__3);
v___x_4482_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4481_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_);
return v___x_4482_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation___boxed(lean_object* v_step_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_, lean_object* v_a_4486_, lean_object* v_a_4487_, lean_object* v_a_4488_, lean_object* v_a_4489_, lean_object* v_a_4490_){
_start:
{
lean_object* v_res_4491_; 
v_res_4491_ = lp_vampireReplay_Vampire_Reconstruct_Avatar_refutation(v_step_4483_, v_a_4484_, v_a_4485_, v_a_4486_, v_a_4487_, v_a_4488_, v_a_4489_);
lean_dec(v_a_4489_);
lean_dec_ref(v_a_4488_);
lean_dec(v_a_4487_);
lean_dec_ref(v_a_4486_);
lean_dec(v_a_4485_);
lean_dec_ref(v_a_4484_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0(lean_object* v_as_4492_, size_t v_sz_4493_, size_t v_i_4494_, lean_object* v_b_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v___x_4503_; 
v___x_4503_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___redArg(v_as_4492_, v_sz_4493_, v_i_4494_, v_b_4495_);
return v___x_4503_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0___boxed(lean_object* v_as_4504_, lean_object* v_sz_4505_, lean_object* v_i_4506_, lean_object* v_b_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_){
_start:
{
size_t v_sz_boxed_4515_; size_t v_i_boxed_4516_; lean_object* v_res_4517_; 
v_sz_boxed_4515_ = lean_unbox_usize(v_sz_4505_);
lean_dec(v_sz_4505_);
v_i_boxed_4516_ = lean_unbox_usize(v_i_4506_);
lean_dec(v_i_4506_);
v_res_4517_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Avatar_refutation_spec__0(v_as_4504_, v_sz_boxed_4515_, v_i_boxed_4516_, v_b_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_, v___y_4512_, v___y_4513_);
lean_dec(v___y_4513_);
lean_dec_ref(v___y_4512_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec_ref(v_as_4504_);
return v_res_4517_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Avatar(uint8_t builtin) {
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
