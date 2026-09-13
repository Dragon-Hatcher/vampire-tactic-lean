// Lean compiler output
// Module: VampireReplay.Reconstruct.Step
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Carry public import VampireReplay.Reconstruct.Equiv
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_boundVarSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(uint32_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junctionParts(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at___00Lean_Server_FileWorker_waitUnknownIdentifierRanges_spec__2(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carrying(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_premiseUses(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_namedFormula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_clause(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_splits(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_implies(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_InferenceRule_name(uint8_t);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLogConfig_fromJson_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "step "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = " is neither a clause nor a formula"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_instantiateAt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_instantiateAt___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " holds under `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` but states        "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coreOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coreOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = " has no premise in position "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " did not record how it used step "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__4_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__5_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "absurd"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__6_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 22, 196, 124, 199, 219, 238, 136)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__7_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3(uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "the literal"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nis neither among"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "\nnor refutable on its own"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed(lean_object**);
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_relateLiterals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_unimplemented(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_unimplemented___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___redArg(lean_object* v_u_1_, lean_object* v_k_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v_symbols_10_; lean_object* v_proof_11_; uint32_t v_flipped_12_; lean_object* v_givens_13_; uint8_t v_checkSteps_14_; lean_object* v_contradiction_15_; lean_object* v_rearranged_16_; uint8_t v___y_18_; uint32_t v___x_21_; uint8_t v___x_22_; 
v_symbols_10_ = lean_ctor_get(v_a_3_, 0);
v_proof_11_ = lean_ctor_get(v_a_3_, 1);
v_flipped_12_ = lean_ctor_get_uint32(v_a_3_, sizeof(void*)*5);
v_givens_13_ = lean_ctor_get(v_a_3_, 2);
v_checkSteps_14_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*5 + 5);
v_contradiction_15_ = lean_ctor_get(v_a_3_, 3);
v_rearranged_16_ = lean_ctor_get(v_a_3_, 4);
v___x_21_ = 0;
v___x_22_ = lean_uint32_dec_eq(v_flipped_12_, v___x_21_);
if (v___x_22_ == 0)
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = lp_vampireReplay_Vampire_Unit_number(v_u_1_);
v___x_24_ = lean_uint32_dec_le(v_flipped_12_, v___x_23_);
v___y_18_ = v___x_24_;
goto v___jp_17_;
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 0;
v___y_18_ = v___x_25_;
goto v___jp_17_;
}
v___jp_17_:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
lean_inc_ref(v_rearranged_16_);
lean_inc_ref(v_contradiction_15_);
lean_inc_ref(v_givens_13_);
lean_inc_ref(v_proof_11_);
lean_inc_ref(v_symbols_10_);
v___x_19_ = lean_alloc_ctor(0, 5, 6);
lean_ctor_set(v___x_19_, 0, v_symbols_10_);
lean_ctor_set(v___x_19_, 1, v_proof_11_);
lean_ctor_set(v___x_19_, 2, v_givens_13_);
lean_ctor_set(v___x_19_, 3, v_contradiction_15_);
lean_ctor_set(v___x_19_, 4, v_rearranged_16_);
lean_ctor_set_uint32(v___x_19_, sizeof(void*)*5, v_flipped_12_);
lean_ctor_set_uint8(v___x_19_, sizeof(void*)*5 + 4, v___y_18_);
lean_ctor_set_uint8(v___x_19_, sizeof(void*)*5 + 5, v_checkSteps_14_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
v___x_20_ = lean_apply_7(v_k_2_, v___x_19_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, lean_box(0));
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___redArg___boxed(lean_object* v_u_26_, lean_object* v_k_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_u_26_, v_k_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
lean_dec(v_a_29_);
lean_dec_ref(v_a_28_);
lean_dec_ref(v_u_26_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading(lean_object* v_00_u03b1_36_, lean_object* v_u_37_, lean_object* v_k_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_u_37_, v_k_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___boxed(lean_object* v_00_u03b1_47_, lean_object* v_u_48_, lean_object* v_k_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = lp_vampireReplay_Vampire_Reconstruct_reading(v_00_u03b1_47_, v_u_48_, v_k_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
lean_dec(v_a_51_);
lean_dec_ref(v_a_50_);
lean_dec_ref(v_u_48_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0(lean_object* v_val_58_, lean_object* v_vars_59_, lean_object* v_locals_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lp_vampireReplay_Vampire_Reconstruct_clause(v_vars_59_, v_val_58_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; uint8_t v___x_70_; uint8_t v___x_71_; uint8_t v___x_72_; lean_object* v___x_73_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
v___x_70_ = 0;
v___x_71_ = 1;
v___x_72_ = 1;
v___x_73_ = l_Lean_Meta_mkForallFVars(v_locals_60_, v_a_69_, v___x_70_, v___x_71_, v___x_71_, v___x_72_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_73_;
}
else
{
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0___boxed(lean_object* v_val_74_, lean_object* v_vars_75_, lean_object* v_locals_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0(v_val_74_, v_vars_75_, v_locals_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
lean_dec_ref(v_locals_76_);
lean_dec_ref(v_vars_75_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0(lean_object* v_as_85_, size_t v_sz_86_, size_t v_i_87_, lean_object* v_b_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
uint8_t v___x_96_; 
v___x_96_ = lean_usize_dec_lt(v_i_87_, v_sz_86_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_b_88_);
return v___x_97_;
}
else
{
lean_object* v_a_98_; lean_object* v___x_99_; 
v_a_98_ = lean_array_uget_borrowed(v_as_85_, v_i_87_);
lean_inc(v_a_98_);
v___x_99_ = lp_vampireReplay_Vampire_Reconstruct_namedFormula(v_a_98_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_101_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
lean_dec_ref_known(v___x_99_, 1);
v___x_101_ = l_Lean_mkArrow(v_a_100_, v_b_88_, v___y_93_, v___y_94_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; size_t v___x_103_; size_t v___x_104_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_101_, 1);
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_87_, v___x_103_);
v_i_87_ = v___x_104_;
v_b_88_ = v_a_102_;
goto _start;
}
else
{
return v___x_101_;
}
}
else
{
lean_dec_ref(v_b_88_);
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0___boxed(lean_object* v_as_106_, lean_object* v_sz_107_, lean_object* v_i_108_, lean_object* v_b_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
size_t v_sz_boxed_117_; size_t v_i_boxed_118_; lean_object* v_res_119_; 
v_sz_boxed_117_ = lean_unbox_usize(v_sz_107_);
lean_dec(v_sz_107_);
v_i_boxed_118_ = lean_unbox_usize(v_i_108_);
lean_dec(v_i_108_);
v_res_119_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0(v_as_106_, v_sz_boxed_117_, v_i_boxed_118_, v_b_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec_ref(v_as_106_);
return v_res_119_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0(void){
_start:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = lean_box(0);
v___x_121_ = lean_unsigned_to_nat(16u);
v___x_122_ = lean_mk_array(v___x_121_, v___x_120_);
return v___x_122_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__0);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__2));
v___x_128_ = l_Lean_stringToMessageData(v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__4));
v___x_131_ = l_Lean_stringToMessageData(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion(lean_object* v_u_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_stated_141_; lean_object* v___y_142_; lean_object* v___y_143_; lean_object* v___y_144_; lean_object* v___y_145_; lean_object* v___y_146_; lean_object* v___y_147_; lean_object* v_sorts_153_; lean_object* v___x_154_; 
lean_inc_ref_n(v_u_132_, 2);
v_sorts_153_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_132_);
v___x_154_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_u_132_);
if (lean_obj_tag(v___x_154_) == 1)
{
lean_object* v_val_155_; lean_object* v___f_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_val_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_val_155_);
lean_dec_ref_known(v___x_154_, 1);
v___f_156_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___lam__0___boxed), 10, 1);
lean_closure_set(v___f_156_, 0, v_val_155_);
v___x_157_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1);
v___x_158_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v_sorts_153_, v___x_157_, v___f_156_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_158_) == 0)
{
lean_object* v_a_159_; 
v_a_159_ = lean_ctor_get(v___x_158_, 0);
lean_inc(v_a_159_);
lean_dec_ref_known(v___x_158_, 1);
v_stated_141_ = v_a_159_;
v___y_142_ = v_a_133_;
v___y_143_ = v_a_134_;
v___y_144_ = v_a_135_;
v___y_145_ = v_a_136_;
v___y_146_ = v_a_137_;
v___y_147_ = v_a_138_;
goto v___jp_140_;
}
else
{
lean_dec_ref(v_u_132_);
return v___x_158_;
}
}
else
{
lean_object* v___x_160_; 
lean_dec(v___x_154_);
lean_inc_ref(v_u_132_);
v___x_160_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_u_132_);
if (lean_obj_tag(v___x_160_) == 1)
{
lean_object* v_val_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_val_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_val_161_);
lean_dec_ref_known(v___x_160_, 1);
v___x_162_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1);
v___x_163_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_153_, v___x_162_, v_val_161_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
v_stated_141_ = v_a_164_;
v___y_142_ = v_a_133_;
v___y_143_ = v_a_134_;
v___y_144_ = v_a_135_;
v___y_145_ = v_a_136_;
v___y_146_ = v_a_137_;
v___y_147_ = v_a_138_;
goto v___jp_140_;
}
else
{
lean_dec_ref(v_u_132_);
return v___x_163_;
}
}
else
{
lean_object* v___x_165_; uint32_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec(v___x_160_);
lean_dec_ref(v_sorts_153_);
v___x_165_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3);
v___x_166_ = lp_vampireReplay_Vampire_Unit_number(v_u_132_);
lean_dec_ref(v_u_132_);
v___x_167_ = lean_uint32_to_nat(v___x_166_);
v___x_168_ = l_Nat_reprFast(v___x_167_);
v___x_169_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___x_170_ = l_Lean_MessageData_ofFormat(v___x_169_);
v___x_171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_165_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__5);
v___x_173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_171_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_173_, v_a_135_, v_a_136_, v_a_137_, v_a_138_);
return v___x_174_;
}
}
v___jp_140_:
{
lean_object* v___x_148_; lean_object* v___x_149_; size_t v_sz_150_; size_t v___x_151_; lean_object* v___x_152_; 
v___x_148_ = lp_vampireReplay_Vampire_Unit_splits(v_u_132_);
v___x_149_ = l_Array_reverse___redArg(v___x_148_);
v_sz_150_ = lean_array_size(v___x_149_);
v___x_151_ = ((size_t)0ULL);
v___x_152_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion_spec__0(v___x_149_, v_sz_150_, v___x_151_, v_stated_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec_ref(v___x_149_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___boxed(lean_object* v_u_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion(v_u_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf(lean_object* v_u_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___x_192_; lean_object* v_conclusions_193_; uint32_t v___x_194_; lean_object* v___x_195_; 
v___x_192_ = lean_st_ref_get(v_a_186_);
v_conclusions_193_ = lean_ctor_get(v___x_192_, 4);
lean_inc_ref(v_conclusions_193_);
lean_dec(v___x_192_);
v___x_194_ = lp_vampireReplay_Vampire_Unit_number(v_u_184_);
v___x_195_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_conclusions_193_, v___x_194_);
lean_dec_ref(v_conclusions_193_);
if (lean_obj_tag(v___x_195_) == 1)
{
lean_object* v_val_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_dec_ref(v_u_184_);
v_val_196_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_195_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_val_196_);
lean_dec(v___x_195_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set_tag(v___x_198_, 0);
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_val_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
else
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_dec(v___x_195_);
lean_inc_ref(v_u_184_);
v___x_204_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___boxed), 8, 1);
lean_closure_set(v___x_204_, 0, v_u_184_);
v___x_205_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_u_184_, v___x_204_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
lean_dec_ref(v_u_184_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_230_; 
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_230_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_230_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_230_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v_proofs_211_; lean_object* v_unimplemented_212_; lean_object* v_introduced_213_; lean_object* v_named_214_; lean_object* v_conclusions_215_; lean_object* v_shared_216_; lean_object* v_nonempty_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_229_; 
v___x_210_ = lean_st_ref_take(v_a_186_);
v_proofs_211_ = lean_ctor_get(v___x_210_, 0);
v_unimplemented_212_ = lean_ctor_get(v___x_210_, 1);
v_introduced_213_ = lean_ctor_get(v___x_210_, 2);
v_named_214_ = lean_ctor_get(v___x_210_, 3);
v_conclusions_215_ = lean_ctor_get(v___x_210_, 4);
v_shared_216_ = lean_ctor_get(v___x_210_, 5);
v_nonempty_217_ = lean_ctor_get(v___x_210_, 6);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_229_ == 0)
{
v___x_219_ = v___x_210_;
v_isShared_220_ = v_isSharedCheck_229_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_nonempty_217_);
lean_inc(v_shared_216_);
lean_inc(v_conclusions_215_);
lean_inc(v_named_214_);
lean_inc(v_introduced_213_);
lean_inc(v_unimplemented_212_);
lean_inc(v_proofs_211_);
lean_dec(v___x_210_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_229_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; lean_object* v___x_223_; 
lean_inc(v_a_206_);
v___x_221_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_conclusions_215_, v___x_194_, v_a_206_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 4, v___x_221_);
v___x_223_ = v___x_219_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_proofs_211_);
lean_ctor_set(v_reuseFailAlloc_228_, 1, v_unimplemented_212_);
lean_ctor_set(v_reuseFailAlloc_228_, 2, v_introduced_213_);
lean_ctor_set(v_reuseFailAlloc_228_, 3, v_named_214_);
lean_ctor_set(v_reuseFailAlloc_228_, 4, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_228_, 5, v_shared_216_);
lean_ctor_set(v_reuseFailAlloc_228_, 6, v_nonempty_217_);
v___x_223_ = v_reuseFailAlloc_228_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_224_ = lean_st_ref_set(v_a_186_, v___x_223_);
if (v_isShared_209_ == 0)
{
v___x_226_ = v___x_208_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_206_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
}
else
{
return v___x_205_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf___boxed(lean_object* v_u_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = lp_vampireReplay_Vampire_Reconstruct_conclusionOf(v_u_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec_ref(v_a_232_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object* v_as_x27_240_, lean_object* v_b_241_){
_start:
{
if (lean_obj_tag(v_as_x27_240_) == 0)
{
return v_b_241_;
}
else
{
lean_object* v_head_242_; lean_object* v_tail_243_; lean_object* v_fst_244_; lean_object* v_snd_245_; uint32_t v___x_246_; lean_object* v_r_247_; 
v_head_242_ = lean_ctor_get(v_as_x27_240_, 0);
v_tail_243_ = lean_ctor_get(v_as_x27_240_, 1);
v_fst_244_ = lean_ctor_get(v_head_242_, 0);
v_snd_245_ = lean_ctor_get(v_head_242_, 1);
v___x_246_ = lean_unbox_uint32(v_fst_244_);
lean_inc(v_snd_245_);
v_r_247_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_241_, v___x_246_, v_snd_245_);
v_as_x27_240_ = v_tail_243_;
v_b_241_ = v_r_247_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg___boxed(lean_object* v_as_x27_249_, lean_object* v_b_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v_as_x27_249_, v_b_250_);
lean_dec(v_as_x27_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0(lean_object* v_m_252_, lean_object* v_l_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v_l_253_, v_m_252_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0___boxed(lean_object* v_m_255_, lean_object* v_l_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0(v_m_255_, v_l_256_);
lean_dec(v_l_256_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1(lean_object* v___x_258_, lean_object* v_vars_259_, lean_object* v_as_260_, size_t v_sz_261_, size_t v_i_262_, lean_object* v_b_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v_a_272_; uint8_t v___x_276_; 
v___x_276_ = lean_usize_dec_lt(v_i_262_, v_sz_261_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v_b_263_);
return v___x_277_;
}
else
{
lean_object* v_a_278_; lean_object* v_fst_279_; lean_object* v_snd_280_; uint32_t v___x_281_; lean_object* v___x_282_; 
v_a_278_ = lean_array_uget_borrowed(v_as_260_, v_i_262_);
v_fst_279_ = lean_ctor_get(v_a_278_, 0);
v_snd_280_ = lean_ctor_get(v_a_278_, 1);
v___x_281_ = lean_unbox_uint32(v_fst_279_);
v___x_282_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v___x_258_, v___x_281_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_283_; 
lean_inc(v_snd_280_);
v___x_283_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_280_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_285_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc(v_a_284_);
lean_dec_ref_known(v___x_283_, 1);
v___x_285_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_284_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; lean_object* v___x_287_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_285_, 1);
v___x_287_ = lean_array_push(v_b_263_, v_a_286_);
v_a_272_ = v___x_287_;
goto v___jp_271_;
}
else
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_295_; 
lean_dec_ref(v_b_263_);
v_a_288_ = lean_ctor_get(v___x_285_, 0);
v_isSharedCheck_295_ = !lean_is_exclusive(v___x_285_);
if (v_isSharedCheck_295_ == 0)
{
v___x_290_ = v___x_285_;
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_285_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_295_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_293_; 
if (v_isShared_291_ == 0)
{
v___x_293_ = v___x_290_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v_a_288_);
v___x_293_ = v_reuseFailAlloc_294_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
return v___x_293_;
}
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref(v_b_263_);
v_a_296_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_283_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_283_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_object* v_val_304_; lean_object* v___x_305_; 
v_val_304_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_val_304_);
lean_dec_ref_known(v___x_282_, 1);
v___x_305_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_259_, v_val_304_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; lean_object* v___x_307_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_305_, 1);
v___x_307_ = lean_array_push(v_b_263_, v_a_306_);
v_a_272_ = v___x_307_;
goto v___jp_271_;
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_b_263_);
v_a_308_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_305_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_305_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
v___jp_271_:
{
size_t v___x_273_; size_t v___x_274_; 
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_add(v_i_262_, v___x_273_);
v_i_262_ = v___x_274_;
v_b_263_ = v_a_272_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1___boxed(lean_object* v___x_316_, lean_object* v_vars_317_, lean_object* v_as_318_, lean_object* v_sz_319_, lean_object* v_i_320_, lean_object* v_b_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
size_t v_sz_boxed_329_; size_t v_i_boxed_330_; lean_object* v_res_331_; 
v_sz_boxed_329_ = lean_unbox_usize(v_sz_319_);
lean_dec(v_sz_319_);
v_i_boxed_330_ = lean_unbox_usize(v_i_320_);
lean_dec(v_i_320_);
v_res_331_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1(v___x_316_, v_vars_317_, v_as_318_, v_sz_boxed_329_, v_i_boxed_330_, v_b_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec_ref(v_as_318_);
lean_dec_ref(v_vars_317_);
lean_dec_ref(v___x_316_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt(lean_object* v_parent_334_, lean_object* v_use_335_, lean_object* v_vars_336_, lean_object* v_proof_337_, lean_object* v_stated_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_bindings_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v_args_350_; lean_object* v___x_351_; size_t v_sz_352_; size_t v___x_353_; lean_object* v___x_354_; 
v_bindings_346_ = lean_ctor_get(v_use_335_, 2);
lean_inc_ref(v_bindings_346_);
lean_dec_ref(v_use_335_);
v___x_347_ = lean_array_to_list(v_bindings_346_);
v___x_348_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1);
v___x_349_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_347_, v___x_348_);
lean_dec(v___x_347_);
v_args_350_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_instantiateAt___closed__0));
v___x_351_ = lp_vampireReplay_Vampire_Unit_varSorts(v_parent_334_);
v_sz_352_ = lean_array_size(v___x_351_);
v___x_353_ = ((size_t)0ULL);
v___x_354_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_instantiateAt_spec__1(v___x_349_, v_vars_336_, v___x_351_, v_sz_352_, v___x_353_, v_args_350_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_349_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = l_Lean_Meta_instantiateForall(v_stated_338_, v_a_355_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref_known(v___x_356_, 1);
v___x_358_ = lp_vampireReplay_Vampire_Reconstruct_sharedClause___redArg(v_a_357_, v_a_340_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_368_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_368_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_368_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_368_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_363_ = l_Lean_mkAppN(v_proof_337_, v_a_355_);
lean_dec(v_a_355_);
v___x_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
lean_ctor_set(v___x_364_, 1, v_a_359_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_364_);
v___x_366_ = v___x_361_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
else
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
lean_dec(v_a_355_);
lean_dec_ref(v_proof_337_);
v_a_369_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_358_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_358_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_a_355_);
lean_dec_ref(v_proof_337_);
v_a_377_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_356_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_356_);
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
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec_ref(v_stated_338_);
lean_dec_ref(v_proof_337_);
v_a_385_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_354_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_354_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_instantiateAt___boxed(lean_object* v_parent_393_, lean_object* v_use_394_, lean_object* v_vars_395_, lean_object* v_proof_396_, lean_object* v_stated_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_vampireReplay_Vampire_Reconstruct_instantiateAt(v_parent_393_, v_use_394_, v_vars_395_, v_proof_396_, v_stated_397_, v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec(v_a_399_);
lean_dec_ref(v_a_398_);
lean_dec_ref(v_vars_395_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0(lean_object* v_as_406_, lean_object* v_as_x27_407_, lean_object* v_b_408_, lean_object* v_a_409_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v_as_x27_407_, v_b_408_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___boxed(lean_object* v_as_411_, lean_object* v_as_x27_412_, lean_object* v_b_413_, lean_object* v_a_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0(v_as_411_, v_as_x27_412_, v_b_413_, v_a_414_);
lean_dec(v_as_x27_412_);
lean_dec(v_as_411_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0(lean_object* v_vars_416_, lean_object* v_as_417_, size_t v_sz_418_, size_t v_i_419_, lean_object* v_b_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = lean_usize_dec_lt(v_i_419_, v_sz_418_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v_b_420_);
return v___x_429_;
}
else
{
lean_object* v_a_430_; lean_object* v_fst_431_; lean_object* v_snd_432_; lean_object* v___x_433_; 
v_a_430_ = lean_array_uget_borrowed(v_as_417_, v_i_419_);
v_fst_431_ = lean_ctor_get(v_a_430_, 0);
v_snd_432_ = lean_ctor_get(v_a_430_, 1);
lean_inc(v_snd_432_);
v___x_433_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_416_, v_snd_432_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; uint32_t v___x_435_; lean_object* v___x_436_; size_t v___x_437_; size_t v___x_438_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
v___x_435_ = lean_unbox_uint32(v_fst_431_);
v___x_436_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_420_, v___x_435_, v_a_434_);
v___x_437_ = ((size_t)1ULL);
v___x_438_ = lean_usize_add(v_i_419_, v___x_437_);
v_i_419_ = v___x_438_;
v_b_420_ = v___x_436_;
goto _start;
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec_ref(v_b_420_);
v_a_440_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_433_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_433_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0___boxed(lean_object* v_vars_448_, lean_object* v_as_449_, lean_object* v_sz_450_, lean_object* v_i_451_, lean_object* v_b_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
size_t v_sz_boxed_460_; size_t v_i_boxed_461_; lean_object* v_res_462_; 
v_sz_boxed_460_ = lean_unbox_usize(v_sz_450_);
lean_dec(v_sz_450_);
v_i_boxed_461_ = lean_unbox_usize(v_i_451_);
lean_dec(v_i_451_);
v_res_462_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0(v_vars_448_, v_as_449_, v_sz_boxed_460_, v_i_boxed_461_, v_b_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec_ref(v_as_449_);
lean_dec_ref(v_vars_448_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars(lean_object* v_use_463_, lean_object* v_vars_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_bindings_472_; lean_object* v_out_473_; size_t v_sz_474_; size_t v___x_475_; lean_object* v___x_476_; 
v_bindings_472_ = lean_ctor_get(v_use_463_, 2);
v_out_473_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1);
v_sz_474_ = lean_array_size(v_bindings_472_);
v___x_475_ = ((size_t)0ULL);
v___x_476_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_substitutedVars_spec__0(v_vars_464_, v_bindings_472_, v_sz_474_, v___x_475_, v_out_473_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_substitutedVars___boxed(lean_object* v_use_477_, lean_object* v_vars_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = lp_vampireReplay_Vampire_Reconstruct_substitutedVars(v_use_477_, v_vars_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec(v_a_482_);
lean_dec_ref(v_a_481_);
lean_dec(v_a_480_);
lean_dec_ref(v_a_479_);
lean_dec_ref(v_vars_478_);
lean_dec_ref(v_use_477_);
return v_res_486_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(lean_object* v_m_487_, uint32_t v_a_488_){
_start:
{
lean_object* v_buckets_489_; lean_object* v___x_490_; uint64_t v___x_491_; uint64_t v___x_492_; uint64_t v___x_493_; uint64_t v_fold_494_; uint64_t v___x_495_; uint64_t v___x_496_; uint64_t v___x_497_; size_t v___x_498_; size_t v___x_499_; size_t v___x_500_; size_t v___x_501_; size_t v___x_502_; lean_object* v___x_503_; uint8_t v___x_504_; 
v_buckets_489_ = lean_ctor_get(v_m_487_, 1);
v___x_490_ = lean_array_get_size(v_buckets_489_);
v___x_491_ = lean_uint32_to_uint64(v_a_488_);
v___x_492_ = 32ULL;
v___x_493_ = lean_uint64_shift_right(v___x_491_, v___x_492_);
v_fold_494_ = lean_uint64_xor(v___x_491_, v___x_493_);
v___x_495_ = 16ULL;
v___x_496_ = lean_uint64_shift_right(v_fold_494_, v___x_495_);
v___x_497_ = lean_uint64_xor(v_fold_494_, v___x_496_);
v___x_498_ = lean_uint64_to_usize(v___x_497_);
v___x_499_ = lean_usize_of_nat(v___x_490_);
v___x_500_ = ((size_t)1ULL);
v___x_501_ = lean_usize_sub(v___x_499_, v___x_500_);
v___x_502_ = lean_usize_land(v___x_498_, v___x_501_);
v___x_503_ = lean_array_uget_borrowed(v_buckets_489_, v___x_502_);
v___x_504_ = lp_vampireReplay_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0_spec__0___redArg(v_a_488_, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg___boxed(lean_object* v_m_505_, lean_object* v_a_506_){
_start:
{
uint32_t v_a_boxed_507_; uint8_t v_res_508_; lean_object* v_r_509_; 
v_a_boxed_507_ = lean_unbox_uint32(v_a_506_);
lean_dec(v_a_506_);
v_res_508_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v_m_505_, v_a_boxed_507_);
lean_dec_ref(v_m_505_);
v_r_509_ = lean_box(v_res_508_);
return v_r_509_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1(lean_object* v_as_510_, size_t v_sz_511_, size_t v_i_512_, lean_object* v_b_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_a_522_; uint8_t v___x_526_; 
v___x_526_ = lean_usize_dec_lt(v_i_512_, v_sz_511_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; 
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v_b_513_);
return v___x_527_;
}
else
{
lean_object* v_a_528_; lean_object* v_fst_529_; lean_object* v_snd_530_; uint32_t v___x_531_; uint8_t v___x_532_; 
v_a_528_ = lean_array_uget_borrowed(v_as_510_, v_i_512_);
v_fst_529_ = lean_ctor_get(v_a_528_, 0);
v_snd_530_ = lean_ctor_get(v_a_528_, 1);
v___x_531_ = lean_unbox_uint32(v_fst_529_);
v___x_532_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v_b_513_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; 
lean_inc(v_snd_530_);
v___x_533_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_530_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_535_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_534_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; uint32_t v___x_537_; lean_object* v___x_538_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_unbox_uint32(v_fst_529_);
v___x_538_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_513_, v___x_537_, v_a_536_);
v_a_522_ = v___x_538_;
goto v___jp_521_;
}
else
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
lean_dec_ref(v_b_513_);
v_a_539_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_535_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_535_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
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
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_dec_ref(v_b_513_);
v_a_547_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_533_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_533_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
else
{
v_a_522_ = v_b_513_;
goto v___jp_521_;
}
}
v___jp_521_:
{
size_t v___x_523_; size_t v___x_524_; 
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_add(v_i_512_, v___x_523_);
v_i_512_ = v___x_524_;
v_b_513_ = v_a_522_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1___boxed(lean_object* v_as_555_, lean_object* v_sz_556_, lean_object* v_i_557_, lean_object* v_b_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
size_t v_sz_boxed_566_; size_t v_i_boxed_567_; lean_object* v_res_568_; 
v_sz_boxed_566_ = lean_unbox_usize(v_sz_556_);
lean_dec(v_sz_556_);
v_i_boxed_567_ = lean_unbox_usize(v_i_557_);
lean_dec(v_i_557_);
v_res_568_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1(v_as_555_, v_sz_boxed_566_, v_i_boxed_567_, v_b_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec_ref(v_as_555_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object* v_parent_569_, lean_object* v_vars_570_, lean_object* v_bound_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; size_t v_sz_581_; size_t v___x_582_; lean_object* v___x_583_; 
v___x_579_ = lp_vampireReplay_Vampire_Unit_varSorts(v_parent_569_);
v___x_580_ = l_Array_append___redArg(v___x_579_, v_bound_571_);
v_sz_581_ = lean_array_size(v___x_580_);
v___x_582_ = ((size_t)0ULL);
v___x_583_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coverVars_spec__1(v___x_580_, v_sz_581_, v___x_582_, v_vars_570_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_);
lean_dec_ref(v___x_580_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars___boxed(lean_object* v_parent_584_, lean_object* v_vars_585_, lean_object* v_bound_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v_parent_584_, v_vars_585_, v_bound_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec(v_a_588_);
lean_dec_ref(v_a_587_);
lean_dec_ref(v_bound_586_);
return v_res_594_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0(lean_object* v_00_u03b2_595_, lean_object* v_m_596_, uint32_t v_a_597_){
_start:
{
uint8_t v___x_598_; 
v___x_598_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v_m_596_, v_a_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___boxed(lean_object* v_00_u03b2_599_, lean_object* v_m_600_, lean_object* v_a_601_){
_start:
{
uint32_t v_a_boxed_602_; uint8_t v_res_603_; lean_object* v_r_604_; 
v_a_boxed_602_ = lean_unbox_uint32(v_a_601_);
lean_dec(v_a_601_);
v_res_603_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0(v_00_u03b2_599_, v_m_600_, v_a_boxed_602_);
lean_dec_ref(v_m_600_);
v_r_604_ = lean_box(v_res_603_);
return v_r_604_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__0));
v___x_607_ = l_Lean_stringToMessageData(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__2));
v___x_610_ = l_Lean_stringToMessageData(v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg(lean_object* v_u_611_, lean_object* v_as_612_, size_t v_sz_613_, size_t v_i_614_, lean_object* v_b_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
uint8_t v___x_626_; 
v___x_626_ = lean_usize_dec_lt(v_i_614_, v_sz_613_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v_b_615_);
return v___x_627_;
}
else
{
uint8_t v___x_628_; 
v___x_628_ = l_Lean_Expr_isForall(v_b_615_);
if (v___x_628_ == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; uint32_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v_a_629_ = lean_array_uget_borrowed(v_as_612_, v_i_614_);
v___x_630_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3);
v___x_631_ = lp_vampireReplay_Vampire_Unit_number(v_u_611_);
v___x_632_ = lean_uint32_to_nat(v___x_631_);
v___x_633_ = l_Nat_reprFast(v___x_632_);
v___x_634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
v___x_635_ = l_Lean_MessageData_ofFormat(v___x_634_);
v___x_636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_630_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__1);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
lean_inc(v_a_629_);
v___x_639_ = l_Lean_stringToMessageData(v_a_629_);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___closed__3);
v___x_642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
lean_inc_ref(v_b_615_);
v___x_643_ = l_Lean_indentExpr(v_b_615_);
v___x_644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_644_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_dec_ref_known(v___x_645_, 1);
goto v___jp_621_;
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec_ref(v_b_615_);
v_a_646_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
goto v___jp_621_;
}
}
v___jp_621_:
{
lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; 
v___x_622_ = l_Lean_Expr_bindingBody_x21(v_b_615_);
lean_dec_ref(v_b_615_);
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_add(v_i_614_, v___x_623_);
v_i_614_ = v___x_624_;
v_b_615_ = v___x_622_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg___boxed(lean_object* v_u_654_, lean_object* v_as_655_, lean_object* v_sz_656_, lean_object* v_i_657_, lean_object* v_b_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
size_t v_sz_boxed_664_; size_t v_i_boxed_665_; lean_object* v_res_666_; 
v_sz_boxed_664_ = lean_unbox_usize(v_sz_656_);
lean_dec(v_sz_656_);
v_i_boxed_665_ = lean_unbox_usize(v_i_657_);
lean_dec(v_i_657_);
v_res_666_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg(v_u_654_, v_as_655_, v_sz_boxed_664_, v_i_boxed_665_, v_b_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec_ref(v_as_655_);
lean_dec_ref(v_u_654_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coreOf(lean_object* v_u_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v___x_675_; 
lean_inc_ref(v_u_667_);
v___x_675_ = lp_vampireReplay_Vampire_Reconstruct_conclusionOf(v_u_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_677_; size_t v_sz_678_; size_t v___x_679_; lean_object* v___x_680_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_a_676_);
lean_dec_ref_known(v___x_675_, 1);
lean_inc_ref(v_u_667_);
v___x_677_ = lp_vampireReplay_Vampire_Unit_splits(v_u_667_);
v_sz_678_ = lean_array_size(v___x_677_);
v___x_679_ = ((size_t)0ULL);
v___x_680_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg(v_u_667_, v___x_677_, v_sz_678_, v___x_679_, v_a_676_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
lean_dec_ref(v___x_677_);
lean_dec_ref(v_u_667_);
return v___x_680_;
}
else
{
lean_dec_ref(v_u_667_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_coreOf___boxed(lean_object* v_u_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = lp_vampireReplay_Vampire_Reconstruct_coreOf(v_u_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec(v_a_683_);
lean_dec_ref(v_a_682_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0(lean_object* v_u_690_, lean_object* v_as_691_, size_t v_sz_692_, size_t v_i_693_, lean_object* v_b_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___redArg(v_u_690_, v_as_691_, v_sz_692_, v_i_693_, v_b_694_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0___boxed(lean_object* v_u_703_, lean_object* v_as_704_, lean_object* v_sz_705_, lean_object* v_i_706_, lean_object* v_b_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
size_t v_sz_boxed_715_; size_t v_i_boxed_716_; lean_object* v_res_717_; 
v_sz_boxed_715_ = lean_unbox_usize(v_sz_705_);
lean_dec(v_sz_705_);
v_i_boxed_716_ = lean_unbox_usize(v_i_706_);
lean_dec(v_i_706_);
v_res_717_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_coreOf_spec__0(v_u_703_, v_as_704_, v_sz_boxed_715_, v_i_boxed_716_, v_b_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec_ref(v_as_704_);
lean_dec_ref(v_u_703_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object* v_step_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_unit_726_; lean_object* v___x_727_; 
v_unit_726_ = lean_ctor_get(v_step_718_, 0);
lean_inc_ref(v_unit_726_);
lean_dec_ref(v_step_718_);
v___x_727_ = lp_vampireReplay_Vampire_Reconstruct_coreOf(v_unit_726_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion___boxed(lean_object* v_step_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(lean_object* v___x_737_, lean_object* v_as_738_, size_t v_i_739_, size_t v_stop_740_, lean_object* v_b_741_){
_start:
{
lean_object* v___y_743_; uint8_t v___x_747_; 
v___x_747_ = lean_usize_dec_eq(v_i_739_, v_stop_740_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; uint32_t v_premise_749_; uint32_t v___x_750_; uint8_t v___x_751_; 
v___x_748_ = lean_array_uget_borrowed(v_as_738_, v_i_739_);
v_premise_749_ = lean_ctor_get_uint32(v___x_748_, sizeof(void*)*3);
v___x_750_ = lp_vampireReplay_Vampire_Unit_number(v___x_737_);
v___x_751_ = lean_uint32_dec_eq(v_premise_749_, v___x_750_);
if (v___x_751_ == 0)
{
v___y_743_ = v_b_741_;
goto v___jp_742_;
}
else
{
lean_object* v___x_752_; 
lean_inc(v___x_748_);
v___x_752_ = lean_array_push(v_b_741_, v___x_748_);
v___y_743_ = v___x_752_;
goto v___jp_742_;
}
}
else
{
return v_b_741_;
}
v___jp_742_:
{
size_t v___x_744_; size_t v___x_745_; 
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_add(v_i_739_, v___x_744_);
v_i_739_ = v___x_745_;
v_b_741_ = v___y_743_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0___boxed(lean_object* v___x_753_, lean_object* v_as_754_, lean_object* v_i_755_, lean_object* v_stop_756_, lean_object* v_b_757_){
_start:
{
size_t v_i_boxed_758_; size_t v_stop_boxed_759_; lean_object* v_res_760_; 
v_i_boxed_758_ = lean_unbox_usize(v_i_755_);
lean_dec(v_i_755_);
v_stop_boxed_759_ = lean_unbox_usize(v_stop_756_);
lean_dec(v_stop_756_);
v_res_760_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v___x_753_, v_as_754_, v_i_boxed_758_, v_stop_boxed_759_, v_b_757_);
lean_dec_ref(v_as_754_);
lean_dec_ref(v___x_753_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1(lean_object* v___x_761_, lean_object* v_as_762_, size_t v_i_763_, size_t v_stop_764_, lean_object* v_b_765_){
_start:
{
uint8_t v___x_766_; 
v___x_766_ = lean_usize_dec_eq(v_i_763_, v_stop_764_);
if (v___x_766_ == 0)
{
size_t v___x_767_; size_t v___x_768_; lean_object* v___x_769_; uint32_t v___x_770_; uint32_t v___x_771_; uint8_t v___x_772_; 
v___x_767_ = ((size_t)1ULL);
v___x_768_ = lean_usize_sub(v_i_763_, v___x_767_);
v___x_769_ = lean_array_uget_borrowed(v_as_762_, v___x_768_);
v___x_770_ = lp_vampireReplay_Vampire_Unit_number(v___x_769_);
v___x_771_ = lp_vampireReplay_Vampire_Unit_number(v___x_761_);
v___x_772_ = lean_uint32_dec_eq(v___x_770_, v___x_771_);
if (v___x_772_ == 0)
{
v_i_763_ = v___x_768_;
goto _start;
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_unsigned_to_nat(1u);
v___x_775_ = lean_nat_add(v_b_765_, v___x_774_);
lean_dec(v_b_765_);
v_i_763_ = v___x_768_;
v_b_765_ = v___x_775_;
goto _start;
}
}
else
{
return v_b_765_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1___boxed(lean_object* v___x_777_, lean_object* v_as_778_, lean_object* v_i_779_, lean_object* v_stop_780_, lean_object* v_b_781_){
_start:
{
size_t v_i_boxed_782_; size_t v_stop_boxed_783_; lean_object* v_res_784_; 
v_i_boxed_782_ = lean_unbox_usize(v_i_779_);
lean_dec(v_i_779_);
v_stop_boxed_783_ = lean_unbox_usize(v_stop_780_);
lean_dec(v_stop_780_);
v_res_784_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1(v___x_777_, v_as_778_, v_i_boxed_782_, v_stop_boxed_783_, v_b_781_);
lean_dec_ref(v_as_778_);
lean_dec_ref(v___x_777_);
return v_res_784_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__0));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__2));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(lean_object* v_step_793_, lean_object* v_i_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_unit_800_; lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v_unit_800_ = lean_ctor_get(v_step_793_, 0);
lean_inc_ref_n(v_unit_800_, 2);
lean_dec_ref(v_step_793_);
v___x_801_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_800_);
v___x_802_ = lean_array_get_size(v___x_801_);
v___x_803_ = lean_nat_dec_lt(v_i_794_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; uint32_t v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
lean_dec_ref(v___x_801_);
v___x_804_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3);
v___x_805_ = lp_vampireReplay_Vampire_Unit_number(v_unit_800_);
lean_dec_ref(v_unit_800_);
v___x_806_ = lean_uint32_to_nat(v___x_805_);
v___x_807_ = l_Nat_reprFast(v___x_806_);
v___x_808_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
v___x_809_ = l_Lean_MessageData_ofFormat(v___x_808_);
v___x_810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_804_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__1);
v___x_812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = l_Nat_reprFast(v_i_794_);
v___x_814_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
v___x_815_ = l_Lean_MessageData_ofFormat(v___x_814_);
v___x_816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_812_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_816_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
return v___x_817_;
}
else
{
lean_object* v___x_818_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___x_842_; lean_object* v___y_844_; lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_818_ = lean_array_fget(v___x_801_, v_i_794_);
v___x_842_ = lean_unsigned_to_nat(0u);
v___x_856_ = l_Array_extract___redArg(v___x_801_, v___x_842_, v_i_794_);
lean_dec_ref(v___x_801_);
v___x_857_ = lean_array_get_size(v___x_856_);
v___x_858_ = lean_nat_dec_lt(v___x_842_, v___x_857_);
if (v___x_858_ == 0)
{
lean_dec_ref(v___x_856_);
v___y_844_ = v___x_842_;
goto v___jp_843_;
}
else
{
size_t v___x_859_; size_t v___x_860_; lean_object* v___x_861_; 
v___x_859_ = lean_usize_of_nat(v___x_857_);
v___x_860_ = ((size_t)0ULL);
v___x_861_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__1(v___x_818_, v___x_856_, v___x_859_, v___x_860_, v___x_842_);
lean_dec_ref(v___x_856_);
v___y_844_ = v___x_861_;
goto v___jp_843_;
}
v___jp_819_:
{
lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_822_ = lean_array_get_size(v___y_821_);
v___x_823_ = lean_nat_dec_lt(v___y_820_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; uint32_t v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; uint32_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
v___x_824_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__3);
v___x_825_ = lp_vampireReplay_Vampire_Unit_number(v_unit_800_);
lean_dec_ref(v_unit_800_);
v___x_826_ = lean_uint32_to_nat(v___x_825_);
v___x_827_ = l_Nat_reprFast(v___x_826_);
v___x_828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
v___x_829_ = l_Lean_MessageData_ofFormat(v___x_828_);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_824_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__3);
v___x_832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
v___x_833_ = lp_vampireReplay_Vampire_Unit_number(v___x_818_);
lean_dec(v___x_818_);
v___x_834_ = lean_uint32_to_nat(v___x_833_);
v___x_835_ = l_Nat_reprFast(v___x_834_);
v___x_836_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
v___x_837_ = l_Lean_MessageData_ofFormat(v___x_836_);
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_832_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_838_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
return v___x_839_;
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; 
lean_dec(v___x_818_);
lean_dec_ref(v_unit_800_);
v___x_840_ = lean_array_fget(v___y_821_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_821_);
v___x_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
v___jp_843_:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
lean_inc_ref(v_unit_800_);
v___x_845_ = lp_vampireReplay_Vampire_Unit_premiseUses(v_unit_800_);
v___x_846_ = lean_array_get_size(v___x_845_);
v___x_847_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___closed__4));
v___x_848_ = lean_nat_dec_lt(v___x_842_, v___x_846_);
if (v___x_848_ == 0)
{
lean_dec_ref(v___x_845_);
v___y_820_ = v___y_844_;
v___y_821_ = v___x_847_;
goto v___jp_819_;
}
else
{
uint8_t v___x_849_; 
v___x_849_ = lean_nat_dec_le(v___x_846_, v___x_846_);
if (v___x_849_ == 0)
{
if (v___x_848_ == 0)
{
lean_dec_ref(v___x_845_);
v___y_820_ = v___y_844_;
v___y_821_ = v___x_847_;
goto v___jp_819_;
}
else
{
size_t v___x_850_; size_t v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((size_t)0ULL);
v___x_851_ = lean_usize_of_nat(v___x_846_);
v___x_852_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v___x_818_, v___x_845_, v___x_850_, v___x_851_, v___x_847_);
lean_dec_ref(v___x_845_);
v___y_820_ = v___y_844_;
v___y_821_ = v___x_852_;
goto v___jp_819_;
}
}
else
{
size_t v___x_853_; size_t v___x_854_; lean_object* v___x_855_; 
v___x_853_ = ((size_t)0ULL);
v___x_854_ = lean_usize_of_nat(v___x_846_);
v___x_855_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Step_useAt_spec__0(v___x_818_, v___x_845_, v___x_853_, v___x_854_, v___x_847_);
lean_dec_ref(v___x_845_);
v___y_820_ = v___y_844_;
v___y_821_ = v___x_855_;
goto v___jp_819_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg___boxed(lean_object* v_step_862_, lean_object* v_i_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_862_, v_i_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_);
lean_dec(v_a_867_);
lean_dec_ref(v_a_866_);
lean_dec(v_a_865_);
lean_dec_ref(v_a_864_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt(lean_object* v_step_870_, lean_object* v_i_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt___redArg(v_step_870_, v_i_871_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_useAt___boxed(lean_object* v_step_880_, lean_object* v_i_881_, lean_object* v_a_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_, lean_object* v_a_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = lp_vampireReplay_Vampire_Reconstruct_Step_useAt(v_step_880_, v_i_881_, v_a_882_, v_a_883_, v_a_884_, v_a_885_, v_a_886_, v_a_887_);
lean_dec(v_a_887_);
lean_dec_ref(v_a_886_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
lean_dec(v_a_883_);
lean_dec_ref(v_a_882_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0(lean_object* v_k_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v_b_893_, lean_object* v_c_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___x_900_; 
lean_inc(v___y_898_);
lean_inc_ref(v___y_897_);
lean_inc(v___y_896_);
lean_inc_ref(v___y_895_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
v___x_900_ = lean_apply_9(v_k_890_, v_b_893_, v_c_894_, v___y_891_, v___y_892_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, lean_box(0));
return v___x_900_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0___boxed(lean_object* v_k_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v_b_904_, lean_object* v_c_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0(v_k_901_, v___y_902_, v___y_903_, v_b_904_, v_c_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object* v_type_912_, lean_object* v_maxFVars_x3f_913_, lean_object* v_k_914_, uint8_t v_cleanupAnnotations_915_, uint8_t v_whnfType_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___f_924_; lean_object* v___x_925_; 
lean_inc(v___y_918_);
lean_inc_ref(v___y_917_);
v___f_924_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_924_, 0, v_k_914_);
lean_closure_set(v___f_924_, 1, v___y_917_);
lean_closure_set(v___f_924_, 2, v___y_918_);
v___x_925_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___redArg(v_type_912_, v_maxFVars_x3f_913_, v___f_924_, v_cleanupAnnotations_915_, v_whnfType_916_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
if (lean_obj_tag(v___x_925_) == 0)
{
return v___x_925_;
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_925_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_925_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg___boxed(lean_object* v_type_934_, lean_object* v_maxFVars_x3f_935_, lean_object* v_k_936_, lean_object* v_cleanupAnnotations_937_, lean_object* v_whnfType_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_946_; uint8_t v_whnfType_boxed_947_; lean_object* v_res_948_; 
v_cleanupAnnotations_boxed_946_ = lean_unbox(v_cleanupAnnotations_937_);
v_whnfType_boxed_947_ = lean_unbox(v_whnfType_938_);
v_res_948_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_type_934_, v_maxFVars_x3f_935_, v_k_936_, v_cleanupAnnotations_boxed_946_, v_whnfType_boxed_947_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6(lean_object* v_00_u03b1_949_, lean_object* v_type_950_, lean_object* v_maxFVars_x3f_951_, lean_object* v_k_952_, uint8_t v_cleanupAnnotations_953_, uint8_t v_whnfType_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_type_950_, v_maxFVars_x3f_951_, v_k_952_, v_cleanupAnnotations_953_, v_whnfType_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___boxed(lean_object* v_00_u03b1_963_, lean_object* v_type_964_, lean_object* v_maxFVars_x3f_965_, lean_object* v_k_966_, lean_object* v_cleanupAnnotations_967_, lean_object* v_whnfType_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_976_; uint8_t v_whnfType_boxed_977_; lean_object* v_res_978_; 
v_cleanupAnnotations_boxed_976_ = lean_unbox(v_cleanupAnnotations_967_);
v_whnfType_boxed_977_ = lean_unbox(v_whnfType_968_);
v_res_978_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6(v_00_u03b1_963_, v_type_964_, v_maxFVars_x3f_965_, v_k_966_, v_cleanupAnnotations_boxed_976_, v_whnfType_boxed_977_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0(lean_object* v_candidate_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___x_987_; 
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
lean_inc(v___y_983_);
lean_inc_ref(v___y_982_);
v___x_987_ = lean_infer_type(v_candidate_979_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_989_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_988_, v___y_983_);
return v___x_989_;
}
else
{
return v___x_987_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0___boxed(lean_object* v_candidate_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__0(v_candidate_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2(lean_object* v_a_1002_, lean_object* v___y_1003_, lean_object* v_a_1004_, lean_object* v_as_1005_, size_t v_sz_1006_, size_t v_i_1007_, lean_object* v_b_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_){
_start:
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_usize_dec_lt(v_i_1007_, v_sz_1006_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
lean_dec_ref(v_a_1004_);
lean_dec_ref(v_a_1002_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_b_1008_);
return v___x_1017_;
}
else
{
lean_object* v_a_1018_; lean_object* v_fst_1019_; lean_object* v_snd_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1062_; 
lean_dec_ref(v_b_1008_);
v_a_1018_ = lean_array_uget(v_as_1005_, v_i_1007_);
v_fst_1019_ = lean_ctor_get(v_a_1018_, 0);
v_snd_1020_ = lean_ctor_get(v_a_1018_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_a_1018_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1022_ = v_a_1018_;
v_isShared_1023_ = v_isSharedCheck_1062_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_snd_1020_);
lean_inc(v_fst_1019_);
lean_dec(v_a_1018_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1062_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; 
lean_inc_ref(v_a_1002_);
v___x_1024_ = l_Lean_Meta_isExprDefEq(v_fst_1019_, v_a_1002_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
v___x_1026_ = lean_box(0);
v___x_1027_ = lean_unbox(v_a_1025_);
lean_dec(v_a_1025_);
if (v___x_1027_ == 0)
{
lean_object* v___x_1028_; size_t v___x_1029_; size_t v___x_1030_; 
lean_del_object(v___x_1022_);
lean_dec(v_snd_1020_);
v___x_1028_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v___x_1029_ = ((size_t)1ULL);
v___x_1030_ = lean_usize_add(v_i_1007_, v___x_1029_);
v_i_1007_ = v___x_1030_;
v_b_1008_ = v___x_1028_;
goto _start;
}
else
{
lean_object* v___x_1032_; 
lean_dec_ref(v_a_1002_);
v___x_1032_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___y_1003_, v_snd_1020_, v_a_1004_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1045_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1045_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1045_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1037_, 0, v_a_1033_);
v___x_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 1, v___x_1026_);
lean_ctor_set(v___x_1022_, 0, v___x_1038_);
v___x_1040_ = v___x_1022_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v___x_1026_);
v___x_1040_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v___x_1040_);
v___x_1042_ = v___x_1035_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
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
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_del_object(v___x_1022_);
v_a_1046_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1032_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1032_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_del_object(v___x_1022_);
lean_dec(v_snd_1020_);
lean_dec_ref(v_a_1004_);
lean_dec_ref(v_a_1002_);
v_a_1054_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1024_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1024_);
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
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___boxed(lean_object* v_a_1063_, lean_object* v___y_1064_, lean_object* v_a_1065_, lean_object* v_as_1066_, lean_object* v_sz_1067_, lean_object* v_i_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
size_t v_sz_boxed_1077_; size_t v_i_boxed_1078_; lean_object* v_res_1079_; 
v_sz_boxed_1077_ = lean_unbox_usize(v_sz_1067_);
lean_dec(v_sz_1067_);
v_i_boxed_1078_ = lean_unbox_usize(v_i_1068_);
lean_dec(v_i_1068_);
v_res_1079_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2(v_a_1063_, v___y_1064_, v_a_1065_, v_as_1066_, v_sz_boxed_1077_, v_i_boxed_1078_, v_b_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec_ref(v_as_1066_);
lean_dec_ref(v___y_1064_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3(lean_object* v_rest_1083_, lean_object* v_target_1084_, lean_object* v_a_1085_, lean_object* v_as_1086_, size_t v_sz_1087_, size_t v_i_1088_, lean_object* v_b_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_a_1098_; uint8_t v___x_1102_; 
v___x_1102_ = lean_usize_dec_lt(v_i_1088_, v_sz_1087_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1103_; 
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v_b_1089_);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; lean_object* v_a_1106_; lean_object* v___x_1110_; lean_object* v_a_1111_; lean_object* v___y_1113_; uint8_t v___x_1161_; 
lean_dec_ref(v_b_1089_);
v___x_1104_ = lean_box(0);
v___x_1110_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v_a_1111_ = lean_array_uget_borrowed(v_as_1086_, v_i_1088_);
v___x_1161_ = lean_expr_eqv(v_rest_1083_, v_target_1084_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__1));
lean_inc_ref(v_rest_1083_);
v___x_1163_ = lp_vampireReplay_Vampire_Reconstruct_junctionParts(v___x_1162_, v_rest_1083_);
v___y_1113_ = v___x_1163_;
goto v___jp_1112_;
}
else
{
lean_inc_ref(v_a_1085_);
v___y_1113_ = v_a_1085_;
goto v___jp_1112_;
}
v___jp_1105_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1107_, 0, v_a_1106_);
v___x_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
lean_ctor_set(v___x_1108_, 1, v___x_1104_);
v___x_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
return v___x_1109_;
}
v___jp_1112_:
{
lean_object* v___x_1114_; 
lean_inc(v___y_1095_);
lean_inc_ref(v___y_1094_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v_a_1111_);
v___x_1114_ = lean_infer_type(v_a_1111_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1115_, v___y_1093_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = lean_unsigned_to_nat(0u);
v___x_1119_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(v_a_1117_, v___y_1113_, v___x_1118_);
if (lean_obj_tag(v___x_1119_) == 1)
{
lean_object* v_val_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1137_; 
lean_dec(v_a_1117_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
v_val_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1137_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_val_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1137_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; 
lean_inc(v_a_1111_);
v___x_1124_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___y_1113_, v_val_1120_, v_a_1111_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec_ref(v___y_1113_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v_a_1125_; lean_object* v___x_1127_; 
v_a_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_a_1125_);
lean_dec_ref_known(v___x_1124_, 1);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v_a_1125_);
v___x_1127_ = v___x_1122_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1125_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
v_a_1106_ = v___x_1127_;
goto v___jp_1105_;
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_del_object(v___x_1122_);
v_a_1129_ = lean_ctor_get(v___x_1124_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1124_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1124_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
else
{
lean_object* v___x_1138_; size_t v_sz_1139_; size_t v___x_1140_; lean_object* v___x_1141_; 
lean_dec(v___x_1119_);
lean_inc_ref(v___y_1113_);
v___x_1138_ = l_Array_zipIdx___redArg(v___y_1113_, v___x_1118_);
v_sz_1139_ = lean_array_size(v___x_1138_);
v___x_1140_ = ((size_t)0ULL);
lean_inc(v_a_1111_);
v___x_1141_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2(v_a_1117_, v___y_1113_, v_a_1111_, v___x_1138_, v_sz_1139_, v___x_1140_, v___x_1110_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
lean_dec_ref(v___x_1138_);
lean_dec_ref(v___y_1113_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v_fst_1143_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v_fst_1143_ = lean_ctor_get(v_a_1142_, 0);
lean_inc(v_fst_1143_);
lean_dec(v_a_1142_);
if (lean_obj_tag(v_fst_1143_) == 0)
{
v_a_1098_ = v___x_1110_;
goto v___jp_1097_;
}
else
{
lean_object* v_val_1144_; 
v_val_1144_ = lean_ctor_get(v_fst_1143_, 0);
lean_inc(v_val_1144_);
lean_dec_ref_known(v_fst_1143_, 1);
if (lean_obj_tag(v_val_1144_) == 1)
{
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
v_a_1106_ = v_val_1144_;
goto v___jp_1105_;
}
else
{
lean_dec(v_val_1144_);
v_a_1098_ = v___x_1110_;
goto v___jp_1097_;
}
}
}
else
{
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
return v___x_1141_;
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec_ref(v___y_1113_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
v_a_1145_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1116_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1116_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec_ref(v___y_1113_);
lean_dec_ref(v_a_1085_);
lean_dec_ref(v_rest_1083_);
v_a_1153_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1114_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1114_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
v___jp_1097_:
{
size_t v___x_1099_; size_t v___x_1100_; 
v___x_1099_ = ((size_t)1ULL);
v___x_1100_ = lean_usize_add(v_i_1088_, v___x_1099_);
v_i_1088_ = v___x_1100_;
v_b_1089_ = v_a_1098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___boxed(lean_object* v_rest_1164_, lean_object* v_target_1165_, lean_object* v_a_1166_, lean_object* v_as_1167_, lean_object* v_sz_1168_, lean_object* v_i_1169_, lean_object* v_b_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
size_t v_sz_boxed_1178_; size_t v_i_boxed_1179_; lean_object* v_res_1180_; 
v_sz_boxed_1178_ = lean_unbox_usize(v_sz_1168_);
lean_dec(v_sz_1168_);
v_i_boxed_1179_ = lean_unbox_usize(v_i_1169_);
lean_dec(v_i_1169_);
v_res_1180_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3(v_rest_1164_, v_target_1165_, v_a_1166_, v_as_1167_, v_sz_boxed_1178_, v_i_boxed_1179_, v_b_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec_ref(v_as_1167_);
lean_dec_ref(v_target_1165_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1(lean_object* v___f_1194_, lean_object* v_target_1195_, lean_object* v_a_1196_, size_t v___x_1197_, lean_object* v___x_1198_, lean_object* v_h_1199_, lean_object* v_rest_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
lean_inc(v___y_1206_);
lean_inc_ref(v___y_1205_);
lean_inc(v___y_1204_);
lean_inc_ref(v___y_1203_);
lean_inc(v___y_1202_);
lean_inc_ref(v___y_1201_);
lean_inc_ref(v_h_1199_);
v___x_1208_ = lean_apply_8(v___f_1194_, v_h_1199_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, lean_box(0));
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1354_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1354_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1354_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v___x_1249_; 
lean_inc_ref(v_h_1199_);
v___x_1249_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_h_1199_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1251_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
lean_inc(v_a_1250_);
lean_dec_ref_known(v___x_1249_, 1);
lean_inc_ref(v_h_1199_);
v___x_1251_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_h_1199_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1345_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1254_ = v___x_1251_;
v_isShared_1255_ = v_isSharedCheck_1345_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_a_1252_);
lean_dec(v___x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1345_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___y_1261_; 
v___x_1256_ = lean_unsigned_to_nat(1u);
v___x_1257_ = lean_mk_empty_array_with_capacity(v___x_1256_);
lean_inc_ref(v_h_1199_);
lean_inc_ref(v___x_1257_);
v___x_1258_ = lean_array_push(v___x_1257_, v_h_1199_);
v___x_1259_ = l_Array_append___redArg(v___x_1258_, v_a_1250_);
lean_dec(v_a_1250_);
if (lean_obj_tag(v_a_1252_) == 0)
{
lean_dec_ref(v___x_1257_);
v___y_1261_ = v___x_1198_;
goto v___jp_1260_;
}
else
{
lean_object* v_val_1343_; lean_object* v___x_1344_; 
lean_dec_ref(v___x_1198_);
v_val_1343_ = lean_ctor_get(v_a_1252_, 0);
lean_inc(v_val_1343_);
lean_dec_ref_known(v_a_1252_, 1);
v___x_1344_ = lean_array_push(v___x_1257_, v_val_1343_);
v___y_1261_ = v___x_1344_;
goto v___jp_1260_;
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; size_t v_sz_1264_; lean_object* v___x_1265_; 
v___x_1262_ = l_Array_append___redArg(v___x_1259_, v___y_1261_);
lean_dec_ref(v___y_1261_);
v___x_1263_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v_sz_1264_ = lean_array_size(v___x_1262_);
lean_inc_ref(v_rest_1200_);
v___x_1265_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3(v_rest_1200_, v_target_1195_, v_a_1196_, v___x_1262_, v_sz_1264_, v___x_1197_, v___x_1263_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
lean_dec_ref(v___x_1262_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1334_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1334_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1334_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v_fst_1270_; 
v_fst_1270_ = lean_ctor_get(v_a_1266_, 0);
lean_inc(v_fst_1270_);
lean_dec(v_a_1266_);
if (lean_obj_tag(v_fst_1270_) == 0)
{
lean_object* v___x_1271_; 
lean_del_object(v___x_1268_);
lean_inc(v_a_1209_);
v___x_1271_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_1209_);
if (lean_obj_tag(v___x_1271_) == 1)
{
lean_object* v_val_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v_val_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_val_1272_);
v___x_1273_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__5));
v___x_1274_ = lean_unsigned_to_nat(3u);
v___x_1275_ = l_Lean_Expr_isAppOfArity(v_val_1272_, v___x_1273_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_dec(v_val_1272_);
lean_dec_ref_known(v___x_1271_, 1);
lean_del_object(v___x_1254_);
v___y_1214_ = v___y_1203_;
v___y_1215_ = v___y_1204_;
v___y_1216_ = v___y_1205_;
v___y_1217_ = v___y_1206_;
goto v___jp_1213_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1276_ = l_Lean_Expr_appFn_x21(v_val_1272_);
v___x_1277_ = l_Lean_Expr_appArg_x21(v___x_1276_);
lean_dec_ref(v___x_1276_);
v___x_1278_ = l_Lean_Expr_appArg_x21(v_val_1272_);
lean_dec(v_val_1272_);
lean_inc_ref(v___x_1277_);
v___x_1279_ = l_Lean_Meta_isExprDefEq(v___x_1277_, v___x_1278_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; uint8_t v___x_1281_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1279_, 1);
v___x_1281_ = lean_unbox(v_a_1280_);
lean_dec(v_a_1280_);
if (v___x_1281_ == 0)
{
lean_dec_ref(v___x_1277_);
lean_dec_ref_known(v___x_1271_, 1);
lean_del_object(v___x_1254_);
v___y_1214_ = v___y_1203_;
v___y_1215_ = v___y_1204_;
v___y_1216_ = v___y_1205_;
v___y_1217_ = v___y_1206_;
goto v___jp_1213_;
}
else
{
lean_object* v___x_1282_; 
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
v___x_1282_ = l_Lean_Meta_mkEqRefl(v___x_1277_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; lean_object* v___x_1286_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref_known(v___x_1282_, 1);
v___x_1284_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__7));
if (v_isShared_1255_ == 0)
{
lean_ctor_set_tag(v___x_1254_, 1);
lean_ctor_set(v___x_1254_, 0, v_rest_1200_);
v___x_1286_ = v___x_1254_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_rest_1200_);
v___x_1286_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1287_, 0, v_a_1283_);
v___x_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1288_, 0, v_h_1199_);
v___x_1289_ = lean_unsigned_to_nat(4u);
v___x_1290_ = lean_mk_empty_array_with_capacity(v___x_1289_);
v___x_1291_ = lean_array_push(v___x_1290_, v___x_1271_);
v___x_1292_ = lean_array_push(v___x_1291_, v___x_1286_);
v___x_1293_ = lean_array_push(v___x_1292_, v___x_1287_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1288_);
v___x_1295_ = l_Lean_Meta_mkAppOptM(v___x_1284_, v___x_1294_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1304_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1298_ = v___x_1295_;
v_isShared_1299_ = v_isSharedCheck_1304_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_a_1296_);
lean_dec(v___x_1295_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1304_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v___x_1300_; lean_object* v___x_1302_; 
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v_a_1296_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 0, v___x_1300_);
v___x_1302_ = v___x_1298_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1312_; 
v_a_1305_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1307_ = v___x_1295_;
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1295_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1312_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1310_; 
if (v_isShared_1308_ == 0)
{
v___x_1310_ = v___x_1307_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v_a_1305_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec_ref_known(v___x_1271_, 1);
lean_del_object(v___x_1254_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
v_a_1314_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1282_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1282_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
lean_dec_ref(v___x_1277_);
lean_dec_ref_known(v___x_1271_, 1);
lean_del_object(v___x_1254_);
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
v_a_1322_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1279_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1279_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
else
{
lean_dec(v___x_1271_);
lean_del_object(v___x_1254_);
v___y_1214_ = v___y_1203_;
v___y_1215_ = v___y_1204_;
v___y_1216_ = v___y_1205_;
v___y_1217_ = v___y_1206_;
goto v___jp_1213_;
}
}
else
{
lean_object* v_val_1330_; lean_object* v___x_1332_; 
lean_del_object(v___x_1254_);
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
v_val_1330_ = lean_ctor_get(v_fst_1270_, 0);
lean_inc(v_val_1330_);
lean_dec_ref_known(v_fst_1270_, 1);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v_val_1330_);
v___x_1332_ = v___x_1268_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_val_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_del_object(v___x_1254_);
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
v_a_1335_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1265_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1265_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
}
else
{
lean_dec(v_a_1250_);
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
lean_dec_ref(v___x_1198_);
lean_dec_ref(v_a_1196_);
return v___x_1251_;
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
lean_del_object(v___x_1211_);
lean_dec(v_a_1209_);
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
lean_dec_ref(v___x_1198_);
lean_dec_ref(v_a_1196_);
v_a_1346_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1249_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1249_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
v___jp_1213_:
{
lean_object* v___x_1218_; uint8_t v___x_1219_; 
v___x_1218_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__1));
v___x_1219_ = l_Lean_Expr_isConstOf(v_a_1209_, v___x_1218_);
lean_dec(v_a_1209_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; lean_object* v___x_1222_; 
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
v___x_1220_ = lean_box(0);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1220_);
v___x_1222_ = v___x_1211_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
else
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_del_object(v___x_1211_);
v___x_1224_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__3));
v___x_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1225_, 0, v_rest_1200_);
v___x_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_h_1199_);
v___x_1227_ = lean_unsigned_to_nat(2u);
v___x_1228_ = lean_mk_empty_array_with_capacity(v___x_1227_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1225_);
v___x_1230_ = lean_array_push(v___x_1229_, v___x_1226_);
v___x_1231_ = l_Lean_Meta_mkAppOptM(v___x_1224_, v___x_1230_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1240_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1240_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1236_, 0, v_a_1232_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1236_);
v___x_1238_ = v___x_1234_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
v_a_1241_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1231_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1231_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
lean_dec_ref(v_rest_1200_);
lean_dec_ref(v_h_1199_);
lean_dec_ref(v___x_1198_);
lean_dec_ref(v_a_1196_);
v_a_1355_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1208_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1208_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___boxed(lean_object* v___f_1363_, lean_object* v_target_1364_, lean_object* v_a_1365_, lean_object* v___x_1366_, lean_object* v___x_1367_, lean_object* v_h_1368_, lean_object* v_rest_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
size_t v___x_54177__boxed_1377_; lean_object* v_res_1378_; 
v___x_54177__boxed_1377_ = lean_unbox_usize(v___x_1366_);
lean_dec(v___x_1366_);
v_res_1378_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1(v___f_1363_, v_target_1364_, v_a_1365_, v___x_54177__boxed_1377_, v___x_1367_, v_h_1368_, v_rest_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec_ref(v_target_1364_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2(lean_object* v___f_1379_, lean_object* v_x_1380_, lean_object* v_h_1381_, lean_object* v_rest_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; 
lean_inc(v___y_1388_);
lean_inc_ref(v___y_1387_);
lean_inc(v___y_1386_);
lean_inc_ref(v___y_1385_);
lean_inc(v___y_1384_);
lean_inc_ref(v___y_1383_);
v___x_1390_ = lean_apply_9(v___f_1379_, v_h_1381_, v_rest_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, lean_box(0));
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2___boxed(lean_object* v___f_1391_, lean_object* v_x_1392_, lean_object* v_h_1393_, lean_object* v_rest_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2(v___f_1391_, v_x_1392_, v_h_1393_, v_rest_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v_x_1392_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg(lean_object* v_t_1403_, lean_object* v_as_1404_, size_t v_sz_1405_, size_t v_i_1406_, lean_object* v_b_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
uint8_t v___x_1413_; 
v___x_1413_ = lean_usize_dec_lt(v_i_1406_, v_sz_1405_);
if (v___x_1413_ == 0)
{
lean_object* v___x_1414_; 
lean_dec_ref(v_t_1403_);
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v_b_1407_);
return v___x_1414_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v_a_1417_; lean_object* v___y_1419_; lean_object* v___x_1453_; 
lean_dec_ref(v_b_1407_);
v___x_1415_ = lean_box(0);
v___x_1416_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v_a_1417_ = lean_array_uget_borrowed(v_as_1404_, v_i_1406_);
lean_inc(v___y_1411_);
lean_inc_ref(v___y_1410_);
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v_a_1417_);
v___x_1453_ = lean_infer_type(v_a_1417_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v___x_1455_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
lean_inc(v_a_1454_);
lean_dec_ref_known(v___x_1453_, 1);
v___x_1455_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1454_, v___y_1409_);
v___y_1419_ = v___x_1455_;
goto v___jp_1418_;
}
else
{
v___y_1419_ = v___x_1453_;
goto v___jp_1418_;
}
v___jp_1418_:
{
if (lean_obj_tag(v___y_1419_) == 0)
{
lean_object* v_a_1420_; lean_object* v___x_1421_; 
v_a_1420_ = lean_ctor_get(v___y_1419_, 0);
lean_inc(v_a_1420_);
lean_dec_ref_known(v___y_1419_, 1);
lean_inc_ref(v_t_1403_);
v___x_1421_ = l_Lean_Meta_isExprDefEq(v_a_1420_, v_t_1403_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1436_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1436_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1436_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
uint8_t v___x_1426_; 
v___x_1426_ = lean_unbox(v_a_1422_);
lean_dec(v_a_1422_);
if (v___x_1426_ == 0)
{
size_t v___x_1427_; size_t v___x_1428_; 
lean_del_object(v___x_1424_);
v___x_1427_ = ((size_t)1ULL);
v___x_1428_ = lean_usize_add(v_i_1406_, v___x_1427_);
v_i_1406_ = v___x_1428_;
v_b_1407_ = v___x_1416_;
goto _start;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
lean_dec_ref(v_t_1403_);
lean_inc(v_a_1417_);
v___x_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1430_, 0, v_a_1417_);
v___x_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1431_);
lean_ctor_set(v___x_1432_, 1, v___x_1415_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v___x_1432_);
v___x_1434_ = v___x_1424_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
lean_dec_ref(v_t_1403_);
v_a_1437_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1421_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1421_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1452_; 
lean_dec_ref(v_t_1403_);
v_a_1445_ = lean_ctor_get(v___y_1419_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___y_1419_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1447_ = v___y_1419_;
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___y_1419_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1452_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1450_; 
if (v_isShared_1448_ == 0)
{
v___x_1450_ = v___x_1447_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v_a_1445_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg___boxed(lean_object* v_t_1456_, lean_object* v_as_1457_, lean_object* v_sz_1458_, lean_object* v_i_1459_, lean_object* v_b_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
size_t v_sz_boxed_1466_; size_t v_i_boxed_1467_; lean_object* v_res_1468_; 
v_sz_boxed_1466_ = lean_unbox_usize(v_sz_1458_);
lean_dec(v_sz_1458_);
v_i_boxed_1467_ = lean_unbox_usize(v_i_1459_);
lean_dec(v_i_1459_);
v_res_1468_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg(v_t_1456_, v_as_1457_, v_sz_boxed_1466_, v_i_boxed_1467_, v_b_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec_ref(v_as_1457_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5(lean_object* v_t_1469_, lean_object* v_as_1470_, size_t v_sz_1471_, size_t v_i_1472_, lean_object* v_b_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
uint8_t v___x_1481_; 
v___x_1481_ = lean_usize_dec_lt(v_i_1472_, v_sz_1471_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; 
lean_dec_ref(v_t_1469_);
v___x_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_b_1473_);
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_a_1485_; lean_object* v___y_1487_; lean_object* v___x_1521_; 
lean_dec_ref(v_b_1473_);
v___x_1483_ = lean_box(0);
v___x_1484_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v_a_1485_ = lean_array_uget_borrowed(v_as_1470_, v_i_1472_);
lean_inc(v___y_1479_);
lean_inc_ref(v___y_1478_);
lean_inc(v___y_1477_);
lean_inc_ref(v___y_1476_);
lean_inc(v_a_1485_);
v___x_1521_ = lean_infer_type(v_a_1485_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1522_, v___y_1477_);
v___y_1487_ = v___x_1523_;
goto v___jp_1486_;
}
else
{
v___y_1487_ = v___x_1521_;
goto v___jp_1486_;
}
v___jp_1486_:
{
if (lean_obj_tag(v___y_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1489_; 
v_a_1488_ = lean_ctor_get(v___y_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v___y_1487_, 1);
lean_inc_ref(v_t_1469_);
v___x_1489_ = l_Lean_Meta_isExprDefEq(v_a_1488_, v_t_1469_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
if (lean_obj_tag(v___x_1489_) == 0)
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1504_; 
v_a_1490_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1492_ = v___x_1489_;
v_isShared_1493_ = v_isSharedCheck_1504_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1489_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1504_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
uint8_t v___x_1494_; 
v___x_1494_ = lean_unbox(v_a_1490_);
lean_dec(v_a_1490_);
if (v___x_1494_ == 0)
{
size_t v___x_1495_; size_t v___x_1496_; lean_object* v___x_1497_; 
lean_del_object(v___x_1492_);
v___x_1495_ = ((size_t)1ULL);
v___x_1496_ = lean_usize_add(v_i_1472_, v___x_1495_);
v___x_1497_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg(v_t_1469_, v_as_1470_, v_sz_1471_, v___x_1496_, v___x_1484_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
return v___x_1497_;
}
else
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
lean_dec_ref(v_t_1469_);
lean_inc(v_a_1485_);
v___x_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1498_, 0, v_a_1485_);
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
v___x_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
lean_ctor_set(v___x_1500_, 1, v___x_1483_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 0, v___x_1500_);
v___x_1502_ = v___x_1492_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec_ref(v_t_1469_);
v_a_1505_ = lean_ctor_get(v___x_1489_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1489_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1489_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec_ref(v_t_1469_);
v_a_1513_ = lean_ctor_get(v___y_1487_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___y_1487_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___y_1487_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___y_1487_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5___boxed(lean_object* v_t_1524_, lean_object* v_as_1525_, lean_object* v_sz_1526_, lean_object* v_i_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
size_t v_sz_boxed_1536_; size_t v_i_boxed_1537_; lean_object* v_res_1538_; 
v_sz_boxed_1536_ = lean_unbox_usize(v_sz_1526_);
lean_dec(v_sz_1526_);
v_i_boxed_1537_ = lean_unbox_usize(v_i_1527_);
lean_dec(v_i_1527_);
v_res_1538_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5(v_t_1524_, v_as_1525_, v_sz_boxed_1536_, v_i_boxed_1537_, v_b_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec_ref(v_as_1525_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3(uint8_t v___x_1539_, lean_object* v___x_1540_, size_t v___x_1541_, lean_object* v___x_1542_, lean_object* v_i_1543_, lean_object* v_h_1544_, lean_object* v_t_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v___x_1553_ = lean_box(v___x_1539_);
v___x_1554_ = lean_array_get(v___x_1553_, v___x_1540_, v_i_1543_);
lean_dec(v___x_1553_);
v___x_1555_ = lean_unbox(v___x_1554_);
lean_dec(v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; 
lean_inc_ref(v_h_1544_);
v___x_1556_ = lp_vampireReplay_Vampire_Reconstruct_doubleNegations___redArg(v_h_1544_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v___x_1558_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
lean_inc_ref(v_h_1544_);
v___x_1558_ = lp_vampireReplay_Vampire_Reconstruct_flipEquality___redArg(v_h_1544_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v_a_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___y_1565_; 
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_a_1559_);
lean_dec_ref_known(v___x_1558_, 1);
v___x_1560_ = lean_unsigned_to_nat(1u);
v___x_1561_ = lean_mk_empty_array_with_capacity(v___x_1560_);
lean_inc_ref(v___x_1561_);
v___x_1562_ = lean_array_push(v___x_1561_, v_h_1544_);
v___x_1563_ = l_Array_append___redArg(v___x_1562_, v_a_1557_);
lean_dec(v_a_1557_);
if (lean_obj_tag(v_a_1559_) == 0)
{
lean_dec_ref(v___x_1561_);
v___y_1565_ = v___x_1542_;
goto v___jp_1564_;
}
else
{
lean_object* v_val_1592_; lean_object* v___x_1593_; 
lean_dec_ref(v___x_1542_);
v_val_1592_ = lean_ctor_get(v_a_1559_, 0);
lean_inc(v_val_1592_);
lean_dec_ref_known(v_a_1559_, 1);
v___x_1593_ = lean_array_push(v___x_1561_, v_val_1592_);
v___y_1565_ = v___x_1593_;
goto v___jp_1564_;
}
v___jp_1564_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; size_t v_sz_1569_; lean_object* v___x_1570_; 
v___x_1566_ = l_Array_append___redArg(v___x_1563_, v___y_1565_);
lean_dec_ref(v___y_1565_);
v___x_1567_ = lean_box(0);
v___x_1568_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__2___closed__0));
v_sz_1569_ = lean_array_size(v___x_1566_);
v___x_1570_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5(v_t_1545_, v___x_1566_, v_sz_1569_, v___x_1541_, v___x_1568_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec_ref(v___x_1566_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1583_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1583_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1583_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_fst_1575_; 
v_fst_1575_ = lean_ctor_get(v_a_1571_, 0);
lean_inc(v_fst_1575_);
lean_dec(v_a_1571_);
if (lean_obj_tag(v_fst_1575_) == 0)
{
lean_object* v___x_1577_; 
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v___x_1567_);
v___x_1577_ = v___x_1573_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1567_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
else
{
lean_object* v_val_1579_; lean_object* v___x_1581_; 
v_val_1579_ = lean_ctor_get(v_fst_1575_, 0);
lean_inc(v_val_1579_);
lean_dec_ref_known(v_fst_1575_, 1);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v_val_1579_);
v___x_1581_ = v___x_1573_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_val_1579_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
v_a_1584_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1570_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1570_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
else
{
lean_dec(v_a_1557_);
lean_dec_ref(v_t_1545_);
lean_dec_ref(v_h_1544_);
lean_dec_ref(v___x_1542_);
return v___x_1558_;
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
lean_dec_ref(v_t_1545_);
lean_dec_ref(v_h_1544_);
lean_dec_ref(v___x_1542_);
v_a_1594_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1556_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1556_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
else
{
lean_object* v___x_1602_; lean_object* v___x_1603_; 
lean_dec_ref(v_t_1545_);
lean_dec_ref(v_h_1544_);
lean_dec_ref(v___x_1542_);
v___x_1602_ = lean_box(0);
v___x_1603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
return v___x_1603_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3___boxed(lean_object* v___x_1604_, lean_object* v___x_1605_, lean_object* v___x_1606_, lean_object* v___x_1607_, lean_object* v_i_1608_, lean_object* v_h_1609_, lean_object* v_t_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v___x_54774__boxed_1618_; size_t v___x_54776__boxed_1619_; lean_object* v_res_1620_; 
v___x_54774__boxed_1618_ = lean_unbox(v___x_1604_);
v___x_54776__boxed_1619_ = lean_unbox_usize(v___x_1606_);
lean_dec(v___x_1606_);
v_res_1620_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3(v___x_54774__boxed_1618_, v___x_1605_, v___x_54776__boxed_1619_, v___x_1607_, v_i_1608_, v_h_1609_, v_t_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v_i_1608_);
lean_dec_ref(v___x_1605_);
return v_res_1620_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__0));
v___x_1623_ = l_Lean_stringToMessageData(v___x_1622_);
return v___x_1623_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__2));
v___x_1626_ = l_Lean_stringToMessageData(v___x_1625_);
return v___x_1626_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5(void){
_start:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1628_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__4));
v___x_1629_ = l_Lean_stringToMessageData(v___x_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4(lean_object* v___f_1630_, lean_object* v_target_1631_, lean_object* v___f_1632_, lean_object* v_x_1633_, lean_object* v_h_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v___x_1642_; 
lean_inc(v___y_1640_);
lean_inc_ref(v___y_1639_);
lean_inc(v___y_1638_);
lean_inc_ref(v___y_1637_);
lean_inc(v___y_1636_);
lean_inc_ref(v___y_1635_);
lean_inc_ref(v_target_1631_);
lean_inc_ref(v_h_1634_);
v___x_1642_ = lean_apply_9(v___f_1630_, v_h_1634_, v_target_1631_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, lean_box(0));
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1663_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1663_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1663_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
if (lean_obj_tag(v_a_1643_) == 0)
{
lean_object* v___x_1647_; 
lean_del_object(v___x_1645_);
lean_inc(v___y_1640_);
lean_inc_ref(v___y_1639_);
lean_inc(v___y_1638_);
lean_inc_ref(v___y_1637_);
lean_inc(v___y_1636_);
lean_inc_ref(v___y_1635_);
v___x_1647_ = lean_apply_8(v___f_1632_, v_h_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_, lean_box(0));
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v___x_1649_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1, &lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__1);
v___x_1650_ = l_Lean_indentExpr(v_a_1648_);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
v___x_1652_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3, &lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__3);
v___x_1653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = l_Lean_indentExpr(v_target_1631_);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5, &lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___closed__5);
v___x_1657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1657_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
return v___x_1658_;
}
else
{
lean_dec_ref(v_target_1631_);
return v___x_1647_;
}
}
else
{
lean_object* v_val_1659_; lean_object* v___x_1661_; 
lean_dec_ref(v_h_1634_);
lean_dec_ref(v___f_1632_);
lean_dec_ref(v_target_1631_);
v_val_1659_ = lean_ctor_get(v_a_1643_, 0);
lean_inc(v_val_1659_);
lean_dec_ref_known(v_a_1643_, 1);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v_val_1659_);
v___x_1661_ = v___x_1645_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_val_1659_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1671_; 
lean_dec_ref(v_h_1634_);
lean_dec_ref(v___f_1632_);
lean_dec_ref(v_target_1631_);
v_a_1664_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1666_ = v___x_1642_;
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_a_1664_);
lean_dec(v___x_1642_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1671_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
lean_object* v___x_1669_; 
if (v_isShared_1667_ == 0)
{
v___x_1669_ = v___x_1666_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_a_1664_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___boxed(lean_object* v___f_1672_, lean_object* v_target_1673_, lean_object* v___f_1674_, lean_object* v_x_1675_, lean_object* v_h_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4(v___f_1672_, v_target_1673_, v___f_1674_, v_x_1675_, v_h_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v_x_1675_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object* v_as_1685_, size_t v_sz_1686_, size_t v_i_1687_, lean_object* v_b_1688_){
_start:
{
uint8_t v___x_1690_; 
v___x_1690_ = lean_usize_dec_lt(v_i_1687_, v_sz_1686_);
if (v___x_1690_ == 0)
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_b_1688_);
return v___x_1691_;
}
else
{
lean_object* v_a_1692_; lean_object* v_snd_1693_; lean_object* v_fst_1694_; lean_object* v_fst_1695_; uint32_t v___x_1696_; lean_object* v___x_1697_; size_t v___x_1698_; size_t v___x_1699_; 
v_a_1692_ = lean_array_uget_borrowed(v_as_1685_, v_i_1687_);
v_snd_1693_ = lean_ctor_get(v_a_1692_, 1);
v_fst_1694_ = lean_ctor_get(v_a_1692_, 0);
v_fst_1695_ = lean_ctor_get(v_snd_1693_, 0);
v___x_1696_ = lean_unbox_uint32(v_fst_1695_);
lean_inc(v_fst_1694_);
v___x_1697_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_1688_, v___x_1696_, v_fst_1694_);
v___x_1698_ = ((size_t)1ULL);
v___x_1699_ = lean_usize_add(v_i_1687_, v___x_1698_);
v_i_1687_ = v___x_1699_;
v_b_1688_ = v___x_1697_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg___boxed(lean_object* v_as_1701_, lean_object* v_sz_1702_, lean_object* v_i_1703_, lean_object* v_b_1704_, lean_object* v___y_1705_){
_start:
{
size_t v_sz_boxed_1706_; size_t v_i_boxed_1707_; lean_object* v_res_1708_; 
v_sz_boxed_1706_ = lean_unbox_usize(v_sz_1702_);
lean_dec(v_sz_1702_);
v_i_boxed_1707_ = lean_unbox_usize(v_i_1703_);
lean_dec(v_i_1703_);
v_res_1708_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v_as_1701_, v_sz_boxed_1706_, v_i_boxed_1707_, v_b_1704_);
lean_dec_ref(v_as_1701_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(lean_object* v_a_1709_, lean_object* v_as_1710_, size_t v_sz_1711_, size_t v_i_1712_, lean_object* v_b_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v_a_1722_; uint8_t v___x_1726_; 
v___x_1726_ = lean_usize_dec_lt(v_i_1712_, v_sz_1711_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v_b_1713_);
return v___x_1727_;
}
else
{
lean_object* v_a_1728_; lean_object* v_fst_1729_; lean_object* v_snd_1730_; uint32_t v___x_1731_; lean_object* v___x_1732_; 
v_a_1728_ = lean_array_uget_borrowed(v_as_1710_, v_i_1712_);
v_fst_1729_ = lean_ctor_get(v_a_1728_, 0);
v_snd_1730_ = lean_ctor_get(v_a_1728_, 1);
v___x_1731_ = lean_unbox_uint32(v_fst_1729_);
v___x_1732_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_a_1709_, v___x_1731_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v___x_1733_; 
lean_inc(v_snd_1730_);
v___x_1733_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_1730_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1735_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1734_);
lean_dec_ref_known(v___x_1733_, 1);
v___x_1735_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_1734_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = lean_array_push(v_b_1713_, v_a_1736_);
v_a_1722_ = v___x_1737_;
goto v___jp_1721_;
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec_ref(v_b_1713_);
v_a_1738_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1735_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1735_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec_ref(v_b_1713_);
v_a_1746_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1733_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1733_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
else
{
lean_object* v_val_1754_; lean_object* v___x_1755_; 
v_val_1754_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_val_1754_);
lean_dec_ref_known(v___x_1732_, 1);
v___x_1755_ = lean_array_push(v_b_1713_, v_val_1754_);
v_a_1722_ = v___x_1755_;
goto v___jp_1721_;
}
}
v___jp_1721_:
{
size_t v___x_1723_; size_t v___x_1724_; 
v___x_1723_ = ((size_t)1ULL);
v___x_1724_ = lean_usize_add(v_i_1712_, v___x_1723_);
v_i_1712_ = v___x_1724_;
v_b_1713_ = v_a_1722_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1___boxed(lean_object* v_a_1756_, lean_object* v_as_1757_, lean_object* v_sz_1758_, lean_object* v_i_1759_, lean_object* v_b_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
size_t v_sz_boxed_1768_; size_t v_i_boxed_1769_; lean_object* v_res_1770_; 
v_sz_boxed_1768_ = lean_unbox_usize(v_sz_1758_);
lean_dec(v_sz_1758_);
v_i_boxed_1769_ = lean_unbox_usize(v_i_1759_);
lean_dec(v_i_1759_);
v_res_1770_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(v_a_1756_, v_as_1757_, v_sz_boxed_1768_, v_i_boxed_1769_, v_b_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec(v___y_1764_);
lean_dec_ref(v___y_1763_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec_ref(v_as_1757_);
lean_dec_ref(v_a_1756_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg(lean_object* v_a_1771_, size_t v_sz_1772_, size_t v_i_1773_, lean_object* v_bs_1774_){
_start:
{
uint8_t v___x_1775_; 
v___x_1775_ = lean_usize_dec_lt(v_i_1773_, v_sz_1772_);
if (v___x_1775_ == 0)
{
return v_bs_1774_;
}
else
{
lean_object* v_v_1776_; lean_object* v___x_1777_; lean_object* v_bs_x27_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; size_t v___x_1785_; size_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_v_1776_ = lean_array_uget(v_bs_1774_, v_i_1773_);
v___x_1777_ = lean_unsigned_to_nat(0u);
v_bs_x27_1778_ = lean_array_uset(v_bs_1774_, v_i_1773_, v___x_1777_);
v___x_1779_ = lean_usize_to_nat(v_i_1773_);
v___x_1780_ = lean_unsigned_to_nat(1u);
v___x_1781_ = lean_nat_add(v___x_1779_, v___x_1780_);
lean_dec(v___x_1779_);
v___x_1782_ = lean_array_get_size(v_a_1771_);
v___x_1783_ = l_Array_extract___redArg(v_a_1771_, v___x_1781_, v___x_1782_);
v___x_1784_ = l_Array_contains___at___00Lean_Server_FileWorker_waitUnknownIdentifierRanges_spec__2(v___x_1783_, v_v_1776_);
lean_dec(v_v_1776_);
lean_dec_ref(v___x_1783_);
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_add(v_i_1773_, v___x_1785_);
v___x_1787_ = lean_box(v___x_1784_);
v___x_1788_ = lean_array_uset(v_bs_x27_1778_, v_i_1773_, v___x_1787_);
v_i_1773_ = v___x_1786_;
v_bs_1774_ = v___x_1788_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg___boxed(lean_object* v_a_1790_, lean_object* v_sz_1791_, lean_object* v_i_1792_, lean_object* v_bs_1793_){
_start:
{
size_t v_sz_boxed_1794_; size_t v_i_boxed_1795_; lean_object* v_res_1796_; 
v_sz_boxed_1794_ = lean_unbox_usize(v_sz_1791_);
lean_dec(v_sz_1791_);
v_i_boxed_1795_ = lean_unbox_usize(v_i_1792_);
lean_dec(v_i_1792_);
v_res_1796_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg(v_a_1790_, v_sz_boxed_1794_, v_i_boxed_1795_, v_bs_1793_);
lean_dec_ref(v_a_1790_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5(lean_object* v___x_1799_, lean_object* v_unit_1800_, lean_object* v_parent_1801_, lean_object* v_val_1802_, lean_object* v_val_1803_, lean_object* v___f_1804_, uint8_t v___x_1805_, lean_object* v_premiseProof_1806_, lean_object* v_xs_1807_, lean_object* v_target_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; size_t v_sz_1819_; size_t v___x_1820_; lean_object* v___x_1821_; 
v___x_1816_ = lean_unsigned_to_nat(0u);
v___x_1817_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Step_0__Vampire_Reconstruct_buildConclusion___closed__1);
v___x_1818_ = l_Array_zip___redArg(v_xs_1807_, v___x_1799_);
v_sz_1819_ = lean_array_size(v___x_1818_);
v___x_1820_ = ((size_t)0ULL);
v___x_1821_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_1818_, v_sz_1819_, v___x_1820_, v___x_1817_);
lean_dec_ref(v___x_1818_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
v___x_1823_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_1800_);
lean_inc_ref(v_parent_1801_);
v___x_1824_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v_parent_1801_, v_a_1822_, v___x_1823_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec_ref(v___x_1823_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; size_t v_sz_1828_; lean_object* v___x_1829_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 1);
v___x_1826_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_instantiateAt___closed__0));
lean_inc_ref(v_parent_1801_);
v___x_1827_ = lp_vampireReplay_Vampire_Unit_varSorts(v_parent_1801_);
v_sz_1828_ = lean_array_size(v___x_1827_);
v___x_1829_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__1(v_a_1825_, v___x_1827_, v_sz_1828_, v___x_1820_, v___x_1826_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec_ref(v___x_1827_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1831_; size_t v_sz_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_a_1830_);
lean_dec_ref_known(v___x_1829_, 1);
v___x_1831_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1802_);
v_sz_1832_ = lean_array_size(v___x_1831_);
v___x_1833_ = lean_box_usize(v_sz_1832_);
v___x_1834_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1));
lean_inc(v_a_1825_);
v___x_1835_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0___boxed), 11, 4);
lean_closure_set(v___x_1835_, 0, v_a_1825_);
lean_closure_set(v___x_1835_, 1, v___x_1833_);
lean_closure_set(v___x_1835_, 2, v___x_1834_);
lean_closure_set(v___x_1835_, 3, v___x_1831_);
v___x_1836_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_parent_1801_, v___x_1835_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec_ref(v_parent_1801_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1838_; size_t v_sz_1839_; lean_object* v___x_1840_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
v___x_1838_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1803_);
v_sz_1839_ = lean_array_size(v___x_1838_);
v___x_1840_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_clause_spec__0(v_a_1825_, v_sz_1839_, v___x_1820_, v___x_1838_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec(v_a_1825_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1842_; lean_object* v___f_1843_; lean_object* v___f_1844_; size_t v_sz_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___f_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1840_, 1);
v___x_1842_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1));
lean_inc_ref_n(v_target_1808_, 2);
lean_inc_ref(v___f_1804_);
v___f_1843_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___boxed), 14, 5);
lean_closure_set(v___f_1843_, 0, v___f_1804_);
lean_closure_set(v___f_1843_, 1, v_target_1808_);
lean_closure_set(v___f_1843_, 2, v_a_1841_);
lean_closure_set(v___f_1843_, 3, v___x_1842_);
lean_closure_set(v___f_1843_, 4, v___x_1826_);
lean_inc_ref(v___f_1843_);
v___f_1844_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__2___boxed), 11, 1);
lean_closure_set(v___f_1844_, 0, v___f_1843_);
v_sz_1845_ = lean_array_size(v_a_1837_);
lean_inc_n(v_a_1837_, 2);
v___x_1846_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg(v_a_1837_, v_sz_1845_, v___x_1820_, v_a_1837_);
v___x_1847_ = lean_box(v___x_1805_);
v___x_1848_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed__const__1));
v___f_1849_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__3___boxed), 14, 4);
lean_closure_set(v___f_1849_, 0, v___x_1847_);
lean_closure_set(v___f_1849_, 1, v___x_1846_);
lean_closure_set(v___f_1849_, 2, v___x_1848_);
lean_closure_set(v___f_1849_, 3, v___x_1826_);
v___x_1850_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__3___closed__1));
v___x_1851_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__1___closed__1));
v___x_1852_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1850_, v___x_1851_, v_a_1837_);
v___x_1853_ = lp_vampireReplay_Vampire_Reconstruct_carrying(v___x_1852_, v_target_1808_, v___x_1816_, v___f_1849_, v___f_1844_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v___x_1853_, 1);
if (lean_obj_tag(v_a_1854_) == 1)
{
lean_object* v_val_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; uint8_t v___x_1859_; uint8_t v___x_1860_; lean_object* v___x_1861_; 
lean_dec_ref(v___f_1843_);
lean_dec(v_a_1837_);
lean_dec_ref(v_target_1808_);
lean_dec_ref(v___f_1804_);
v_val_1855_ = lean_ctor_get(v_a_1854_, 0);
lean_inc(v_val_1855_);
lean_dec_ref_known(v_a_1854_, 1);
v___x_1856_ = l_Lean_mkAppN(v_premiseProof_1806_, v_a_1830_);
lean_dec(v_a_1830_);
v___x_1857_ = l_Lean_Expr_app___override(v_val_1855_, v___x_1856_);
v___x_1858_ = 0;
v___x_1859_ = 1;
v___x_1860_ = 1;
v___x_1861_ = l_Lean_Meta_mkLambdaFVars(v_xs_1807_, v___x_1857_, v___x_1858_, v___x_1859_, v___x_1858_, v___x_1859_, v___x_1860_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
return v___x_1861_;
}
else
{
lean_object* v___f_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
lean_dec(v_a_1854_);
v___f_1862_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__4___boxed), 12, 3);
lean_closure_set(v___f_1862_, 0, v___f_1843_);
lean_closure_set(v___f_1862_, 1, v_target_1808_);
lean_closure_set(v___f_1862_, 2, v___f_1804_);
v___x_1863_ = l_Lean_mkAppN(v_premiseProof_1806_, v_a_1830_);
lean_dec(v_a_1830_);
v___x_1864_ = lean_box(0);
v___x_1865_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_a_1837_, v___f_1862_, v___x_1863_, v___x_1816_, v___x_1864_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec(v_a_1837_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; uint8_t v___x_1867_; uint8_t v___x_1868_; uint8_t v___x_1869_; lean_object* v___x_1870_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = 0;
v___x_1868_ = 1;
v___x_1869_ = 1;
v___x_1870_ = l_Lean_Meta_mkLambdaFVars(v_xs_1807_, v_a_1866_, v___x_1867_, v___x_1868_, v___x_1867_, v___x_1868_, v___x_1869_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
return v___x_1870_;
}
else
{
return v___x_1865_;
}
}
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec_ref(v___f_1843_);
lean_dec(v_a_1837_);
lean_dec(v_a_1830_);
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
v_a_1871_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1853_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1853_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_dec(v_a_1837_);
lean_dec(v_a_1830_);
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
v_a_1879_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1840_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1840_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_dec(v_a_1830_);
lean_dec(v_a_1825_);
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
lean_dec_ref(v_val_1803_);
v_a_1887_ = lean_ctor_get(v___x_1836_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1836_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1836_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1836_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v_a_1825_);
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
lean_dec_ref(v_val_1803_);
lean_dec_ref(v_val_1802_);
lean_dec_ref(v_parent_1801_);
v_a_1895_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1829_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1829_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
lean_dec_ref(v_val_1803_);
lean_dec_ref(v_val_1802_);
lean_dec_ref(v_parent_1801_);
v_a_1903_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1824_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1824_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec_ref(v_target_1808_);
lean_dec_ref(v_premiseProof_1806_);
lean_dec_ref(v___f_1804_);
lean_dec_ref(v_val_1803_);
lean_dec_ref(v_val_1802_);
lean_dec_ref(v_parent_1801_);
lean_dec_ref(v_unit_1800_);
v_a_1911_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1821_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1821_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed(lean_object** _args){
lean_object* v___x_1919_ = _args[0];
lean_object* v_unit_1920_ = _args[1];
lean_object* v_parent_1921_ = _args[2];
lean_object* v_val_1922_ = _args[3];
lean_object* v_val_1923_ = _args[4];
lean_object* v___f_1924_ = _args[5];
lean_object* v___x_1925_ = _args[6];
lean_object* v_premiseProof_1926_ = _args[7];
lean_object* v_xs_1927_ = _args[8];
lean_object* v_target_1928_ = _args[9];
lean_object* v___y_1929_ = _args[10];
lean_object* v___y_1930_ = _args[11];
lean_object* v___y_1931_ = _args[12];
lean_object* v___y_1932_ = _args[13];
lean_object* v___y_1933_ = _args[14];
lean_object* v___y_1934_ = _args[15];
lean_object* v___y_1935_ = _args[16];
_start:
{
uint8_t v___x_55188__boxed_1936_; lean_object* v_res_1937_; 
v___x_55188__boxed_1936_ = lean_unbox(v___x_1925_);
v_res_1937_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5(v___x_1919_, v_unit_1920_, v_parent_1921_, v_val_1922_, v_val_1923_, v___f_1924_, v___x_55188__boxed_1936_, v_premiseProof_1926_, v_xs_1927_, v_target_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec_ref(v_xs_1927_);
lean_dec_ref(v___x_1919_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals(lean_object* v_step_1939_, lean_object* v_parent_1940_, lean_object* v_premiseProof_1941_, lean_object* v_premiseStated_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; 
lean_inc_ref(v_parent_1940_);
v___x_1950_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_parent_1940_);
if (lean_obj_tag(v___x_1950_) == 1)
{
lean_object* v_val_1951_; lean_object* v_unit_1952_; lean_object* v___x_1953_; 
v_val_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_val_1951_);
lean_dec_ref_known(v___x_1950_, 1);
v_unit_1952_ = lean_ctor_get(v_step_1939_, 0);
lean_inc_ref(v_unit_1952_);
v___x_1953_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_unit_1952_);
if (lean_obj_tag(v___x_1953_) == 1)
{
lean_object* v_val_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1970_; 
lean_inc_ref(v_unit_1952_);
lean_dec_ref(v_premiseStated_1942_);
v_val_1954_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1956_ = v___x_1953_;
v_isShared_1957_ = v_isSharedCheck_1970_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_val_1954_);
lean_dec(v___x_1953_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1970_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1958_; 
v___x_1958_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1939_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; lean_object* v___f_1960_; uint8_t v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
v___f_1960_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___closed__0));
v___x_1961_ = 0;
lean_inc_ref(v_unit_1952_);
v___x_1962_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_1952_);
v___x_1963_ = lean_box(v___x_1961_);
lean_inc_ref(v___x_1962_);
v___f_1964_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_relateLiterals___lam__5___boxed), 17, 8);
lean_closure_set(v___f_1964_, 0, v___x_1962_);
lean_closure_set(v___f_1964_, 1, v_unit_1952_);
lean_closure_set(v___f_1964_, 2, v_parent_1940_);
lean_closure_set(v___f_1964_, 3, v_val_1951_);
lean_closure_set(v___f_1964_, 4, v_val_1954_);
lean_closure_set(v___f_1964_, 5, v___f_1960_);
lean_closure_set(v___f_1964_, 6, v___x_1963_);
lean_closure_set(v___f_1964_, 7, v_premiseProof_1941_);
v___x_1965_ = lean_array_get_size(v___x_1962_);
lean_dec_ref(v___x_1962_);
if (v_isShared_1957_ == 0)
{
lean_ctor_set(v___x_1956_, 0, v___x_1965_);
v___x_1967_ = v___x_1956_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
lean_object* v___x_1968_; 
v___x_1968_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_1959_, v___x_1967_, v___f_1964_, v___x_1961_, v___x_1961_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
return v___x_1968_;
}
}
else
{
lean_del_object(v___x_1956_);
lean_dec(v_val_1954_);
lean_dec_ref(v_unit_1952_);
lean_dec(v_val_1951_);
lean_dec_ref(v_premiseProof_1941_);
lean_dec_ref(v_parent_1940_);
return v___x_1958_;
}
}
}
else
{
lean_object* v___x_1971_; lean_object* v_a_1972_; lean_object* v___x_1973_; 
lean_dec(v___x_1953_);
lean_dec(v_val_1951_);
lean_dec_ref(v_parent_1940_);
v___x_1971_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_premiseStated_1942_, v_a_1946_);
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref(v___x_1971_);
v___x_1973_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1939_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1975_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
v___x_1975_ = lp_vampireReplay_Vampire_Reconstruct_implies(v_a_1972_, v_a_1974_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1984_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1984_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1984_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1980_; lean_object* v___x_1982_; 
v___x_1980_ = l_Lean_Expr_app___override(v_a_1976_, v_premiseProof_1941_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v___x_1980_);
v___x_1982_ = v___x_1978_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
else
{
lean_dec_ref(v_premiseProof_1941_);
return v___x_1975_;
}
}
else
{
lean_dec(v_a_1972_);
lean_dec_ref(v_premiseProof_1941_);
return v___x_1973_;
}
}
}
else
{
lean_object* v___x_1985_; lean_object* v_a_1986_; lean_object* v___x_1987_; 
lean_dec(v___x_1950_);
lean_dec_ref(v_parent_1940_);
v___x_1985_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_premiseStated_1942_, v_a_1946_);
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_1939_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1989_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
v___x_1989_ = lp_vampireReplay_Vampire_Reconstruct_implies(v_a_1986_, v_a_1988_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1998_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_1998_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1998_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1994_; lean_object* v___x_1996_; 
v___x_1994_ = l_Lean_Expr_app___override(v_a_1990_, v_premiseProof_1941_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 0, v___x_1994_);
v___x_1996_ = v___x_1992_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v___x_1994_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
else
{
lean_dec_ref(v_premiseProof_1941_);
return v___x_1989_;
}
}
else
{
lean_dec(v_a_1986_);
lean_dec_ref(v_premiseProof_1941_);
return v___x_1987_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_relateLiterals___boxed(lean_object* v_step_1999_, lean_object* v_parent_2000_, lean_object* v_premiseProof_2001_, lean_object* v_premiseStated_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = lp_vampireReplay_Vampire_Reconstruct_relateLiterals(v_step_1999_, v_parent_2000_, v_premiseProof_2001_, v_premiseStated_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
lean_dec(v_a_2008_);
lean_dec_ref(v_a_2007_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0(lean_object* v_as_2011_, size_t v_sz_2012_, size_t v_i_2013_, lean_object* v_b_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v_as_2011_, v_sz_2012_, v_i_2013_, v_b_2014_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___boxed(lean_object* v_as_2023_, lean_object* v_sz_2024_, lean_object* v_i_2025_, lean_object* v_b_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
size_t v_sz_boxed_2034_; size_t v_i_boxed_2035_; lean_object* v_res_2036_; 
v_sz_boxed_2034_ = lean_unbox_usize(v_sz_2024_);
lean_dec(v_sz_2024_);
v_i_boxed_2035_ = lean_unbox_usize(v_i_2025_);
lean_dec(v_i_2025_);
v_res_2036_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0(v_as_2023_, v_sz_boxed_2034_, v_i_boxed_2035_, v_b_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec_ref(v_as_2023_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4(lean_object* v_a_2037_, lean_object* v_as_2038_, size_t v_sz_2039_, size_t v_i_2040_, lean_object* v_bs_2041_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___redArg(v_a_2037_, v_sz_2039_, v_i_2040_, v_bs_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4___boxed(lean_object* v_a_2043_, lean_object* v_as_2044_, lean_object* v_sz_2045_, lean_object* v_i_2046_, lean_object* v_bs_2047_){
_start:
{
size_t v_sz_boxed_2048_; size_t v_i_boxed_2049_; lean_object* v_res_2050_; 
v_sz_boxed_2048_ = lean_unbox_usize(v_sz_2045_);
lean_dec(v_sz_2045_);
v_i_boxed_2049_ = lean_unbox_usize(v_i_2046_);
lean_dec(v_i_2046_);
v_res_2050_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Vampire_Reconstruct_relateLiterals_spec__4(v_a_2043_, v_as_2044_, v_sz_boxed_2048_, v_i_boxed_2049_, v_bs_2047_);
lean_dec_ref(v_as_2044_);
lean_dec_ref(v_a_2043_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5(lean_object* v_t_2051_, lean_object* v_as_2052_, size_t v_sz_2053_, size_t v_i_2054_, lean_object* v_b_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v___x_2063_; 
v___x_2063_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___redArg(v_t_2051_, v_as_2052_, v_sz_2053_, v_i_2054_, v_b_2055_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5___boxed(lean_object* v_t_2064_, lean_object* v_as_2065_, lean_object* v_sz_2066_, lean_object* v_i_2067_, lean_object* v_b_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
size_t v_sz_boxed_2076_; size_t v_i_boxed_2077_; lean_object* v_res_2078_; 
v_sz_boxed_2076_ = lean_unbox_usize(v_sz_2066_);
lean_dec(v_sz_2066_);
v_i_boxed_2077_ = lean_unbox_usize(v_i_2067_);
lean_dec(v_i_2067_);
v_res_2078_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__5_spec__5(v_t_2064_, v_as_2065_, v_sz_boxed_2076_, v_i_boxed_2077_, v_b_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
lean_dec(v___y_2074_);
lean_dec_ref(v___y_2073_);
lean_dec(v___y_2072_);
lean_dec_ref(v___y_2071_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec_ref(v_as_2065_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_unimplemented(lean_object* v_step_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_){
_start:
{
lean_object* v___x_2087_; lean_object* v_proofs_2088_; lean_object* v_unimplemented_2089_; lean_object* v_introduced_2090_; lean_object* v_named_2091_; lean_object* v_conclusions_2092_; lean_object* v_shared_2093_; lean_object* v_nonempty_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2110_; 
v___x_2087_ = lean_st_ref_take(v_a_2081_);
v_proofs_2088_ = lean_ctor_get(v___x_2087_, 0);
v_unimplemented_2089_ = lean_ctor_get(v___x_2087_, 1);
v_introduced_2090_ = lean_ctor_get(v___x_2087_, 2);
v_named_2091_ = lean_ctor_get(v___x_2087_, 3);
v_conclusions_2092_ = lean_ctor_get(v___x_2087_, 4);
v_shared_2093_ = lean_ctor_get(v___x_2087_, 5);
v_nonempty_2094_ = lean_ctor_get(v___x_2087_, 6);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2096_ = v___x_2087_;
v_isShared_2097_ = v_isSharedCheck_2110_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_nonempty_2094_);
lean_inc(v_shared_2093_);
lean_inc(v_conclusions_2092_);
lean_inc(v_named_2091_);
lean_inc(v_introduced_2090_);
lean_inc(v_unimplemented_2089_);
lean_inc(v_proofs_2088_);
lean_dec(v___x_2087_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2110_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
uint8_t v_rule_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2103_; 
v_rule_2098_ = lean_ctor_get_uint8(v_step_2079_, sizeof(void*)*3);
v___x_2099_ = lp_vampireReplay_Vampire_InferenceRule_name(v_rule_2098_);
v___x_2100_ = lean_box(0);
v___x_2101_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_Lsp_instFromJsonLogConfig_fromJson_spec__1_spec__2_spec__4_spec__5___redArg(v_unimplemented_2089_, v___x_2099_, v___x_2100_);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 1, v___x_2101_);
v___x_2103_ = v___x_2096_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_proofs_2088_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v___x_2101_);
lean_ctor_set(v_reuseFailAlloc_2109_, 2, v_introduced_2090_);
lean_ctor_set(v_reuseFailAlloc_2109_, 3, v_named_2091_);
lean_ctor_set(v_reuseFailAlloc_2109_, 4, v_conclusions_2092_);
lean_ctor_set(v_reuseFailAlloc_2109_, 5, v_shared_2093_);
lean_ctor_set(v_reuseFailAlloc_2109_, 6, v_nonempty_2094_);
v___x_2103_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_st_ref_set(v_a_2081_, v___x_2103_);
v___x_2105_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v_a_2106_; uint8_t v___x_2107_; lean_object* v___x_2108_; 
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
lean_inc(v_a_2106_);
lean_dec_ref_known(v___x_2105_, 1);
v___x_2107_ = 0;
v___x_2108_ = l_Lean_Meta_mkSorry(v_a_2106_, v___x_2107_, v_a_2082_, v_a_2083_, v_a_2084_, v_a_2085_);
return v___x_2108_;
}
else
{
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_unimplemented___boxed(lean_object* v_step_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = lp_vampireReplay_Vampire_Reconstruct_unimplemented(v_step_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_);
lean_dec(v_a_2117_);
lean_dec_ref(v_a_2116_);
lean_dec(v_a_2115_);
lean_dec_ref(v_a_2114_);
lean_dec(v_a_2113_);
lean_dec_ref(v_a_2112_);
return v_res_2119_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Carry(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Equiv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Step(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Carry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_vampireReplay_VampireReplay_Reconstruct_Equiv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
