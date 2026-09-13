// Lean compiler output
// Module: VampireReplay.Reconstruct
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Basic public import VampireReplay.Reconstruct.Rules
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
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_splits(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Array_contains___at___00Lean_Server_FileWorker_handlePostRequestSpecialCases_spec__3(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_ofRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_InferenceRule_name(uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_transform___at___00__private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_zetaDeltaImplDetailsInProps_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_CollectFVars_main(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint32_t lp_vampireReplay_Vampire_Unit_ruleIndex(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_skolems(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_rule_x3f(lean_object*);
uint8_t lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_namings(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_genClause_x3f(lean_object*);
uint8_t lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(uint8_t);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_reading___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Splitting_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Proof_units(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_VampireReplay_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_VampireReplay_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lp_vampireReplay_Vampire_Proof_refutation_x3f(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonLogConfig_toJson_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__0_value;
static const lean_closure_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "no assumption for `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " does not assume `"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "replaying "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " for step "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0(lean_object*, lean_object*, lean_object*, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " was reached before step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ", which it was inferred from"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "reconstruction of "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " proves"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "\nbut the step claims"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " is ill-typed: "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " leaked the local"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__10_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__10_value)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__11_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "\nwhich is out of scope in the proof it was built for"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__13 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__13_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16;
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__17 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__17_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "stating step "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__19 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__19_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__21 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__21_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "): "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__23 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__23_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = " has unknown inference rule "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__25 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__25_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed__const__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0;
static const lean_string_object lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__1 = (const lean_object*)&lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__1_value;
static const lean_array_object lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "the refutation was not replayed"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "timing"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__4_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "vampire"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__3_value),LEAN_SCALAR_PTR_LITERAL(194, 39, 229, 192, 214, 69, 202, 219)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5_value_aux_0),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 101, 81, 26, 132, 239, 107, 84)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__6_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__7_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " took "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__9_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ms"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__11_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__13 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__13_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__3_value),LEAN_SCALAR_PTR_LITERAL(194, 39, 229, 192, 214, 69, 202, 219)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "could not bind what step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ") introduces"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(143) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = " named a formula over variables it does not record the sorts of"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = " records skolems but states no formula"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0_value)}};
static const lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_run___closed__0;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_run___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_run(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0(lean_object* v_x_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___closed__0));
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0___boxed(lean_object* v_x_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__0(v_x_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
lean_dec(v___y_13_);
lean_dec_ref(v___y_12_);
lean_dec_ref(v_x_11_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1(lean_object* v_e_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = l_Lean_Expr_headBeta(v_e_18_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1___boxed(lean_object* v_e_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___lam__1(v_e_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec_ref(v___y_30_);
lean_dec(v___y_29_);
lean_dec_ref(v___y_28_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll(lean_object* v_e_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v___f_42_; lean_object* v___f_43_; uint8_t v___x_44_; lean_object* v___x_45_; 
v___f_42_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__0));
v___f_43_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___closed__1));
v___x_44_ = 0;
v___x_45_ = l_Lean_Meta_transform___at___00__private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_zetaDeltaImplDetailsInProps_spec__1(v_e_36_, v___f_42_, v___f_43_, v___x_44_, v___x_44_, v_a_37_, v_a_38_, v_a_39_, v_a_40_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll___boxed(lean_object* v_e_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll(v_e_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order(lean_object* v_u_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_fst_55_; lean_object* v_snd_56_; uint32_t v___x_57_; uint8_t v___x_58_; 
v_fst_55_ = lean_ctor_get(v_a_54_, 0);
v_snd_56_ = lean_ctor_get(v_a_54_, 1);
v___x_57_ = lp_vampireReplay_Vampire_Unit_number(v_u_53_);
v___x_58_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v_fst_55_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_90_; 
lean_inc(v_snd_56_);
lean_inc(v_fst_55_);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_54_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; lean_object* v_unused_92_; 
v_unused_91_ = lean_ctor_get(v_a_54_, 1);
lean_dec(v_unused_91_);
v_unused_92_ = lean_ctor_get(v_a_54_, 0);
lean_dec(v_unused_92_);
v___x_60_ = v_a_54_;
v_isShared_61_ = v_isSharedCheck_90_;
goto v_resetjp_59_;
}
else
{
lean_dec(v_a_54_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_90_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_62_ = lean_box(0);
v___x_63_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_VampireReplay_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satOrder_spec__0___redArg(v_fst_55_, v___x_57_, v___x_62_);
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 0, v___x_63_);
v___x_65_ = v___x_60_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_63_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_snd_56_);
v___x_65_ = v_reuseFailAlloc_89_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
lean_object* v___x_66_; size_t v_sz_67_; size_t v___x_68_; lean_object* v___x_69_; lean_object* v_snd_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_87_; 
lean_inc_ref(v_u_53_);
v___x_66_ = lp_vampireReplay_Vampire_Unit_parents(v_u_53_);
v_sz_67_ = lean_array_size(v___x_66_);
v___x_68_ = ((size_t)0ULL);
v___x_69_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0(v___x_66_, v_sz_67_, v___x_68_, v___x_62_, v___x_65_);
lean_dec_ref(v___x_66_);
v_snd_70_ = lean_ctor_get(v___x_69_, 1);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v___x_69_, 0);
lean_dec(v_unused_88_);
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_87_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_snd_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_87_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v_fst_74_; lean_object* v_snd_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_86_; 
v_fst_74_ = lean_ctor_get(v_snd_70_, 0);
v_snd_75_ = lean_ctor_get(v_snd_70_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v_snd_70_);
if (v_isSharedCheck_86_ == 0)
{
v___x_77_ = v_snd_70_;
v_isShared_78_ = v_isSharedCheck_86_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_snd_75_);
lean_inc(v_fst_74_);
lean_dec(v_snd_70_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_86_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_79_ = lean_array_push(v_snd_75_, v_u_53_);
if (v_isShared_78_ == 0)
{
lean_ctor_set(v___x_77_, 1, v___x_79_);
v___x_81_ = v___x_77_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_fst_74_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___x_79_);
v___x_81_ = v_reuseFailAlloc_85_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_83_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 1, v___x_81_);
lean_ctor_set(v___x_72_, 0, v___x_62_);
v___x_83_ = v___x_72_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; 
lean_dec_ref(v_u_53_);
v___x_93_ = lean_box(0);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v_a_54_);
return v___x_94_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0(lean_object* v_as_95_, size_t v_sz_96_, size_t v_i_97_, lean_object* v_b_98_, lean_object* v___y_99_){
_start:
{
uint8_t v___x_100_; 
v___x_100_ = lean_usize_dec_lt(v_i_97_, v_sz_96_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v_b_98_);
lean_ctor_set(v___x_101_, 1, v___y_99_);
return v___x_101_;
}
else
{
lean_object* v_a_102_; lean_object* v___x_103_; lean_object* v_snd_104_; lean_object* v___x_105_; size_t v___x_106_; size_t v___x_107_; 
v_a_102_ = lean_array_uget_borrowed(v_as_95_, v_i_97_);
lean_inc(v_a_102_);
v___x_103_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order(v_a_102_, v___y_99_);
v_snd_104_ = lean_ctor_get(v___x_103_, 1);
lean_inc(v_snd_104_);
lean_dec_ref(v___x_103_);
v___x_105_ = lean_box(0);
v___x_106_ = ((size_t)1ULL);
v___x_107_ = lean_usize_add(v_i_97_, v___x_106_);
v_i_97_ = v___x_107_;
v_b_98_ = v___x_105_;
v___y_99_ = v_snd_104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0___boxed(lean_object* v_as_109_, lean_object* v_sz_110_, lean_object* v_i_111_, lean_object* v_b_112_, lean_object* v___y_113_){
_start:
{
size_t v_sz_boxed_114_; size_t v_i_boxed_115_; lean_object* v_res_116_; 
v_sz_boxed_114_ = lean_unbox_usize(v_sz_110_);
lean_dec(v_sz_110_);
v_i_boxed_115_ = lean_unbox_usize(v_i_111_);
lean_dec(v_i_111_);
v_res_116_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order_spec__0(v_as_109_, v_sz_boxed_114_, v_i_boxed_115_, v_b_112_, v___y_113_);
lean_dec_ref(v_as_109_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1(lean_object* v_a_117_, lean_object* v_as_118_, lean_object* v_j_119_){
_start:
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = lean_array_get_size(v_as_118_);
v___x_121_ = lean_nat_dec_lt(v_j_119_, v___x_120_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec(v_j_119_);
v___x_122_ = lean_box(0);
return v___x_122_;
}
else
{
lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_123_ = lean_array_fget_borrowed(v_as_118_, v_j_119_);
v___x_124_ = lean_string_dec_eq(v___x_123_, v_a_117_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_add(v_j_119_, v___x_125_);
lean_dec(v_j_119_);
v_j_119_ = v___x_126_;
goto _start;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_128_, 0, v_j_119_);
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1___boxed(lean_object* v_a_129_, lean_object* v_as_130_, lean_object* v_j_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1(v_a_129_, v_as_130_, v_j_131_);
lean_dec_ref(v_as_130_);
lean_dec_ref(v_a_129_);
return v_res_132_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__0));
v___x_135_ = l_Lean_stringToMessageData(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__2));
v___x_138_ = l_Lean_stringToMessageData(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__4));
v___x_141_ = l_Lean_stringToMessageData(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__6));
v___x_144_ = l_Lean_stringToMessageData(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg(lean_object* v___x_145_, lean_object* v_assumed_146_, lean_object* v_u_147_, lean_object* v_as_148_, size_t v_sz_149_, size_t v_i_150_, lean_object* v_b_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_a_158_; uint8_t v___x_162_; 
v___x_162_ = lean_usize_dec_lt(v_i_150_, v_sz_149_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_b_151_);
return v___x_163_;
}
else
{
lean_object* v_fst_164_; lean_object* v_snd_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_235_; 
v_fst_164_ = lean_ctor_get(v_b_151_, 0);
v_snd_165_ = lean_ctor_get(v_b_151_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v_b_151_);
if (v_isSharedCheck_235_ == 0)
{
v___x_167_ = v_b_151_;
v_isShared_168_ = v_isSharedCheck_235_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_snd_165_);
lean_inc(v_fst_164_);
lean_dec(v_b_151_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_235_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_a_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_a_169_ = lean_array_uget_borrowed(v_as_148_, v_i_150_);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__1(v_a_169_, v___x_145_, v___x_170_);
if (lean_obj_tag(v___x_171_) == 1)
{
lean_object* v_val_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_val_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_val_172_);
lean_dec_ref_known(v___x_171_, 1);
v___x_173_ = lean_array_get_size(v_assumed_146_);
v___x_174_ = lean_nat_dec_lt(v_val_172_, v___x_173_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
lean_dec(v_val_172_);
v___x_175_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__1);
lean_inc(v_a_169_);
v___x_176_ = l_Lean_stringToMessageData(v_a_169_);
v___x_177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
v___x_178_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3);
v___x_179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_179_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v___x_182_; 
lean_dec_ref_known(v___x_180_, 1);
if (v_isShared_168_ == 0)
{
v___x_182_ = v___x_167_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_fst_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_snd_165_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
v_a_158_ = v___x_182_;
goto v___jp_157_;
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_del_object(v___x_167_);
lean_dec(v_snd_165_);
lean_dec(v_fst_164_);
v_a_184_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_180_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_180_);
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
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_192_ = lean_array_fget_borrowed(v_assumed_146_, v_val_172_);
lean_dec(v_val_172_);
lean_inc_n(v___x_192_, 2);
v___x_193_ = l_Lean_Expr_app___override(v_fst_164_, v___x_192_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_mk_empty_array_with_capacity(v___x_194_);
v___x_196_ = lean_array_push(v___x_195_, v___x_192_);
v___x_197_ = l_Lean_Meta_instantiateForall(v_snd_165_, v___x_196_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
lean_dec_ref(v___x_196_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_200_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v___x_197_, 1);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v_a_198_);
lean_ctor_set(v___x_167_, 0, v___x_193_);
v___x_200_ = v___x_167_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_a_198_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
v_a_158_ = v___x_200_;
goto v___jp_157_;
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec_ref(v___x_193_);
lean_del_object(v___x_167_);
v_a_202_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_197_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_197_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
else
{
lean_object* v___x_210_; uint32_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec(v___x_171_);
v___x_210_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_211_ = lp_vampireReplay_Vampire_Unit_number(v_u_147_);
v___x_212_ = lean_uint32_to_nat(v___x_211_);
v___x_213_ = l_Nat_reprFast(v___x_212_);
v___x_214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = l_Lean_MessageData_ofFormat(v___x_214_);
v___x_216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_210_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__7);
v___x_218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_inc(v_a_169_);
v___x_219_ = l_Lean_stringToMessageData(v_a_169_);
v___x_220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set(v___x_220_, 1, v___x_219_);
v___x_221_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__3);
v___x_222_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_222_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_225_; 
lean_dec_ref_known(v___x_223_, 1);
if (v_isShared_168_ == 0)
{
v___x_225_ = v___x_167_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_fst_164_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v_snd_165_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_a_158_ = v___x_225_;
goto v___jp_157_;
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
lean_del_object(v___x_167_);
lean_dec(v_snd_165_);
lean_dec(v_fst_164_);
v_a_227_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_223_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_223_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
}
v___jp_157_:
{
size_t v___x_159_; size_t v___x_160_; 
v___x_159_ = ((size_t)1ULL);
v___x_160_ = lean_usize_add(v_i_150_, v___x_159_);
v_i_150_ = v___x_160_;
v_b_151_ = v_a_158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___boxed(lean_object* v___x_236_, lean_object* v_assumed_237_, lean_object* v_u_238_, lean_object* v_as_239_, lean_object* v_sz_240_, lean_object* v_i_241_, lean_object* v_b_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
size_t v_sz_boxed_248_; size_t v_i_boxed_249_; lean_object* v_res_250_; 
v_sz_boxed_248_ = lean_unbox_usize(v_sz_240_);
lean_dec(v_sz_240_);
v_i_boxed_249_ = lean_unbox_usize(v_i_241_);
lean_dec(v_i_241_);
v_res_250_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg(v___x_236_, v_assumed_237_, v_u_238_, v_as_239_, v_sz_boxed_248_, v_i_boxed_249_, v_b_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec(v___y_244_);
lean_dec_ref(v___y_243_);
lean_dec_ref(v_as_239_);
lean_dec_ref(v_u_238_);
lean_dec_ref(v_assumed_237_);
lean_dec_ref(v___x_236_);
return v_res_250_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3(lean_object* v___x_251_, lean_object* v_as_252_, size_t v_i_253_, size_t v_stop_254_){
_start:
{
uint8_t v___x_255_; 
v___x_255_ = lean_usize_dec_eq(v_i_253_, v_stop_254_);
if (v___x_255_ == 0)
{
uint8_t v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_256_ = 1;
v___x_257_ = lean_array_uget_borrowed(v_as_252_, v_i_253_);
v___x_258_ = l_Array_contains___at___00Lean_Server_FileWorker_handlePostRequestSpecialCases_spec__3(v___x_251_, v___x_257_);
if (v___x_258_ == 0)
{
return v___x_256_;
}
else
{
if (v___x_255_ == 0)
{
size_t v___x_259_; size_t v___x_260_; 
v___x_259_ = ((size_t)1ULL);
v___x_260_ = lean_usize_add(v_i_253_, v___x_259_);
v_i_253_ = v___x_260_;
goto _start;
}
else
{
return v___x_256_;
}
}
}
else
{
uint8_t v___x_262_; 
v___x_262_ = 0;
return v___x_262_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3___boxed(lean_object* v___x_263_, lean_object* v_as_264_, lean_object* v_i_265_, lean_object* v_stop_266_){
_start:
{
size_t v_i_boxed_267_; size_t v_stop_boxed_268_; uint8_t v_res_269_; lean_object* v_r_270_; 
v_i_boxed_267_ = lean_unbox_usize(v_i_265_);
lean_dec(v_i_265_);
v_stop_boxed_268_ = lean_unbox_usize(v_stop_266_);
lean_dec(v_stop_266_);
v_res_269_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3(v___x_263_, v_as_264_, v_i_boxed_267_, v_stop_boxed_268_);
lean_dec_ref(v_as_264_);
lean_dec_ref(v___x_263_);
v_r_270_ = lean_box(v_res_269_);
return v_r_270_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4(lean_object* v___x_271_, lean_object* v_assumed_272_, lean_object* v_u_273_, size_t v_sz_274_, size_t v_i_275_, lean_object* v_bs_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
uint8_t v___x_284_; 
v___x_284_ = lean_usize_dec_lt(v_i_275_, v_sz_274_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; 
v___x_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_285_, 0, v_bs_276_);
return v___x_285_;
}
else
{
lean_object* v_v_286_; lean_object* v_fst_287_; lean_object* v_snd_288_; lean_object* v___x_289_; lean_object* v_bs_x27_290_; lean_object* v_a_292_; lean_object* v___x_297_; lean_object* v___x_321_; uint8_t v___x_322_; 
v_v_286_ = lean_array_uget_borrowed(v_bs_276_, v_i_275_);
v_fst_287_ = lean_ctor_get(v_v_286_, 0);
lean_inc(v_fst_287_);
v_snd_288_ = lean_ctor_get(v_v_286_, 1);
lean_inc(v_snd_288_);
v___x_289_ = lean_unsigned_to_nat(0u);
v_bs_x27_290_ = lean_array_uset(v_bs_276_, v_i_275_, v___x_289_);
v___x_297_ = lp_vampireReplay_Vampire_Unit_splits(v_fst_287_);
v___x_321_ = lean_array_get_size(v___x_297_);
v___x_322_ = lean_nat_dec_lt(v___x_289_, v___x_321_);
if (v___x_322_ == 0)
{
goto v___jp_298_;
}
else
{
if (v___x_322_ == 0)
{
goto v___jp_298_;
}
else
{
size_t v___x_323_; size_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = ((size_t)0ULL);
v___x_324_ = lean_usize_of_nat(v___x_321_);
v___x_325_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__3(v___x_271_, v___x_297_, v___x_323_, v___x_324_);
if (v___x_325_ == 0)
{
goto v___jp_298_;
}
else
{
lean_dec_ref(v___x_297_);
v_a_292_ = v_snd_288_;
goto v___jp_291_;
}
}
}
v___jp_291_:
{
size_t v___x_293_; size_t v___x_294_; lean_object* v___x_295_; 
v___x_293_ = ((size_t)1ULL);
v___x_294_ = lean_usize_add(v_i_275_, v___x_293_);
v___x_295_ = lean_array_uset(v_bs_x27_290_, v_i_275_, v_a_292_);
v_i_275_ = v___x_294_;
v_bs_276_ = v___x_295_;
goto _start;
}
v___jp_298_:
{
size_t v_sz_299_; size_t v___x_300_; lean_object* v___x_301_; 
v_sz_299_ = lean_array_size(v___x_297_);
v___x_300_ = ((size_t)0ULL);
v___x_301_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg(v___x_271_, v_assumed_272_, v_u_273_, v___x_297_, v_sz_299_, v___x_300_, v_snd_288_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec_ref(v___x_297_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v_fst_303_; lean_object* v_snd_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_a_302_);
lean_dec_ref_known(v___x_301_, 1);
v_fst_303_ = lean_ctor_get(v_a_302_, 0);
v_snd_304_ = lean_ctor_get(v_a_302_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v_a_302_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v_a_302_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_snd_304_);
lean_inc(v_fst_303_);
lean_dec(v_a_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_fst_303_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_snd_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
v_a_292_ = v___x_309_;
goto v___jp_291_;
}
}
}
else
{
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_312_; 
v_a_312_ = lean_ctor_get(v___x_301_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_301_, 1);
v_a_292_ = v_a_312_;
goto v___jp_291_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
lean_dec_ref(v_bs_x27_290_);
v_a_313_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_301_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_301_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4___boxed(lean_object* v___x_326_, lean_object* v_assumed_327_, lean_object* v_u_328_, lean_object* v_sz_329_, lean_object* v_i_330_, lean_object* v_bs_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
size_t v_sz_boxed_339_; size_t v_i_boxed_340_; lean_object* v_res_341_; 
v_sz_boxed_339_ = lean_unbox_usize(v_sz_329_);
lean_dec(v_sz_329_);
v_i_boxed_340_ = lean_unbox_usize(v_i_330_);
lean_dec(v_i_330_);
v_res_341_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4(v___x_326_, v_assumed_327_, v_u_328_, v_sz_boxed_339_, v_i_boxed_340_, v_bs_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec_ref(v_u_328_);
lean_dec_ref(v_assumed_327_);
lean_dec_ref(v___x_326_);
return v_res_341_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__0));
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__2));
v___x_347_ = l_Lean_stringToMessageData(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__4));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0(lean_object* v_a_351_, lean_object* v___x_352_, lean_object* v_u_353_, size_t v___x_354_, uint8_t v_val_355_, lean_object* v_assumed_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___y_365_; size_t v_sz_371_; lean_object* v___x_372_; 
v_sz_371_ = lean_array_size(v_a_351_);
v___x_372_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__4(v___x_352_, v_assumed_356_, v_u_353_, v_sz_371_, v___x_354_, v_a_351_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v_a_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_a_373_ = lean_ctor_get(v___x_372_, 0);
lean_inc(v_a_373_);
lean_dec_ref_known(v___x_372_, 1);
v___x_374_ = l_Array_zip___redArg(v___x_352_, v_assumed_356_);
lean_inc_ref(v_u_353_);
v___x_375_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_375_, 0, v_u_353_);
lean_ctor_set(v___x_375_, 1, v_a_373_);
lean_ctor_set(v___x_375_, 2, v___x_374_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*3, v_val_355_);
v___x_376_ = lp_vampireReplay_Vampire_Reconstruct_ofRule(v___x_375_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_dec_ref(v_u_353_);
v___y_365_ = v___x_376_;
goto v___jp_364_;
}
else
{
lean_object* v_a_377_; uint8_t v___y_379_; uint8_t v___x_404_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
v___x_404_ = l_Lean_Exception_isInterrupt(v_a_377_);
if (v___x_404_ == 0)
{
uint8_t v___x_405_; 
lean_inc(v_a_377_);
v___x_405_ = l_Lean_Exception_isRuntime(v_a_377_);
v___y_379_ = v___x_405_;
goto v___jp_378_;
}
else
{
v___y_379_ = v___x_404_;
goto v___jp_378_;
}
v___jp_378_:
{
if (v___y_379_ == 0)
{
lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_402_; 
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v___x_376_, 0);
lean_dec(v_unused_403_);
v___x_381_ = v___x_376_;
v_isShared_382_ = v_isSharedCheck_402_;
goto v_resetjp_380_;
}
else
{
lean_dec(v___x_376_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_402_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint32_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_383_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__1);
v___x_384_ = lp_vampireReplay_Vampire_InferenceRule_name(v_val_355_);
v___x_385_ = l_Lean_stringToMessageData(v___x_384_);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_383_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lp_vampireReplay_Vampire_Unit_number(v_u_353_);
lean_dec_ref(v_u_353_);
v___x_390_ = lean_uint32_to_nat(v___x_389_);
v___x_391_ = l_Nat_reprFast(v___x_390_);
if (v_isShared_382_ == 0)
{
lean_ctor_set_tag(v___x_381_, 3);
lean_ctor_set(v___x_381_, 0, v___x_391_);
v___x_393_ = v___x_381_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_401_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_394_ = l_Lean_MessageData_ofFormat(v___x_393_);
v___x_395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_388_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__5);
v___x_397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = l_Lean_Exception_toMessageData(v_a_377_);
v___x_399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_399_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
v___y_365_ = v___x_400_;
goto v___jp_364_;
}
}
}
else
{
lean_dec(v_a_377_);
lean_dec_ref(v_u_353_);
v___y_365_ = v___x_376_;
goto v___jp_364_;
}
}
}
}
else
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_413_; 
lean_dec_ref(v_u_353_);
v_a_406_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_413_ == 0)
{
v___x_408_ = v___x_372_;
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_372_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
if (v_isShared_409_ == 0)
{
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_a_406_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
v___jp_364_:
{
if (lean_obj_tag(v___y_365_) == 0)
{
lean_object* v_a_366_; uint8_t v___x_367_; uint8_t v___x_368_; uint8_t v___x_369_; lean_object* v___x_370_; 
v_a_366_ = lean_ctor_get(v___y_365_, 0);
lean_inc(v_a_366_);
lean_dec_ref_known(v___y_365_, 1);
v___x_367_ = 0;
v___x_368_ = 1;
v___x_369_ = 1;
v___x_370_ = l_Lean_Meta_mkLambdaFVars(v_assumed_356_, v_a_366_, v___x_367_, v___x_368_, v___x_367_, v___x_368_, v___x_369_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
return v___x_370_;
}
else
{
return v___y_365_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___boxed(lean_object* v_a_414_, lean_object* v___x_415_, lean_object* v_u_416_, lean_object* v___x_417_, lean_object* v_val_418_, lean_object* v_assumed_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
size_t v___x_34157__boxed_427_; uint8_t v_val_34158__boxed_428_; lean_object* v_res_429_; 
v___x_34157__boxed_427_ = lean_unbox_usize(v___x_417_);
lean_dec(v___x_417_);
v_val_34158__boxed_428_ = lean_unbox(v_val_418_);
v_res_429_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0(v_a_414_, v___x_415_, v_u_416_, v___x_34157__boxed_427_, v_val_34158__boxed_428_, v_assumed_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec_ref(v_assumed_419_);
lean_dec_ref(v___x_415_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__6(lean_object* v_a_430_, lean_object* v_a_431_){
_start:
{
if (lean_obj_tag(v_a_430_) == 0)
{
lean_object* v___x_432_; 
v___x_432_ = l_List_reverse___redArg(v_a_431_);
return v___x_432_;
}
else
{
lean_object* v_head_433_; lean_object* v_tail_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_444_; 
v_head_433_ = lean_ctor_get(v_a_430_, 0);
v_tail_434_ = lean_ctor_get(v_a_430_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v_a_430_);
if (v_isSharedCheck_444_ == 0)
{
v___x_436_ = v_a_430_;
v_isShared_437_ = v_isSharedCheck_444_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_tail_434_);
lean_inc(v_head_433_);
lean_dec(v_a_430_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_444_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_438_ = l_Lean_Expr_fvar___override(v_head_433_);
v___x_439_ = l_Lean_MessageData_ofExpr(v___x_438_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v_a_431_);
lean_ctor_set(v___x_436_, 0, v___x_439_);
v___x_441_ = v___x_436_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_a_431_);
v___x_441_ = v_reuseFailAlloc_443_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
v_a_430_ = v_tail_434_;
v_a_431_ = v___x_441_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0(lean_object* v_v_445_, lean_object* v_x_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v_v_445_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0___boxed(lean_object* v_v_455_, lean_object* v_x_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0(v_v_455_, v_x_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec_ref(v_x_456_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg(size_t v_sz_466_, size_t v_i_467_, lean_object* v_bs_468_){
_start:
{
uint8_t v___x_469_; 
v___x_469_ = lean_usize_dec_lt(v_i_467_, v_sz_466_);
if (v___x_469_ == 0)
{
return v_bs_468_;
}
else
{
lean_object* v_v_470_; lean_object* v___f_471_; lean_object* v___x_472_; lean_object* v_bs_x27_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; 
v_v_470_ = lean_array_uget_borrowed(v_bs_468_, v_i_467_);
lean_inc(v_v_470_);
v___f_471_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_471_, 0, v_v_470_);
v___x_472_ = lean_unsigned_to_nat(0u);
v_bs_x27_473_ = lean_array_uset(v_bs_468_, v_i_467_, v___x_472_);
v___x_474_ = lean_usize_to_nat(v_i_467_);
v___x_475_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___closed__0));
v___x_476_ = l_Nat_reprFast(v___x_474_);
v___x_477_ = lean_string_append(v___x_475_, v___x_476_);
lean_dec_ref(v___x_476_);
v___x_478_ = lean_box(0);
v___x_479_ = l_Lean_Name_str___override(v___x_478_, v___x_477_);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___f_471_);
v___x_481_ = ((size_t)1ULL);
v___x_482_ = lean_usize_add(v_i_467_, v___x_481_);
v___x_483_ = lean_array_uset(v_bs_x27_473_, v_i_467_, v___x_480_);
v_i_467_ = v___x_482_;
v_bs_468_ = v___x_483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg___boxed(lean_object* v_sz_485_, lean_object* v_i_486_, lean_object* v_bs_487_){
_start:
{
size_t v_sz_boxed_488_; size_t v_i_boxed_489_; lean_object* v_res_490_; 
v_sz_boxed_488_ = lean_unbox_usize(v_sz_485_);
lean_dec(v_sz_485_);
v_i_boxed_489_ = lean_unbox_usize(v_i_486_);
lean_dec(v_i_486_);
v_res_490_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg(v_sz_boxed_488_, v_i_boxed_489_, v_bs_487_);
return v_res_490_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__0));
v___x_493_ = l_Lean_stringToMessageData(v___x_492_);
return v___x_493_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__2));
v___x_496_ = l_Lean_stringToMessageData(v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0(lean_object* v_u_497_, size_t v_sz_498_, size_t v_i_499_, lean_object* v_bs_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_lt(v_i_499_, v_sz_498_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; 
v___x_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_509_, 0, v_bs_500_);
return v___x_509_;
}
else
{
lean_object* v___x_510_; lean_object* v_proofs_511_; lean_object* v_v_512_; lean_object* v___x_513_; lean_object* v_bs_x27_514_; lean_object* v_a_516_; uint32_t v___x_521_; lean_object* v___x_522_; 
v___x_510_ = lean_st_ref_get(v___y_502_);
v_proofs_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc_ref(v_proofs_511_);
lean_dec(v___x_510_);
v_v_512_ = lean_array_uget(v_bs_500_, v_i_499_);
v___x_513_ = lean_unsigned_to_nat(0u);
v_bs_x27_514_ = lean_array_uset(v_bs_500_, v_i_499_, v___x_513_);
v___x_521_ = lp_vampireReplay_Vampire_Unit_number(v_v_512_);
v___x_522_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_proofs_511_, v___x_521_);
lean_dec_ref(v_proofs_511_);
if (lean_obj_tag(v___x_522_) == 1)
{
lean_object* v_val_523_; lean_object* v___x_524_; 
v_val_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_522_, 1);
lean_inc(v_v_512_);
v___x_524_ = lp_vampireReplay_Vampire_Reconstruct_conclusionOf(v_v_512_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_524_, 1);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_val_523_);
lean_ctor_set(v___x_526_, 1, v_a_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v_v_512_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v_a_516_ = v___x_527_;
goto v___jp_515_;
}
else
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_val_523_);
lean_dec_ref(v_bs_x27_514_);
lean_dec(v_v_512_);
v_a_528_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_524_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_524_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
}
else
{
lean_object* v___x_536_; uint32_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v___x_522_);
lean_dec(v_v_512_);
v___x_536_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_537_ = lp_vampireReplay_Vampire_Unit_number(v_u_497_);
v___x_538_ = lean_uint32_to_nat(v___x_537_);
v___x_539_ = l_Nat_reprFast(v___x_538_);
v___x_540_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
v___x_541_ = l_Lean_MessageData_ofFormat(v___x_540_);
v___x_542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_536_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__1);
v___x_544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
v___x_545_ = lean_uint32_to_nat(v___x_521_);
v___x_546_ = l_Nat_reprFast(v___x_545_);
v___x_547_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
v___x_548_ = l_Lean_MessageData_ofFormat(v___x_547_);
v___x_549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_544_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___closed__3);
v___x_551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_551_, v___y_503_, v___y_504_, v___y_505_, v___y_506_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
v_a_516_ = v_a_553_;
goto v___jp_515_;
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_bs_x27_514_);
v_a_554_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_552_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_552_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
v___jp_515_:
{
size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_517_ = ((size_t)1ULL);
v___x_518_ = lean_usize_add(v_i_499_, v___x_517_);
v___x_519_ = lean_array_uset(v_bs_x27_514_, v_i_499_, v_a_516_);
v_i_499_ = v___x_518_;
v_bs_500_ = v___x_519_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0___boxed(lean_object* v_u_562_, lean_object* v_sz_563_, lean_object* v_i_564_, lean_object* v_bs_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
size_t v_sz_boxed_573_; size_t v_i_boxed_574_; lean_object* v_res_575_; 
v_sz_boxed_573_ = lean_unbox_usize(v_sz_563_);
lean_dec(v_sz_563_);
v_i_boxed_574_ = lean_unbox_usize(v_i_564_);
lean_dec(v_i_564_);
v_res_575_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0(v_u_562_, v_sz_boxed_573_, v_i_boxed_574_, v_bs_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec_ref(v_u_562_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7(lean_object* v_context_576_, lean_object* v_as_577_, size_t v_i_578_, size_t v_stop_579_, lean_object* v_b_580_){
_start:
{
lean_object* v___y_582_; uint8_t v___x_586_; 
v___x_586_ = lean_usize_dec_eq(v_i_578_, v_stop_579_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_array_uget_borrowed(v_as_577_, v_i_578_);
lean_inc(v___x_587_);
lean_inc_ref(v_context_576_);
v___x_588_ = lean_local_ctx_find(v_context_576_, v___x_587_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v___x_589_; 
lean_inc(v___x_587_);
v___x_589_ = lean_array_push(v_b_580_, v___x_587_);
v___y_582_ = v___x_589_;
goto v___jp_581_;
}
else
{
lean_dec_ref_known(v___x_588_, 1);
v___y_582_ = v_b_580_;
goto v___jp_581_;
}
}
else
{
lean_dec_ref(v_context_576_);
return v_b_580_;
}
v___jp_581_:
{
size_t v___x_583_; size_t v___x_584_; 
v___x_583_ = ((size_t)1ULL);
v___x_584_ = lean_usize_add(v_i_578_, v___x_583_);
v_i_578_ = v___x_584_;
v_b_580_ = v___y_582_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7___boxed(lean_object* v_context_590_, lean_object* v_as_591_, lean_object* v_i_592_, lean_object* v_stop_593_, lean_object* v_b_594_){
_start:
{
size_t v_i_boxed_595_; size_t v_stop_boxed_596_; lean_object* v_res_597_; 
v_i_boxed_595_ = lean_unbox_usize(v_i_592_);
lean_dec(v_i_592_);
v_stop_boxed_596_ = lean_unbox_usize(v_stop_593_);
lean_dec(v_stop_593_);
v_res_597_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7(v_context_590_, v_as_591_, v_i_boxed_595_, v_stop_boxed_596_, v_b_594_);
lean_dec_ref(v_as_591_);
return v_res_597_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1(void){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__0));
v___x_600_ = l_Lean_stringToMessageData(v___x_599_);
return v___x_600_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__2));
v___x_603_ = l_Lean_stringToMessageData(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__4));
v___x_606_ = l_Lean_stringToMessageData(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__6));
v___x_609_ = l_Lean_stringToMessageData(v___x_608_);
return v___x_609_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__8));
v___x_612_ = l_Lean_stringToMessageData(v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__11));
v___x_617_ = l_Lean_MessageData_ofFormat(v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__13));
v___x_620_ = l_Lean_stringToMessageData(v___x_619_);
return v___x_620_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_unsigned_to_nat(16u);
v___x_623_ = lean_mk_array(v___x_622_, v___x_621_);
return v___x_623_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__15);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
return v___x_626_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_629_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__17));
v___x_630_ = lean_box(1);
v___x_631_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__16);
v___x_632_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___x_630_);
lean_ctor_set(v___x_632_, 2, v___x_629_);
return v___x_632_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20(void){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__19));
v___x_635_ = l_Lean_stringToMessageData(v___x_634_);
return v___x_635_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__21));
v___x_638_ = l_Lean_stringToMessageData(v___x_637_);
return v___x_638_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__23));
v___x_641_ = l_Lean_stringToMessageData(v___x_640_);
return v___x_641_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__25));
v___x_644_ = l_Lean_stringToMessageData(v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1(lean_object* v___x_647_, lean_object* v_u_648_, lean_object* v_context_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
if (lean_obj_tag(v___x_647_) == 1)
{
lean_object* v_val_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_950_; 
v_val_657_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_950_ == 0)
{
v___x_659_ = v___x_647_;
v_isShared_660_ = v_isSharedCheck_950_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_val_657_);
lean_dec(v___x_647_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_950_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; size_t v_sz_662_; size_t v___x_663_; lean_object* v___x_664_; 
lean_inc_ref(v_u_648_);
v___x_661_ = lp_vampireReplay_Vampire_Unit_parents(v_u_648_);
v_sz_662_ = lean_array_size(v___x_661_);
v___x_663_ = ((size_t)0ULL);
v___x_664_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__0(v_u_648_, v_sz_662_, v___x_663_, v___x_661_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; size_t v_sz_667_; lean_object* v___x_668_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
lean_inc_ref(v_u_648_);
v___x_666_ = lp_vampireReplay_Vampire_Unit_splits(v_u_648_);
v_sz_667_ = lean_array_size(v___x_666_);
lean_inc_ref(v___x_666_);
v___x_668_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Avatar_0__Vampire_Reconstruct_Avatar_satClauseParts_spec__0(v_sz_667_, v___x_663_, v___x_666_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_670_; lean_object* v___f_671_; size_t v_sz_672_; lean_object* v___x_673_; uint8_t v___x_674_; lean_object* v___x_675_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
lean_dec_ref_known(v___x_668_, 1);
v___x_670_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed__const__1));
lean_inc(v_val_657_);
lean_inc_ref(v_u_648_);
v___f_671_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___boxed), 13, 5);
lean_closure_set(v___f_671_, 0, v_a_665_);
lean_closure_set(v___f_671_, 1, v___x_666_);
lean_closure_set(v___f_671_, 2, v_u_648_);
lean_closure_set(v___f_671_, 3, v___x_670_);
lean_closure_set(v___f_671_, 4, v_val_657_);
v_sz_672_ = lean_array_size(v_a_669_);
v___x_673_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg(v_sz_672_, v___x_663_, v_a_669_);
v___x_674_ = 0;
v___x_675_ = lp_vampireReplay_Lean_Meta_withLocalDeclsD___at___00Vampire_Reconstruct_standingFor_spec__1(v___x_673_, v___f_671_, v___x_674_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_925_; 
v_a_676_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_925_ == 0)
{
v___x_678_ = v___x_675_;
v_isShared_679_ = v_isSharedCheck_925_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_675_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_925_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___y_681_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_791_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; uint8_t v___y_798_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_868_; lean_object* v___x_894_; 
lean_inc_ref(v_u_648_);
v___x_894_ = lp_vampireReplay_Vampire_Reconstruct_conclusionOf(v_u_648_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_894_) == 0)
{
v___y_868_ = v___x_894_;
goto v___jp_867_;
}
else
{
lean_object* v_a_895_; uint8_t v___y_897_; uint8_t v___x_923_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
v___x_923_ = l_Lean_Exception_isInterrupt(v_a_895_);
if (v___x_923_ == 0)
{
uint8_t v___x_924_; 
lean_inc(v_a_895_);
v___x_924_ = l_Lean_Exception_isRuntime(v_a_895_);
v___y_897_ = v___x_924_;
goto v___jp_896_;
}
else
{
v___y_897_ = v___x_923_;
goto v___jp_896_;
}
v___jp_896_:
{
if (v___y_897_ == 0)
{
lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_921_; 
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_921_ == 0)
{
lean_object* v_unused_922_; 
v_unused_922_ = lean_ctor_get(v___x_894_, 0);
lean_dec(v_unused_922_);
v___x_899_ = v___x_894_;
v_isShared_900_ = v_isSharedCheck_921_;
goto v_resetjp_898_;
}
else
{
lean_dec(v___x_894_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_921_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; uint32_t v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_901_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__20);
v___x_902_ = lp_vampireReplay_Vampire_Unit_number(v_u_648_);
v___x_903_ = lean_uint32_to_nat(v___x_902_);
v___x_904_ = l_Nat_reprFast(v___x_903_);
if (v_isShared_900_ == 0)
{
lean_ctor_set_tag(v___x_899_, 3);
lean_ctor_set(v___x_899_, 0, v___x_904_);
v___x_906_ = v___x_899_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_920_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; uint8_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_907_ = l_Lean_MessageData_ofFormat(v___x_906_);
v___x_908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_901_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22);
v___x_910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = lean_unbox(v_val_657_);
v___x_912_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_911_);
v___x_913_ = l_Lean_stringToMessageData(v___x_912_);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_910_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__24);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = l_Lean_Exception_toMessageData(v_a_895_);
v___x_918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_918_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
v___y_868_ = v___x_919_;
goto v___jp_867_;
}
}
}
else
{
lean_dec(v_a_895_);
v___y_868_ = v___x_894_;
goto v___jp_867_;
}
}
}
v___jp_680_:
{
lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_a_676_);
lean_ctor_set(v___x_682_, 1, v___y_681_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_682_);
v___x_684_ = v___x_678_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
v___jp_686_:
{
lean_object* v___x_692_; 
lean_inc(v___y_691_);
lean_inc_ref(v___y_690_);
lean_inc(v___y_689_);
lean_inc_ref(v___y_688_);
lean_inc(v_a_676_);
v___x_692_ = lean_infer_type(v_a_676_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_694_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_a_693_);
lean_dec_ref_known(v___x_692_, 1);
lean_inc_ref(v___y_687_);
v___x_694_ = l_Lean_Meta_isExprDefEq(v_a_693_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; uint8_t v___x_696_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_unbox(v_a_695_);
lean_dec(v_a_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_del_object(v___x_678_);
lean_inc(v___y_691_);
lean_inc_ref(v___y_690_);
lean_inc(v___y_689_);
lean_inc_ref(v___y_688_);
v___x_697_ = lean_infer_type(v_a_676_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_699_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll(v_a_698_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_699_, 1);
v___x_701_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_betaAll(v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_703_; uint8_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint32_t v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_714_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
lean_inc(v_a_702_);
lean_dec_ref_known(v___x_701_, 1);
v___x_703_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1);
v___x_704_ = lean_unbox(v_val_657_);
lean_dec(v_val_657_);
v___x_705_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_704_);
v___x_706_ = l_Lean_stringToMessageData(v___x_705_);
v___x_707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_707_, 0, v___x_703_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
v___x_708_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3);
v___x_709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_707_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lp_vampireReplay_Vampire_Unit_number(v_u_648_);
lean_dec_ref(v_u_648_);
v___x_711_ = lean_uint32_to_nat(v___x_710_);
v___x_712_ = l_Nat_reprFast(v___x_711_);
if (v_isShared_660_ == 0)
{
lean_ctor_set_tag(v___x_659_, 3);
lean_ctor_set(v___x_659_, 0, v___x_712_);
v___x_714_ = v___x_659_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_734_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_733_; 
v___x_715_ = l_Lean_MessageData_ofFormat(v___x_714_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v___x_709_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
v___x_717_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__3);
v___x_718_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_718_, 0, v___x_716_);
lean_ctor_set(v___x_718_, 1, v___x_717_);
v___x_719_ = l_Lean_indentExpr(v_a_700_);
v___x_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__5);
v___x_722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = l_Lean_indentExpr(v_a_702_);
v___x_724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_722_);
lean_ctor_set(v___x_724_, 1, v___x_723_);
v___x_725_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_724_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_733_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_733_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_731_; 
if (v_isShared_729_ == 0)
{
v___x_731_ = v___x_728_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_726_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec(v_a_700_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_735_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_701_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_701_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_dec_ref(v___y_687_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_743_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_699_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_699_);
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
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v___y_687_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_751_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_697_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_697_);
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
else
{
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v___y_681_ = v___y_687_;
goto v___jp_680_;
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
lean_dec_ref(v___y_687_);
lean_del_object(v___x_678_);
lean_dec(v_a_676_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_759_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_694_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_694_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec_ref(v___y_687_);
lean_del_object(v___x_678_);
lean_dec(v_a_676_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_767_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_692_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_692_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
v___jp_775_:
{
if (lean_obj_tag(v___y_781_) == 0)
{
lean_dec_ref_known(v___y_781_, 1);
v___y_687_ = v___y_776_;
v___y_688_ = v___y_777_;
v___y_689_ = v___y_778_;
v___y_690_ = v___y_779_;
v___y_691_ = v___y_780_;
goto v___jp_686_;
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec_ref(v___y_776_);
lean_del_object(v___x_678_);
lean_dec(v_a_676_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_u_648_);
v_a_782_ = lean_ctor_get(v___y_781_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___y_781_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___y_781_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___y_781_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
v___jp_790_:
{
if (v___y_798_ == 0)
{
lean_object* v___x_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint32_t v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
lean_dec_ref(v___y_791_);
v___x_799_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1);
v___x_800_ = lean_unbox(v_val_657_);
v___x_801_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_800_);
v___x_802_ = l_Lean_stringToMessageData(v___x_801_);
v___x_803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_799_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = lp_vampireReplay_Vampire_Unit_number(v_u_648_);
v___x_807_ = lean_uint32_to_nat(v___x_806_);
v___x_808_ = l_Nat_reprFast(v___x_807_);
v___x_809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
v___x_810_ = l_Lean_MessageData_ofFormat(v___x_809_);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_805_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__7);
v___x_813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Lean_Exception_toMessageData(v___y_794_);
v___x_815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_815_, v___y_793_, v___y_795_, v___y_796_, v___y_797_);
v___y_776_ = v___y_792_;
v___y_777_ = v___y_793_;
v___y_778_ = v___y_795_;
v___y_779_ = v___y_796_;
v___y_780_ = v___y_797_;
v___y_781_ = v___x_816_;
goto v___jp_775_;
}
else
{
lean_dec_ref(v___y_794_);
v___y_776_ = v___y_792_;
v___y_777_ = v___y_793_;
v___y_778_ = v___y_795_;
v___y_779_ = v___y_796_;
v___y_780_ = v___y_797_;
v___y_781_ = v___y_791_;
goto v___jp_775_;
}
}
v___jp_817_:
{
uint8_t v___x_823_; lean_object* v___x_824_; 
v___x_823_ = 0;
lean_inc(v_a_676_);
v___x_824_ = l_Lean_Meta_check(v_a_676_, v___x_823_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
v___y_776_ = v___y_818_;
v___y_777_ = v___y_819_;
v___y_778_ = v___y_820_;
v___y_779_ = v___y_821_;
v___y_780_ = v___y_822_;
v___y_781_ = v___x_824_;
goto v___jp_775_;
}
else
{
lean_object* v_a_825_; uint8_t v___x_826_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
v___x_826_ = l_Lean_Exception_isInterrupt(v_a_825_);
if (v___x_826_ == 0)
{
uint8_t v___x_827_; 
lean_inc(v_a_825_);
v___x_827_ = l_Lean_Exception_isRuntime(v_a_825_);
v___y_791_ = v___x_824_;
v___y_792_ = v___y_818_;
v___y_793_ = v___y_819_;
v___y_794_ = v_a_825_;
v___y_795_ = v___y_820_;
v___y_796_ = v___y_821_;
v___y_797_ = v___y_822_;
v___y_798_ = v___x_827_;
goto v___jp_790_;
}
else
{
v___y_791_ = v___x_824_;
v___y_792_ = v___y_818_;
v___y_793_ = v___y_819_;
v___y_794_ = v_a_825_;
v___y_795_ = v___y_820_;
v___y_796_ = v___y_821_;
v___y_797_ = v___y_822_;
v___y_798_ = v___x_826_;
goto v___jp_790_;
}
}
}
v___jp_828_:
{
lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_831_ = lean_array_get_size(v___y_830_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = lean_nat_dec_eq(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint32_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref(v___y_829_);
lean_del_object(v___x_678_);
lean_dec(v_a_676_);
lean_del_object(v___x_659_);
v___x_834_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__1);
v___x_835_ = lean_unbox(v_val_657_);
lean_dec(v_val_657_);
v___x_836_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_835_);
v___x_837_ = l_Lean_stringToMessageData(v___x_836_);
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_834_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__0___closed__3);
v___x_840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_838_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
v___x_841_ = lp_vampireReplay_Vampire_Unit_number(v_u_648_);
lean_dec_ref(v_u_648_);
v___x_842_ = lean_uint32_to_nat(v___x_841_);
v___x_843_ = l_Nat_reprFast(v___x_842_);
v___x_844_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
v___x_845_ = l_Lean_MessageData_ofFormat(v___x_844_);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_840_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__9);
v___x_848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_846_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = lean_array_to_list(v___y_830_);
v___x_850_ = lean_box(0);
v___x_851_ = lp_vampireReplay_List_mapTR_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__6(v___x_849_, v___x_850_);
v___x_852_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__12);
v___x_853_ = l_Lean_MessageData_joinSep(v___x_851_, v___x_852_);
v___x_854_ = l_Lean_indentD(v___x_853_);
v___x_855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_848_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
v___x_856_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__14);
v___x_857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_857_, 0, v___x_855_);
lean_ctor_set(v___x_857_, 1, v___x_856_);
v___x_858_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_857_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_dec_ref(v___y_830_);
v___y_818_ = v___y_829_;
v___y_819_ = v___y_652_;
v___y_820_ = v___y_653_;
v___y_821_ = v___y_654_;
v___y_822_ = v___y_655_;
goto v___jp_817_;
}
}
v___jp_867_:
{
if (lean_obj_tag(v___y_868_) == 0)
{
uint8_t v_checkSteps_869_; 
v_checkSteps_869_ = lean_ctor_get_uint8(v___y_650_, sizeof(void*)*5 + 5);
if (v_checkSteps_869_ == 0)
{
lean_object* v_a_870_; 
lean_dec_ref(v_context_649_);
v_a_870_ = lean_ctor_get(v___y_868_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___y_868_, 1);
v___y_687_ = v_a_870_;
v___y_688_ = v___y_652_;
v___y_689_ = v___y_653_;
v___y_690_ = v___y_654_;
v___y_691_ = v___y_655_;
goto v___jp_686_;
}
else
{
lean_object* v_a_871_; lean_object* v___x_872_; lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v_fvarIds_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v_a_871_ = lean_ctor_get(v___y_868_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___y_868_, 1);
lean_inc(v_a_676_);
v___x_872_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_676_, v___y_653_);
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref(v___x_872_);
v___x_874_ = lean_unsigned_to_nat(0u);
v___x_875_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__17));
v___x_876_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__18);
v___x_877_ = l_Lean_CollectFVars_main(v_a_873_, v___x_876_);
v_fvarIds_878_ = lean_ctor_get(v___x_877_, 2);
lean_inc_ref(v_fvarIds_878_);
lean_dec_ref(v___x_877_);
v___x_879_ = lean_array_get_size(v_fvarIds_878_);
v___x_880_ = lean_nat_dec_lt(v___x_874_, v___x_879_);
if (v___x_880_ == 0)
{
lean_dec_ref(v_fvarIds_878_);
lean_dec_ref(v_context_649_);
v___y_829_ = v_a_871_;
v___y_830_ = v___x_875_;
goto v___jp_828_;
}
else
{
uint8_t v___x_881_; 
v___x_881_ = lean_nat_dec_le(v___x_879_, v___x_879_);
if (v___x_881_ == 0)
{
if (v___x_880_ == 0)
{
lean_dec_ref(v_fvarIds_878_);
lean_dec_ref(v_context_649_);
v___y_829_ = v_a_871_;
v___y_830_ = v___x_875_;
goto v___jp_828_;
}
else
{
size_t v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_usize_of_nat(v___x_879_);
v___x_883_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7(v_context_649_, v_fvarIds_878_, v___x_663_, v___x_882_, v___x_875_);
lean_dec_ref(v_fvarIds_878_);
v___y_829_ = v_a_871_;
v___y_830_ = v___x_883_;
goto v___jp_828_;
}
}
else
{
size_t v___x_884_; lean_object* v___x_885_; 
v___x_884_ = lean_usize_of_nat(v___x_879_);
v___x_885_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__7(v_context_649_, v_fvarIds_878_, v___x_663_, v___x_884_, v___x_875_);
lean_dec_ref(v_fvarIds_878_);
v___y_829_ = v_a_871_;
v___y_830_ = v___x_885_;
goto v___jp_828_;
}
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_del_object(v___x_678_);
lean_dec(v_a_676_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_context_649_);
lean_dec_ref(v_u_648_);
v_a_886_ = lean_ctor_get(v___y_868_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___y_868_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___y_868_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___y_868_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_context_649_);
lean_dec_ref(v_u_648_);
v_a_926_ = lean_ctor_get(v___x_675_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_675_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_675_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_675_);
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
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec_ref(v___x_666_);
lean_dec(v_a_665_);
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_context_649_);
lean_dec_ref(v_u_648_);
v_a_934_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_668_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_668_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_del_object(v___x_659_);
lean_dec(v_val_657_);
lean_dec_ref(v_context_649_);
lean_dec_ref(v_u_648_);
v_a_942_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_664_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_664_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
else
{
lean_object* v___x_951_; uint32_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; uint32_t v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
lean_dec_ref(v_context_649_);
lean_dec(v___x_647_);
v___x_951_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_952_ = lp_vampireReplay_Vampire_Unit_number(v_u_648_);
v___x_953_ = lean_uint32_to_nat(v___x_952_);
v___x_954_ = l_Nat_reprFast(v___x_953_);
v___x_955_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
v___x_956_ = l_Lean_MessageData_ofFormat(v___x_955_);
v___x_957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_951_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__26);
v___x_959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = lp_vampireReplay_Vampire_Unit_ruleIndex(v_u_648_);
lean_dec_ref(v_u_648_);
v___x_961_ = lean_uint32_to_nat(v___x_960_);
v___x_962_ = l_Nat_reprFast(v___x_961_);
v___x_963_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
v___x_964_ = l_Lean_MessageData_ofFormat(v___x_963_);
v___x_965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_959_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_965_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed(lean_object* v___x_967_, lean_object* v_u_968_, lean_object* v_context_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1(v___x_967_, v_u_968_, v_context_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay(lean_object* v_u_978_, lean_object* v_context_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v___x_987_; lean_object* v___y_988_; lean_object* v___x_989_; 
v___x_987_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_u_978_);
lean_inc_ref(v_u_978_);
v___y_988_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___boxed), 10, 3);
lean_closure_set(v___y_988_, 0, v___x_987_);
lean_closure_set(v___y_988_, 1, v_u_978_);
lean_closure_set(v___y_988_, 2, v_context_979_);
v___x_989_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_u_978_, v___y_988_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
lean_dec_ref(v_u_978_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___boxed(lean_object* v_u_990_, lean_object* v_context_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay(v_u_990_, v_context_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_);
lean_dec(v_a_997_);
lean_dec_ref(v_a_996_);
lean_dec(v_a_995_);
lean_dec_ref(v_a_994_);
lean_dec(v_a_993_);
lean_dec_ref(v_a_992_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2(lean_object* v___x_1000_, lean_object* v_assumed_1001_, lean_object* v_u_1002_, lean_object* v_as_1003_, size_t v_sz_1004_, size_t v_i_1005_, lean_object* v_b_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg(v___x_1000_, v_assumed_1001_, v_u_1002_, v_as_1003_, v_sz_1004_, v_i_1005_, v_b_1006_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___boxed(lean_object* v___x_1015_, lean_object* v_assumed_1016_, lean_object* v_u_1017_, lean_object* v_as_1018_, lean_object* v_sz_1019_, lean_object* v_i_1020_, lean_object* v_b_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
size_t v_sz_boxed_1029_; size_t v_i_boxed_1030_; lean_object* v_res_1031_; 
v_sz_boxed_1029_ = lean_unbox_usize(v_sz_1019_);
lean_dec(v_sz_1019_);
v_i_boxed_1030_ = lean_unbox_usize(v_i_1020_);
lean_dec(v_i_1020_);
v_res_1031_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2(v___x_1015_, v_assumed_1016_, v_u_1017_, v_as_1018_, v_sz_boxed_1029_, v_i_boxed_1030_, v_b_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec_ref(v_as_1018_);
lean_dec_ref(v_u_1017_);
lean_dec_ref(v_assumed_1016_);
lean_dec_ref(v___x_1015_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5(lean_object* v_as_1032_, size_t v_sz_1033_, size_t v_i_1034_, lean_object* v_bs_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___redArg(v_sz_1033_, v_i_1034_, v_bs_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5___boxed(lean_object* v_as_1037_, lean_object* v_sz_1038_, lean_object* v_i_1039_, lean_object* v_bs_1040_){
_start:
{
size_t v_sz_boxed_1041_; size_t v_i_boxed_1042_; lean_object* v_res_1043_; 
v_sz_boxed_1041_ = lean_unbox_usize(v_sz_1038_);
lean_dec(v_sz_1038_);
v_i_boxed_1042_ = lean_unbox_usize(v_i_1039_);
lean_dec(v_i_1039_);
v_res_1043_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__5(v_as_1037_, v_sz_boxed_1041_, v_i_boxed_1042_, v_bs_1040_);
lean_dec_ref(v_as_1037_);
return v_res_1043_;
}
}
static double _init_lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1044_; double v___x_1045_; 
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = lean_float_of_nat(v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(lean_object* v_cls_1049_, lean_object* v_msg_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v_ref_1056_; lean_object* v___x_1057_; lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1102_; 
v_ref_1056_ = lean_ctor_get(v___y_1053_, 5);
v___x_1057_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_prepareTriggers_spec__0_spec__0_spec__1_spec__5_spec__7_spec__9_spec__10(v_msg_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1057_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1060_ = v___x_1057_;
v_isShared_1061_ = v_isSharedCheck_1102_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1057_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1102_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v_traceState_1063_; lean_object* v_env_1064_; lean_object* v_nextMacroScope_1065_; lean_object* v_ngen_1066_; lean_object* v_auxDeclNGen_1067_; lean_object* v_cache_1068_; lean_object* v_messages_1069_; lean_object* v_infoState_1070_; lean_object* v_snapshotTasks_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1101_; 
v___x_1062_ = lean_st_ref_take(v___y_1054_);
v_traceState_1063_ = lean_ctor_get(v___x_1062_, 4);
v_env_1064_ = lean_ctor_get(v___x_1062_, 0);
v_nextMacroScope_1065_ = lean_ctor_get(v___x_1062_, 1);
v_ngen_1066_ = lean_ctor_get(v___x_1062_, 2);
v_auxDeclNGen_1067_ = lean_ctor_get(v___x_1062_, 3);
v_cache_1068_ = lean_ctor_get(v___x_1062_, 5);
v_messages_1069_ = lean_ctor_get(v___x_1062_, 6);
v_infoState_1070_ = lean_ctor_get(v___x_1062_, 7);
v_snapshotTasks_1071_ = lean_ctor_get(v___x_1062_, 8);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1073_ = v___x_1062_;
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_snapshotTasks_1071_);
lean_inc(v_infoState_1070_);
lean_inc(v_messages_1069_);
lean_inc(v_cache_1068_);
lean_inc(v_traceState_1063_);
lean_inc(v_auxDeclNGen_1067_);
lean_inc(v_ngen_1066_);
lean_inc(v_nextMacroScope_1065_);
lean_inc(v_env_1064_);
lean_dec(v___x_1062_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1101_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
uint64_t v_tid_1075_; lean_object* v_traces_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1100_; 
v_tid_1075_ = lean_ctor_get_uint64(v_traceState_1063_, sizeof(void*)*1);
v_traces_1076_ = lean_ctor_get(v_traceState_1063_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_traceState_1063_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1078_ = v_traceState_1063_;
v_isShared_1079_ = v_isSharedCheck_1100_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_traces_1076_);
lean_dec(v_traceState_1063_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1100_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; double v___x_1081_; uint8_t v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1080_ = lean_box(0);
v___x_1081_ = lean_float_once(&lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0, &lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0_once, _init_lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__0);
v___x_1082_ = 0;
v___x_1083_ = ((lean_object*)(lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__1));
v___x_1084_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1084_, 0, v_cls_1049_);
lean_ctor_set(v___x_1084_, 1, v___x_1080_);
lean_ctor_set(v___x_1084_, 2, v___x_1083_);
lean_ctor_set_float(v___x_1084_, sizeof(void*)*3, v___x_1081_);
lean_ctor_set_float(v___x_1084_, sizeof(void*)*3 + 8, v___x_1081_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*3 + 16, v___x_1082_);
v___x_1085_ = ((lean_object*)(lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___closed__2));
v___x_1086_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set(v___x_1086_, 1, v_a_1058_);
lean_ctor_set(v___x_1086_, 2, v___x_1085_);
lean_inc(v_ref_1056_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v_ref_1056_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = l_Lean_PersistentArray_push___redArg(v_traces_1076_, v___x_1087_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1088_);
v___x_1090_ = v___x_1078_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1088_);
lean_ctor_set_uint64(v_reuseFailAlloc_1099_, sizeof(void*)*1, v_tid_1075_);
v___x_1090_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1092_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 4, v___x_1090_);
v___x_1092_ = v___x_1073_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_env_1064_);
lean_ctor_set(v_reuseFailAlloc_1098_, 1, v_nextMacroScope_1065_);
lean_ctor_set(v_reuseFailAlloc_1098_, 2, v_ngen_1066_);
lean_ctor_set(v_reuseFailAlloc_1098_, 3, v_auxDeclNGen_1067_);
lean_ctor_set(v_reuseFailAlloc_1098_, 4, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1098_, 5, v_cache_1068_);
lean_ctor_set(v_reuseFailAlloc_1098_, 6, v_messages_1069_);
lean_ctor_set(v_reuseFailAlloc_1098_, 7, v_infoState_1070_);
lean_ctor_set(v_reuseFailAlloc_1098_, 8, v_snapshotTasks_1071_);
v___x_1092_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1093_ = lean_st_ref_set(v___y_1054_, v___x_1092_);
v___x_1094_ = lean_box(0);
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 0, v___x_1094_);
v___x_1096_ = v___x_1060_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg___boxed(lean_object* v_cls_1103_, lean_object* v_msg_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(v_cls_1103_, v_msg_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
return v_res_1110_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__0));
v___x_1113_ = l_Lean_stringToMessageData(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0___boxed(lean_object* v___x_1115_, lean_object* v_i_1116_, lean_object* v_bound_1117_, lean_object* v_steps_1118_, lean_object* v_refutation_1119_, lean_object* v_s_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
uint32_t v___x_11417__boxed_1128_; lean_object* v_res_1129_; 
v___x_11417__boxed_1128_ = lean_unbox_uint32(v___x_1115_);
lean_dec(v___x_1115_);
v_res_1129_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0(v___x_11417__boxed_1128_, v_i_1116_, v_bound_1117_, v_steps_1118_, v_refutation_1119_, v_s_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v_i_1116_);
return v_res_1129_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5));
v___x_1139_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__7));
v___x_1140_ = l_Lean_Name_append(v___x_1139_, v___x_1138_);
return v___x_1140_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__9));
v___x_1143_ = l_Lean_stringToMessageData(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__11));
v___x_1146_ = l_Lean_stringToMessageData(v___x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll(lean_object* v_steps_1148_, lean_object* v_i_1149_, lean_object* v_bound_1150_, lean_object* v_refutation_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1159_ = lean_array_get_size(v_steps_1148_);
v___x_1160_ = lean_nat_dec_lt(v_i_1149_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v_proofs_1162_; uint32_t v___x_1163_; lean_object* v___x_1164_; 
lean_dec(v_i_1149_);
lean_dec_ref(v_steps_1148_);
v___x_1161_ = lean_st_ref_get(v_a_1153_);
v_proofs_1162_ = lean_ctor_get(v___x_1161_, 0);
lean_inc_ref(v_proofs_1162_);
lean_dec(v___x_1161_);
v___x_1163_ = lp_vampireReplay_Vampire_Unit_number(v_refutation_1151_);
lean_dec_ref(v_refutation_1151_);
v___x_1164_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_proofs_1162_, v___x_1163_);
lean_dec_ref(v_proofs_1162_);
if (lean_obj_tag(v___x_1164_) == 1)
{
lean_object* v_val_1165_; uint8_t v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; 
v_val_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_val_1165_);
lean_dec_ref_known(v___x_1164_, 1);
v___x_1166_ = 1;
v___x_1167_ = 1;
v___x_1168_ = l_Lean_Meta_mkLetFVars(v_bound_1150_, v_val_1165_, v___x_1160_, v___x_1166_, v___x_1167_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
lean_dec_ref(v_bound_1150_);
return v___x_1168_;
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec(v___x_1164_);
lean_dec_ref(v_bound_1150_);
v___x_1169_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__1);
v___x_1170_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1169_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
return v___x_1170_;
}
}
else
{
lean_object* v___x_1171_; lean_object* v_lctx_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1171_ = lean_io_mono_ms_now();
v_lctx_1172_ = lean_ctor_get(v_a_1154_, 2);
v___x_1173_ = lean_array_fget_borrowed(v_steps_1148_, v_i_1149_);
lean_inc_ref(v_lctx_1172_);
lean_inc(v___x_1173_);
v___x_1174_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay(v___x_1173_, v_lctx_1172_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1174_) == 0)
{
lean_object* v_a_1175_; lean_object* v_fst_1176_; lean_object* v_snd_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1237_; 
v_a_1175_ = lean_ctor_get(v___x_1174_, 0);
lean_inc(v_a_1175_);
lean_dec_ref_known(v___x_1174_, 1);
v_fst_1176_ = lean_ctor_get(v_a_1175_, 0);
v_snd_1177_ = lean_ctor_get(v_a_1175_, 1);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_a_1175_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1179_ = v_a_1175_;
v_isShared_1180_ = v_isSharedCheck_1237_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_snd_1177_);
lean_inc(v_fst_1176_);
lean_dec(v_a_1175_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1237_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; lean_object* v_options_1200_; uint8_t v_hasTrace_1201_; 
v_options_1200_ = lean_ctor_get(v_a_1156_, 2);
v_hasTrace_1201_ = lean_ctor_get_uint8(v_options_1200_, sizeof(void*)*1);
if (v_hasTrace_1201_ == 0)
{
lean_del_object(v___x_1179_);
lean_dec(v___x_1171_);
v___y_1182_ = v_a_1152_;
v___y_1183_ = v_a_1153_;
v___y_1184_ = v_a_1154_;
v___y_1185_ = v_a_1155_;
v___y_1186_ = v_a_1156_;
v___y_1187_ = v_a_1157_;
goto v___jp_1181_;
}
else
{
lean_object* v_inheritedTraceOptions_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; uint8_t v___x_1205_; 
v_inheritedTraceOptions_1202_ = lean_ctor_get(v_a_1156_, 13);
v___x_1203_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__5));
v___x_1204_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__8);
v___x_1205_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1202_, v_options_1200_, v___x_1204_);
if (v___x_1205_ == 0)
{
lean_del_object(v___x_1179_);
lean_dec(v___x_1171_);
v___y_1182_ = v_a_1152_;
v___y_1183_ = v_a_1153_;
v___y_1184_ = v_a_1154_;
v___y_1185_ = v_a_1155_;
v___y_1186_ = v_a_1156_;
v___y_1187_ = v_a_1157_;
goto v___jp_1181_;
}
else
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___y_1209_; lean_object* v___x_1232_; 
v___x_1206_ = lean_io_mono_ms_now();
v___x_1207_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_1232_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v___x_1173_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___x_1233_; 
v___x_1233_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__13));
v___y_1209_ = v___x_1233_;
goto v___jp_1208_;
}
else
{
lean_object* v_val_1234_; uint8_t v___x_1235_; lean_object* v___x_1236_; 
v_val_1234_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_val_1234_);
lean_dec_ref_known(v___x_1232_, 1);
v___x_1235_ = lean_unbox(v_val_1234_);
lean_dec(v_val_1234_);
v___x_1236_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_1235_);
v___y_1209_ = v___x_1236_;
goto v___jp_1208_;
}
v___jp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1212_; 
v___x_1210_ = l_Lean_stringToMessageData(v___y_1209_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 7);
lean_ctor_set(v___x_1179_, 1, v___x_1210_);
lean_ctor_set(v___x_1179_, 0, v___x_1207_);
v___x_1212_ = v___x_1179_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1213_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__10);
v___x_1214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = lean_nat_sub(v___x_1206_, v___x_1171_);
lean_dec(v___x_1171_);
lean_dec(v___x_1206_);
v___x_1216_ = l_Nat_reprFast(v___x_1215_);
v___x_1217_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
v___x_1218_ = l_Lean_MessageData_ofFormat(v___x_1217_);
v___x_1219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1214_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v___x_1220_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__12);
v___x_1221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(v___x_1203_, v___x_1221_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_dec_ref_known(v___x_1222_, 1);
v___y_1182_ = v_a_1152_;
v___y_1183_ = v_a_1153_;
v___y_1184_ = v_a_1154_;
v___y_1185_ = v_a_1155_;
v___y_1186_ = v_a_1156_;
v___y_1187_ = v_a_1157_;
goto v___jp_1181_;
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec(v_snd_1177_);
lean_dec(v_fst_1176_);
lean_dec_ref(v_refutation_1151_);
lean_dec_ref(v_bound_1150_);
lean_dec(v_i_1149_);
lean_dec_ref(v_steps_1148_);
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1222_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1222_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
}
}
v___jp_1181_:
{
lean_object* v___x_1188_; uint32_t v___x_1189_; lean_object* v___x_1190_; lean_object* v___f_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; uint8_t v___x_1198_; lean_object* v___x_1199_; 
v___x_1188_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__2));
v___x_1189_ = lp_vampireReplay_Vampire_Unit_number(v___x_1173_);
v___x_1190_ = lean_box_uint32(v___x_1189_);
v___f_1191_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1191_, 0, v___x_1190_);
lean_closure_set(v___f_1191_, 1, v_i_1149_);
lean_closure_set(v___f_1191_, 2, v_bound_1150_);
lean_closure_set(v___f_1191_, 3, v_steps_1148_);
lean_closure_set(v___f_1191_, 4, v_refutation_1151_);
v___x_1192_ = lean_uint32_to_nat(v___x_1189_);
v___x_1193_ = l_Nat_reprFast(v___x_1192_);
v___x_1194_ = lean_string_append(v___x_1188_, v___x_1193_);
lean_dec_ref(v___x_1193_);
v___x_1195_ = lean_box(0);
v___x_1196_ = l_Lean_Name_str___override(v___x_1195_, v___x_1194_);
v___x_1197_ = 0;
v___x_1198_ = 0;
v___x_1199_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_VampireReplay_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(v___x_1196_, v_snd_1177_, v_fst_1176_, v___f_1191_, v___x_1197_, v___x_1198_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
return v___x_1199_;
}
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec(v___x_1171_);
lean_dec_ref(v_refutation_1151_);
lean_dec_ref(v_bound_1150_);
lean_dec(v_i_1149_);
lean_dec_ref(v_steps_1148_);
v_a_1238_ = lean_ctor_get(v___x_1174_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1174_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1174_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1174_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___lam__0(uint32_t v___x_1246_, lean_object* v_i_1247_, lean_object* v_bound_1248_, lean_object* v_steps_1249_, lean_object* v_refutation_1250_, lean_object* v_s_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v___x_1259_; lean_object* v_proofs_1260_; lean_object* v_unimplemented_1261_; lean_object* v_introduced_1262_; lean_object* v_named_1263_; lean_object* v_conclusions_1264_; lean_object* v_shared_1265_; lean_object* v_nonempty_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1279_; 
v___x_1259_ = lean_st_ref_take(v___y_1253_);
v_proofs_1260_ = lean_ctor_get(v___x_1259_, 0);
v_unimplemented_1261_ = lean_ctor_get(v___x_1259_, 1);
v_introduced_1262_ = lean_ctor_get(v___x_1259_, 2);
v_named_1263_ = lean_ctor_get(v___x_1259_, 3);
v_conclusions_1264_ = lean_ctor_get(v___x_1259_, 4);
v_shared_1265_ = lean_ctor_get(v___x_1259_, 5);
v_nonempty_1266_ = lean_ctor_get(v___x_1259_, 6);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1268_ = v___x_1259_;
v_isShared_1269_ = v_isSharedCheck_1279_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_nonempty_1266_);
lean_inc(v_shared_1265_);
lean_inc(v_conclusions_1264_);
lean_inc(v_named_1263_);
lean_inc(v_introduced_1262_);
lean_inc(v_unimplemented_1261_);
lean_inc(v_proofs_1260_);
lean_dec(v___x_1259_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1279_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_inc_ref(v_s_1251_);
v___x_1270_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_proofs_1260_, v___x_1246_, v_s_1251_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1270_);
v___x_1272_ = v___x_1268_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_unimplemented_1261_);
lean_ctor_set(v_reuseFailAlloc_1278_, 2, v_introduced_1262_);
lean_ctor_set(v_reuseFailAlloc_1278_, 3, v_named_1263_);
lean_ctor_set(v_reuseFailAlloc_1278_, 4, v_conclusions_1264_);
lean_ctor_set(v_reuseFailAlloc_1278_, 5, v_shared_1265_);
lean_ctor_set(v_reuseFailAlloc_1278_, 6, v_nonempty_1266_);
v___x_1272_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1273_ = lean_st_ref_set(v___y_1253_, v___x_1272_);
v___x_1274_ = lean_unsigned_to_nat(1u);
v___x_1275_ = lean_nat_add(v_i_1247_, v___x_1274_);
v___x_1276_ = lean_array_push(v_bound_1248_, v_s_1251_);
v___x_1277_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll(v_steps_1249_, v___x_1275_, v___x_1276_, v_refutation_1250_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1277_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___boxed(lean_object* v_steps_1280_, lean_object* v_i_1281_, lean_object* v_bound_1282_, lean_object* v_refutation_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll(v_steps_1280_, v_i_1281_, v_bound_1282_, v_refutation_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
lean_dec(v_a_1289_);
lean_dec_ref(v_a_1288_);
lean_dec(v_a_1287_);
lean_dec_ref(v_a_1286_);
lean_dec(v_a_1285_);
lean_dec_ref(v_a_1284_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0(lean_object* v_cls_1292_, lean_object* v_msg_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(v_cls_1292_, v_msg_1293_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___boxed(lean_object* v_cls_1302_, lean_object* v_msg_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v_res_1311_; 
v_res_1311_ = lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0(v_cls_1302_, v_msg_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
return v_res_1311_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__0));
v___x_1315_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll___closed__7));
v___x_1316_ = l_Lean_Name_append(v___x_1315_, v___x_1314_);
return v___x_1316_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__2));
v___x_1319_ = l_Lean_stringToMessageData(v___x_1318_);
return v___x_1319_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__4));
v___x_1322_ = l_Lean_stringToMessageData(v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg(lean_object* v_as_1324_, size_t v_sz_1325_, size_t v_i_1326_, lean_object* v_b_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_a_1334_; uint8_t v___x_1338_; 
v___x_1338_ = lean_usize_dec_lt(v_i_1326_, v_sz_1325_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v_b_1327_);
return v___x_1339_;
}
else
{
lean_object* v___x_1340_; lean_object* v_a_1341_; lean_object* v___y_1343_; lean_object* v___x_1364_; 
v___x_1340_ = lean_box(0);
v_a_1341_ = lean_array_uget_borrowed(v_as_1324_, v_i_1326_);
v___x_1364_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_a_1341_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__6));
v___y_1343_ = v___x_1365_;
goto v___jp_1342_;
}
else
{
lean_object* v_val_1366_; uint8_t v___x_1367_; lean_object* v___x_1368_; 
v_val_1366_ = lean_ctor_get(v___x_1364_, 0);
lean_inc(v_val_1366_);
lean_dec_ref_known(v___x_1364_, 1);
v___x_1367_ = lean_unbox(v_val_1366_);
lean_dec(v_val_1366_);
v___x_1368_ = lp_vampireReplay_Vampire_InferenceRule_name(v___x_1367_);
v___y_1343_ = v___x_1368_;
goto v___jp_1342_;
}
v___jp_1342_:
{
lean_object* v_options_1344_; uint8_t v_hasTrace_1345_; 
v_options_1344_ = lean_ctor_get(v___y_1330_, 2);
v_hasTrace_1345_ = lean_ctor_get_uint8(v_options_1344_, sizeof(void*)*1);
if (v_hasTrace_1345_ == 0)
{
lean_dec_ref(v___y_1343_);
v_a_1334_ = v___x_1340_;
goto v___jp_1333_;
}
else
{
lean_object* v_inheritedTraceOptions_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_inheritedTraceOptions_1346_ = lean_ctor_get(v___y_1330_, 13);
v___x_1347_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__0));
v___x_1348_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__1);
v___x_1349_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1346_, v_options_1344_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_dec_ref(v___y_1343_);
v_a_1334_ = v___x_1340_;
goto v___jp_1333_;
}
else
{
lean_object* v___x_1350_; uint32_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1350_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__3);
v___x_1351_ = lp_vampireReplay_Vampire_Unit_number(v_a_1341_);
v___x_1352_ = lean_uint32_to_nat(v___x_1351_);
v___x_1353_ = l_Nat_reprFast(v___x_1352_);
v___x_1354_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1353_);
v___x_1355_ = l_Lean_MessageData_ofFormat(v___x_1354_);
v___x_1356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1350_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22, &lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay___lam__1___closed__22);
v___x_1358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1356_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = l_Lean_stringToMessageData(v___y_1343_);
v___x_1360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1358_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
v___x_1361_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___closed__5);
v___x_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
v___x_1363_ = lp_vampireReplay_Lean_addTrace___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll_spec__0___redArg(v___x_1347_, v___x_1362_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_dec_ref_known(v___x_1363_, 1);
v_a_1334_ = v___x_1340_;
goto v___jp_1333_;
}
else
{
return v___x_1363_;
}
}
}
}
}
v___jp_1333_:
{
size_t v___x_1335_; size_t v___x_1336_; 
v___x_1335_ = ((size_t)1ULL);
v___x_1336_ = lean_usize_add(v_i_1326_, v___x_1335_);
v_i_1326_ = v___x_1336_;
v_b_1327_ = v_a_1334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg___boxed(lean_object* v_as_1369_, lean_object* v_sz_1370_, lean_object* v_i_1371_, lean_object* v_b_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
size_t v_sz_boxed_1378_; size_t v_i_boxed_1379_; lean_object* v_res_1380_; 
v_sz_boxed_1378_ = lean_unbox_usize(v_sz_1370_);
lean_dec(v_sz_1370_);
v_i_boxed_1379_ = lean_unbox_usize(v_i_1371_);
lean_dec(v_i_1371_);
v_res_1380_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg(v_as_1369_, v_sz_boxed_1378_, v_i_boxed_1379_, v_b_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec_ref(v_as_1369_);
return v_res_1380_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0(lean_object* v___x_1381_, uint8_t v___x_1382_, lean_object* v_as_1383_, size_t v_i_1384_, size_t v_stop_1385_){
_start:
{
uint8_t v___x_1386_; 
v___x_1386_ = lean_usize_dec_eq(v_i_1384_, v_stop_1385_);
if (v___x_1386_ == 0)
{
lean_object* v___x_1387_; uint8_t v___x_1388_; uint8_t v___y_1390_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1387_ = lean_unsigned_to_nat(0u);
v___x_1388_ = 1;
v___x_1394_ = lean_array_uget_borrowed(v_as_1383_, v_i_1384_);
lean_inc(v___x_1394_);
v___x_1395_ = lp_vampireReplay_Vampire_Unit_skolems(v___x_1394_);
v___x_1396_ = lean_array_get_size(v___x_1395_);
lean_dec_ref(v___x_1395_);
v___x_1397_ = lean_nat_dec_eq(v___x_1396_, v___x_1387_);
if (v___x_1397_ == 0)
{
uint8_t v___x_1398_; 
v___x_1398_ = lean_nat_dec_eq(v___x_1381_, v___x_1387_);
v___y_1390_ = v___x_1398_;
goto v___jp_1389_;
}
else
{
v___y_1390_ = v___x_1382_;
goto v___jp_1389_;
}
v___jp_1389_:
{
if (v___y_1390_ == 0)
{
size_t v___x_1391_; size_t v___x_1392_; 
v___x_1391_ = ((size_t)1ULL);
v___x_1392_ = lean_usize_add(v_i_1384_, v___x_1391_);
v_i_1384_ = v___x_1392_;
goto _start;
}
else
{
return v___x_1388_;
}
}
}
else
{
uint8_t v___x_1399_; 
v___x_1399_ = 0;
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0___boxed(lean_object* v___x_1400_, lean_object* v___x_1401_, lean_object* v_as_1402_, lean_object* v_i_1403_, lean_object* v_stop_1404_){
_start:
{
uint8_t v___x_24956__boxed_1405_; size_t v_i_boxed_1406_; size_t v_stop_boxed_1407_; uint8_t v_res_1408_; lean_object* v_r_1409_; 
v___x_24956__boxed_1405_ = lean_unbox(v___x_1401_);
v_i_boxed_1406_ = lean_unbox_usize(v_i_1403_);
lean_dec(v_i_1403_);
v_stop_boxed_1407_ = lean_unbox_usize(v_stop_1404_);
lean_dec(v_stop_1404_);
v_res_1408_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0(v___x_1400_, v___x_24956__boxed_1405_, v_as_1402_, v_i_boxed_1406_, v_stop_boxed_1407_);
lean_dec_ref(v_as_1402_);
lean_dec(v___x_1400_);
v_r_1409_ = lean_box(v_res_1408_);
return v_r_1409_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5(lean_object* v_as_1413_, size_t v_i_1414_, size_t v_stop_1415_, lean_object* v_b_1416_){
_start:
{
lean_object* v___y_1418_; uint8_t v___x_1422_; 
v___x_1422_ = lean_usize_dec_eq(v_i_1414_, v_stop_1415_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1446_; 
v___x_1423_ = lean_array_uget_borrowed(v_as_1413_, v_i_1414_);
v___x_1446_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v___x_1423_);
if (lean_obj_tag(v___x_1446_) == 0)
{
goto v___jp_1424_;
}
else
{
lean_object* v_val_1447_; uint8_t v___x_1448_; uint8_t v___x_1449_; 
v_val_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_val_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = lean_unbox(v_val_1447_);
lean_dec(v_val_1447_);
v___x_1449_ = lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(v___x_1448_);
if (v___x_1449_ == 0)
{
goto v___jp_1424_;
}
else
{
lean_object* v___x_1450_; 
lean_inc(v___x_1423_);
v___x_1450_ = lean_array_push(v_b_1416_, v___x_1423_);
v___y_1418_ = v___x_1450_;
goto v___jp_1417_;
}
}
v___jp_1424_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1425_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v___x_1423_);
v___x_1426_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___closed__0));
v___x_1427_ = lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(v___x_1425_, v___x_1426_);
lean_dec(v___x_1425_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
lean_inc(v___x_1423_);
v___x_1428_ = lp_vampireReplay_Vampire_Unit_skolems(v___x_1423_);
v___x_1429_ = lean_array_get_size(v___x_1428_);
lean_dec_ref(v___x_1428_);
v___x_1430_ = lean_unsigned_to_nat(0u);
v___x_1431_ = lean_nat_dec_eq(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
lean_inc(v___x_1423_);
v___x_1432_ = lean_array_push(v_b_1416_, v___x_1423_);
v___y_1418_ = v___x_1432_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1433_; lean_object* v___x_1434_; uint8_t v___x_1435_; 
lean_inc(v___x_1423_);
v___x_1433_ = lp_vampireReplay_Vampire_Unit_namings(v___x_1423_);
v___x_1434_ = lean_array_get_size(v___x_1433_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = lean_nat_dec_eq(v___x_1434_, v___x_1430_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; 
lean_inc(v___x_1423_);
v___x_1436_ = lean_array_push(v_b_1416_, v___x_1423_);
v___y_1418_ = v___x_1436_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1437_; 
lean_inc(v___x_1423_);
v___x_1437_ = lp_vampireReplay_Vampire_Unit_genClause_x3f(v___x_1423_);
if (lean_obj_tag(v___x_1437_) == 0)
{
v___y_1418_ = v_b_1416_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
lean_dec_ref_known(v___x_1437_, 1);
lean_inc(v___x_1423_);
v___x_1438_ = lp_vampireReplay_Vampire_Unit_parents(v___x_1423_);
v___x_1439_ = lean_array_get_size(v___x_1438_);
v___x_1440_ = lean_nat_dec_lt(v___x_1430_, v___x_1439_);
if (v___x_1440_ == 0)
{
lean_dec_ref(v___x_1438_);
v___y_1418_ = v_b_1416_;
goto v___jp_1417_;
}
else
{
if (v___x_1440_ == 0)
{
lean_dec_ref(v___x_1438_);
v___y_1418_ = v_b_1416_;
goto v___jp_1417_;
}
else
{
size_t v___x_1441_; size_t v___x_1442_; uint8_t v___x_1443_; 
v___x_1441_ = ((size_t)0ULL);
v___x_1442_ = lean_usize_of_nat(v___x_1439_);
v___x_1443_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__0(v___x_1434_, v___x_1427_, v___x_1438_, v___x_1441_, v___x_1442_);
lean_dec_ref(v___x_1438_);
if (v___x_1443_ == 0)
{
v___y_1418_ = v_b_1416_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1444_; 
lean_inc(v___x_1423_);
v___x_1444_ = lean_array_push(v_b_1416_, v___x_1423_);
v___y_1418_ = v___x_1444_;
goto v___jp_1417_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1445_; 
lean_inc(v___x_1423_);
v___x_1445_ = lean_array_push(v_b_1416_, v___x_1423_);
v___y_1418_ = v___x_1445_;
goto v___jp_1417_;
}
}
}
else
{
return v_b_1416_;
}
v___jp_1417_:
{
size_t v___x_1419_; size_t v___x_1420_; 
v___x_1419_ = ((size_t)1ULL);
v___x_1420_ = lean_usize_add(v_i_1414_, v___x_1419_);
v_i_1414_ = v___x_1420_;
v_b_1416_ = v___y_1418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___boxed(lean_object* v_as_1451_, lean_object* v_i_1452_, lean_object* v_stop_1453_, lean_object* v_b_1454_){
_start:
{
size_t v_i_boxed_1455_; size_t v_stop_boxed_1456_; lean_object* v_res_1457_; 
v_i_boxed_1455_ = lean_unbox_usize(v_i_1452_);
lean_dec(v_i_1452_);
v_stop_boxed_1456_ = lean_unbox_usize(v_stop_1453_);
lean_dec(v_stop_1453_);
v_res_1457_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5(v_as_1451_, v_i_boxed_1455_, v_stop_boxed_1456_, v_b_1454_);
lean_dec_ref(v_as_1451_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0(lean_object* v___x_1458_, lean_object* v_snd_1459_, uint8_t v_a_1460_, uint8_t v___x_1461_, lean_object* v_vars_1462_, lean_object* v_locals_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = lp_vampireReplay_Vampire_Reconstruct_formula(v___x_1458_, v_vars_1462_, v_snd_1459_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; uint8_t v___x_1473_; lean_object* v___x_1474_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v___x_1471_, 1);
v___x_1473_ = 1;
v___x_1474_ = l_Lean_Meta_mkLambdaFVars(v_locals_1463_, v_a_1472_, v_a_1460_, v___x_1461_, v_a_1460_, v___x_1461_, v___x_1473_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
return v___x_1474_;
}
else
{
return v___x_1471_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0___boxed(lean_object* v___x_1475_, lean_object* v_snd_1476_, lean_object* v_a_1477_, lean_object* v___x_1478_, lean_object* v_vars_1479_, lean_object* v_locals_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
uint8_t v_a_25068__boxed_1488_; uint8_t v___x_25069__boxed_1489_; lean_object* v_res_1490_; 
v_a_25068__boxed_1488_ = lean_unbox(v_a_1477_);
v___x_25069__boxed_1489_ = lean_unbox(v___x_1478_);
v_res_1490_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0(v___x_1475_, v_snd_1476_, v_a_25068__boxed_1488_, v___x_25069__boxed_1489_, v_vars_1479_, v_locals_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec_ref(v_locals_1480_);
return v_res_1490_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_unsigned_to_nat(16u);
v___x_1493_ = lean_mk_array(v___x_1492_, v___x_1491_);
return v___x_1493_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1494_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__0);
v___x_1495_ = lean_unsigned_to_nat(0u);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
lean_ctor_set(v___x_1496_, 1, v___x_1494_);
return v___x_1496_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1498_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__2));
v___x_1499_ = l_Lean_stringToMessageData(v___x_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1(lean_object* v_a_1500_, lean_object* v_as_1501_, size_t v_sz_1502_, size_t v_i_1503_, lean_object* v_b_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_a_1513_; uint8_t v___x_1517_; 
v___x_1517_ = lean_usize_dec_lt(v_i_1503_, v_sz_1502_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; 
lean_dec_ref(v_a_1500_);
v___x_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1518_, 0, v_b_1504_);
return v___x_1518_;
}
else
{
lean_object* v_a_1519_; lean_object* v_snd_1520_; lean_object* v_fst_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1601_; 
v_a_1519_ = lean_array_uget(v_as_1501_, v_i_1503_);
v_snd_1520_ = lean_ctor_get(v_a_1519_, 1);
v_fst_1521_ = lean_ctor_get(v_a_1519_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_a_1519_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1523_ = v_a_1519_;
v_isShared_1524_ = v_isSharedCheck_1601_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_snd_1520_);
lean_inc(v_fst_1521_);
lean_dec(v_a_1519_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1601_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v_fst_1525_; lean_object* v_snd_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1600_; 
v_fst_1525_ = lean_ctor_get(v_snd_1520_, 0);
v_snd_1526_ = lean_ctor_get(v_snd_1520_, 1);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_snd_1520_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1528_ = v_snd_1520_;
v_isShared_1529_ = v_isSharedCheck_1600_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_snd_1526_);
lean_inc(v_fst_1525_);
lean_dec(v_snd_1520_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1600_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1530_; 
v___x_1530_ = lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(v_fst_1521_, v___y_1505_, v___y_1506_);
if (lean_obj_tag(v___x_1530_) == 0)
{
lean_object* v_a_1531_; lean_object* v___x_1532_; uint8_t v___x_1533_; 
v_a_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc(v_a_1531_);
lean_dec_ref_known(v___x_1530_, 1);
v___x_1532_ = lean_box(0);
v___x_1533_ = lean_unbox(v_a_1531_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___f_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___x_1576_; uint8_t v___x_1577_; 
lean_inc_ref(v_a_1500_);
v___x_1534_ = lp_vampireReplay_Vampire_Unit_varSorts(v_a_1500_);
v___x_1535_ = lean_box(v___x_1517_);
lean_inc_ref(v___x_1534_);
v___f_1536_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___lam__0___boxed), 13, 4);
lean_closure_set(v___f_1536_, 0, v___x_1534_);
lean_closure_set(v___f_1536_, 1, v_snd_1526_);
lean_closure_set(v___f_1536_, 2, v_a_1531_);
lean_closure_set(v___f_1536_, 3, v___x_1535_);
v___x_1537_ = lean_unsigned_to_nat(0u);
v___x_1538_ = lean_array_get_size(v_fst_1525_);
v___x_1539_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v___x_1534_, v_fst_1525_, v___x_1537_, v___x_1538_);
lean_dec(v_fst_1525_);
lean_dec_ref(v___x_1534_);
v___x_1576_ = lean_array_get_size(v___x_1539_);
v___x_1577_ = lean_nat_dec_eq(v___x_1576_, v___x_1538_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; uint32_t v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1578_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_1579_ = lp_vampireReplay_Vampire_Unit_number(v_a_1500_);
v___x_1580_ = lean_uint32_to_nat(v___x_1579_);
v___x_1581_ = l_Nat_reprFast(v___x_1580_);
v___x_1582_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
v___x_1583_ = l_Lean_MessageData_ofFormat(v___x_1582_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set_tag(v___x_1528_, 7);
lean_ctor_set(v___x_1528_, 1, v___x_1583_);
lean_ctor_set(v___x_1528_, 0, v___x_1578_);
v___x_1585_ = v___x_1528_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1578_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v___x_1583_);
v___x_1585_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1586_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__3);
if (v_isShared_1524_ == 0)
{
lean_ctor_set_tag(v___x_1523_, 7);
lean_ctor_set(v___x_1523_, 1, v___x_1586_);
lean_ctor_set(v___x_1523_, 0, v___x_1585_);
v___x_1588_ = v___x_1523_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1585_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
lean_object* v___x_1589_; 
v___x_1589_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1588_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_dec_ref_known(v___x_1589_, 1);
v___y_1541_ = v___y_1505_;
v___y_1542_ = v___y_1506_;
v___y_1543_ = v___y_1507_;
v___y_1544_ = v___y_1508_;
v___y_1545_ = v___y_1509_;
v___y_1546_ = v___y_1510_;
goto v___jp_1540_;
}
else
{
lean_dec_ref(v___x_1539_);
lean_dec_ref(v___f_1536_);
lean_dec(v_fst_1521_);
lean_dec_ref(v_a_1500_);
return v___x_1589_;
}
}
}
}
else
{
lean_del_object(v___x_1528_);
lean_del_object(v___x_1523_);
v___y_1541_ = v___y_1505_;
v___y_1542_ = v___y_1506_;
v___y_1543_ = v___y_1507_;
v___y_1544_ = v___y_1508_;
v___y_1545_ = v___y_1509_;
v___y_1546_ = v___y_1510_;
goto v___jp_1540_;
}
v___jp_1540_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1547_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1);
v___x_1548_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_withVars___boxed), 11, 4);
lean_closure_set(v___x_1548_, 0, lean_box(0));
lean_closure_set(v___x_1548_, 1, v___x_1539_);
lean_closure_set(v___x_1548_, 2, v___x_1547_);
lean_closure_set(v___x_1548_, 3, v___f_1536_);
v___x_1549_ = lp_vampireReplay_Vampire_Reconstruct_reading___redArg(v_a_1500_, v___x_1548_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; lean_object* v_proofs_1552_; lean_object* v_unimplemented_1553_; lean_object* v_introduced_1554_; lean_object* v_named_1555_; lean_object* v_conclusions_1556_; lean_object* v_shared_1557_; lean_object* v_nonempty_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1567_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
v___x_1551_ = lean_st_ref_take(v___y_1542_);
v_proofs_1552_ = lean_ctor_get(v___x_1551_, 0);
v_unimplemented_1553_ = lean_ctor_get(v___x_1551_, 1);
v_introduced_1554_ = lean_ctor_get(v___x_1551_, 2);
v_named_1555_ = lean_ctor_get(v___x_1551_, 3);
v_conclusions_1556_ = lean_ctor_get(v___x_1551_, 4);
v_shared_1557_ = lean_ctor_get(v___x_1551_, 5);
v_nonempty_1558_ = lean_ctor_get(v___x_1551_, 6);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1560_ = v___x_1551_;
v_isShared_1561_ = v_isSharedCheck_1567_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_nonempty_1558_);
lean_inc(v_shared_1557_);
lean_inc(v_conclusions_1556_);
lean_inc(v_named_1555_);
lean_inc(v_introduced_1554_);
lean_inc(v_unimplemented_1553_);
lean_inc(v_proofs_1552_);
lean_dec(v___x_1551_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1567_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1562_; lean_object* v___x_1564_; 
v___x_1562_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_1554_, v_fst_1521_, v_a_1550_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 2, v___x_1562_);
v___x_1564_ = v___x_1560_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_proofs_1552_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v_unimplemented_1553_);
lean_ctor_set(v_reuseFailAlloc_1566_, 2, v___x_1562_);
lean_ctor_set(v_reuseFailAlloc_1566_, 3, v_named_1555_);
lean_ctor_set(v_reuseFailAlloc_1566_, 4, v_conclusions_1556_);
lean_ctor_set(v_reuseFailAlloc_1566_, 5, v_shared_1557_);
lean_ctor_set(v_reuseFailAlloc_1566_, 6, v_nonempty_1558_);
v___x_1564_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_st_ref_set(v___y_1542_, v___x_1564_);
v_a_1513_ = v___x_1532_;
goto v___jp_1512_;
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec(v_fst_1521_);
lean_dec_ref(v_a_1500_);
v_a_1568_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1549_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1549_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
}
else
{
lean_dec(v_a_1531_);
lean_del_object(v___x_1528_);
lean_dec(v_snd_1526_);
lean_dec(v_fst_1525_);
lean_del_object(v___x_1523_);
lean_dec(v_fst_1521_);
v_a_1513_ = v___x_1532_;
goto v___jp_1512_;
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_del_object(v___x_1528_);
lean_dec(v_snd_1526_);
lean_dec(v_fst_1525_);
lean_del_object(v___x_1523_);
lean_dec(v_fst_1521_);
lean_dec_ref(v_a_1500_);
v_a_1592_ = lean_ctor_get(v___x_1530_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1530_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1530_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1530_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
}
v___jp_1512_:
{
size_t v___x_1514_; size_t v___x_1515_; 
v___x_1514_ = ((size_t)1ULL);
v___x_1515_ = lean_usize_add(v_i_1503_, v___x_1514_);
v_i_1503_ = v___x_1515_;
v_b_1504_ = v_a_1513_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___boxed(lean_object* v_a_1602_, lean_object* v_as_1603_, lean_object* v_sz_1604_, lean_object* v_i_1605_, lean_object* v_b_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
size_t v_sz_boxed_1614_; size_t v_i_boxed_1615_; lean_object* v_res_1616_; 
v_sz_boxed_1614_ = lean_unbox_usize(v_sz_1604_);
lean_dec(v_sz_1604_);
v_i_boxed_1615_ = lean_unbox_usize(v_i_1605_);
lean_dec(v_i_1605_);
v_res_1616_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1(v_a_1602_, v_as_1603_, v_sz_boxed_1614_, v_i_boxed_1615_, v_b_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec_ref(v_as_1603_);
return v_res_1616_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__0));
v___x_1619_ = l_Lean_stringToMessageData(v___x_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1(lean_object* v_a_1620_, lean_object* v___f_1621_, lean_object* v_____r_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v_fst_1653_; lean_object* v_snd_1654_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v___x_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v___x_1705_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_a_1620_);
v___x_1706_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5___closed__0));
v___x_1707_ = lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(v___x_1705_, v___x_1706_);
lean_dec(v___x_1705_);
if (v___x_1707_ == 0)
{
goto v___jp_1674_;
}
else
{
lean_object* v___x_1708_; 
lean_inc_ref(v_a_1620_);
v___x_1708_ = lp_vampireReplay_Vampire_Reconstruct_Splitting_register(v_a_1620_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_dec_ref_known(v___x_1708_, 1);
goto v___jp_1674_;
}
else
{
lean_dec_ref(v___f_1621_);
lean_dec_ref(v_a_1620_);
return v___x_1708_;
}
}
v___jp_1630_:
{
lean_object* v___x_1635_; uint32_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1635_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replay_spec__2___redArg___closed__5);
v___x_1636_ = lp_vampireReplay_Vampire_Unit_number(v_a_1620_);
lean_dec_ref(v_a_1620_);
v___x_1637_ = lean_uint32_to_nat(v___x_1636_);
v___x_1638_ = l_Nat_reprFast(v___x_1637_);
v___x_1639_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
v___x_1640_ = l_Lean_MessageData_ofFormat(v___x_1639_);
v___x_1641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1635_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___closed__1);
v___x_1643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1643_, v___y_1631_, v___y_1634_, v___y_1632_, v___y_1633_);
return v___x_1644_;
}
v___jp_1645_:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1655_ = lp_vampireReplay_Vampire_Unit_varSorts(v_fst_1653_);
v___x_1656_ = lp_vampireReplay_Vampire_Unit_varSorts(v_a_1620_);
v___x_1657_ = l_Array_append___redArg(v___x_1655_, v___x_1656_);
lean_dec_ref(v___x_1656_);
v___x_1658_ = lean_array_to_list(v___y_1651_);
v___x_1659_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1);
v___x_1660_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_1658_, v___x_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolems(v___x_1657_, v___x_1660_, v___x_1659_, v_snd_1654_, v___y_1647_, v___y_1649_, v___y_1646_, v___y_1652_, v___y_1648_, v___y_1650_);
return v___x_1661_;
}
v___jp_1662_:
{
if (lean_obj_tag(v___y_1670_) == 1)
{
lean_object* v_val_1671_; lean_object* v_fst_1672_; lean_object* v_snd_1673_; 
v_val_1671_ = lean_ctor_get(v___y_1670_, 0);
lean_inc(v_val_1671_);
lean_dec_ref_known(v___y_1670_, 1);
v_fst_1672_ = lean_ctor_get(v_val_1671_, 0);
lean_inc(v_fst_1672_);
v_snd_1673_ = lean_ctor_get(v_val_1671_, 1);
lean_inc(v_snd_1673_);
lean_dec(v_val_1671_);
v___y_1646_ = v___y_1663_;
v___y_1647_ = v___y_1664_;
v___y_1648_ = v___y_1666_;
v___y_1649_ = v___y_1665_;
v___y_1650_ = v___y_1667_;
v___y_1651_ = v___y_1668_;
v___y_1652_ = v___y_1669_;
v_fst_1653_ = v_fst_1672_;
v_snd_1654_ = v_snd_1673_;
goto v___jp_1645_;
}
else
{
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1668_);
v___y_1631_ = v___y_1663_;
v___y_1632_ = v___y_1666_;
v___y_1633_ = v___y_1667_;
v___y_1634_ = v___y_1669_;
goto v___jp_1630_;
}
}
v___jp_1674_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; size_t v_sz_1677_; size_t v___x_1678_; lean_object* v___x_1679_; 
lean_inc_ref_n(v_a_1620_, 2);
v___x_1675_ = lp_vampireReplay_Vampire_Unit_namings(v_a_1620_);
v___x_1676_ = lean_box(0);
v_sz_1677_ = lean_array_size(v___x_1675_);
v___x_1678_ = ((size_t)0ULL);
v___x_1679_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1(v_a_1620_, v___x_1675_, v_sz_1677_, v___x_1678_, v___x_1676_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec_ref(v___x_1675_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1703_; 
v_isSharedCheck_1703_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1703_ == 0)
{
lean_object* v_unused_1704_; 
v_unused_1704_ = lean_ctor_get(v___x_1679_, 0);
lean_dec(v_unused_1704_);
v___x_1681_ = v___x_1679_;
v_isShared_1682_ = v_isSharedCheck_1703_;
goto v_resetjp_1680_;
}
else
{
lean_dec(v___x_1679_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1703_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; 
lean_inc_ref(v_a_1620_);
v___x_1683_ = lp_vampireReplay_Vampire_Unit_genClause_x3f(v_a_1620_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
lean_inc_ref(v_a_1620_);
v___x_1684_ = lp_vampireReplay_Vampire_Unit_skolems(v_a_1620_);
v___x_1685_ = lean_array_get_size(v___x_1684_);
v___x_1686_ = lean_unsigned_to_nat(0u);
v___x_1687_ = lean_nat_dec_eq(v___x_1685_, v___x_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; 
lean_del_object(v___x_1681_);
v___x_1688_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_a_1620_);
if (lean_obj_tag(v___x_1688_) == 1)
{
lean_object* v_val_1689_; uint8_t v___x_1690_; 
v_val_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_val_1689_);
v___x_1690_ = lean_unbox(v_val_1689_);
lean_dec(v_val_1689_);
if (v___x_1690_ == 15)
{
lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; 
lean_dec_ref_known(v___x_1688_, 1);
lean_dec_ref(v___f_1621_);
lean_inc_ref(v_a_1620_);
v___x_1691_ = lp_vampireReplay_Vampire_Unit_parents(v_a_1620_);
v___x_1692_ = lean_array_get_size(v___x_1691_);
v___x_1693_ = lean_nat_dec_lt(v___x_1686_, v___x_1692_);
if (v___x_1693_ == 0)
{
lean_dec_ref(v___x_1691_);
lean_dec_ref(v___x_1684_);
v___y_1631_ = v___y_1625_;
v___y_1632_ = v___y_1627_;
v___y_1633_ = v___y_1628_;
v___y_1634_ = v___y_1626_;
goto v___jp_1630_;
}
else
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_array_fget(v___x_1691_, v___x_1686_);
lean_dec_ref(v___x_1691_);
lean_inc(v___x_1694_);
v___x_1695_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_dec(v___x_1694_);
lean_dec_ref(v___x_1684_);
v___y_1631_ = v___y_1625_;
v___y_1632_ = v___y_1627_;
v___y_1633_ = v___y_1628_;
v___y_1634_ = v___y_1626_;
goto v___jp_1630_;
}
else
{
lean_object* v_val_1696_; 
v_val_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_val_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___y_1646_ = v___y_1625_;
v___y_1647_ = v___y_1623_;
v___y_1648_ = v___y_1627_;
v___y_1649_ = v___y_1624_;
v___y_1650_ = v___y_1628_;
v___y_1651_ = v___x_1684_;
v___y_1652_ = v___y_1626_;
v_fst_1653_ = v___x_1694_;
v_snd_1654_ = v_val_1696_;
goto v___jp_1645_;
}
}
}
else
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_apply_1(v___f_1621_, v___x_1688_);
v___y_1663_ = v___y_1625_;
v___y_1664_ = v___y_1623_;
v___y_1665_ = v___y_1624_;
v___y_1666_ = v___y_1627_;
v___y_1667_ = v___y_1628_;
v___y_1668_ = v___x_1684_;
v___y_1669_ = v___y_1626_;
v___y_1670_ = v___x_1697_;
goto v___jp_1662_;
}
}
else
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_apply_1(v___f_1621_, v___x_1688_);
v___y_1663_ = v___y_1625_;
v___y_1664_ = v___y_1623_;
v___y_1665_ = v___y_1624_;
v___y_1666_ = v___y_1627_;
v___y_1667_ = v___y_1628_;
v___y_1668_ = v___x_1684_;
v___y_1669_ = v___y_1626_;
v___y_1670_ = v___x_1698_;
goto v___jp_1662_;
}
}
else
{
lean_object* v___x_1700_; 
lean_dec_ref(v___x_1684_);
lean_dec_ref(v___f_1621_);
lean_dec_ref(v_a_1620_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1676_);
v___x_1700_ = v___x_1681_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1676_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
else
{
lean_object* v___x_1702_; 
lean_dec_ref_known(v___x_1683_, 1);
lean_del_object(v___x_1681_);
lean_dec_ref(v___f_1621_);
v___x_1702_ = lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf(v_a_1620_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
return v___x_1702_;
}
}
}
else
{
lean_dec_ref(v___f_1621_);
lean_dec_ref(v_a_1620_);
return v___x_1679_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1___boxed(lean_object* v_a_1709_, lean_object* v___f_1710_, lean_object* v_____r_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1(v_a_1709_, v___f_1710_, v_____r_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0(lean_object* v_a_1720_, lean_object* v_x_1721_){
_start:
{
lean_object* v___x_1722_; 
lean_inc_ref(v_a_1720_);
v___x_1722_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_a_1720_);
if (lean_obj_tag(v___x_1722_) == 0)
{
lean_object* v___x_1723_; 
lean_dec_ref(v_a_1720_);
v___x_1723_ = lean_box(0);
return v___x_1723_;
}
else
{
lean_object* v_val_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1732_; 
v_val_1724_ = lean_ctor_get(v___x_1722_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1726_ = v___x_1722_;
v_isShared_1727_ = v_isSharedCheck_1732_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_val_1724_);
lean_dec(v___x_1722_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1732_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1730_; 
v___x_1728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1728_, 0, v_a_1720_);
lean_ctor_set(v___x_1728_, 1, v_val_1724_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1728_);
v___x_1730_ = v___x_1726_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0___boxed(lean_object* v_a_1733_, lean_object* v_x_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0(v_a_1733_, v_x_1734_);
lean_dec(v_x_1734_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2(lean_object* v_as_1736_, size_t v_sz_1737_, size_t v_i_1738_, lean_object* v_b_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_fst_1748_; lean_object* v_snd_1749_; uint8_t v___x_1754_; 
v___x_1754_ = lean_usize_dec_lt(v_i_1738_, v_sz_1737_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v_b_1739_);
return v___x_1755_;
}
else
{
lean_object* v_fst_1756_; lean_object* v_snd_1757_; lean_object* v_a_1758_; lean_object* v___y_1760_; uint8_t v___y_1761_; lean_object* v___y_1765_; lean_object* v___f_1770_; lean_object* v___x_1774_; 
v_fst_1756_ = lean_ctor_get(v_b_1739_, 0);
lean_inc(v_fst_1756_);
v_snd_1757_ = lean_ctor_get(v_b_1739_, 1);
lean_inc(v_snd_1757_);
lean_dec_ref(v_b_1739_);
v_a_1758_ = lean_array_uget_borrowed(v_as_1736_, v_i_1738_);
lean_inc(v_a_1758_);
v___f_1770_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1770_, 0, v_a_1758_);
v___x_1774_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_a_1758_);
if (lean_obj_tag(v___x_1774_) == 0)
{
goto v___jp_1771_;
}
else
{
lean_object* v_val_1775_; uint8_t v___x_1776_; uint8_t v___x_1777_; 
v_val_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc(v_val_1775_);
lean_dec_ref_known(v___x_1774_, 1);
v___x_1776_ = lean_unbox(v_val_1775_);
lean_dec(v_val_1775_);
v___x_1777_ = lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(v___x_1776_);
if (v___x_1777_ == 0)
{
goto v___jp_1771_;
}
else
{
lean_object* v___x_1778_; 
lean_inc(v_a_1758_);
v___x_1778_ = lp_vampireReplay_Vampire_Reconstruct_Definition_register(v_a_1758_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v___x_1780_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
lean_inc(v_a_1779_);
lean_dec_ref_known(v___x_1778_, 1);
lean_inc(v_a_1758_);
v___x_1780_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1(v_a_1758_, v___f_1770_, v_a_1779_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
v___y_1765_ = v___x_1780_;
goto v___jp_1764_;
}
else
{
lean_dec_ref(v___f_1770_);
v___y_1765_ = v___x_1778_;
goto v___jp_1764_;
}
}
}
v___jp_1759_:
{
if (v___y_1761_ == 0)
{
lean_object* v___x_1762_; 
lean_dec_ref(v___y_1760_);
lean_inc(v_a_1758_);
v___x_1762_ = lean_array_push(v_snd_1757_, v_a_1758_);
v_fst_1748_ = v_fst_1756_;
v_snd_1749_ = v___x_1762_;
goto v___jp_1747_;
}
else
{
lean_object* v___x_1763_; 
lean_dec(v_snd_1757_);
lean_dec(v_fst_1756_);
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___y_1760_);
return v___x_1763_;
}
}
v___jp_1764_:
{
if (lean_obj_tag(v___y_1765_) == 0)
{
lean_object* v___x_1766_; 
lean_dec_ref_known(v___y_1765_, 1);
lean_dec(v_fst_1756_);
v___x_1766_ = lean_box(v___x_1754_);
v_fst_1748_ = v___x_1766_;
v_snd_1749_ = v_snd_1757_;
goto v___jp_1747_;
}
else
{
lean_object* v_a_1767_; uint8_t v___x_1768_; 
v_a_1767_ = lean_ctor_get(v___y_1765_, 0);
lean_inc(v_a_1767_);
lean_dec_ref_known(v___y_1765_, 1);
v___x_1768_ = l_Lean_Exception_isInterrupt(v_a_1767_);
if (v___x_1768_ == 0)
{
uint8_t v___x_1769_; 
lean_inc(v_a_1767_);
v___x_1769_ = l_Lean_Exception_isRuntime(v_a_1767_);
v___y_1760_ = v_a_1767_;
v___y_1761_ = v___x_1769_;
goto v___jp_1759_;
}
else
{
v___y_1760_ = v_a_1767_;
v___y_1761_ = v___x_1768_;
goto v___jp_1759_;
}
}
}
v___jp_1771_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_box(0);
lean_inc(v_a_1758_);
v___x_1773_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___lam__1(v_a_1758_, v___f_1770_, v___x_1772_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_);
v___y_1765_ = v___x_1773_;
goto v___jp_1764_;
}
}
v___jp_1747_:
{
lean_object* v___x_1750_; size_t v___x_1751_; size_t v___x_1752_; 
v___x_1750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1750_, 0, v_fst_1748_);
lean_ctor_set(v___x_1750_, 1, v_snd_1749_);
v___x_1751_ = ((size_t)1ULL);
v___x_1752_ = lean_usize_add(v_i_1738_, v___x_1751_);
v_i_1738_ = v___x_1752_;
v_b_1739_ = v___x_1750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2___boxed(lean_object* v_as_1781_, lean_object* v_sz_1782_, lean_object* v_i_1783_, lean_object* v_b_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
size_t v_sz_boxed_1792_; size_t v_i_boxed_1793_; lean_object* v_res_1794_; 
v_sz_boxed_1792_ = lean_unbox_usize(v_sz_1782_);
lean_dec(v_sz_1782_);
v_i_boxed_1793_ = lean_unbox_usize(v_i_1783_);
lean_dec(v_i_1783_);
v_res_1794_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2(v_as_1781_, v_sz_boxed_1792_, v_i_boxed_1793_, v_b_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec_ref(v_as_1781_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg(lean_object* v_a_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; size_t v_sz_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v___x_1809_ = lean_unsigned_to_nat(0u);
v___x_1810_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__1));
v_sz_1811_ = lean_array_size(v_a_1801_);
v___x_1812_ = ((size_t)0ULL);
v___x_1813_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__2(v_a_1801_, v_sz_1811_, v___x_1812_, v___x_1810_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec_ref(v_a_1801_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; lean_object* v___x_1816_; uint8_t v_isShared_1817_; uint8_t v_isSharedCheck_1831_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1816_ = v___x_1813_;
v_isShared_1817_ = v_isSharedCheck_1831_;
goto v_resetjp_1815_;
}
else
{
lean_inc(v_a_1814_);
lean_dec(v___x_1813_);
v___x_1816_ = lean_box(0);
v_isShared_1817_ = v_isSharedCheck_1831_;
goto v_resetjp_1815_;
}
v_resetjp_1815_:
{
lean_object* v_fst_1818_; uint8_t v___x_1819_; 
v_fst_1818_ = lean_ctor_get(v_a_1814_, 0);
v___x_1819_ = lean_unbox(v_fst_1818_);
if (v___x_1819_ == 0)
{
lean_object* v_snd_1820_; lean_object* v___x_1822_; 
v_snd_1820_ = lean_ctor_get(v_a_1814_, 1);
lean_inc(v_snd_1820_);
lean_dec(v_a_1814_);
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v_snd_1820_);
v___x_1822_ = v___x_1816_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v_snd_1820_);
v___x_1822_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
return v___x_1822_;
}
}
else
{
lean_object* v_snd_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v_snd_1824_ = lean_ctor_get(v_a_1814_, 1);
lean_inc(v_snd_1824_);
lean_dec(v_a_1814_);
v___x_1825_ = lean_array_get_size(v_snd_1824_);
v___x_1826_ = lean_nat_dec_eq(v___x_1825_, v___x_1809_);
if (v___x_1826_ == 0)
{
lean_del_object(v___x_1816_);
v_a_1801_ = v_snd_1824_;
goto _start;
}
else
{
lean_object* v___x_1829_; 
if (v_isShared_1817_ == 0)
{
lean_ctor_set(v___x_1816_, 0, v_snd_1824_);
v___x_1829_ = v___x_1816_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_snd_1824_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
v_a_1832_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1813_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1813_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___boxed(lean_object* v_a_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg(v_a_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced(lean_object* v_a_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_){
_start:
{
lean_object* v___y_1857_; lean_object* v_proof_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v_proof_1891_ = lean_ctor_get(v_a_1849_, 1);
lean_inc_ref(v_proof_1891_);
v___x_1892_ = lp_vampireReplay_Vampire_Proof_units(v_proof_1891_);
v___x_1893_ = lean_unsigned_to_nat(0u);
v___x_1894_ = lean_array_get_size(v___x_1892_);
v___x_1895_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0));
v___x_1896_ = lean_nat_dec_lt(v___x_1893_, v___x_1894_);
if (v___x_1896_ == 0)
{
lean_dec_ref(v___x_1892_);
v___y_1857_ = v___x_1895_;
goto v___jp_1856_;
}
else
{
uint8_t v___x_1897_; 
v___x_1897_ = lean_nat_dec_le(v___x_1894_, v___x_1894_);
if (v___x_1897_ == 0)
{
if (v___x_1896_ == 0)
{
lean_dec_ref(v___x_1892_);
v___y_1857_ = v___x_1895_;
goto v___jp_1856_;
}
else
{
size_t v___x_1898_; size_t v___x_1899_; lean_object* v___x_1900_; 
v___x_1898_ = ((size_t)0ULL);
v___x_1899_ = lean_usize_of_nat(v___x_1894_);
v___x_1900_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5(v___x_1892_, v___x_1898_, v___x_1899_, v___x_1895_);
lean_dec_ref(v___x_1892_);
v___y_1857_ = v___x_1900_;
goto v___jp_1856_;
}
}
else
{
size_t v___x_1901_; size_t v___x_1902_; lean_object* v___x_1903_; 
v___x_1901_ = ((size_t)0ULL);
v___x_1902_ = lean_usize_of_nat(v___x_1894_);
v___x_1903_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__5(v___x_1892_, v___x_1901_, v___x_1902_, v___x_1895_);
lean_dec_ref(v___x_1892_);
v___y_1857_ = v___x_1903_;
goto v___jp_1856_;
}
}
v___jp_1856_:
{
lean_object* v___x_1858_; 
v___x_1858_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg(v___y_1857_, v_a_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1882_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1861_ = v___x_1858_;
v_isShared_1862_ = v_isSharedCheck_1882_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1858_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1882_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1863_ = lean_array_get_size(v_a_1859_);
v___x_1864_ = lean_unsigned_to_nat(0u);
v___x_1865_ = lean_nat_dec_eq(v___x_1863_, v___x_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; size_t v_sz_1867_; size_t v___x_1868_; lean_object* v___x_1869_; 
lean_del_object(v___x_1861_);
v___x_1866_ = lean_box(0);
v_sz_1867_ = lean_array_size(v_a_1859_);
v___x_1868_ = ((size_t)0ULL);
v___x_1869_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg(v_a_1859_, v_sz_1867_, v___x_1868_, v___x_1866_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_);
lean_dec(v_a_1859_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; 
v_unused_1877_ = lean_ctor_get(v___x_1869_, 0);
lean_dec(v_unused_1877_);
v___x_1871_ = v___x_1869_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_dec(v___x_1869_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1866_);
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1866_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
else
{
return v___x_1869_;
}
}
else
{
lean_object* v___x_1878_; lean_object* v___x_1880_; 
lean_dec(v_a_1859_);
v___x_1878_ = lean_box(0);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1878_);
v___x_1880_ = v___x_1861_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
v_a_1883_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1858_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1858_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced___boxed(lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced(v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_, v_a_1909_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
lean_dec(v_a_1907_);
lean_dec_ref(v_a_1906_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3(lean_object* v_inst_1912_, lean_object* v_a_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_){
_start:
{
lean_object* v___x_1921_; 
v___x_1921_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg(v_a_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___boxed(lean_object* v_inst_1922_, lean_object* v_a_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3(v_inst_1922_, v_a_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec(v___y_1925_);
lean_dec_ref(v___y_1924_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4(lean_object* v_as_1932_, size_t v_sz_1933_, size_t v_i_1934_, lean_object* v_b_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___redArg(v_as_1932_, v_sz_1933_, v_i_1934_, v_b_1935_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4___boxed(lean_object* v_as_1944_, lean_object* v_sz_1945_, lean_object* v_i_1946_, lean_object* v_b_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_){
_start:
{
size_t v_sz_boxed_1955_; size_t v_i_boxed_1956_; lean_object* v_res_1957_; 
v_sz_boxed_1955_ = lean_unbox_usize(v_sz_1945_);
lean_dec(v_sz_1945_);
v_i_boxed_1956_ = lean_unbox_usize(v_i_1946_);
lean_dec(v_i_1946_);
v_res_1957_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__4(v_as_1944_, v_sz_boxed_1955_, v_i_boxed_1956_, v_b_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec_ref(v_as_1944_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0(lean_object* v___x_1958_, lean_object* v_as_1959_, size_t v_i_1960_, size_t v_stop_1961_, lean_object* v_b_1962_){
_start:
{
lean_object* v___y_1964_; uint8_t v___x_1968_; 
v___x_1968_ = lean_usize_dec_eq(v_i_1960_, v_stop_1961_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = lean_array_uget_borrowed(v_as_1959_, v_i_1960_);
lean_inc(v___x_1969_);
lean_inc_ref(v___x_1958_);
v___x_1970_ = lean_local_ctx_find(v___x_1958_, v___x_1969_);
if (lean_obj_tag(v___x_1970_) == 0)
{
v___y_1964_ = v_b_1962_;
goto v___jp_1963_;
}
else
{
lean_object* v_val_1971_; uint8_t v___x_1972_; 
v_val_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_val_1971_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1972_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
v___x_1973_ = l_Lean_LocalDecl_toExpr(v_val_1971_);
v___x_1974_ = lean_array_push(v_b_1962_, v___x_1973_);
v___y_1964_ = v___x_1974_;
goto v___jp_1963_;
}
else
{
lean_dec(v_val_1971_);
v___y_1964_ = v_b_1962_;
goto v___jp_1963_;
}
}
}
else
{
lean_dec_ref(v___x_1958_);
return v_b_1962_;
}
v___jp_1963_:
{
size_t v___x_1965_; size_t v___x_1966_; 
v___x_1965_ = ((size_t)1ULL);
v___x_1966_ = lean_usize_add(v_i_1960_, v___x_1965_);
v_i_1960_ = v___x_1966_;
v_b_1962_ = v___y_1964_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0___boxed(lean_object* v___x_1975_, lean_object* v_as_1976_, lean_object* v_i_1977_, lean_object* v_stop_1978_, lean_object* v_b_1979_){
_start:
{
size_t v_i_boxed_1980_; size_t v_stop_boxed_1981_; lean_object* v_res_1982_; 
v_i_boxed_1980_ = lean_unbox_usize(v_i_1977_);
lean_dec(v_i_1977_);
v_stop_boxed_1981_ = lean_unbox_usize(v_stop_1978_);
lean_dec(v_stop_1978_);
v_res_1982_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0(v___x_1975_, v_as_1976_, v_i_boxed_1980_, v_stop_boxed_1981_, v_b_1979_);
lean_dec_ref(v_as_1976_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0(lean_object* v___x_1985_, lean_object* v_as_1986_, lean_object* v_start_1987_, lean_object* v_stop_1988_){
_start:
{
lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = ((lean_object*)(lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___closed__0));
v___x_1990_ = lean_nat_dec_lt(v_start_1987_, v_stop_1988_);
if (v___x_1990_ == 0)
{
lean_dec_ref(v___x_1985_);
return v___x_1989_;
}
else
{
lean_object* v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = lean_array_get_size(v_as_1986_);
v___x_1992_ = lean_nat_dec_le(v_stop_1988_, v___x_1991_);
if (v___x_1992_ == 0)
{
uint8_t v___x_1993_; 
v___x_1993_ = lean_nat_dec_lt(v_start_1987_, v___x_1991_);
if (v___x_1993_ == 0)
{
lean_dec_ref(v___x_1985_);
return v___x_1989_;
}
else
{
size_t v___x_1994_; size_t v___x_1995_; lean_object* v___x_1996_; 
v___x_1994_ = lean_usize_of_nat(v_start_1987_);
v___x_1995_ = lean_usize_of_nat(v___x_1991_);
v___x_1996_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0(v___x_1985_, v_as_1986_, v___x_1994_, v___x_1995_, v___x_1989_);
return v___x_1996_;
}
}
else
{
size_t v___x_1997_; size_t v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = lean_usize_of_nat(v_start_1987_);
v___x_1998_ = lean_usize_of_nat(v_stop_1988_);
v___x_1999_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0_spec__0(v___x_1985_, v_as_1986_, v___x_1997_, v___x_1998_, v___x_1989_);
return v___x_1999_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0___boxed(lean_object* v___x_2000_, lean_object* v_as_2001_, lean_object* v_start_2002_, lean_object* v_stop_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0(v___x_2000_, v_as_2001_, v_start_2002_, v_stop_2003_);
lean_dec(v_stop_2003_);
lean_dec(v_start_2002_);
lean_dec_ref(v_as_2001_);
return v_res_2004_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_run___closed__0(void){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2005_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1);
v___x_2006_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
lean_ctor_set(v___x_2006_, 2, v___x_2005_);
lean_ctor_set(v___x_2006_, 3, v___x_2005_);
lean_ctor_set(v___x_2006_, 4, v___x_2005_);
lean_ctor_set(v___x_2006_, 5, v___x_2005_);
lean_ctor_set(v___x_2006_, 6, v___x_2005_);
return v___x_2006_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_run___closed__1(void){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2007_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0));
v___x_2008_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__1___closed__1);
v___x_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
lean_ctor_set(v___x_2009_, 1, v___x_2007_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_run(lean_object* v_proof_2010_, lean_object* v_symbols_2011_, lean_object* v_contradiction_2012_, lean_object* v_rearranged_2013_, uint8_t v_checkSteps_2014_, lean_object* v_a_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v___x_2020_; 
lean_inc_ref(v_proof_2010_);
v___x_2020_ = lp_vampireReplay_Vampire_Proof_refutation_x3f(v_proof_2010_);
if (lean_obj_tag(v___x_2020_) == 1)
{
lean_object* v_val_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2094_; 
v_val_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2094_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_val_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2094_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v_lctx_2025_; uint32_t v_polarityFlipBoundary_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; 
v_lctx_2025_ = lean_ctor_get(v_a_2015_, 2);
v_polarityFlipBoundary_2026_ = lean_ctor_get_uint32(v_proof_2010_, sizeof(void*)*2);
v___x_2027_ = lean_unsigned_to_nat(0u);
v___x_2028_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_run___closed__0, &lp_vampireReplay_Vampire_Reconstruct_run___closed__0_once, _init_lp_vampireReplay_Vampire_Reconstruct_run___closed__0);
v___x_2029_ = lean_st_mk_ref(v___x_2028_);
v___x_2030_ = l_Lean_LocalContext_getFVarIds(v_lctx_2025_);
v___x_2031_ = lean_array_get_size(v___x_2030_);
lean_inc_ref(v_lctx_2025_);
v___x_2032_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_run_spec__0(v_lctx_2025_, v___x_2030_, v___x_2027_, v___x_2031_);
lean_dec_ref(v___x_2030_);
v___x_2033_ = 0;
v___x_2034_ = lean_alloc_ctor(0, 5, 6);
lean_ctor_set(v___x_2034_, 0, v_symbols_2011_);
lean_ctor_set(v___x_2034_, 1, v_proof_2010_);
lean_ctor_set(v___x_2034_, 2, v___x_2032_);
lean_ctor_set(v___x_2034_, 3, v_contradiction_2012_);
lean_ctor_set(v___x_2034_, 4, v_rearranged_2013_);
lean_ctor_set_uint32(v___x_2034_, sizeof(void*)*5, v_polarityFlipBoundary_2026_);
lean_ctor_set_uint8(v___x_2034_, sizeof(void*)*5 + 4, v___x_2033_);
lean_ctor_set_uint8(v___x_2034_, sizeof(void*)*5 + 5, v_checkSteps_2014_);
v___x_2035_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced(v___x_2034_, v___x_2029_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_);
if (lean_obj_tag(v___x_2035_) == 0)
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v_snd_2039_; lean_object* v_snd_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2084_; 
lean_dec_ref_known(v___x_2035_, 1);
v___x_2036_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_bindIntroduced_spec__3___redArg___closed__0));
v___x_2037_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_run___closed__1, &lp_vampireReplay_Vampire_Reconstruct_run___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_run___closed__1);
lean_inc(v_val_2021_);
v___x_2038_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_order(v_val_2021_, v___x_2037_);
v_snd_2039_ = lean_ctor_get(v___x_2038_, 1);
lean_inc(v_snd_2039_);
lean_dec_ref(v___x_2038_);
v_snd_2040_ = lean_ctor_get(v_snd_2039_, 1);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_snd_2039_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; 
v_unused_2085_ = lean_ctor_get(v_snd_2039_, 0);
lean_dec(v_unused_2085_);
v___x_2042_ = v_snd_2039_;
v_isShared_2043_ = v_isSharedCheck_2084_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_snd_2040_);
lean_dec(v_snd_2039_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2084_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2044_; 
v___x_2044_ = lp_vampireReplay___private_VampireReplay_Reconstruct_0__Vampire_Reconstruct_replayAll(v_snd_2040_, v___x_2027_, v___x_2036_, v_val_2021_, v___x_2034_, v___x_2029_, v_a_2015_, v_a_2016_, v_a_2017_, v_a_2018_);
lean_dec_ref_known(v___x_2034_, 5);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2075_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2075_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2075_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2049_; lean_object* v___y_2051_; lean_object* v_unimplemented_2062_; lean_object* v_size_2063_; lean_object* v_buckets_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; uint8_t v___x_2067_; 
v___x_2049_ = lean_st_ref_get(v___x_2029_);
v_unimplemented_2062_ = lean_ctor_get(v___x_2049_, 1);
lean_inc_ref(v_unimplemented_2062_);
lean_dec(v___x_2049_);
v_size_2063_ = lean_ctor_get(v_unimplemented_2062_, 0);
lean_inc(v_size_2063_);
v_buckets_2064_ = lean_ctor_get(v_unimplemented_2062_, 1);
lean_inc_ref(v_buckets_2064_);
lean_dec_ref(v_unimplemented_2062_);
v___x_2065_ = lean_mk_empty_array_with_capacity(v_size_2063_);
lean_dec(v_size_2063_);
v___x_2066_ = lean_array_get_size(v_buckets_2064_);
v___x_2067_ = lean_nat_dec_lt(v___x_2027_, v___x_2066_);
if (v___x_2067_ == 0)
{
lean_dec_ref(v_buckets_2064_);
v___y_2051_ = v___x_2065_;
goto v___jp_2050_;
}
else
{
uint8_t v___x_2068_; 
v___x_2068_ = lean_nat_dec_le(v___x_2066_, v___x_2066_);
if (v___x_2068_ == 0)
{
if (v___x_2067_ == 0)
{
lean_dec_ref(v_buckets_2064_);
v___y_2051_ = v___x_2065_;
goto v___jp_2050_;
}
else
{
size_t v___x_2069_; size_t v___x_2070_; lean_object* v___x_2071_; 
v___x_2069_ = ((size_t)0ULL);
v___x_2070_ = lean_usize_of_nat(v___x_2066_);
v___x_2071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonLogConfig_toJson_spec__1_spec__3(v_buckets_2064_, v___x_2069_, v___x_2070_, v___x_2065_);
lean_dec_ref(v_buckets_2064_);
v___y_2051_ = v___x_2071_;
goto v___jp_2050_;
}
}
else
{
size_t v___x_2072_; size_t v___x_2073_; lean_object* v___x_2074_; 
v___x_2072_ = ((size_t)0ULL);
v___x_2073_ = lean_usize_of_nat(v___x_2066_);
v___x_2074_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Json_opt___at___00Lean_Lsp_instToJsonLogConfig_toJson_spec__1_spec__3(v_buckets_2064_, v___x_2072_, v___x_2073_, v___x_2065_);
lean_dec_ref(v_buckets_2064_);
v___y_2051_ = v___x_2074_;
goto v___jp_2050_;
}
}
v___jp_2050_:
{
lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2052_ = lean_st_ref_get(v___x_2029_);
lean_dec(v___x_2029_);
lean_dec(v___x_2052_);
if (v_isShared_2043_ == 0)
{
lean_ctor_set(v___x_2042_, 1, v___y_2051_);
lean_ctor_set(v___x_2042_, 0, v_a_2045_);
v___x_2054_ = v___x_2042_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2045_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v___y_2051_);
v___x_2054_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
lean_object* v___x_2056_; 
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2054_);
v___x_2056_ = v___x_2023_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2054_);
v___x_2056_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2058_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2056_);
v___x_2058_ = v___x_2047_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
lean_del_object(v___x_2042_);
lean_dec(v___x_2029_);
lean_del_object(v___x_2023_);
v_a_2076_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2044_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2044_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec_ref_known(v___x_2034_, 5);
lean_dec(v___x_2029_);
lean_del_object(v___x_2023_);
lean_dec(v_val_2021_);
v_a_2086_ = lean_ctor_get(v___x_2035_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2035_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2035_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2035_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
else
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
lean_dec(v___x_2020_);
lean_dec_ref(v_rearranged_2013_);
lean_dec_ref(v_contradiction_2012_);
lean_dec_ref(v_symbols_2011_);
lean_dec_ref(v_proof_2010_);
v___x_2095_ = lean_box(0);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_run___boxed(lean_object* v_proof_2097_, lean_object* v_symbols_2098_, lean_object* v_contradiction_2099_, lean_object* v_rearranged_2100_, lean_object* v_checkSteps_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
uint8_t v_checkSteps_boxed_2107_; lean_object* v_res_2108_; 
v_checkSteps_boxed_2107_ = lean_unbox(v_checkSteps_2101_);
v_res_2108_ = lp_vampireReplay_Vampire_Reconstruct_run(v_proof_2097_, v_symbols_2098_, v_contradiction_2099_, v_rearranged_2100_, v_checkSteps_boxed_2107_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
return v_res_2108_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct(uint8_t builtin) {
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
res = initialize_vampireReplay_VampireReplay_Reconstruct_Rules(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
