// Lean compiler output
// Module: VampireReplay.Reconstruct.Rules.Definition
// Imports: public import Init public meta import Init public import VampireReplay.Reconstruct.Basic public import VampireReplay.Reconstruct.Rules.Clause
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
uint8_t lp_vampireReplay_Vampire_instBEqInferenceRule_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ExprDefEq_0__Lean_Meta_CheckAssignment_findCached_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ExprDefEq_0__Lean_Meta_CheckAssignment_cache_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint32_t lp_vampireReplay_Vampire_Unit_number(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_literal_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_clause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Clause_literals(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_args(lean_object*);
uint32_t lp_vampireReplay_Vampire_Literal_predicate(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_render(lean_object*);
uint8_t lp_vampireReplay_Vampire_Literal_isEquality(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint32_t lp_vampireReplay_Vampire_Term_var(lean_object*);
uint8_t lp_vampireReplay_Vampire_Term_isVar(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_render(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_isGoalSymbol___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_instReprConnective_repr(uint8_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_args(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_premiseUses(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lp_vampireReplay_Vampire_Literal_polarity(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_boundVarSorts(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_coverVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_conclusionOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_interpreted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_symbolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint32_t lp_vampireReplay_Vampire_Term_functor(lean_object*);
lean_object* l_Lean_Meta_mkCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Literal_sort_x3f(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_name_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Clause_instantiateAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_rule_x3f(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_mkExpectedTypeHint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_equiv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "definition step "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = " does not state an equation"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " states no literal"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable X"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " has no recorded sort"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "function_definition applied "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", not a variable"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "a function_definition step should introduce a symbol, but both sides of "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " are already known"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__0_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "equality with "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "a function_definition step should state an equality, got "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__7_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equivalence with "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " sides"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "the left side of an avatar_definition should be a name"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "an avatar_definition step should state an equivalence, got "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "an avatar_definition step should state a formula"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "the name "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " was applied to "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "quantifier without a body"};
static const lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "a predicate_definition step should introduce a predicate, but "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " comes from the goal"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "the name has an unknown predicate "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "a naming definition's name should be an atom"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "a naming definition should start with its own name"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "negation without a subformula"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__10 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__10_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__12 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__12_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__13 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__13_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__14 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__14_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__14_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__15 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__15_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "a naming definition should start with its negated name"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__16 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__16_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unexpected naming definition shape "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__18 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__18_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "a predicate_definition step should state a formula"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__3 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__3_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "expected an equation, an equivalence or a disjunction, got"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__6 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__6_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "em"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__7_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(138, 250, 26, 166, 192, 110, 127, 170)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "symm"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__9 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__9_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(85, 60, 39, 3, 9, 118, 127, 140)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "a definition should name its own body, but got"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__11 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__11_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nagainst"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__13 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__13_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__15 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__15_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__16 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__16_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a negated name, got"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__17 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__17_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__19 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__19_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 201, 13, 92, 117, 118, 47)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "the definition of "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " applies it to "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "nothing says which side of the definition in step "};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = " is the symbol it defines"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "what a definition defines is not an applied symbol"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "a definition premise of definition_unfolding states no literal"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__6 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "what a definition defines is neither side of it"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__8 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "a definition premise of definition_unfolding is not an equation"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__10 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__10_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "a definition premise of definition_unfolding is not a clause"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__12 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__12_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "a definition premise does not state an equation"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " states"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__3 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "\nwhich is not"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__5 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(220, 149, 144, 59, 77, 93, 25, 217)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "term has unknown functor "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "the premise has no literal "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "literal has unknown predicate "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__5 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__5_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "equality literal without a recorded argument sort"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__7 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__7_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed__const__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed__const__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "definition_unfolding without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "definition_unfolding should be given a clause"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "cannot keep"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nof"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "neither direction of"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\nis"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__8 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__8_value;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "what is kept of a definition is not an implication:"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__9 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__9_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11_value_aux_0),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "the definition binds"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__12 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__12_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\nwhere what is kept of it binds"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__14 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__14_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "step "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 204, .m_capacity = 204, .m_length = 203, .m_data = " replaced a pure predicate by a truth value, which preserves satisfiability but does not follow from the premise, so it cannot be replayed; the tactic forces `updr=off` to keep the pass out of the search"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "unused predicate definition removal should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "inequality splitting named a term with "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 127, .m_capacity = 127, .m_length = 126, .m_data = " arguments rather than one; the extra ones are the sorts a polymorphic equality ranges over, which this fragment does not have"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "an inequality_splitting_name_introduction step should state a negative literal, got "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__4 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5;
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "an inequality_splitting_name_introduction step should state a predicate, got the equality "};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__6 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__0 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__1 = (const lean_object*)&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__0_value;
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__1_value;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "an inequality_splitting_name_introduction step should state a negation, got"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(134) << 1) | 1))}};
static const lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "inequality splitting without a clause to split"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "inequality splitting without a proof of the clause it split"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_register___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "no premise in position "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "equality_proxy_replacement has no clause among its premises"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0;
static lean_once_cell_t lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1;
static lean_once_cell_t lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__0_value;
static const lean_closure_object lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg(lean_object* v_f_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
lean_inc_ref(v_f_1_);
v___x_7_ = lp_vampireReplay_Vampire_Formula_literal_x3f(v_f_1_);
if (lean_obj_tag(v___x_7_) == 1)
{
lean_object* v___x_8_; 
lean_dec_ref(v_f_1_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; 
lean_dec(v___x_7_);
v___x_9_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_9_) == 0)
{
lean_object* v_a_10_; lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_29_; 
v_a_10_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_29_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_29_ == 0)
{
v___x_12_ = v___x_9_;
v_isShared_13_ = v_isSharedCheck_29_;
goto v_resetjp_11_;
}
else
{
lean_inc(v_a_10_);
lean_dec(v___x_9_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_29_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
uint8_t v___x_14_; 
v___x_14_ = lean_unbox(v_a_10_);
lean_dec(v_a_10_);
if (v___x_14_ == 7)
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; uint8_t v___x_18_; 
v___x_15_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_1_);
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_array_get_size(v___x_15_);
v___x_18_ = lean_nat_dec_lt(v___x_16_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; lean_object* v___x_21_; 
lean_dec_ref(v___x_15_);
v___x_19_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_19_);
v___x_21_ = v___x_12_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
else
{
lean_object* v___x_23_; 
lean_del_object(v___x_12_);
v___x_23_ = lean_array_fget(v___x_15_, v___x_16_);
lean_dec_ref(v___x_15_);
v_f_1_ = v___x_23_;
goto _start;
}
}
else
{
lean_object* v___x_25_; lean_object* v___x_27_; 
lean_dec_ref(v_f_1_);
v___x_25_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_25_);
v___x_27_ = v___x_12_;
goto v_reusejp_26_;
}
else
{
lean_object* v_reuseFailAlloc_28_; 
v_reuseFailAlloc_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_28_, 0, v___x_25_);
v___x_27_ = v_reuseFailAlloc_28_;
goto v_reusejp_26_;
}
v_reusejp_26_:
{
return v___x_27_;
}
}
}
}
else
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
lean_dec_ref(v_f_1_);
v_a_30_ = lean_ctor_get(v___x_9_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_9_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_9_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg___boxed(lean_object* v_f_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg(v_f_38_, v_a_39_, v_a_40_, v_a_41_, v_a_42_);
lean_dec(v_a_42_);
lean_dec_ref(v_a_41_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend(lean_object* v_f_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg(v_f_45_, v_a_48_, v_a_49_, v_a_50_, v_a_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___boxed(lean_object* v_f_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend(v_f_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
return v_res_62_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__0));
v___x_65_ = l_Lean_stringToMessageData(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__2));
v___x_68_ = l_Lean_stringToMessageData(v___x_67_);
return v___x_68_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__4));
v___x_71_ = l_Lean_stringToMessageData(v___x_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(lean_object* v_u_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___y_79_; lean_object* v___y_80_; lean_object* v___y_81_; lean_object* v___y_82_; lean_object* v___y_94_; lean_object* v___y_95_; lean_object* v___y_96_; lean_object* v___y_97_; lean_object* v___x_118_; 
lean_inc_ref(v_u_72_);
v___x_118_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_u_72_);
if (lean_obj_tag(v___x_118_) == 1)
{
lean_object* v_val_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_151_; 
v_val_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_151_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_151_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_val_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_151_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_123_ = lp_vampireReplay_Vampire_Clause_literals(v_val_119_);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_array_get_size(v___x_123_);
v___x_126_ = lean_nat_dec_lt(v___x_124_, v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; uint32_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
lean_dec_ref(v___x_123_);
v___x_127_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1);
v___x_128_ = lp_vampireReplay_Vampire_Unit_number(v_u_72_);
lean_dec_ref(v_u_72_);
v___x_129_ = lean_uint32_to_nat(v___x_128_);
v___x_130_ = l_Nat_reprFast(v___x_129_);
if (v_isShared_122_ == 0)
{
lean_ctor_set_tag(v___x_121_, 3);
lean_ctor_set(v___x_121_, 0, v___x_130_);
v___x_132_ = v___x_121_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_146_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
v___x_133_ = l_Lean_MessageData_ofFormat(v___x_132_);
v___x_134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_127_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__5);
v___x_136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_136_, v_a_73_, v_a_74_, v_a_75_, v_a_76_);
v_a_138_ = lean_ctor_get(v___x_137_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_137_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_137_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
else
{
lean_object* v___x_147_; lean_object* v___x_149_; 
lean_dec_ref(v_u_72_);
v___x_147_ = lean_array_fget(v___x_123_, v___x_124_);
lean_dec_ref(v___x_123_);
if (v_isShared_122_ == 0)
{
lean_ctor_set_tag(v___x_121_, 0);
lean_ctor_set(v___x_121_, 0, v___x_147_);
v___x_149_ = v___x_121_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
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
else
{
lean_dec(v___x_118_);
v___y_94_ = v_a_73_;
v___y_95_ = v_a_74_;
v___y_96_ = v_a_75_;
v___y_97_ = v_a_76_;
goto v___jp_93_;
}
v___jp_78_:
{
lean_object* v___x_83_; uint32_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_83_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__1);
v___x_84_ = lp_vampireReplay_Vampire_Unit_number(v_u_72_);
lean_dec_ref(v_u_72_);
v___x_85_ = lean_uint32_to_nat(v___x_84_);
v___x_86_ = l_Nat_reprFast(v___x_85_);
v___x_87_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
v___x_88_ = l_Lean_MessageData_ofFormat(v___x_87_);
v___x_89_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_83_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___closed__3);
v___x_91_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_91_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_92_;
}
v___jp_93_:
{
lean_object* v___x_98_; 
lean_inc_ref(v_u_72_);
v___x_98_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_u_72_);
if (lean_obj_tag(v___x_98_) == 1)
{
lean_object* v_val_99_; lean_object* v___x_100_; 
v_val_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v___x_98_, 1);
v___x_100_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral_descend___redArg(v_val_99_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
if (lean_obj_tag(v___x_100_) == 0)
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_109_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_109_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_109_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
if (lean_obj_tag(v_a_101_) == 1)
{
lean_object* v_val_105_; lean_object* v___x_107_; 
lean_dec_ref(v_u_72_);
v_val_105_ = lean_ctor_get(v_a_101_, 0);
lean_inc(v_val_105_);
lean_dec_ref_known(v_a_101_, 1);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v_val_105_);
v___x_107_ = v___x_103_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_val_105_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
else
{
lean_del_object(v___x_103_);
lean_dec(v_a_101_);
v___y_79_ = v___y_94_;
v___y_80_ = v___y_95_;
v___y_81_ = v___y_96_;
v___y_82_ = v___y_97_;
goto v___jp_78_;
}
}
}
else
{
lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
lean_dec_ref(v_u_72_);
v_a_110_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___x_100_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_100_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
else
{
lean_dec(v___x_98_);
v___y_79_ = v___y_94_;
v___y_80_ = v___y_95_;
v___y_81_ = v___y_96_;
v___y_82_ = v___y_97_;
goto v___jp_78_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg___boxed(lean_object* v_u_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(v_u_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral(lean_object* v_u_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(v_u_159_, v_a_162_, v_a_163_, v_a_164_, v_a_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___boxed(lean_object* v_u_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral(v_u_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_a_172_);
lean_dec_ref(v_a_171_);
lean_dec(v_a_170_);
lean_dec_ref(v_a_169_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0(lean_object* v_t_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = lp_vampireReplay_Vampire_Term_isVar(v_t_177_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; 
v___x_186_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_t_177_);
if (lean_obj_tag(v___x_186_) == 1)
{
lean_object* v_val_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_211_; 
v_val_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_211_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_val_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_211_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v_name_191_; lean_object* v___x_192_; lean_object* v_a_193_; lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_210_; 
v_name_191_ = lean_ctor_get(v_val_187_, 0);
lean_inc_ref(v_name_191_);
lean_dec(v_val_187_);
v___x_192_ = lp_vampireReplay_Vampire_Reconstruct_isGoalSymbol___redArg(v_name_191_, v___y_178_);
v_a_193_ = lean_ctor_get(v___x_192_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_192_);
if (v_isSharedCheck_210_ == 0)
{
v___x_195_ = v___x_192_;
v_isShared_196_ = v_isSharedCheck_210_;
goto v_resetjp_194_;
}
else
{
lean_inc(v_a_193_);
lean_dec(v___x_192_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_210_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
uint8_t v___x_197_; 
v___x_197_ = lean_unbox(v_a_193_);
lean_dec(v_a_193_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
v___x_198_ = lp_vampireReplay_Vampire_Term_args(v_t_177_);
v___x_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_199_, 0, v_name_191_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_199_);
v___x_201_ = v___x_189_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_199_);
v___x_201_ = v_reuseFailAlloc_205_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
lean_object* v___x_203_; 
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_201_);
v___x_203_ = v___x_195_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_201_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
else
{
lean_object* v___x_206_; lean_object* v___x_208_; 
lean_dec_ref(v_name_191_);
lean_del_object(v___x_189_);
lean_dec_ref(v_t_177_);
v___x_206_ = lean_box(0);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 0, v___x_206_);
v___x_208_ = v___x_195_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_206_);
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
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; 
lean_dec(v___x_186_);
lean_dec_ref(v_t_177_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
else
{
lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec_ref(v_t_177_);
v___x_214_ = lean_box(0);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0___boxed(lean_object* v_t_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__0(v_t_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
return v_res_224_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__0));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__2));
v___x_230_ = l_Lean_stringToMessageData(v___x_229_);
return v___x_230_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__4));
v___x_233_ = l_Lean_stringToMessageData(v___x_232_);
return v___x_233_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__6));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__8));
v___x_239_ = l_Lean_stringToMessageData(v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg(lean_object* v_vars_240_, lean_object* v_fst_241_, size_t v_sz_242_, size_t v_i_243_, lean_object* v_bs_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
uint8_t v___x_250_; 
v___x_250_ = lean_usize_dec_lt(v_i_243_, v_sz_242_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
lean_dec_ref(v_fst_241_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v_bs_244_);
return v___x_251_;
}
else
{
lean_object* v_v_252_; lean_object* v___x_253_; lean_object* v_bs_x27_254_; lean_object* v_a_256_; lean_object* v___y_262_; lean_object* v___y_263_; lean_object* v___y_264_; lean_object* v___y_265_; uint8_t v___x_287_; 
v_v_252_ = lean_array_uget(v_bs_244_, v_i_243_);
v___x_253_ = lean_unsigned_to_nat(0u);
v_bs_x27_254_ = lean_array_uset(v_bs_244_, v_i_243_, v___x_253_);
v___x_287_ = lp_vampireReplay_Vampire_Term_isVar(v_v_252_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_288_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__5);
lean_inc_ref(v_fst_241_);
v___x_289_ = l_Lean_stringToMessageData(v_fst_241_);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_288_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__7);
v___x_292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
lean_inc(v_v_252_);
v___x_293_ = lp_vampireReplay_Vampire_Term_render(v_v_252_);
v___x_294_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
v___x_295_ = l_Lean_MessageData_ofFormat(v___x_294_);
v___x_296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_292_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9);
v___x_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_298_, v___y_245_, v___y_246_, v___y_247_, v___y_248_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_dec_ref_known(v___x_299_, 1);
v___y_262_ = v___y_245_;
v___y_263_ = v___y_246_;
v___y_264_ = v___y_247_;
v___y_265_ = v___y_248_;
goto v___jp_261_;
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec_ref(v_bs_x27_254_);
lean_dec(v_v_252_);
lean_dec_ref(v_fst_241_);
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
v___y_262_ = v___y_245_;
v___y_263_ = v___y_246_;
v___y_264_ = v___y_247_;
v___y_265_ = v___y_248_;
goto v___jp_261_;
}
v___jp_255_:
{
size_t v___x_257_; size_t v___x_258_; lean_object* v___x_259_; 
v___x_257_ = ((size_t)1ULL);
v___x_258_ = lean_usize_add(v_i_243_, v___x_257_);
v___x_259_ = lean_array_uset(v_bs_x27_254_, v_i_243_, v_a_256_);
v_i_243_ = v___x_258_;
v_bs_244_ = v___x_259_;
goto _start;
}
v___jp_261_:
{
uint32_t v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lp_vampireReplay_Vampire_Term_var(v_v_252_);
lean_dec(v_v_252_);
v___x_267_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_vars_240_, v___x_266_);
if (lean_obj_tag(v___x_267_) == 1)
{
lean_object* v_val_268_; 
v_val_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_val_268_);
lean_dec_ref_known(v___x_267_, 1);
v_a_256_ = v_val_268_;
goto v___jp_255_;
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v___x_267_);
v___x_269_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1);
v___x_270_ = lean_uint32_to_nat(v___x_266_);
v___x_271_ = l_Nat_reprFast(v___x_270_);
v___x_272_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
v___x_273_ = l_Lean_MessageData_ofFormat(v___x_272_);
v___x_274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_269_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3);
v___x_276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_276_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_277_, 1);
v_a_256_ = v_a_278_;
goto v___jp_255_;
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_dec_ref(v_bs_x27_254_);
lean_dec_ref(v_fst_241_);
v_a_279_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_277_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_277_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___boxed(lean_object* v_vars_308_, lean_object* v_fst_309_, lean_object* v_sz_310_, lean_object* v_i_311_, lean_object* v_bs_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
size_t v_sz_boxed_318_; size_t v_i_boxed_319_; lean_object* v_res_320_; 
v_sz_boxed_318_ = lean_unbox_usize(v_sz_310_);
lean_dec(v_sz_310_);
v_i_boxed_319_ = lean_unbox_usize(v_i_311_);
lean_dec(v_i_311_);
v_res_320_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg(v_vars_308_, v_fst_309_, v_sz_boxed_318_, v_i_boxed_319_, v_bs_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec_ref(v_vars_308_);
return v_res_320_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__0));
v___x_323_ = l_Lean_stringToMessageData(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__2));
v___x_326_ = l_Lean_stringToMessageData(v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1(lean_object* v___f_327_, lean_object* v___x_328_, lean_object* v___x_329_, uint8_t v___x_330_, lean_object* v_a_331_, lean_object* v_vars_332_, lean_object* v_x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_fst_342_; lean_object* v_fst_343_; lean_object* v_snd_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v___y_349_; lean_object* v___y_350_; lean_object* v___x_410_; 
lean_inc_ref(v___f_327_);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
lean_inc_ref(v___x_328_);
v___x_410_ = lean_apply_8(v___f_327_, v___x_328_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, lean_box(0));
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v_a_411_; lean_object* v___x_412_; 
v_a_411_ = lean_ctor_get(v___x_410_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v___x_410_, 1);
lean_inc(v___y_339_);
lean_inc_ref(v___y_338_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
lean_inc_ref(v___x_329_);
v___x_412_ = lean_apply_8(v___f_327_, v___x_329_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, lean_box(0));
if (lean_obj_tag(v___x_412_) == 0)
{
if (lean_obj_tag(v_a_411_) == 0)
{
lean_object* v_a_413_; 
lean_dec_ref(v___x_329_);
v_a_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_412_, 1);
if (lean_obj_tag(v_a_413_) == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec_ref(v___x_328_);
v___x_414_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__1);
v___x_415_ = lp_vampireReplay_Vampire_Literal_render(v_a_331_);
v___x_416_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
v___x_417_ = l_Lean_MessageData_ofFormat(v___x_416_);
v___x_418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_414_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___closed__3);
v___x_420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_420_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
else
{
lean_object* v_val_430_; lean_object* v_fst_431_; lean_object* v_snd_432_; 
lean_dec_ref(v_a_331_);
v_val_430_ = lean_ctor_get(v_a_413_, 0);
lean_inc(v_val_430_);
lean_dec_ref_known(v_a_413_, 1);
v_fst_431_ = lean_ctor_get(v_val_430_, 0);
lean_inc(v_fst_431_);
v_snd_432_ = lean_ctor_get(v_val_430_, 1);
lean_inc(v_snd_432_);
lean_dec(v_val_430_);
v_fst_342_ = v_fst_431_;
v_fst_343_ = v_snd_432_;
v_snd_344_ = v___x_328_;
v___y_345_ = v___y_334_;
v___y_346_ = v___y_335_;
v___y_347_ = v___y_336_;
v___y_348_ = v___y_337_;
v___y_349_ = v___y_338_;
v___y_350_ = v___y_339_;
goto v___jp_341_;
}
}
else
{
lean_object* v_val_433_; lean_object* v_fst_434_; lean_object* v_snd_435_; 
lean_dec_ref_known(v___x_412_, 1);
lean_dec_ref(v_a_331_);
lean_dec_ref(v___x_328_);
v_val_433_ = lean_ctor_get(v_a_411_, 0);
lean_inc(v_val_433_);
lean_dec_ref_known(v_a_411_, 1);
v_fst_434_ = lean_ctor_get(v_val_433_, 0);
lean_inc(v_fst_434_);
v_snd_435_ = lean_ctor_get(v_val_433_, 1);
lean_inc(v_snd_435_);
lean_dec(v_val_433_);
v_fst_342_ = v_fst_434_;
v_fst_343_ = v_snd_435_;
v_snd_344_ = v___x_329_;
v___y_345_ = v___y_334_;
v___y_346_ = v___y_335_;
v___y_347_ = v___y_336_;
v___y_348_ = v___y_337_;
v___y_349_ = v___y_338_;
v___y_350_ = v___y_339_;
goto v___jp_341_;
}
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec(v_a_411_);
lean_dec_ref(v_a_331_);
lean_dec_ref(v___x_329_);
lean_dec_ref(v___x_328_);
v_a_436_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_412_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_412_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_dec_ref(v_a_331_);
lean_dec_ref(v___x_329_);
lean_dec_ref(v___x_328_);
lean_dec_ref(v___f_327_);
v_a_444_ = lean_ctor_get(v___x_410_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_410_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_410_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_410_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
v___jp_341_:
{
size_t v_sz_351_; size_t v___x_352_; lean_object* v___x_353_; 
v_sz_351_ = lean_array_size(v_fst_343_);
v___x_352_ = ((size_t)0ULL);
lean_inc_ref(v_fst_342_);
v___x_353_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg(v_vars_332_, v_fst_342_, v_sz_351_, v___x_352_, v_fst_343_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_355_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v___x_353_, 1);
v___x_355_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_332_, v_snd_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; uint8_t v___x_357_; uint8_t v___x_358_; lean_object* v___x_359_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
v___x_357_ = 0;
v___x_358_ = 1;
v___x_359_ = l_Lean_Meta_mkLambdaFVars(v_a_354_, v_a_356_, v___x_357_, v___x_330_, v___x_357_, v___x_330_, v___x_358_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec(v_a_354_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_385_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_385_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_385_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_385_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v_proofs_365_; lean_object* v_unimplemented_366_; lean_object* v_introduced_367_; lean_object* v_named_368_; lean_object* v_conclusions_369_; lean_object* v_shared_370_; lean_object* v_nonempty_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_384_; 
v___x_364_ = lean_st_ref_take(v___y_346_);
v_proofs_365_ = lean_ctor_get(v___x_364_, 0);
v_unimplemented_366_ = lean_ctor_get(v___x_364_, 1);
v_introduced_367_ = lean_ctor_get(v___x_364_, 2);
v_named_368_ = lean_ctor_get(v___x_364_, 3);
v_conclusions_369_ = lean_ctor_get(v___x_364_, 4);
v_shared_370_ = lean_ctor_get(v___x_364_, 5);
v_nonempty_371_ = lean_ctor_get(v___x_364_, 6);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_384_ == 0)
{
v___x_373_ = v___x_364_;
v_isShared_374_ = v_isSharedCheck_384_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_nonempty_371_);
lean_inc(v_shared_370_);
lean_inc(v_conclusions_369_);
lean_inc(v_named_368_);
lean_inc(v_introduced_367_);
lean_inc(v_unimplemented_366_);
lean_inc(v_proofs_365_);
lean_dec(v___x_364_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_384_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_367_, v_fst_342_, v_a_360_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 2, v___x_375_);
v___x_377_ = v___x_373_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_proofs_365_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_unimplemented_366_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_383_, 3, v_named_368_);
lean_ctor_set(v_reuseFailAlloc_383_, 4, v_conclusions_369_);
lean_ctor_set(v_reuseFailAlloc_383_, 5, v_shared_370_);
lean_ctor_set(v_reuseFailAlloc_383_, 6, v_nonempty_371_);
v___x_377_ = v_reuseFailAlloc_383_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_378_ = lean_st_ref_set(v___y_346_, v___x_377_);
v___x_379_ = lean_box(0);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_379_);
v___x_381_ = v___x_362_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec_ref(v_fst_342_);
v_a_386_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_359_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_359_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v_a_354_);
lean_dec_ref(v_fst_342_);
v_a_394_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_355_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_355_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec_ref(v_snd_344_);
lean_dec_ref(v_fst_342_);
v_a_402_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_353_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_353_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___boxed(lean_object* v___f_452_, lean_object* v___x_453_, lean_object* v___x_454_, lean_object* v___x_455_, lean_object* v_a_456_, lean_object* v_vars_457_, lean_object* v_x_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
uint8_t v___x_11843__boxed_466_; lean_object* v_res_467_; 
v___x_11843__boxed_466_ = lean_unbox(v___x_455_);
v_res_467_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1(v___f_452_, v___x_453_, v___x_454_, v___x_11843__boxed_466_, v_a_456_, v_vars_457_, v_x_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec_ref(v_x_458_);
lean_dec_ref(v_vars_457_);
return v_res_467_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__1));
v___x_471_ = l_Lean_stringToMessageData(v___x_470_);
return v___x_471_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__3));
v___x_474_ = l_Lean_stringToMessageData(v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_box(0);
v___x_476_ = lean_unsigned_to_nat(16u);
v___x_477_ = lean_mk_array(v___x_476_, v___x_475_);
return v___x_477_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5);
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__7));
v___x_483_ = l_Lean_stringToMessageData(v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition(lean_object* v_u_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_){
_start:
{
lean_object* v___x_492_; 
lean_inc_ref(v_u_484_);
v___x_492_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(v_u_484_, v_a_487_, v_a_488_, v_a_489_, v_a_490_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___f_494_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; uint8_t v___x_523_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_492_, 1);
v___f_494_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__0));
v___x_523_ = lp_vampireReplay_Vampire_Literal_isEquality(v_a_493_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_u_484_);
v___x_524_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__8);
v___x_525_ = lp_vampireReplay_Vampire_Literal_render(v_a_493_);
v___x_526_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
v___x_527_ = l_Lean_MessageData_ofFormat(v___x_526_);
v___x_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_524_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_528_, v_a_487_, v_a_488_, v_a_489_, v_a_490_);
return v___x_529_;
}
else
{
v___y_496_ = v_a_485_;
v___y_497_ = v_a_486_;
v___y_498_ = v_a_487_;
v___y_499_ = v_a_488_;
v___y_500_ = v_a_489_;
v___y_501_ = v_a_490_;
goto v___jp_495_;
}
v___jp_495_:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; 
lean_inc(v_a_493_);
v___x_502_ = lp_vampireReplay_Vampire_Literal_args(v_a_493_);
v___x_503_ = lean_array_get_size(v___x_502_);
v___x_504_ = lean_unsigned_to_nat(2u);
v___x_505_ = lean_nat_dec_eq(v___x_503_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec_ref(v___x_502_);
lean_dec(v_a_493_);
lean_dec_ref(v_u_484_);
v___x_506_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2);
v___x_507_ = l_Nat_reprFast(v___x_503_);
v___x_508_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
v___x_509_ = l_Lean_MessageData_ofFormat(v___x_508_);
v___x_510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_506_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4);
v___x_512_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_512_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
return v___x_513_;
}
else
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___f_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_array_fget(v___x_502_, v___x_514_);
v___x_516_ = lean_unsigned_to_nat(1u);
v___x_517_ = lean_array_fget(v___x_502_, v___x_516_);
lean_dec_ref(v___x_502_);
v___x_518_ = lean_box(v___x_505_);
v___f_519_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___lam__1___boxed), 14, 5);
lean_closure_set(v___f_519_, 0, v___f_494_);
lean_closure_set(v___f_519_, 1, v___x_515_);
lean_closure_set(v___f_519_, 2, v___x_517_);
lean_closure_set(v___f_519_, 3, v___x_518_);
lean_closure_set(v___f_519_, 4, v_a_493_);
v___x_520_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_484_);
v___x_521_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_522_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_520_, v___x_521_, v___f_519_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
return v___x_522_;
}
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec_ref(v_u_484_);
v_a_530_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_492_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_492_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___boxed(lean_object* v_u_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition(v_u_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0(lean_object* v_vars_547_, lean_object* v_fst_548_, size_t v_sz_549_, size_t v_i_550_, lean_object* v_bs_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg(v_vars_547_, v_fst_548_, v_sz_549_, v_i_550_, v_bs_551_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___boxed(lean_object* v_vars_560_, lean_object* v_fst_561_, lean_object* v_sz_562_, lean_object* v_i_563_, lean_object* v_bs_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
size_t v_sz_boxed_572_; size_t v_i_boxed_573_; lean_object* v_res_574_; 
v_sz_boxed_572_ = lean_unbox_usize(v_sz_562_);
lean_dec(v_sz_562_);
v_i_boxed_573_ = lean_unbox_usize(v_i_563_);
lean_dec(v_i_563_);
v_res_574_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0(v_vars_560_, v_fst_561_, v_sz_boxed_572_, v_i_boxed_573_, v_bs_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec_ref(v_vars_560_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0(lean_object* v___x_575_, lean_object* v___x_576_, lean_object* v_vars_577_, lean_object* v_x_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lp_vampireReplay_Vampire_Reconstruct_formula(v___x_575_, v_vars_577_, v___x_576_, v___y_579_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0___boxed(lean_object* v___x_587_, lean_object* v___x_588_, lean_object* v_vars_589_, lean_object* v_x_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0(v___x_587_, v___x_588_, v_vars_589_, v_x_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec_ref(v_x_590_);
return v_res_598_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__0));
v___x_601_ = l_Lean_stringToMessageData(v___x_600_);
return v___x_601_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__2));
v___x_604_ = l_Lean_stringToMessageData(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5(void){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__4));
v___x_607_ = l_Lean_stringToMessageData(v___x_606_);
return v___x_607_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_609_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__6));
v___x_610_ = l_Lean_stringToMessageData(v___x_609_);
return v___x_610_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__8));
v___x_613_ = l_Lean_stringToMessageData(v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition(lean_object* v_u_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_){
_start:
{
lean_object* v___x_622_; 
lean_inc_ref(v_u_614_);
v___x_622_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_u_614_);
if (lean_obj_tag(v___x_622_) == 1)
{
lean_object* v_val_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_712_; 
v_val_623_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_712_ == 0)
{
v___x_625_ = v___x_622_;
v_isShared_626_ = v_isSharedCheck_712_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_val_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_712_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___y_628_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___x_694_; 
v___x_694_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_val_623_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; uint8_t v___x_696_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_unbox(v_a_695_);
if (v___x_696_ == 4)
{
lean_dec(v_a_695_);
v___y_628_ = v_a_615_;
v___y_629_ = v_a_616_;
v___y_630_ = v_a_617_;
v___y_631_ = v_a_618_;
v___y_632_ = v_a_619_;
v___y_633_ = v_a_620_;
goto v___jp_627_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_del_object(v___x_625_);
lean_dec(v_val_623_);
lean_dec_ref(v_u_614_);
v___x_697_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__7);
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_unbox(v_a_695_);
lean_dec(v_a_695_);
v___x_700_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_699_, v___x_698_);
v___x_701_ = l_Lean_MessageData_ofFormat(v___x_700_);
v___x_702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_697_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_702_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
return v___x_703_;
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_del_object(v___x_625_);
lean_dec(v_val_623_);
lean_dec_ref(v_u_614_);
v_a_704_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_694_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_694_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
v___jp_627_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_634_ = lp_vampireReplay_Vampire_Formula_subformulas(v_val_623_);
v___x_635_ = lean_array_get_size(v___x_634_);
v___x_636_ = lean_unsigned_to_nat(2u);
v___x_637_ = lean_nat_dec_eq(v___x_635_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
lean_dec_ref(v___x_634_);
lean_dec_ref(v_u_614_);
v___x_638_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1);
v___x_639_ = l_Nat_reprFast(v___x_635_);
if (v_isShared_626_ == 0)
{
lean_ctor_set_tag(v___x_625_, 3);
lean_ctor_set(v___x_625_, 0, v___x_639_);
v___x_641_ = v___x_625_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_639_);
v___x_641_ = v_reuseFailAlloc_647_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_642_ = l_Lean_MessageData_ofFormat(v___x_641_);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_638_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3);
v___x_645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_645_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
return v___x_646_;
}
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
lean_del_object(v___x_625_);
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_array_fget(v___x_634_, v___x_648_);
v___x_650_ = lp_vampireReplay_Vampire_Formula_name_x3f(v___x_649_);
lean_dec(v___x_649_);
if (lean_obj_tag(v___x_650_) == 1)
{
lean_object* v_val_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___f_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_val_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v___x_650_, 1);
v___x_652_ = lean_unsigned_to_nat(1u);
v___x_653_ = lean_array_fget(v___x_634_, v___x_652_);
lean_dec_ref(v___x_634_);
v___x_654_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_614_);
lean_inc_ref(v___x_654_);
v___f_655_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___lam__0___boxed), 11, 2);
lean_closure_set(v___f_655_, 0, v___x_654_);
lean_closure_set(v___f_655_, 1, v___x_653_);
v___x_656_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_657_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_654_, v___x_656_, v___f_655_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_683_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_683_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_683_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_683_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v_proofs_663_; lean_object* v_unimplemented_664_; lean_object* v_introduced_665_; lean_object* v_named_666_; lean_object* v_conclusions_667_; lean_object* v_shared_668_; lean_object* v_nonempty_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_682_; 
v___x_662_ = lean_st_ref_take(v___y_629_);
v_proofs_663_ = lean_ctor_get(v___x_662_, 0);
v_unimplemented_664_ = lean_ctor_get(v___x_662_, 1);
v_introduced_665_ = lean_ctor_get(v___x_662_, 2);
v_named_666_ = lean_ctor_get(v___x_662_, 3);
v_conclusions_667_ = lean_ctor_get(v___x_662_, 4);
v_shared_668_ = lean_ctor_get(v___x_662_, 5);
v_nonempty_669_ = lean_ctor_get(v___x_662_, 6);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_682_ == 0)
{
v___x_671_ = v___x_662_;
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_nonempty_669_);
lean_inc(v_shared_668_);
lean_inc(v_conclusions_667_);
lean_inc(v_named_666_);
lean_inc(v_introduced_665_);
lean_inc(v_unimplemented_664_);
lean_inc(v_proofs_663_);
lean_dec(v___x_662_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_named_666_, v_val_651_, v_a_658_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 3, v___x_673_);
v___x_675_ = v___x_671_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_proofs_663_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_unimplemented_664_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_introduced_665_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v___x_673_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_conclusions_667_);
lean_ctor_set(v_reuseFailAlloc_681_, 5, v_shared_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 6, v_nonempty_669_);
v___x_675_ = v_reuseFailAlloc_681_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_679_; 
v___x_676_ = lean_st_ref_set(v___y_629_, v___x_675_);
v___x_677_ = lean_box(0);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_677_);
v___x_679_ = v___x_660_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v___x_677_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
else
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec(v_val_651_);
v_a_684_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_657_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_657_);
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
else
{
lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec(v___x_650_);
lean_dec_ref(v___x_634_);
lean_dec_ref(v_u_614_);
v___x_692_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__5);
v___x_693_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_692_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
return v___x_693_;
}
}
}
}
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_dec(v___x_622_);
lean_dec_ref(v_u_614_);
v___x_713_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__9);
v___x_714_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_713_, v_a_617_, v_a_618_, v_a_619_, v_a_620_);
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___boxed(lean_object* v_u_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition(v_u_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
return v_res_723_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_725_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__0));
v___x_726_ = l_Lean_stringToMessageData(v___x_725_);
return v___x_726_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__2));
v___x_729_ = l_Lean_stringToMessageData(v___x_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg(lean_object* v_vars_730_, lean_object* v___x_731_, size_t v_sz_732_, size_t v_i_733_, lean_object* v_bs_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
uint8_t v___x_740_; 
v___x_740_ = lean_usize_dec_lt(v_i_733_, v_sz_732_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; 
lean_dec_ref(v___x_731_);
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v_bs_734_);
return v___x_741_;
}
else
{
lean_object* v_v_742_; lean_object* v___x_743_; lean_object* v_bs_x27_744_; lean_object* v_a_746_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; lean_object* v___y_755_; uint8_t v___x_777_; 
v_v_742_ = lean_array_uget(v_bs_734_, v_i_733_);
v___x_743_ = lean_unsigned_to_nat(0u);
v_bs_x27_744_ = lean_array_uset(v_bs_734_, v_i_733_, v___x_743_);
v___x_777_ = lp_vampireReplay_Vampire_Term_isVar(v_v_742_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_778_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__1);
lean_inc_ref(v___x_731_);
v___x_779_ = l_Lean_stringToMessageData(v___x_731_);
v___x_780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___closed__3);
v___x_782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_782_, 0, v___x_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
lean_inc(v_v_742_);
v___x_783_ = lp_vampireReplay_Vampire_Term_render(v_v_742_);
v___x_784_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
v___x_785_ = l_Lean_MessageData_ofFormat(v___x_784_);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_782_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9);
v___x_788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_786_);
lean_ctor_set(v___x_788_, 1, v___x_787_);
v___x_789_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_788_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_dec_ref_known(v___x_789_, 1);
v___y_752_ = v___y_735_;
v___y_753_ = v___y_736_;
v___y_754_ = v___y_737_;
v___y_755_ = v___y_738_;
goto v___jp_751_;
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v_bs_x27_744_);
lean_dec(v_v_742_);
lean_dec_ref(v___x_731_);
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
v___y_752_ = v___y_735_;
v___y_753_ = v___y_736_;
v___y_754_ = v___y_737_;
v___y_755_ = v___y_738_;
goto v___jp_751_;
}
v___jp_745_:
{
size_t v___x_747_; size_t v___x_748_; lean_object* v___x_749_; 
v___x_747_ = ((size_t)1ULL);
v___x_748_ = lean_usize_add(v_i_733_, v___x_747_);
v___x_749_ = lean_array_uset(v_bs_x27_744_, v_i_733_, v_a_746_);
v_i_733_ = v___x_748_;
v_bs_734_ = v___x_749_;
goto _start;
}
v___jp_751_:
{
uint32_t v___x_756_; lean_object* v___x_757_; 
v___x_756_ = lp_vampireReplay_Vampire_Term_var(v_v_742_);
lean_dec(v_v_742_);
v___x_757_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_vars_730_, v___x_756_);
if (lean_obj_tag(v___x_757_) == 1)
{
lean_object* v_val_758_; 
v_val_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_val_758_);
lean_dec_ref_known(v___x_757_, 1);
v_a_746_ = v_val_758_;
goto v___jp_745_;
}
else
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
lean_dec(v___x_757_);
v___x_759_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__1);
v___x_760_ = lean_uint32_to_nat(v___x_756_);
v___x_761_ = l_Nat_reprFast(v___x_760_);
v___x_762_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
v___x_763_ = l_Lean_MessageData_ofFormat(v___x_762_);
v___x_764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_759_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__3);
v___x_766_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_766_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
lean_dec_ref_known(v___x_767_, 1);
v_a_746_ = v_a_768_;
goto v___jp_745_;
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v_bs_x27_744_);
lean_dec_ref(v___x_731_);
v_a_769_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_767_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_767_);
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
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg___boxed(lean_object* v_vars_798_, lean_object* v___x_799_, lean_object* v_sz_800_, lean_object* v_i_801_, lean_object* v_bs_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
size_t v_sz_boxed_808_; size_t v_i_boxed_809_; lean_object* v_res_810_; 
v_sz_boxed_808_ = lean_unbox_usize(v_sz_800_);
lean_dec(v_sz_800_);
v_i_boxed_809_ = lean_unbox_usize(v_i_801_);
lean_dec(v_i_801_);
v_res_810_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg(v_vars_798_, v___x_799_, v_sz_boxed_808_, v_i_boxed_809_, v_bs_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec_ref(v_vars_798_);
return v_res_810_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__0));
v___x_813_ = l_Lean_stringToMessageData(v___x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg(lean_object* v_a_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_a_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_846_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_846_ == 0)
{
v___x_823_ = v___x_820_;
v_isShared_824_ = v_isSharedCheck_846_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_846_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
uint8_t v___x_825_; 
v___x_825_ = lean_unbox(v_a_821_);
lean_dec(v_a_821_);
if (v___x_825_ == 7)
{
lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; uint8_t v___x_829_; 
lean_del_object(v___x_823_);
lean_inc_ref(v_a_814_);
v___x_826_ = lp_vampireReplay_Vampire_Formula_subformulas(v_a_814_);
v___x_827_ = lean_unsigned_to_nat(0u);
v___x_828_ = lean_array_get_size(v___x_826_);
v___x_829_ = lean_nat_dec_lt(v___x_827_, v___x_828_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec_ref(v___x_826_);
v___x_830_ = lean_obj_once(&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1, &lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___closed__1);
v___x_831_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_830_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_dec_ref_known(v___x_831_, 1);
goto _start;
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec_ref(v_a_814_);
v_a_833_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_831_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_831_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
else
{
lean_object* v___x_841_; 
lean_dec_ref(v_a_814_);
v___x_841_ = lean_array_fget(v___x_826_, v___x_827_);
lean_dec_ref(v___x_826_);
v_a_814_ = v___x_841_;
goto _start;
}
}
else
{
lean_object* v___x_844_; 
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v_a_814_);
v___x_844_ = v___x_823_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_814_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_854_; 
lean_dec_ref(v_a_814_);
v_a_847_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_854_ == 0)
{
v___x_849_ = v___x_820_;
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_820_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_854_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_852_; 
if (v_isShared_850_ == 0)
{
v___x_852_ = v___x_849_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_a_847_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg___boxed(lean_object* v_a_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg(v_a_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_);
lean_dec(v___y_859_);
lean_dec_ref(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
return v_res_861_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__0));
v___x_864_ = l_Lean_stringToMessageData(v___x_863_);
return v___x_864_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__2));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__4));
v___x_870_ = l_Lean_stringToMessageData(v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__6));
v___x_873_ = l_Lean_stringToMessageData(v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9(void){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__8));
v___x_876_ = l_Lean_stringToMessageData(v___x_875_);
return v___x_876_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__10));
v___x_879_ = l_Lean_stringToMessageData(v___x_878_);
return v___x_879_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__16));
v___x_888_ = l_Lean_stringToMessageData(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__18));
v___x_891_ = l_Lean_stringToMessageData(v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0(lean_object* v_val_892_, lean_object* v___x_893_, lean_object* v_vars_894_, lean_object* v_x_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v_fst_965_; lean_object* v_snd_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___x_1003_; 
v___x_1003_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg(v_val_892_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1005_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v___x_1003_, 1);
v___x_1005_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_a_1004_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; uint8_t v___x_1007_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_1005_, 1);
v___x_1007_ = lean_unbox(v_a_1006_);
switch(v___x_1007_)
{
case 4:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
lean_dec(v_a_1006_);
v___x_1008_ = lp_vampireReplay_Vampire_Formula_subformulas(v_a_1004_);
v___x_1009_ = lean_array_get_size(v___x_1008_);
v___x_1010_ = lean_unsigned_to_nat(2u);
v___x_1011_ = lean_nat_dec_eq(v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v___x_1008_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v___x_1012_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__1);
v___x_1013_ = l_Nat_reprFast(v___x_1009_);
v___x_1014_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
v___x_1015_ = l_Lean_MessageData_ofFormat(v___x_1014_);
v___x_1016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1012_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition___closed__3);
v___x_1018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1016_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1018_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1019_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1019_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
else
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = lean_unsigned_to_nat(1u);
v___x_1029_ = lean_array_fget(v___x_1008_, v___x_1028_);
lean_inc_ref(v_vars_894_);
v___x_1030_ = lp_vampireReplay_Vampire_Reconstruct_formula(v___x_893_, v_vars_894_, v___x_1029_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = lean_array_fget(v___x_1008_, v___x_1032_);
lean_dec_ref(v___x_1008_);
v_fst_965_ = v___x_1033_;
v_snd_966_ = v_a_1031_;
v___y_967_ = v___y_896_;
v___y_968_ = v___y_897_;
v___y_969_ = v___y_898_;
v___y_970_ = v___y_899_;
v___y_971_ = v___y_900_;
v___y_972_ = v___y_901_;
goto v___jp_964_;
}
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
lean_dec_ref(v___x_1008_);
lean_dec_ref(v_vars_894_);
v_a_1034_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_1030_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_1030_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
case 2:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
lean_dec(v_a_1006_);
v___x_1042_ = lp_vampireReplay_Vampire_Formula_subformulas(v_a_1004_);
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = lean_array_get_size(v___x_1042_);
v___x_1045_ = lean_nat_dec_lt(v___x_1043_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v___x_1046_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__9);
v___x_1047_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1046_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
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
lean_object* v___x_1056_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___x_1095_; 
v___x_1056_ = lean_array_fget(v___x_1042_, v___x_1043_);
v___x_1095_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___x_1056_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; uint8_t v___x_1097_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = lean_unbox(v_a_1096_);
lean_dec(v_a_1096_);
if (v___x_1097_ == 6)
{
v___y_1058_ = v___y_896_;
v___y_1059_ = v___y_897_;
v___y_1060_ = v___y_898_;
v___y_1061_ = v___y_899_;
v___y_1062_ = v___y_900_;
v___y_1063_ = v___y_901_;
goto v___jp_1057_;
}
else
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec(v___x_1056_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v___x_1098_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__17);
v___x_1099_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1098_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
return v___x_1099_;
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec(v___x_1056_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v_a_1100_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1095_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1095_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
v___jp_1057_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1064_ = lp_vampireReplay_Vampire_Formula_subformulas(v___x_1056_);
v___x_1065_ = lean_array_get_size(v___x_1064_);
v___x_1066_ = lean_nat_dec_lt(v___x_1043_, v___x_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v___x_1064_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v___x_1067_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__11);
v___x_1068_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1067_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1068_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1068_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; size_t v_sz_1079_; size_t v___x_1080_; lean_object* v___x_1081_; 
v___x_1077_ = lean_unsigned_to_nat(1u);
v___x_1078_ = l_Array_extract___redArg(v___x_1042_, v___x_1077_, v___x_1044_);
lean_dec_ref(v___x_1042_);
v_sz_1079_ = lean_array_size(v___x_1078_);
v___x_1080_ = ((size_t)0ULL);
lean_inc_ref(v_vars_894_);
v___x_1081_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v___x_893_, v_vars_894_, v_sz_1079_, v___x_1080_, v___x_1078_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
v___x_1083_ = lean_array_fget(v___x_1064_, v___x_1043_);
lean_dec_ref(v___x_1064_);
v___x_1084_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__13));
v___x_1085_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__15));
v___x_1086_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_1084_, v___x_1085_, v_a_1082_);
v_fst_965_ = v___x_1083_;
v_snd_966_ = v___x_1086_;
v___y_967_ = v___y_1058_;
v___y_968_ = v___y_1059_;
v___y_969_ = v___y_1060_;
v___y_970_ = v___y_1061_;
v___y_971_ = v___y_1062_;
v___y_972_ = v___y_1063_;
goto v___jp_964_;
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v___x_1064_);
lean_dec_ref(v_vars_894_);
v_a_1087_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1081_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1081_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
}
}
}
default: 
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_a_1004_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v___x_1108_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__19);
v___x_1109_ = lean_unsigned_to_nat(0u);
v___x_1110_ = lean_unbox(v_a_1006_);
lean_dec(v_a_1006_);
v___x_1111_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_1110_, v___x_1109_);
v___x_1112_ = l_Lean_MessageData_ofFormat(v___x_1111_);
v___x_1113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1108_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1113_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1114_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1114_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v_a_1004_);
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v_a_1123_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1005_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1005_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec_ref(v_vars_894_);
lean_dec_ref(v___x_893_);
v_a_1131_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1003_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1003_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
v___jp_903_:
{
lean_object* v___x_913_; size_t v_sz_914_; size_t v___x_915_; lean_object* v___x_916_; 
v___x_913_ = lp_vampireReplay_Vampire_Literal_args(v___y_906_);
v_sz_914_ = lean_array_size(v___x_913_);
v___x_915_ = ((size_t)0ULL);
lean_inc_ref(v___y_905_);
v___x_916_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg(v_vars_894_, v___y_905_, v_sz_914_, v___x_915_, v___x_913_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec_ref(v_vars_894_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; uint8_t v___x_918_; uint8_t v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref_known(v___x_916_, 1);
v___x_918_ = 0;
v___x_919_ = 1;
v___x_920_ = 1;
v___x_921_ = l_Lean_Meta_mkLambdaFVars(v_a_917_, v___y_904_, v___x_918_, v___x_919_, v___x_918_, v___x_919_, v___x_920_, v___y_909_, v___y_910_, v___y_911_, v___y_912_);
lean_dec(v_a_917_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_947_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_947_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_947_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_947_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v_proofs_927_; lean_object* v_unimplemented_928_; lean_object* v_introduced_929_; lean_object* v_named_930_; lean_object* v_conclusions_931_; lean_object* v_shared_932_; lean_object* v_nonempty_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_946_; 
v___x_926_ = lean_st_ref_take(v___y_908_);
v_proofs_927_ = lean_ctor_get(v___x_926_, 0);
v_unimplemented_928_ = lean_ctor_get(v___x_926_, 1);
v_introduced_929_ = lean_ctor_get(v___x_926_, 2);
v_named_930_ = lean_ctor_get(v___x_926_, 3);
v_conclusions_931_ = lean_ctor_get(v___x_926_, 4);
v_shared_932_ = lean_ctor_get(v___x_926_, 5);
v_nonempty_933_ = lean_ctor_get(v___x_926_, 6);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_926_);
if (v_isSharedCheck_946_ == 0)
{
v___x_935_ = v___x_926_;
v_isShared_936_ = v_isSharedCheck_946_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_nonempty_933_);
lean_inc(v_shared_932_);
lean_inc(v_conclusions_931_);
lean_inc(v_named_930_);
lean_inc(v_introduced_929_);
lean_inc(v_unimplemented_928_);
lean_inc(v_proofs_927_);
lean_dec(v___x_926_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_946_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; lean_object* v___x_939_; 
v___x_937_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_929_, v___y_905_, v_a_922_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 2, v___x_937_);
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_proofs_927_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_unimplemented_928_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_945_, 3, v_named_930_);
lean_ctor_set(v_reuseFailAlloc_945_, 4, v_conclusions_931_);
lean_ctor_set(v_reuseFailAlloc_945_, 5, v_shared_932_);
lean_ctor_set(v_reuseFailAlloc_945_, 6, v_nonempty_933_);
v___x_939_ = v_reuseFailAlloc_945_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_943_; 
v___x_940_ = lean_st_ref_set(v___y_908_, v___x_939_);
v___x_941_ = lean_box(0);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_941_);
v___x_943_ = v___x_924_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v___y_905_);
v_a_948_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_921_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_921_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
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
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_dec_ref(v___y_905_);
lean_dec_ref(v___y_904_);
v_a_956_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_916_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_916_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
v___jp_964_:
{
lean_object* v___x_973_; 
v___x_973_ = lp_vampireReplay_Vampire_Formula_literal_x3f(v_fst_965_);
if (lean_obj_tag(v___x_973_) == 1)
{
lean_object* v_val_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_1000_; 
v_val_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_1000_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_val_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_1000_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; 
v___x_978_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_val_974_);
if (lean_obj_tag(v___x_978_) == 1)
{
lean_object* v_val_979_; lean_object* v_name_980_; lean_object* v___x_981_; lean_object* v_a_982_; uint8_t v___x_983_; 
lean_del_object(v___x_976_);
v_val_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_val_979_);
lean_dec_ref_known(v___x_978_, 1);
v_name_980_ = lean_ctor_get(v_val_979_, 0);
lean_inc_ref(v_name_980_);
lean_dec(v_val_979_);
v___x_981_ = lp_vampireReplay_Vampire_Reconstruct_isGoalSymbol___redArg(v_name_980_, v___y_967_);
v_a_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_a_982_);
lean_dec_ref(v___x_981_);
v___x_983_ = lean_unbox(v_a_982_);
lean_dec(v_a_982_);
if (v___x_983_ == 0)
{
v___y_904_ = v_snd_966_;
v___y_905_ = v_name_980_;
v___y_906_ = v_val_974_;
v___y_907_ = v___y_967_;
v___y_908_ = v___y_968_;
v___y_909_ = v___y_969_;
v___y_910_ = v___y_970_;
v___y_911_ = v___y_971_;
v___y_912_ = v___y_972_;
goto v___jp_903_;
}
else
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
lean_dec(v_val_974_);
lean_dec_ref(v_snd_966_);
lean_dec_ref(v_vars_894_);
v___x_984_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__1);
v___x_985_ = l_Lean_stringToMessageData(v_name_980_);
v___x_986_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__3);
v___x_988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_988_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
return v___x_989_;
}
}
else
{
lean_object* v___x_990_; uint32_t v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_995_; 
lean_dec(v___x_978_);
lean_dec_ref(v_snd_966_);
lean_dec_ref(v_vars_894_);
v___x_990_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__5);
v___x_991_ = lp_vampireReplay_Vampire_Literal_predicate(v_val_974_);
lean_dec(v_val_974_);
v___x_992_ = lean_uint32_to_nat(v___x_991_);
v___x_993_ = l_Nat_reprFast(v___x_992_);
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 3);
lean_ctor_set(v___x_976_, 0, v___x_993_);
v___x_995_ = v___x_976_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_993_);
v___x_995_ = v_reuseFailAlloc_999_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = l_Lean_MessageData_ofFormat(v___x_995_);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_990_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_997_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
return v___x_998_;
}
}
}
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_dec(v___x_973_);
lean_dec_ref(v_snd_966_);
lean_dec_ref(v_vars_894_);
v___x_1001_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__7);
v___x_1002_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1001_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
return v___x_1002_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___boxed(lean_object* v_val_1139_, lean_object* v___x_1140_, lean_object* v_vars_1141_, lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0(v_val_1139_, v___x_1140_, v_vars_1141_, v_x_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec_ref(v_x_1142_);
return v_res_1150_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__0));
v___x_1153_ = l_Lean_stringToMessageData(v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition(lean_object* v_u_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v___x_1162_; 
lean_inc_ref(v_u_1154_);
v___x_1162_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v_u_1154_);
if (lean_obj_tag(v___x_1162_) == 1)
{
lean_object* v_val_1163_; lean_object* v___x_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_val_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_val_1163_);
lean_dec_ref_known(v___x_1162_, 1);
v___x_1164_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_1154_);
lean_inc_ref(v___x_1164_);
v___f_1165_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1165_, 0, v_val_1163_);
lean_closure_set(v___f_1165_, 1, v___x_1164_);
v___x_1166_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_1167_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_1164_, v___x_1166_, v___f_1165_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
return v___x_1167_;
}
else
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
lean_dec(v___x_1162_);
lean_dec_ref(v_u_1154_);
v___x_1168_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___closed__1);
v___x_1169_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1168_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_);
return v___x_1169_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___boxed(lean_object* v_u_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition(v_u_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec(v_a_1174_);
lean_dec_ref(v_a_1173_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0(lean_object* v_vars_1179_, lean_object* v___x_1180_, size_t v_sz_1181_, size_t v_i_1182_, lean_object* v_bs_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___redArg(v_vars_1179_, v___x_1180_, v_sz_1181_, v_i_1182_, v_bs_1183_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0___boxed(lean_object* v_vars_1192_, lean_object* v___x_1193_, lean_object* v_sz_1194_, lean_object* v_i_1195_, lean_object* v_bs_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
size_t v_sz_boxed_1204_; size_t v_i_boxed_1205_; lean_object* v_res_1206_; 
v_sz_boxed_1204_ = lean_unbox_usize(v_sz_1194_);
lean_dec(v_sz_1194_);
v_i_boxed_1205_ = lean_unbox_usize(v_i_1195_);
lean_dec(v_i_1195_);
v_res_1206_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__0(v_vars_1192_, v___x_1193_, v_sz_boxed_1204_, v_i_boxed_1205_, v_bs_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v_vars_1192_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1(lean_object* v_inst_1207_, lean_object* v_a_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___redArg(v_a_1208_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1___boxed(lean_object* v_inst_1217_, lean_object* v_a_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition_spec__1(v_inst_1217_, v_a_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0(lean_object* v_k_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v_b_1230_, lean_object* v_c_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v___x_1237_; 
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1229_);
lean_inc_ref(v___y_1228_);
v___x_1237_ = lean_apply_9(v_k_1227_, v_b_1230_, v_c_1231_, v___y_1228_, v___y_1229_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, lean_box(0));
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0___boxed(lean_object* v_k_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v_b_1241_, lean_object* v_c_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0(v_k_1238_, v___y_1239_, v___y_1240_, v_b_1241_, v_c_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1240_);
lean_dec_ref(v___y_1239_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg(lean_object* v_type_1249_, lean_object* v_k_1250_, uint8_t v_cleanupAnnotations_1251_, uint8_t v_whnfType_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v___f_1260_; lean_object* v___x_1261_; 
lean_inc(v___y_1254_);
lean_inc_ref(v___y_1253_);
v___f_1260_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1260_, 0, v_k_1250_);
lean_closure_set(v___f_1260_, 1, v___y_1253_);
lean_closure_set(v___f_1260_, 2, v___y_1254_);
v___x_1261_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___redArg(v_type_1249_, v___f_1260_, v_cleanupAnnotations_1251_, v_whnfType_1252_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
if (lean_obj_tag(v___x_1261_) == 0)
{
return v___x_1261_;
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1261_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1261_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg___boxed(lean_object* v_type_1270_, lean_object* v_k_1271_, lean_object* v_cleanupAnnotations_1272_, lean_object* v_whnfType_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1281_; uint8_t v_whnfType_boxed_1282_; lean_object* v_res_1283_; 
v_cleanupAnnotations_boxed_1281_ = lean_unbox(v_cleanupAnnotations_1272_);
v_whnfType_boxed_1282_ = lean_unbox(v_whnfType_1273_);
v_res_1283_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg(v_type_1270_, v_k_1271_, v_cleanupAnnotations_boxed_1281_, v_whnfType_boxed_1282_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0(lean_object* v_00_u03b1_1284_, lean_object* v_type_1285_, lean_object* v_k_1286_, uint8_t v_cleanupAnnotations_1287_, uint8_t v_whnfType_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg(v_type_1285_, v_k_1286_, v_cleanupAnnotations_1287_, v_whnfType_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___boxed(lean_object* v_00_u03b1_1297_, lean_object* v_type_1298_, lean_object* v_k_1299_, lean_object* v_cleanupAnnotations_1300_, lean_object* v_whnfType_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1309_; uint8_t v_whnfType_boxed_1310_; lean_object* v_res_1311_; 
v_cleanupAnnotations_boxed_1309_ = lean_unbox(v_cleanupAnnotations_1300_);
v_whnfType_boxed_1310_ = lean_unbox(v_whnfType_1301_);
v_res_1311_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0(v_00_u03b1_1297_, v_type_1298_, v_k_1299_, v_cleanupAnnotations_boxed_1309_, v_whnfType_boxed_1310_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v___y_1305_);
lean_dec_ref(v___y_1304_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
return v_res_1311_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__4));
v___x_1320_ = l_Lean_stringToMessageData(v___x_1319_);
return v___x_1320_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12(void){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__11));
v___x_1332_ = l_Lean_stringToMessageData(v___x_1331_);
return v___x_1332_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14(void){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__13));
v___x_1335_ = l_Lean_stringToMessageData(v___x_1334_);
return v___x_1335_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18(void){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__17));
v___x_1341_ = l_Lean_stringToMessageData(v___x_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0(lean_object* v_xs_1346_, lean_object* v_body_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_proof_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1360_; lean_object* v___x_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1365_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1));
v___x_1366_ = lean_unsigned_to_nat(3u);
v___x_1367_ = l_Lean_Expr_isAppOfArity(v_body_1347_, v___x_1365_, v___x_1366_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__3));
v___x_1369_ = lean_unsigned_to_nat(2u);
v___x_1370_ = l_Lean_Expr_isAppOfArity(v_body_1347_, v___x_1368_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition___lam__0___closed__13));
v___x_1372_ = l_Lean_Expr_isAppOfArity(v_body_1347_, v___x_1371_, v___x_1369_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1373_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__5);
v___x_1374_ = l_Lean_indentExpr(v_body_1347_);
v___x_1375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
v___x_1376_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1375_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
return v___x_1376_;
}
else
{
lean_object* v___x_1377_; lean_object* v_lhs_1378_; lean_object* v_rhs_1379_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1383_; lean_object* v___y_1384_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1400_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1377_ = l_Lean_Expr_appFn_x21(v_body_1347_);
v_lhs_1378_ = l_Lean_Expr_appArg_x21(v___x_1377_);
lean_dec_ref(v___x_1377_);
v_rhs_1379_ = l_Lean_Expr_appArg_x21(v_body_1347_);
lean_dec_ref(v_body_1347_);
v___x_1429_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__16));
v___x_1430_ = lean_unsigned_to_nat(1u);
v___x_1431_ = l_Lean_Expr_isAppOfArity(v_lhs_1378_, v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec_ref(v_rhs_1379_);
v___x_1432_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18, &lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__18);
v___x_1433_ = l_Lean_indentExpr(v_lhs_1378_);
v___x_1434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1434_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
v_a_1436_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1435_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1435_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
else
{
v___y_1397_ = v___y_1350_;
v___y_1398_ = v___y_1351_;
v___y_1399_ = v___y_1352_;
v___y_1400_ = v___y_1353_;
goto v___jp_1396_;
}
v___jp_1380_:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1385_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__8));
v___x_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1386_, 0, v_rhs_1379_);
v___x_1387_ = lean_unsigned_to_nat(1u);
v___x_1388_ = lean_mk_empty_array_with_capacity(v___x_1387_);
lean_inc_ref(v___x_1388_);
v___x_1389_ = lean_array_push(v___x_1388_, v___x_1386_);
v___x_1390_ = l_Lean_Meta_mkAppOptM(v___x_1385_, v___x_1389_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__10));
v___x_1393_ = lean_array_push(v___x_1388_, v_a_1391_);
v___x_1394_ = l_Lean_Meta_mkAppM(v___x_1392_, v___x_1393_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1394_, 1);
v_proof_1356_ = v_a_1395_;
v___y_1357_ = v___y_1381_;
v___y_1358_ = v___y_1382_;
v___y_1359_ = v___y_1383_;
v___y_1360_ = v___y_1384_;
goto v___jp_1355_;
}
else
{
return v___x_1394_;
}
}
else
{
lean_dec_ref(v___x_1388_);
return v___x_1390_;
}
}
v___jp_1396_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = l_Lean_Expr_appArg_x21(v_lhs_1378_);
lean_dec_ref(v_lhs_1378_);
lean_inc_ref(v_rhs_1379_);
lean_inc_ref(v___x_1401_);
v___x_1402_ = l_Lean_Meta_isExprDefEq(v___x_1401_, v_rhs_1379_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; uint8_t v___x_1404_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1404_ = lean_unbox(v_a_1403_);
lean_dec(v_a_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v___x_1405_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12, &lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__12);
v___x_1406_ = l_Lean_indentExpr(v___x_1401_);
v___x_1407_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1405_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
v___x_1408_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14, &lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__14);
v___x_1409_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___x_1410_ = l_Lean_indentExpr(v_rhs_1379_);
v___x_1411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1409_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___x_1412_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1411_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1412_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1412_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
else
{
lean_dec_ref(v___x_1401_);
v___y_1381_ = v___y_1397_;
v___y_1382_ = v___y_1398_;
v___y_1383_ = v___y_1399_;
v___y_1384_ = v___y_1400_;
goto v___jp_1380_;
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref(v___x_1401_);
lean_dec_ref(v_rhs_1379_);
v_a_1421_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1402_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1402_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
else
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1444_ = l_Lean_Expr_appFn_x21(v_body_1347_);
lean_dec_ref(v_body_1347_);
v___x_1445_ = l_Lean_Expr_appArg_x21(v___x_1444_);
lean_dec_ref(v___x_1444_);
v___x_1446_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__20));
v___x_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1445_);
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_mk_empty_array_with_capacity(v___x_1448_);
v___x_1450_ = lean_array_push(v___x_1449_, v___x_1447_);
v___x_1451_ = l_Lean_Meta_mkAppOptM(v___x_1446_, v___x_1450_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v_proof_1356_ = v_a_1452_;
v___y_1357_ = v___y_1350_;
v___y_1358_ = v___y_1351_;
v___y_1359_ = v___y_1352_;
v___y_1360_ = v___y_1353_;
goto v___jp_1355_;
}
else
{
return v___x_1451_;
}
}
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1453_ = l_Lean_Expr_appFn_x21(v_body_1347_);
lean_dec_ref(v_body_1347_);
v___x_1454_ = l_Lean_Expr_appArg_x21(v___x_1453_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = l_Lean_Meta_mkEqRefl(v___x_1454_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
v_proof_1356_ = v_a_1456_;
v___y_1357_ = v___y_1350_;
v___y_1358_ = v___y_1351_;
v___y_1359_ = v___y_1352_;
v___y_1360_ = v___y_1353_;
goto v___jp_1355_;
}
else
{
return v___x_1455_;
}
}
v___jp_1355_:
{
uint8_t v___x_1361_; uint8_t v___x_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; 
v___x_1361_ = 0;
v___x_1362_ = 1;
v___x_1363_ = 1;
v___x_1364_ = l_Lean_Meta_mkLambdaFVars(v_xs_1346_, v_proof_1356_, v___x_1361_, v___x_1362_, v___x_1361_, v___x_1362_, v___x_1363_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___boxed(lean_object* v_xs_1457_, lean_object* v_body_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0(v_xs_1457_, v_body_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec_ref(v_xs_1457_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition(lean_object* v_conclusion_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v___f_1476_; uint8_t v___x_1477_; lean_object* v___x_1478_; 
v___f_1476_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___closed__0));
v___x_1477_ = 0;
v___x_1478_ = lp_vampireReplay_Lean_Meta_forallTelescopeReducing___at___00Vampire_Reconstruct_Definition_byDefinition_spec__0___redArg(v_conclusion_1468_, v___f_1476_, v___x_1477_, v___x_1477_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___boxed(lean_object* v_conclusion_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition(v_conclusion_1479_, v_a_1480_, v_a_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
lean_dec(v_a_1481_);
lean_dec_ref(v_a_1480_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1(lean_object* v_fst_1491_, lean_object* v_as_1492_, size_t v_sz_1493_, size_t v_i_1494_, lean_object* v_b_1495_){
_start:
{
uint8_t v___x_1496_; 
v___x_1496_ = lean_usize_dec_lt(v_i_1494_, v_sz_1493_);
if (v___x_1496_ == 0)
{
lean_inc_ref(v_b_1495_);
return v_b_1495_;
}
else
{
lean_object* v_a_1497_; uint32_t v_premise_1498_; lean_object* v___x_1499_; uint32_t v___x_1500_; uint8_t v___x_1501_; 
v_a_1497_ = lean_array_uget_borrowed(v_as_1492_, v_i_1494_);
v_premise_1498_ = lean_ctor_get_uint32(v_a_1497_, sizeof(void*)*3);
v___x_1499_ = lean_box(0);
v___x_1500_ = lp_vampireReplay_Vampire_Unit_number(v_fst_1491_);
v___x_1501_ = lean_uint32_dec_eq(v_premise_1498_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; size_t v___x_1503_; size_t v___x_1504_; 
v___x_1502_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___closed__0));
v___x_1503_ = ((size_t)1ULL);
v___x_1504_ = lean_usize_add(v_i_1494_, v___x_1503_);
v_i_1494_ = v___x_1504_;
v_b_1495_ = v___x_1502_;
goto _start;
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_inc(v_a_1497_);
v___x_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1506_, 0, v_a_1497_);
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1507_);
lean_ctor_set(v___x_1508_, 1, v___x_1499_);
return v___x_1508_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___boxed(lean_object* v_fst_1509_, lean_object* v_as_1510_, lean_object* v_sz_1511_, lean_object* v_i_1512_, lean_object* v_b_1513_){
_start:
{
size_t v_sz_boxed_1514_; size_t v_i_boxed_1515_; lean_object* v_res_1516_; 
v_sz_boxed_1514_ = lean_unbox_usize(v_sz_1511_);
lean_dec(v_sz_1511_);
v_i_boxed_1515_ = lean_unbox_usize(v_i_1512_);
lean_dec(v_i_1512_);
v_res_1516_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1(v_fst_1509_, v_as_1510_, v_sz_boxed_1514_, v_i_boxed_1515_, v_b_1513_);
lean_dec_ref(v_b_1513_);
lean_dec_ref(v_as_1510_);
lean_dec_ref(v_fst_1509_);
return v_res_1516_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__0));
v___x_1519_ = l_Lean_stringToMessageData(v___x_1518_);
return v___x_1519_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__2));
v___x_1522_ = l_Lean_stringToMessageData(v___x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg(lean_object* v_val_1523_, size_t v_sz_1524_, size_t v_i_1525_, lean_object* v_bs_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
uint8_t v___x_1532_; 
v___x_1532_ = lean_usize_dec_lt(v_i_1525_, v_sz_1524_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1533_; 
lean_dec_ref(v_val_1523_);
v___x_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1533_, 0, v_bs_1526_);
return v___x_1533_;
}
else
{
lean_object* v_v_1534_; lean_object* v___x_1535_; lean_object* v_bs_x27_1536_; uint8_t v___x_1544_; 
v_v_1534_ = lean_array_uget(v_bs_1526_, v_i_1525_);
v___x_1535_ = lean_unsigned_to_nat(0u);
v_bs_x27_1536_ = lean_array_uset(v_bs_1526_, v_i_1525_, v___x_1535_);
v___x_1544_ = lp_vampireReplay_Vampire_Term_isVar(v_v_1534_);
if (v___x_1544_ == 0)
{
lean_object* v_name_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v_name_1545_ = lean_ctor_get(v_val_1523_, 0);
v___x_1546_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1);
lean_inc_ref(v_name_1545_);
v___x_1547_ = l_Lean_stringToMessageData(v_name_1545_);
v___x_1548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1546_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__3);
v___x_1550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
lean_inc(v_v_1534_);
v___x_1551_ = lp_vampireReplay_Vampire_Term_render(v_v_1534_);
v___x_1552_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
v___x_1553_ = l_Lean_MessageData_ofFormat(v___x_1552_);
v___x_1554_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1550_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition_spec__0___redArg___closed__9);
v___x_1556_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1556_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_dec_ref_known(v___x_1557_, 1);
goto v___jp_1537_;
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v_bs_x27_1536_);
lean_dec(v_v_1534_);
lean_dec_ref(v_val_1523_);
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
goto v___jp_1537_;
}
v___jp_1537_:
{
uint32_t v___x_1538_; size_t v___x_1539_; size_t v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1538_ = lp_vampireReplay_Vampire_Term_var(v_v_1534_);
lean_dec(v_v_1534_);
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_add(v_i_1525_, v___x_1539_);
v___x_1541_ = lean_box_uint32(v___x_1538_);
v___x_1542_ = lean_array_uset(v_bs_x27_1536_, v_i_1525_, v___x_1541_);
v_i_1525_ = v___x_1540_;
v_bs_1526_ = v___x_1542_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___boxed(lean_object* v_val_1566_, lean_object* v_sz_1567_, lean_object* v_i_1568_, lean_object* v_bs_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
size_t v_sz_boxed_1575_; size_t v_i_boxed_1576_; lean_object* v_res_1577_; 
v_sz_boxed_1575_ = lean_unbox_usize(v_sz_1567_);
lean_dec(v_sz_1567_);
v_i_boxed_1576_ = lean_unbox_usize(v_i_1568_);
lean_dec(v_i_1568_);
v_res_1577_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg(v_val_1566_, v_sz_boxed_1575_, v_i_boxed_1576_, v_bs_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec_ref(v___y_1572_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
return v_res_1577_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__0));
v___x_1580_ = l_Lean_stringToMessageData(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__2));
v___x_1583_ = l_Lean_stringToMessageData(v___x_1582_);
return v___x_1583_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__4));
v___x_1586_ = l_Lean_stringToMessageData(v___x_1585_);
return v___x_1586_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__6));
v___x_1589_ = l_Lean_stringToMessageData(v___x_1588_);
return v___x_1589_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1591_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__8));
v___x_1592_ = l_Lean_stringToMessageData(v___x_1591_);
return v___x_1592_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__10));
v___x_1595_ = l_Lean_stringToMessageData(v___x_1594_);
return v___x_1595_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1597_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__12));
v___x_1598_ = l_Lean_stringToMessageData(v___x_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2(lean_object* v___x_1599_, lean_object* v_as_1600_, size_t v_sz_1601_, size_t v_i_1602_, lean_object* v_b_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v_a_1612_; uint8_t v___x_1616_; 
v___x_1616_ = lean_usize_dec_lt(v_i_1602_, v_sz_1601_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; 
lean_dec_ref(v___x_1599_);
v___x_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1617_, 0, v_b_1603_);
return v___x_1617_;
}
else
{
lean_object* v_a_1618_; lean_object* v_fst_1619_; lean_object* v_snd_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1841_; 
v_a_1618_ = lean_array_uget(v_as_1600_, v_i_1602_);
v_fst_1619_ = lean_ctor_get(v_a_1618_, 0);
v_snd_1620_ = lean_ctor_get(v_a_1618_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_a_1618_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1622_ = v_a_1618_;
v_isShared_1623_ = v_isSharedCheck_1841_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_snd_1620_);
lean_inc(v_fst_1619_);
lean_dec(v_a_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1841_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v_fst_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1839_; 
v_fst_1647_ = lean_ctor_get(v_snd_1620_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v_snd_1620_);
if (v_isSharedCheck_1839_ == 0)
{
lean_object* v_unused_1840_; 
v_unused_1840_ = lean_ctor_get(v_snd_1620_, 1);
lean_dec(v_unused_1840_);
v___x_1649_ = v_snd_1620_;
v_isShared_1650_ = v_isSharedCheck_1839_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_fst_1647_);
lean_dec(v_snd_1620_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1839_;
goto v_resetjp_1648_;
}
v___jp_1624_:
{
lean_object* v___x_1629_; uint32_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1629_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1);
v___x_1630_ = lp_vampireReplay_Vampire_Unit_number(v_fst_1619_);
lean_dec(v_fst_1619_);
v___x_1631_ = lean_uint32_to_nat(v___x_1630_);
v___x_1632_ = l_Nat_reprFast(v___x_1631_);
v___x_1633_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1632_);
v___x_1634_ = l_Lean_MessageData_ofFormat(v___x_1633_);
v___x_1635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1629_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1637_, v___y_1625_, v___y_1627_, v___y_1628_, v___y_1626_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_dec_ref_known(v___x_1638_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v___x_1638_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v___x_1638_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
v_resetjp_1648_:
{
lean_object* v_fst_1652_; lean_object* v_fst_1653_; uint8_t v_snd_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; lean_object* v___x_1697_; 
lean_inc(v_fst_1619_);
v___x_1697_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v_fst_1619_);
if (lean_obj_tag(v___x_1697_) == 1)
{
lean_object* v_val_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1828_; 
v_val_1698_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1700_ = v___x_1697_;
v_isShared_1701_ = v_isSharedCheck_1828_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_val_1698_);
lean_dec(v___x_1697_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1828_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1702_ = lp_vampireReplay_Vampire_Clause_literals(v_val_1698_);
v___x_1703_ = lean_unsigned_to_nat(0u);
v___x_1704_ = lean_array_get_size(v___x_1702_);
v___x_1705_ = lean_nat_dec_lt(v___x_1703_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_dec_ref(v___x_1702_);
lean_del_object(v___x_1700_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
v___x_1706_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__7);
v___x_1707_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1706_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_dec_ref_known(v___x_1707_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1707_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1707_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
else
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; uint8_t v___y_1824_; uint8_t v___x_1826_; 
v___x_1716_ = lean_unsigned_to_nat(1u);
v___x_1717_ = lean_array_fget(v___x_1702_, v___x_1703_);
lean_dec_ref(v___x_1702_);
v___x_1826_ = lean_nat_dec_eq(v___x_1704_, v___x_1716_);
if (v___x_1826_ == 0)
{
v___y_1824_ = v___x_1826_;
goto v___jp_1823_;
}
else
{
uint8_t v___x_1827_; 
v___x_1827_ = lp_vampireReplay_Vampire_Literal_isEquality(v___x_1717_);
v___y_1824_ = v___x_1827_;
goto v___jp_1823_;
}
v___jp_1718_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; uint8_t v___x_1728_; 
v___x_1725_ = lp_vampireReplay_Vampire_Literal_args(v___x_1717_);
v___x_1726_ = lean_array_get_size(v___x_1725_);
v___x_1727_ = lean_unsigned_to_nat(2u);
v___x_1728_ = lean_nat_dec_eq(v___x_1726_, v___x_1727_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; 
lean_dec_ref(v___x_1725_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
v___x_1729_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__2);
v___x_1730_ = l_Nat_reprFast(v___x_1726_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set_tag(v___x_1700_, 3);
lean_ctor_set(v___x_1700_, 0, v___x_1730_);
v___x_1732_ = v___x_1700_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1733_ = l_Lean_MessageData_ofFormat(v___x_1732_);
v___x_1734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1729_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__4);
v___x_1736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1734_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1736_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
if (lean_obj_tag(v___x_1737_) == 0)
{
lean_dec_ref_known(v___x_1737_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1737_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1737_);
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
}
else
{
lean_object* v___x_1747_; lean_object* v___x_1748_; size_t v_sz_1749_; size_t v___x_1750_; lean_object* v___x_1751_; lean_object* v_fst_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1810_; 
lean_del_object(v___x_1700_);
lean_inc_ref(v___x_1599_);
v___x_1747_ = lp_vampireReplay_Vampire_Unit_premiseUses(v___x_1599_);
v___x_1748_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1___closed__0));
v_sz_1749_ = lean_array_size(v___x_1747_);
v___x_1750_ = ((size_t)0ULL);
v___x_1751_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__1(v_fst_1619_, v___x_1747_, v_sz_1749_, v___x_1750_, v___x_1748_);
lean_dec_ref(v___x_1747_);
v_fst_1752_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1810_ == 0)
{
lean_object* v_unused_1811_; 
v_unused_1811_ = lean_ctor_get(v___x_1751_, 1);
lean_dec(v_unused_1811_);
v___x_1754_ = v___x_1751_;
v_isShared_1755_ = v_isSharedCheck_1810_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_fst_1752_);
lean_dec(v___x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1810_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
if (lean_obj_tag(v_fst_1752_) == 0)
{
lean_del_object(v___x_1754_);
lean_dec_ref(v___x_1725_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
v___y_1625_ = v___y_1721_;
v___y_1626_ = v___y_1724_;
v___y_1627_ = v___y_1722_;
v___y_1628_ = v___y_1723_;
goto v___jp_1624_;
}
else
{
lean_object* v_val_1756_; 
v_val_1756_ = lean_ctor_get(v_fst_1752_, 0);
lean_inc(v_val_1756_);
lean_dec_ref_known(v_fst_1752_, 1);
if (lean_obj_tag(v_val_1756_) == 1)
{
lean_object* v_val_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1809_; 
v_val_1757_ = lean_ctor_get(v_val_1756_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_val_1756_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1759_ = v_val_1756_;
v_isShared_1760_ = v_isSharedCheck_1809_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_val_1757_);
lean_dec(v_val_1756_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1809_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v_term_1761_; 
v_term_1761_ = lean_ctor_get(v_val_1757_, 1);
lean_inc(v_term_1761_);
lean_dec(v_val_1757_);
if (lean_obj_tag(v_term_1761_) == 1)
{
lean_object* v_val_1762_; uint32_t v_idx_1763_; lean_object* v___x_1764_; uint32_t v_idx_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; 
lean_del_object(v___x_1759_);
lean_del_object(v___x_1754_);
v_val_1762_ = lean_ctor_get(v_term_1761_, 0);
lean_inc(v_val_1762_);
lean_dec_ref_known(v_term_1761_, 1);
v_idx_1763_ = lean_ctor_get_uint32(v_val_1762_, sizeof(void*)*1);
lean_dec(v_val_1762_);
v___x_1764_ = lean_array_fget(v___x_1725_, v___x_1703_);
v_idx_1765_ = lean_ctor_get_uint32(v___x_1764_, sizeof(void*)*1);
v___x_1766_ = lean_array_fget(v___x_1725_, v___x_1716_);
lean_dec_ref(v___x_1725_);
v___x_1767_ = lean_uint32_dec_eq(v_idx_1763_, v_idx_1765_);
if (v___x_1767_ == 0)
{
uint32_t v_idx_1768_; uint8_t v___x_1769_; 
v_idx_1768_ = lean_ctor_get_uint32(v___x_1766_, sizeof(void*)*1);
v___x_1769_ = lean_uint32_dec_eq(v_idx_1763_, v_idx_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
lean_dec(v___x_1766_);
lean_dec(v___x_1764_);
v___x_1770_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__9);
v___x_1771_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1770_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v_snd_1773_; lean_object* v_fst_1774_; lean_object* v_fst_1775_; lean_object* v_snd_1776_; uint8_t v___x_1777_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v_snd_1773_ = lean_ctor_get(v_a_1772_, 1);
lean_inc(v_snd_1773_);
v_fst_1774_ = lean_ctor_get(v_a_1772_, 0);
lean_inc(v_fst_1774_);
lean_dec(v_a_1772_);
v_fst_1775_ = lean_ctor_get(v_snd_1773_, 0);
lean_inc(v_fst_1775_);
v_snd_1776_ = lean_ctor_get(v_snd_1773_, 1);
lean_inc(v_snd_1776_);
lean_dec(v_snd_1773_);
v___x_1777_ = lean_unbox(v_snd_1776_);
lean_dec(v_snd_1776_);
v_fst_1652_ = v_fst_1774_;
v_fst_1653_ = v_fst_1775_;
v_snd_1654_ = v___x_1777_;
v___y_1655_ = v___y_1719_;
v___y_1656_ = v___y_1720_;
v___y_1657_ = v___y_1721_;
v___y_1658_ = v___y_1722_;
v___y_1659_ = v___y_1723_;
v___y_1660_ = v___y_1724_;
goto v___jp_1651_;
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1778_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1771_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1771_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
else
{
v_fst_1652_ = v___x_1766_;
v_fst_1653_ = v___x_1764_;
v_snd_1654_ = v___x_1769_;
v___y_1655_ = v___y_1719_;
v___y_1656_ = v___y_1720_;
v___y_1657_ = v___y_1721_;
v___y_1658_ = v___y_1722_;
v___y_1659_ = v___y_1723_;
v___y_1660_ = v___y_1724_;
goto v___jp_1651_;
}
}
else
{
uint8_t v___x_1786_; 
v___x_1786_ = 0;
v_fst_1652_ = v___x_1764_;
v_fst_1653_ = v___x_1766_;
v_snd_1654_ = v___x_1786_;
v___y_1655_ = v___y_1719_;
v___y_1656_ = v___y_1720_;
v___y_1657_ = v___y_1721_;
v___y_1658_ = v___y_1722_;
v___y_1659_ = v___y_1723_;
v___y_1660_ = v___y_1724_;
goto v___jp_1651_;
}
}
else
{
lean_object* v___x_1787_; uint32_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1792_; 
lean_dec(v_term_1761_);
lean_dec_ref(v___x_1725_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
v___x_1787_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__1);
v___x_1788_ = lp_vampireReplay_Vampire_Unit_number(v_fst_1619_);
lean_dec(v_fst_1619_);
v___x_1789_ = lean_uint32_to_nat(v___x_1788_);
v___x_1790_ = l_Nat_reprFast(v___x_1789_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set_tag(v___x_1759_, 3);
lean_ctor_set(v___x_1759_, 0, v___x_1790_);
v___x_1792_ = v___x_1759_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
v___x_1793_ = l_Lean_MessageData_ofFormat(v___x_1792_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set_tag(v___x_1754_, 7);
lean_ctor_set(v___x_1754_, 1, v___x_1793_);
lean_ctor_set(v___x_1754_, 0, v___x_1787_);
v___x_1795_ = v___x_1754_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__3);
v___x_1797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1795_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1797_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_dec_ref_known(v___x_1798_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1798_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1798_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1798_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
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
lean_dec(v_val_1756_);
lean_del_object(v___x_1754_);
lean_dec_ref(v___x_1725_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
v___y_1625_ = v___y_1721_;
v___y_1626_ = v___y_1724_;
v___y_1627_ = v___y_1722_;
v___y_1628_ = v___y_1723_;
goto v___jp_1624_;
}
}
}
}
}
v___jp_1812_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__11);
v___x_1814_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1813_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_dec_ref_known(v___x_1814_, 1);
v___y_1719_ = v___y_1604_;
v___y_1720_ = v___y_1605_;
v___y_1721_ = v___y_1606_;
v___y_1722_ = v___y_1607_;
v___y_1723_ = v___y_1608_;
v___y_1724_ = v___y_1609_;
goto v___jp_1718_;
}
else
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
lean_dec(v___x_1717_);
lean_del_object(v___x_1700_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
}
v___jp_1823_:
{
if (v___y_1824_ == 0)
{
goto v___jp_1812_;
}
else
{
uint8_t v___x_1825_; 
v___x_1825_ = lp_vampireReplay_Vampire_Literal_polarity(v___x_1717_);
if (v___x_1825_ == 0)
{
goto v___jp_1812_;
}
else
{
v___y_1719_ = v___y_1604_;
v___y_1720_ = v___y_1605_;
v___y_1721_ = v___y_1606_;
v___y_1722_ = v___y_1607_;
v___y_1723_ = v___y_1608_;
v___y_1724_ = v___y_1609_;
goto v___jp_1718_;
}
}
}
}
}
}
else
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_dec(v___x_1697_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
v___x_1829_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__13);
v___x_1830_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1829_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_dec_ref_known(v___x_1830_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1830_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1830_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
v___jp_1651_:
{
lean_object* v___x_1661_; 
v___x_1661_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_fst_1652_);
if (lean_obj_tag(v___x_1661_) == 1)
{
lean_object* v_val_1662_; lean_object* v___x_1663_; size_t v_sz_1664_; size_t v___x_1665_; lean_object* v___x_1666_; 
v_val_1662_ = lean_ctor_get(v___x_1661_, 0);
lean_inc_n(v_val_1662_, 2);
lean_dec_ref_known(v___x_1661_, 1);
v___x_1663_ = lp_vampireReplay_Vampire_Term_args(v_fst_1652_);
v_sz_1664_ = lean_array_size(v___x_1663_);
v___x_1665_ = ((size_t)0ULL);
v___x_1666_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg(v_val_1662_, v_sz_1664_, v___x_1665_, v___x_1663_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v_name_1668_; lean_object* v___x_1669_; lean_object* v___x_1671_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
lean_inc(v_a_1667_);
lean_dec_ref_known(v___x_1666_, 1);
v_name_1668_ = lean_ctor_get(v_val_1662_, 0);
lean_inc_ref(v_name_1668_);
lean_dec(v_val_1662_);
v___x_1669_ = lean_box(v_snd_1654_);
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 1, v___x_1669_);
v___x_1671_ = v___x_1649_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_fst_1647_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v___x_1669_);
v___x_1671_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1673_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 1, v___x_1671_);
lean_ctor_set(v___x_1622_, 0, v_fst_1653_);
v___x_1673_ = v___x_1622_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_fst_1653_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_a_1667_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_fst_1619_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1676_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_b_1603_, v_name_1668_, v___x_1675_);
v_a_1612_ = v___x_1676_;
goto v___jp_1611_;
}
}
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec(v_val_1662_);
lean_dec_ref(v_fst_1653_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1679_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1666_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1666_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
lean_dec(v___x_1661_);
lean_dec_ref(v_fst_1653_);
lean_dec_ref(v_fst_1652_);
lean_del_object(v___x_1649_);
lean_dec(v_fst_1647_);
lean_del_object(v___x_1622_);
lean_dec(v_fst_1619_);
v___x_1687_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___closed__5);
v___x_1688_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1687_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_dec_ref_known(v___x_1688_, 1);
v_a_1612_ = v_b_1603_;
goto v___jp_1611_;
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_dec_ref(v_b_1603_);
lean_dec_ref(v___x_1599_);
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1688_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1688_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
}
}
}
v___jp_1611_:
{
size_t v___x_1613_; size_t v___x_1614_; 
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1602_, v___x_1613_);
v_i_1602_ = v___x_1614_;
v_b_1603_ = v_a_1612_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2___boxed(lean_object* v___x_1842_, lean_object* v_as_1843_, lean_object* v_sz_1844_, lean_object* v_i_1845_, lean_object* v_b_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
size_t v_sz_boxed_1854_; size_t v_i_boxed_1855_; lean_object* v_res_1856_; 
v_sz_boxed_1854_ = lean_unbox_usize(v_sz_1844_);
lean_dec(v_sz_1844_);
v_i_boxed_1855_ = lean_unbox_usize(v_i_1845_);
lean_dec(v_i_1845_);
v_res_1856_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2(v___x_1842_, v_as_1843_, v_sz_boxed_1854_, v_i_boxed_1855_, v_b_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
lean_dec(v___y_1852_);
lean_dec_ref(v___y_1851_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec_ref(v_as_1843_);
return v_res_1856_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1857_ = lean_box(0);
v___x_1858_ = lean_unsigned_to_nat(16u);
v___x_1859_ = lean_mk_array(v___x_1858_, v___x_1857_);
return v___x_1859_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_out_1862_; 
v___x_1860_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__0);
v___x_1861_ = lean_unsigned_to_nat(0u);
v_out_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_out_1862_, 0, v___x_1861_);
lean_ctor_set(v_out_1862_, 1, v___x_1860_);
return v_out_1862_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions(lean_object* v_step_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_){
_start:
{
lean_object* v_unit_1871_; lean_object* v_premises_1872_; lean_object* v_out_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; size_t v_sz_1879_; size_t v___x_1880_; lean_object* v___x_1881_; 
v_unit_1871_ = lean_ctor_get(v_step_1863_, 0);
lean_inc_ref_n(v_unit_1871_, 2);
v_premises_1872_ = lean_ctor_get(v_step_1863_, 1);
lean_inc_ref(v_premises_1872_);
lean_dec_ref(v_step_1863_);
v_out_1873_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___closed__1);
v___x_1874_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_1871_);
v___x_1875_ = l_Array_zip___redArg(v___x_1874_, v_premises_1872_);
lean_dec_ref(v_premises_1872_);
lean_dec_ref(v___x_1874_);
v___x_1876_ = lean_unsigned_to_nat(1u);
v___x_1877_ = lean_array_get_size(v___x_1875_);
v___x_1878_ = l_Array_extract___redArg(v___x_1875_, v___x_1876_, v___x_1877_);
lean_dec_ref(v___x_1875_);
v_sz_1879_ = lean_array_size(v___x_1878_);
v___x_1880_ = ((size_t)0ULL);
v___x_1881_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__2(v_unit_1871_, v___x_1878_, v_sz_1879_, v___x_1880_, v_out_1873_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_);
lean_dec_ref(v___x_1878_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions___boxed(lean_object* v_step_1882_, lean_object* v_a_1883_, lean_object* v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions(v_step_1882_, v_a_1883_, v_a_1884_, v_a_1885_, v_a_1886_, v_a_1887_, v_a_1888_);
lean_dec(v_a_1888_);
lean_dec_ref(v_a_1887_);
lean_dec(v_a_1886_);
lean_dec_ref(v_a_1885_);
lean_dec(v_a_1884_);
lean_dec_ref(v_a_1883_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0(lean_object* v_val_1891_, size_t v_sz_1892_, size_t v_i_1893_, lean_object* v_bs_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg(v_val_1891_, v_sz_1892_, v_i_1893_, v_bs_1894_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___boxed(lean_object* v_val_1903_, lean_object* v_sz_1904_, lean_object* v_i_1905_, lean_object* v_bs_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
size_t v_sz_boxed_1914_; size_t v_i_boxed_1915_; lean_object* v_res_1916_; 
v_sz_boxed_1914_ = lean_unbox_usize(v_sz_1904_);
lean_dec(v_sz_1904_);
v_i_boxed_1915_ = lean_unbox_usize(v_i_1905_);
lean_dec(v_i_1905_);
v_res_1916_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0(v_val_1903_, v_sz_boxed_1914_, v_i_boxed_1915_, v_bs_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
lean_dec(v___y_1912_);
lean_dec_ref(v___y_1911_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
return v_res_1916_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0(void){
_start:
{
lean_object* v___x_1917_; lean_object* v_dummy_1918_; 
v___x_1917_ = lean_box(0);
v_dummy_1918_ = l_Lean_Expr_sort___override(v___x_1917_);
return v_dummy_1918_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf(lean_object* v_name_1919_, lean_object* v_arity_1920_, lean_object* v_args_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v___x_1929_; 
lean_inc_ref(v_name_1919_);
v___x_1929_ = lp_vampireReplay_Vampire_Reconstruct_interpreted(v_name_1919_, v_args_1921_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
if (lean_obj_tag(v_a_1930_) == 0)
{
lean_object* v___x_1931_; 
v___x_1931_ = lp_vampireReplay_Vampire_Reconstruct_symbolExpr(v_name_1919_, v_a_1922_, v_a_1923_, v_a_1924_, v_a_1925_, v_a_1926_, v_a_1927_);
return v___x_1931_;
}
else
{
lean_object* v_val_1932_; lean_object* v___x_1933_; lean_object* v_a_1934_; lean_object* v_dummy_1935_; lean_object* v_nargs_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; uint8_t v___x_1942_; 
lean_dec_ref(v_name_1919_);
v_val_1932_ = lean_ctor_get(v_a_1930_, 0);
lean_inc(v_val_1932_);
lean_dec_ref_known(v_a_1930_, 1);
v___x_1933_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_val_1932_, v_a_1925_);
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc_n(v_a_1934_, 2);
v_dummy_1935_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0);
v_nargs_1936_ = l_Lean_Expr_getAppNumArgs(v_a_1934_);
lean_inc(v_nargs_1936_);
v___x_1937_ = lean_mk_array(v_nargs_1936_, v_dummy_1935_);
v___x_1938_ = lean_unsigned_to_nat(1u);
v___x_1939_ = lean_nat_sub(v_nargs_1936_, v___x_1938_);
lean_dec(v_nargs_1936_);
v___x_1940_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1934_, v___x_1937_, v___x_1939_);
v___x_1941_ = lean_array_get_size(v___x_1940_);
v___x_1942_ = lean_nat_dec_lt(v___x_1941_, v_arity_1920_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1954_; 
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1954_ == 0)
{
lean_object* v_unused_1955_; 
v_unused_1955_ = lean_ctor_get(v___x_1933_, 0);
lean_dec(v_unused_1955_);
v___x_1944_ = v___x_1933_;
v_isShared_1945_ = v_isSharedCheck_1954_;
goto v_resetjp_1943_;
}
else
{
lean_dec(v___x_1933_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1954_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1946_ = l_Lean_Expr_getAppFn(v_a_1934_);
lean_dec(v_a_1934_);
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = lean_nat_sub(v___x_1941_, v_arity_1920_);
v___x_1949_ = l_Array_extract___redArg(v___x_1940_, v___x_1947_, v___x_1948_);
lean_dec_ref(v___x_1940_);
v___x_1950_ = l_Lean_mkAppN(v___x_1946_, v___x_1949_);
lean_dec_ref(v___x_1949_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 0, v___x_1950_);
v___x_1952_ = v___x_1944_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
else
{
lean_dec_ref(v___x_1940_);
lean_dec(v_a_1934_);
return v___x_1933_;
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec_ref(v_name_1919_);
v_a_1956_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1929_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1929_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___boxed(lean_object* v_name_1964_, lean_object* v_arity_1965_, lean_object* v_args_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf(v_name_1964_, v_arity_1965_, v_args_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
lean_dec(v_a_1970_);
lean_dec_ref(v_a_1969_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
lean_dec_ref(v_args_1966_);
lean_dec(v_arity_1965_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(lean_object* v_as_x27_1975_, lean_object* v_b_1976_){
_start:
{
if (lean_obj_tag(v_as_x27_1975_) == 0)
{
return v_b_1976_;
}
else
{
lean_object* v_head_1977_; lean_object* v_tail_1978_; lean_object* v_fst_1979_; lean_object* v_snd_1980_; uint32_t v___x_1981_; lean_object* v_r_1982_; 
v_head_1977_ = lean_ctor_get(v_as_x27_1975_, 0);
v_tail_1978_ = lean_ctor_get(v_as_x27_1975_, 1);
v_fst_1979_ = lean_ctor_get(v_head_1977_, 0);
v_snd_1980_ = lean_ctor_get(v_head_1977_, 1);
v___x_1981_ = lean_unbox_uint32(v_fst_1979_);
lean_inc(v_snd_1980_);
v_r_1982_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_1976_, v___x_1981_, v_snd_1980_);
v_as_x27_1975_ = v_tail_1978_;
v_b_1976_ = v_r_1982_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg___boxed(lean_object* v_as_x27_1984_, lean_object* v_b_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(v_as_x27_1984_, v_b_1985_);
lean_dec(v_as_x27_1984_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2(lean_object* v_m_1987_, lean_object* v_l_1988_){
_start:
{
lean_object* v___x_1989_; 
v___x_1989_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(v_l_1988_, v_m_1987_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2___boxed(lean_object* v_m_1990_, lean_object* v_l_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2(v_m_1990_, v_l_1991_);
lean_dec(v_l_1991_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg(lean_object* v_as_1993_, size_t v_sz_1994_, size_t v_i_1995_, lean_object* v_b_1996_){
_start:
{
uint8_t v___x_1998_; 
v___x_1998_ = lean_usize_dec_lt(v_i_1995_, v_sz_1994_);
if (v___x_1998_ == 0)
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1999_, 0, v_b_1996_);
return v___x_1999_;
}
else
{
lean_object* v_a_2000_; lean_object* v_fst_2001_; lean_object* v_snd_2002_; uint32_t v___x_2003_; lean_object* v___x_2004_; size_t v___x_2005_; size_t v___x_2006_; 
v_a_2000_ = lean_array_uget_borrowed(v_as_1993_, v_i_1995_);
v_fst_2001_ = lean_ctor_get(v_a_2000_, 0);
v_snd_2002_ = lean_ctor_get(v_a_2000_, 1);
v___x_2003_ = lean_unbox_uint32(v_fst_2001_);
lean_inc(v_snd_2002_);
v___x_2004_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_1996_, v___x_2003_, v_snd_2002_);
v___x_2005_ = ((size_t)1ULL);
v___x_2006_ = lean_usize_add(v_i_1995_, v___x_2005_);
v_i_1995_ = v___x_2006_;
v_b_1996_ = v___x_2004_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg___boxed(lean_object* v_as_2008_, lean_object* v_sz_2009_, lean_object* v_i_2010_, lean_object* v_b_2011_, lean_object* v___y_2012_){
_start:
{
size_t v_sz_boxed_2013_; size_t v_i_boxed_2014_; lean_object* v_res_2015_; 
v_sz_boxed_2013_ = lean_unbox_usize(v_sz_2009_);
lean_dec(v_sz_2009_);
v_i_boxed_2014_ = lean_unbox_usize(v_i_2010_);
lean_dec(v_i_2010_);
v_res_2015_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg(v_as_2008_, v_sz_boxed_2013_, v_i_boxed_2014_, v_b_2011_);
lean_dec_ref(v_as_2008_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3(lean_object* v___x_2016_, lean_object* v_as_2017_, size_t v_sz_2018_, size_t v_i_2019_, lean_object* v_b_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_a_2029_; uint8_t v___x_2033_; 
v___x_2033_ = lean_usize_dec_lt(v_i_2019_, v_sz_2018_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; 
v___x_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2034_, 0, v_b_2020_);
return v___x_2034_;
}
else
{
lean_object* v_a_2035_; lean_object* v_fst_2036_; lean_object* v_snd_2037_; uint32_t v___x_2038_; lean_object* v___x_2039_; 
v_a_2035_ = lean_array_uget_borrowed(v_as_2017_, v_i_2019_);
v_fst_2036_ = lean_ctor_get(v_a_2035_, 0);
v_snd_2037_ = lean_ctor_get(v_a_2035_, 1);
v___x_2038_ = lean_unbox_uint32(v_fst_2036_);
v___x_2039_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v___x_2016_, v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2040_; 
lean_inc(v_snd_2037_);
v___x_2040_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_2037_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
v___x_2042_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_2041_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2044_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2043_);
lean_dec_ref_known(v___x_2042_, 1);
v___x_2044_ = lean_array_push(v_b_2020_, v_a_2043_);
v_a_2029_ = v___x_2044_;
goto v___jp_2028_;
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec_ref(v_b_2020_);
v_a_2045_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_2042_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2042_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_a_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_dec_ref(v_b_2020_);
v_a_2053_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_2040_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2040_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
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
else
{
lean_object* v_val_2061_; lean_object* v___x_2062_; 
v_val_2061_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_val_2061_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2062_ = lean_array_push(v_b_2020_, v_val_2061_);
v_a_2029_ = v___x_2062_;
goto v___jp_2028_;
}
}
v___jp_2028_:
{
size_t v___x_2030_; size_t v___x_2031_; 
v___x_2030_ = ((size_t)1ULL);
v___x_2031_ = lean_usize_add(v_i_2019_, v___x_2030_);
v_i_2019_ = v___x_2031_;
v_b_2020_ = v_a_2029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3___boxed(lean_object* v___x_2063_, lean_object* v_as_2064_, lean_object* v_sz_2065_, lean_object* v_i_2066_, lean_object* v_b_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
size_t v_sz_boxed_2075_; size_t v_i_boxed_2076_; lean_object* v_res_2077_; 
v_sz_boxed_2075_ = lean_unbox_usize(v_sz_2065_);
lean_dec(v_sz_2065_);
v_i_boxed_2076_ = lean_unbox_usize(v_i_2066_);
lean_dec(v_i_2066_);
v_res_2077_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3(v___x_2063_, v_as_2064_, v_sz_boxed_2075_, v_i_boxed_2076_, v_b_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v___y_2071_);
lean_dec_ref(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec_ref(v_as_2064_);
lean_dec_ref(v___x_2063_);
return v_res_2077_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__1));
v___x_2082_ = l_Lean_stringToMessageData(v___x_2081_);
return v___x_2082_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4(void){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2084_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__3));
v___x_2085_ = l_Lean_stringToMessageData(v___x_2084_);
return v___x_2085_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__5));
v___x_2088_ = l_Lean_stringToMessageData(v___x_2087_);
return v___x_2088_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9(void){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2093_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__8));
v___x_2094_ = l_Lean_stringToMessageData(v___x_2093_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold(lean_object* v_defs_2095_, lean_object* v_vars_2096_, lean_object* v_t_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_){
_start:
{
uint8_t v___x_2105_; 
v___x_2105_ = lp_vampireReplay_Vampire_Term_isVar(v_t_2097_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; 
v___x_2106_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_t_2097_);
if (lean_obj_tag(v___x_2106_) == 1)
{
lean_object* v_val_2107_; lean_object* v___x_2108_; size_t v_sz_2109_; size_t v___x_2110_; lean_object* v___x_2111_; 
v_val_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_val_2107_);
lean_dec_ref_known(v___x_2106_, 1);
v___x_2108_ = lp_vampireReplay_Vampire_Term_args(v_t_2097_);
v_sz_2109_ = lean_array_size(v___x_2108_);
v___x_2110_ = ((size_t)0ULL);
lean_inc_ref(v___x_2108_);
v___x_2111_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_vars_2096_, v_sz_2109_, v___x_2110_, v___x_2108_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v_a_2112_; lean_object* v_name_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v_a_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v___x_2111_, 1);
v_name_2113_ = lean_ctor_get(v_val_2107_, 0);
lean_inc_ref_n(v_name_2113_, 2);
lean_dec(v_val_2107_);
v___x_2114_ = lean_array_get_size(v___x_2108_);
v___x_2115_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf(v_name_2113_, v___x_2114_, v_a_2112_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec(v_a_2112_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2117_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc_n(v_a_2116_, 2);
lean_dec_ref_known(v___x_2115_, 1);
v___x_2117_ = l_Lean_Meta_mkEqRefl(v_a_2116_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v___x_2119_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0));
v___x_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v_a_2118_);
v___x_2121_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0(v_defs_2095_, v_vars_2096_, v___x_2108_, v_sz_2109_, v___x_2110_, v___x_2120_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec_ref(v___x_2108_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2323_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2323_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2323_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v_fst_2126_; lean_object* v_snd_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2322_; 
v_fst_2126_ = lean_ctor_get(v_a_2122_, 0);
v_snd_2127_ = lean_ctor_get(v_a_2122_, 1);
v_isSharedCheck_2322_ = !lean_is_exclusive(v_a_2122_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2129_ = v_a_2122_;
v_isShared_2130_ = v_isSharedCheck_2322_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_snd_2127_);
lean_inc(v_fst_2126_);
lean_dec(v_a_2122_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2322_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2131_; 
v___x_2131_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Server_Test_Cancel___aux__Lean__Server__Test__Cancel______elabRules__Lean__Server__Test__Cancel__tacticWait__for__test__task____1_spec__0___redArg(v_defs_2095_, v_name_2113_);
if (lean_obj_tag(v___x_2131_) == 0)
{
lean_object* v___x_2132_; lean_object* v___x_2134_; 
lean_dec_ref(v_name_2113_);
v___x_2132_ = l_Lean_mkAppN(v_a_2116_, v_fst_2126_);
lean_dec(v_fst_2126_);
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2132_);
v___x_2134_ = v___x_2129_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_snd_2127_);
v___x_2134_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2136_; 
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2134_);
v___x_2136_ = v___x_2124_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
else
{
lean_object* v_val_2139_; lean_object* v_snd_2140_; lean_object* v_snd_2141_; lean_object* v_snd_2142_; lean_object* v_fst_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2320_; 
lean_del_object(v___x_2129_);
lean_del_object(v___x_2124_);
v_val_2139_ = lean_ctor_get(v___x_2131_, 0);
lean_inc(v_val_2139_);
lean_dec_ref_known(v___x_2131_, 1);
v_snd_2140_ = lean_ctor_get(v_val_2139_, 1);
lean_inc(v_snd_2140_);
v_snd_2141_ = lean_ctor_get(v_snd_2140_, 1);
lean_inc(v_snd_2141_);
v_snd_2142_ = lean_ctor_get(v_snd_2141_, 1);
lean_inc(v_snd_2142_);
v_fst_2143_ = lean_ctor_get(v_val_2139_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v_val_2139_);
if (v_isSharedCheck_2320_ == 0)
{
lean_object* v_unused_2321_; 
v_unused_2321_ = lean_ctor_get(v_val_2139_, 1);
lean_dec(v_unused_2321_);
v___x_2145_ = v_val_2139_;
v_isShared_2146_ = v_isSharedCheck_2320_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_fst_2143_);
lean_dec(v_val_2139_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2320_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v_fst_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2318_; 
v_fst_2147_ = lean_ctor_get(v_snd_2140_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_snd_2140_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; 
v_unused_2319_ = lean_ctor_get(v_snd_2140_, 1);
lean_dec(v_unused_2319_);
v___x_2149_ = v_snd_2140_;
v_isShared_2150_ = v_isSharedCheck_2318_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_fst_2147_);
lean_dec(v_snd_2140_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2318_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v_fst_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2316_; 
v_fst_2151_ = lean_ctor_get(v_snd_2141_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_snd_2141_);
if (v_isSharedCheck_2316_ == 0)
{
lean_object* v_unused_2317_; 
v_unused_2317_ = lean_ctor_get(v_snd_2141_, 1);
lean_dec(v_unused_2317_);
v___x_2153_ = v_snd_2141_;
v_isShared_2154_ = v_isSharedCheck_2316_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_fst_2151_);
lean_dec(v_snd_2141_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2316_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v_fst_2155_; lean_object* v_snd_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2315_; 
v_fst_2155_ = lean_ctor_get(v_snd_2142_, 0);
v_snd_2156_ = lean_ctor_get(v_snd_2142_, 1);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_snd_2142_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2158_ = v_snd_2142_;
v_isShared_2159_ = v_isSharedCheck_2315_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_snd_2156_);
lean_inc(v_fst_2155_);
lean_dec(v_snd_2142_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2315_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2160_; lean_object* v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v_equation_2212_; lean_object* v___y_2213_; lean_object* v___y_2214_; lean_object* v___y_2215_; lean_object* v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; size_t v_sz_2288_; lean_object* v___x_2289_; 
v___x_2160_ = l_Array_zip___redArg(v_fst_2147_, v_fst_2126_);
lean_dec(v_fst_2147_);
lean_inc_ref(v___x_2160_);
v___x_2284_ = lean_array_to_list(v___x_2160_);
v___x_2285_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_2286_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(v___x_2284_, v___x_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lp_vampireReplay_Vampire_Unit_varSorts(v_fst_2143_);
v_sz_2288_ = lean_array_size(v___x_2287_);
v___x_2289_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__3(v___x_2286_, v___x_2287_, v_sz_2288_, v___x_2110_, v___x_2119_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
lean_dec_ref(v___x_2287_);
lean_dec_ref(v___x_2286_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2289_, 1);
v___x_2291_ = l_Lean_mkAppN(v_fst_2155_, v_a_2290_);
lean_dec(v_a_2290_);
v___x_2292_ = lean_unbox(v_snd_2156_);
lean_dec(v_snd_2156_);
if (v___x_2292_ == 0)
{
v_equation_2212_ = v___x_2291_;
v___y_2213_ = v_a_2098_;
v___y_2214_ = v_a_2099_;
v___y_2215_ = v_a_2100_;
v___y_2216_ = v_a_2101_;
v___y_2217_ = v_a_2102_;
v___y_2218_ = v_a_2103_;
goto v___jp_2211_;
}
else
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2293_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__7));
v___x_2294_ = lean_unsigned_to_nat(1u);
v___x_2295_ = lean_mk_empty_array_with_capacity(v___x_2294_);
v___x_2296_ = lean_array_push(v___x_2295_, v___x_2291_);
v___x_2297_ = l_Lean_Meta_mkAppM(v___x_2293_, v___x_2296_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
lean_inc(v_a_2298_);
lean_dec_ref_known(v___x_2297_, 1);
v_equation_2212_ = v_a_2298_;
v___y_2213_ = v_a_2098_;
v___y_2214_ = v_a_2099_;
v___y_2215_ = v_a_2100_;
v___y_2216_ = v_a_2101_;
v___y_2217_ = v_a_2102_;
v___y_2218_ = v_a_2103_;
goto v___jp_2211_;
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v_a_2299_ = lean_ctor_get(v___x_2297_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2297_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2297_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
}
else
{
lean_object* v_a_2307_; lean_object* v___x_2309_; uint8_t v_isShared_2310_; uint8_t v_isSharedCheck_2314_; 
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_dec(v_snd_2156_);
lean_dec(v_fst_2155_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v_a_2307_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2309_ = v___x_2289_;
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
else
{
lean_inc(v_a_2307_);
lean_dec(v___x_2289_);
v___x_2309_ = lean_box(0);
v_isShared_2310_ = v_isSharedCheck_2314_;
goto v_resetjp_2308_;
}
v_resetjp_2308_:
{
lean_object* v___x_2312_; 
if (v_isShared_2310_ == 0)
{
v___x_2312_ = v___x_2309_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2307_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
v___jp_2161_:
{
lean_object* v___x_2169_; size_t v_sz_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v_sz_2170_ = lean_array_size(v___x_2160_);
v___x_2171_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg(v___x_2160_, v_sz_2170_, v___x_2110_, v___x_2169_);
lean_dec_ref(v___x_2160_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2173_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
v___x_2173_ = lp_vampireReplay_Vampire_Reconstruct_term(v_a_2172_, v_fst_2151_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
lean_dec(v_a_2172_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v___x_2175_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2173_, 1);
v___x_2175_ = l_Lean_Meta_mkEqTrans(v_snd_2127_, v___y_2162_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2186_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2186_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2186_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2186_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 1, v_a_2176_);
lean_ctor_set(v___x_2158_, 0, v_a_2174_);
v___x_2181_ = v___x_2158_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2174_);
lean_ctor_set(v_reuseFailAlloc_2185_, 1, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
lean_object* v___x_2183_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2181_);
v___x_2183_ = v___x_2178_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2194_; 
lean_dec(v_a_2174_);
lean_del_object(v___x_2158_);
v_a_2187_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2189_ = v___x_2175_;
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2175_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2194_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_a_2187_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
lean_dec_ref(v___y_2162_);
lean_del_object(v___x_2158_);
lean_dec(v_snd_2127_);
v_a_2195_ = lean_ctor_get(v___x_2173_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2173_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2173_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
else
{
lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
lean_dec_ref(v___y_2162_);
lean_del_object(v___x_2158_);
lean_dec(v_fst_2151_);
lean_dec(v_snd_2127_);
v_a_2203_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2171_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_dec(v___x_2171_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
v___jp_2211_:
{
lean_object* v___x_2219_; 
lean_inc(v___y_2218_);
lean_inc_ref(v___y_2217_);
lean_inc(v___y_2216_);
lean_inc_ref(v___y_2215_);
lean_inc_ref(v_equation_2212_);
v___x_2219_ = lean_infer_type(v_equation_2212_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2219_) == 0)
{
lean_object* v_a_2220_; lean_object* v___x_2221_; 
v_a_2220_ = lean_ctor_get(v___x_2219_, 0);
lean_inc(v_a_2220_);
lean_dec_ref_known(v___x_2219_, 1);
v___x_2221_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2220_, v___y_2216_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___x_2221_, 1);
v___x_2223_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1));
v___x_2224_ = lean_unsigned_to_nat(3u);
v___x_2225_ = l_Lean_Expr_isAppOfArity(v_a_2222_, v___x_2223_, v___x_2224_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
lean_dec(v_a_2222_);
lean_dec_ref(v_equation_2212_);
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v___x_2226_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__2);
v___x_2227_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2226_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
return v___x_2227_;
}
else
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2228_ = l_Lean_Expr_appFn_x21(v_a_2222_);
lean_dec(v_a_2222_);
v___x_2229_ = l_Lean_Expr_appArg_x21(v___x_2228_);
lean_dec_ref(v___x_2228_);
v___x_2230_ = l_Lean_mkAppN(v_a_2116_, v_fst_2126_);
lean_dec(v_fst_2126_);
lean_inc_ref(v___x_2230_);
lean_inc_ref(v___x_2229_);
v___x_2231_ = l_Lean_Meta_isExprDefEq(v___x_2229_, v___x_2230_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v_a_2232_; uint8_t v___x_2233_; 
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
lean_inc(v_a_2232_);
lean_dec_ref_known(v___x_2231_, 1);
v___x_2233_ = lean_unbox(v_a_2232_);
lean_dec(v_a_2232_);
if (v___x_2233_ == 0)
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2237_; 
v___x_2234_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions_spec__0___redArg___closed__1);
v___x_2235_ = l_Lean_stringToMessageData(v_name_2113_);
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 7);
lean_ctor_set(v___x_2153_, 1, v___x_2235_);
lean_ctor_set(v___x_2153_, 0, v___x_2234_);
v___x_2237_ = v___x_2153_;
goto v_reusejp_2236_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2259_, 1, v___x_2235_);
v___x_2237_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2236_;
}
v_reusejp_2236_:
{
lean_object* v___x_2238_; lean_object* v___x_2240_; 
v___x_2238_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__4);
if (v_isShared_2150_ == 0)
{
lean_ctor_set_tag(v___x_2149_, 7);
lean_ctor_set(v___x_2149_, 1, v___x_2238_);
lean_ctor_set(v___x_2149_, 0, v___x_2237_);
v___x_2240_ = v___x_2149_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2237_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v___x_2238_);
v___x_2240_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2241_; lean_object* v___x_2243_; 
v___x_2241_ = l_Lean_indentExpr(v___x_2229_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set_tag(v___x_2145_, 7);
lean_ctor_set(v___x_2145_, 1, v___x_2241_);
lean_ctor_set(v___x_2145_, 0, v___x_2240_);
v___x_2243_ = v___x_2145_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2240_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2244_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__6);
v___x_2245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2243_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = l_Lean_indentExpr(v___x_2230_);
v___x_2247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2245_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2247_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_dec_ref_known(v___x_2248_, 1);
v___y_2162_ = v_equation_2212_;
v___y_2163_ = v___y_2213_;
v___y_2164_ = v___y_2214_;
v___y_2165_ = v___y_2215_;
v___y_2166_ = v___y_2216_;
v___y_2167_ = v___y_2217_;
v___y_2168_ = v___y_2218_;
goto v___jp_2161_;
}
else
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2256_; 
lean_dec_ref(v_equation_2212_);
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_dec(v_fst_2151_);
lean_dec(v_snd_2127_);
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2256_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2252_ == 0)
{
v___x_2254_ = v___x_2251_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_del_object(v___x_2153_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec_ref(v_name_2113_);
v___y_2162_ = v_equation_2212_;
v___y_2163_ = v___y_2213_;
v___y_2164_ = v___y_2214_;
v___y_2165_ = v___y_2215_;
v___y_2166_ = v___y_2216_;
v___y_2167_ = v___y_2217_;
v___y_2168_ = v___y_2218_;
goto v___jp_2161_;
}
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
lean_dec_ref(v___x_2230_);
lean_dec_ref(v___x_2229_);
lean_dec_ref(v_equation_2212_);
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec_ref(v_name_2113_);
v_a_2260_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2231_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2231_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v_equation_2212_);
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v_a_2268_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2221_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2221_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
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
else
{
lean_object* v_a_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2283_; 
lean_dec_ref(v_equation_2212_);
lean_dec_ref(v___x_2160_);
lean_del_object(v___x_2158_);
lean_del_object(v___x_2153_);
lean_dec(v_fst_2151_);
lean_del_object(v___x_2149_);
lean_del_object(v___x_2145_);
lean_dec(v_snd_2127_);
lean_dec(v_fst_2126_);
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v_a_2276_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2278_ = v___x_2219_;
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_a_2276_);
lean_dec(v___x_2219_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2283_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2281_; 
if (v_isShared_2279_ == 0)
{
v___x_2281_ = v___x_2278_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v_a_2276_);
v___x_2281_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
return v___x_2281_;
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
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
v_a_2324_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2121_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2121_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_a_2116_);
lean_dec_ref(v_name_2113_);
lean_dec_ref(v___x_2108_);
v_a_2332_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2117_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2117_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec_ref(v_name_2113_);
lean_dec_ref(v___x_2108_);
v_a_2340_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2115_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2115_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec_ref(v___x_2108_);
lean_dec(v_val_2107_);
v_a_2348_ = lean_ctor_get(v___x_2111_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2111_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2111_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_object* v___x_2356_; uint32_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
lean_dec(v___x_2106_);
v___x_2356_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__9);
v___x_2357_ = lp_vampireReplay_Vampire_Term_functor(v_t_2097_);
lean_dec_ref(v_t_2097_);
v___x_2358_ = lean_uint32_to_nat(v___x_2357_);
v___x_2359_ = l_Nat_reprFast(v___x_2358_);
v___x_2360_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2359_);
v___x_2361_ = l_Lean_MessageData_ofFormat(v___x_2360_);
v___x_2362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2356_);
lean_ctor_set(v___x_2362_, 1, v___x_2361_);
v___x_2363_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2362_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
return v___x_2363_;
}
}
else
{
lean_object* v___x_2364_; 
v___x_2364_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_2096_, v_t_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2366_; 
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
lean_inc_n(v_a_2365_, 2);
lean_dec_ref_known(v___x_2364_, 1);
v___x_2366_ = l_Lean_Meta_mkEqRefl(v_a_2365_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2375_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2369_ = v___x_2366_;
v_isShared_2370_ = v_isSharedCheck_2375_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_a_2367_);
lean_dec(v___x_2366_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2375_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_a_2365_);
lean_ctor_set(v___x_2371_, 1, v_a_2367_);
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 0, v___x_2371_);
v___x_2373_ = v___x_2369_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec(v_a_2365_);
v_a_2376_ = lean_ctor_get(v___x_2366_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2366_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2366_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2366_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_a_2384_ = lean_ctor_get(v___x_2364_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2364_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2364_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0(lean_object* v_defs_2392_, lean_object* v_vars_2393_, lean_object* v_as_2394_, size_t v_sz_2395_, size_t v_i_2396_, lean_object* v_b_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
uint8_t v___x_2405_; 
v___x_2405_ = lean_usize_dec_lt(v_i_2396_, v_sz_2395_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_b_2397_);
return v___x_2406_;
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2408_; 
v_a_2407_ = lean_array_uget_borrowed(v_as_2394_, v_i_2396_);
lean_inc(v_a_2407_);
v___x_2408_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold(v_defs_2392_, v_vars_2393_, v_a_2407_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; lean_object* v_fst_2410_; lean_object* v_snd_2411_; lean_object* v_fst_2412_; lean_object* v_snd_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2434_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v_fst_2410_ = lean_ctor_get(v_a_2409_, 0);
lean_inc(v_fst_2410_);
v_snd_2411_ = lean_ctor_get(v_a_2409_, 1);
lean_inc(v_snd_2411_);
lean_dec(v_a_2409_);
v_fst_2412_ = lean_ctor_get(v_b_2397_, 0);
v_snd_2413_ = lean_ctor_get(v_b_2397_, 1);
v_isSharedCheck_2434_ = !lean_is_exclusive(v_b_2397_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2415_ = v_b_2397_;
v_isShared_2416_ = v_isSharedCheck_2434_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_snd_2413_);
lean_inc(v_fst_2412_);
lean_dec(v_b_2397_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2434_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; 
v___x_2417_ = l_Lean_Meta_mkCongr(v_snd_2413_, v_snd_2411_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; lean_object* v___x_2421_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
v___x_2419_ = lean_array_push(v_fst_2412_, v_fst_2410_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 1, v_a_2418_);
lean_ctor_set(v___x_2415_, 0, v___x_2419_);
v___x_2421_ = v___x_2415_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v___x_2419_);
lean_ctor_set(v_reuseFailAlloc_2425_, 1, v_a_2418_);
v___x_2421_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
size_t v___x_2422_; size_t v___x_2423_; 
v___x_2422_ = ((size_t)1ULL);
v___x_2423_ = lean_usize_add(v_i_2396_, v___x_2422_);
v_i_2396_ = v___x_2423_;
v_b_2397_ = v___x_2421_;
goto _start;
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_del_object(v___x_2415_);
lean_dec(v_fst_2412_);
lean_dec(v_fst_2410_);
v_a_2426_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2417_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2417_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec_ref(v_b_2397_);
v_a_2435_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2408_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2408_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0___boxed(lean_object* v_defs_2443_, lean_object* v_vars_2444_, lean_object* v_as_2445_, lean_object* v_sz_2446_, lean_object* v_i_2447_, lean_object* v_b_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
size_t v_sz_boxed_2456_; size_t v_i_boxed_2457_; lean_object* v_res_2458_; 
v_sz_boxed_2456_ = lean_unbox_usize(v_sz_2446_);
lean_dec(v_sz_2446_);
v_i_boxed_2457_ = lean_unbox_usize(v_i_2447_);
lean_dec(v_i_2447_);
v_res_2458_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0(v_defs_2443_, v_vars_2444_, v_as_2445_, v_sz_boxed_2456_, v_i_boxed_2457_, v_b_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec_ref(v_as_2445_);
lean_dec_ref(v_vars_2444_);
lean_dec_ref(v_defs_2443_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___boxed(lean_object* v_defs_2459_, lean_object* v_vars_2460_, lean_object* v_t_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold(v_defs_2459_, v_vars_2460_, v_t_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_, v_a_2466_, v_a_2467_);
lean_dec(v_a_2467_);
lean_dec_ref(v_a_2466_);
lean_dec(v_a_2465_);
lean_dec_ref(v_a_2464_);
lean_dec(v_a_2463_);
lean_dec_ref(v_a_2462_);
lean_dec_ref(v_vars_2460_);
lean_dec_ref(v_defs_2459_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1(lean_object* v_as_2470_, size_t v_sz_2471_, size_t v_i_2472_, lean_object* v_b_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___redArg(v_as_2470_, v_sz_2471_, v_i_2472_, v_b_2473_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1___boxed(lean_object* v_as_2482_, lean_object* v_sz_2483_, lean_object* v_i_2484_, lean_object* v_b_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
size_t v_sz_boxed_2493_; size_t v_i_boxed_2494_; lean_object* v_res_2495_; 
v_sz_boxed_2493_ = lean_unbox_usize(v_sz_2483_);
lean_dec(v_sz_2483_);
v_i_boxed_2494_ = lean_unbox_usize(v_i_2484_);
lean_dec(v_i_2484_);
v_res_2495_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__1(v_as_2482_, v_sz_boxed_2493_, v_i_boxed_2494_, v_b_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec_ref(v_as_2482_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2(lean_object* v_as_2496_, lean_object* v_as_x27_2497_, lean_object* v_b_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v___x_2500_; 
v___x_2500_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___redArg(v_as_x27_2497_, v_b_2498_);
return v___x_2500_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2___boxed(lean_object* v_as_2501_, lean_object* v_as_x27_2502_, lean_object* v_b_2503_, lean_object* v_a_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__2_spec__2(v_as_2501_, v_as_x27_2502_, v_b_2503_, v_a_2504_);
lean_dec(v_as_x27_2502_);
lean_dec(v_as_2501_);
return v_res_2505_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__2));
v___x_2512_ = l_Lean_stringToMessageData(v___x_2511_);
return v___x_2512_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2513_ = lean_box(0);
v___x_2514_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__16));
v___x_2515_ = l_Lean_Expr_const___override(v___x_2514_, v___x_2513_);
return v___x_2515_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__5));
v___x_2518_ = l_Lean_stringToMessageData(v___x_2517_);
return v___x_2518_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__7));
v___x_2521_ = l_Lean_stringToMessageData(v___x_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0(lean_object* v_val_2522_, lean_object* v___x_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, size_t v___x_2526_, lean_object* v_i_2527_, lean_object* v_h_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_atom_2537_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = lp_vampireReplay_Vampire_Clause_literals(v_val_2522_);
v___x_2549_ = lean_array_get_size(v___x_2548_);
v___x_2550_ = lean_nat_dec_lt(v_i_2527_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
lean_dec_ref(v___x_2548_);
lean_dec_ref(v_h_2528_);
v___x_2551_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__3);
v___x_2552_ = l_Nat_reprFast(v_i_2527_);
v___x_2553_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2552_);
v___x_2554_ = l_Lean_MessageData_ofFormat(v___x_2553_);
v___x_2555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2551_);
lean_ctor_set(v___x_2555_, 1, v___x_2554_);
v___x_2556_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2555_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v___x_2556_;
}
else
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v_congruence_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; uint8_t v___x_2588_; 
v___x_2557_ = lean_array_fget(v___x_2548_, v_i_2527_);
lean_dec(v_i_2527_);
lean_dec_ref(v___x_2548_);
v___x_2558_ = lean_mk_empty_array_with_capacity(v___x_2523_);
v___x_2588_ = lp_vampireReplay_Vampire_Literal_isEquality(v___x_2557_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; 
v___x_2589_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v___x_2557_);
if (lean_obj_tag(v___x_2589_) == 1)
{
lean_object* v_val_2590_; lean_object* v___x_2591_; size_t v_sz_2592_; lean_object* v___x_2593_; 
v_val_2590_ = lean_ctor_get(v___x_2589_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v___x_2589_, 1);
lean_inc(v___x_2557_);
v___x_2591_ = lp_vampireReplay_Vampire_Literal_args(v___x_2557_);
v_sz_2592_ = lean_array_size(v___x_2591_);
lean_inc_ref(v___x_2591_);
v___x_2593_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_term_spec__0(v_a_2525_, v_sz_2592_, v___x_2526_, v___x_2591_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v_name_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v_name_2595_ = lean_ctor_get(v_val_2590_, 0);
lean_inc_ref(v_name_2595_);
lean_dec(v_val_2590_);
v___x_2596_ = lean_array_get_size(v___x_2591_);
lean_dec_ref(v___x_2591_);
v___x_2597_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf(v_name_2595_, v___x_2596_, v_a_2594_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
lean_dec(v_a_2594_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = l_Lean_Meta_mkEqRefl(v_a_2598_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2599_, 1);
v_congruence_2560_ = v_a_2600_;
v___y_2561_ = v___y_2529_;
v___y_2562_ = v___y_2530_;
v___y_2563_ = v___y_2531_;
v___y_2564_ = v___y_2532_;
v___y_2565_ = v___y_2533_;
v___y_2566_ = v___y_2534_;
goto v___jp_2559_;
}
else
{
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
return v___x_2599_;
}
}
else
{
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
return v___x_2597_;
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref(v___x_2591_);
lean_dec(v_val_2590_);
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
v_a_2601_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2603_ = v___x_2593_;
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_a_2601_);
lean_dec(v___x_2593_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2608_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2606_; 
if (v_isShared_2604_ == 0)
{
v___x_2606_ = v___x_2603_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2601_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
else
{
lean_object* v___x_2609_; uint32_t v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
lean_dec(v___x_2589_);
lean_dec_ref(v___x_2558_);
lean_dec_ref(v_h_2528_);
v___x_2609_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6);
v___x_2610_ = lp_vampireReplay_Vampire_Literal_predicate(v___x_2557_);
lean_dec(v___x_2557_);
v___x_2611_ = lean_uint32_to_nat(v___x_2610_);
v___x_2612_ = l_Nat_reprFast(v___x_2611_);
v___x_2613_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
v___x_2614_ = l_Lean_MessageData_ofFormat(v___x_2613_);
v___x_2615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2609_);
lean_ctor_set(v___x_2615_, 1, v___x_2614_);
v___x_2616_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2615_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v___x_2616_;
}
}
else
{
lean_object* v___x_2617_; 
v___x_2617_ = lp_vampireReplay_Vampire_Literal_sort_x3f(v___x_2557_);
if (lean_obj_tag(v___x_2617_) == 1)
{
lean_object* v_val_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2635_; 
v_val_2618_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2620_ = v___x_2617_;
v_isShared_2621_ = v_isSharedCheck_2635_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_val_2618_);
lean_dec(v___x_2617_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2635_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2622_; 
v___x_2622_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_val_2618_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2624_; lean_object* v___x_2626_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
lean_inc(v_a_2623_);
lean_dec_ref_known(v___x_2622_, 1);
v___x_2624_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__1));
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v_a_2623_);
v___x_2626_ = v___x_2620_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2623_);
v___x_2626_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2627_ = lean_unsigned_to_nat(1u);
v___x_2628_ = lean_mk_empty_array_with_capacity(v___x_2627_);
v___x_2629_ = lean_array_push(v___x_2628_, v___x_2626_);
v___x_2630_ = l_Lean_Meta_mkAppOptM(v___x_2624_, v___x_2629_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
if (lean_obj_tag(v___x_2630_) == 0)
{
lean_object* v_a_2631_; lean_object* v___x_2632_; 
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref_known(v___x_2630_, 1);
v___x_2632_ = l_Lean_Meta_mkEqRefl(v_a_2631_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
if (lean_obj_tag(v___x_2632_) == 0)
{
lean_object* v_a_2633_; 
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
lean_inc(v_a_2633_);
lean_dec_ref_known(v___x_2632_, 1);
v_congruence_2560_ = v_a_2633_;
v___y_2561_ = v___y_2529_;
v___y_2562_ = v___y_2530_;
v___y_2563_ = v___y_2531_;
v___y_2564_ = v___y_2532_;
v___y_2565_ = v___y_2533_;
v___y_2566_ = v___y_2534_;
goto v___jp_2559_;
}
else
{
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
return v___x_2632_;
}
}
else
{
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
return v___x_2630_;
}
}
}
else
{
lean_del_object(v___x_2620_);
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
return v___x_2622_;
}
}
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
lean_dec(v___x_2617_);
lean_dec_ref(v___x_2558_);
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
v___x_2636_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__8);
v___x_2637_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2636_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v___x_2637_;
}
}
v___jp_2559_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; size_t v_sz_2569_; lean_object* v___x_2570_; 
lean_inc(v___x_2557_);
v___x_2567_ = lp_vampireReplay_Vampire_Literal_args(v___x_2557_);
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2558_);
lean_ctor_set(v___x_2568_, 1, v_congruence_2560_);
v_sz_2569_ = lean_array_size(v___x_2567_);
v___x_2570_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold_spec__0(v_a_2524_, v_a_2525_, v___x_2567_, v_sz_2569_, v___x_2526_, v___x_2568_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
lean_dec_ref(v___x_2567_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v___x_2572_; lean_object* v_a_2573_; uint8_t v___x_2574_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
v___x_2572_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v___x_2557_, v___y_2561_);
lean_dec(v___x_2557_);
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref(v___x_2572_);
v___x_2574_ = lean_unbox(v_a_2573_);
lean_dec(v_a_2573_);
if (v___x_2574_ == 0)
{
lean_object* v_snd_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v_snd_2575_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2575_);
lean_dec(v_a_2571_);
v___x_2576_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4);
v___x_2577_ = l_Lean_Meta_mkCongrArg(v___x_2576_, v_snd_2575_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref_known(v___x_2577_, 1);
v_atom_2537_ = v_a_2578_;
v___y_2538_ = v___y_2563_;
v___y_2539_ = v___y_2564_;
v___y_2540_ = v___y_2565_;
v___y_2541_ = v___y_2566_;
goto v___jp_2536_;
}
else
{
lean_dec_ref(v_h_2528_);
return v___x_2577_;
}
}
else
{
lean_object* v_snd_2579_; 
v_snd_2579_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2579_);
lean_dec(v_a_2571_);
v_atom_2537_ = v_snd_2579_;
v___y_2538_ = v___y_2563_;
v___y_2539_ = v___y_2564_;
v___y_2540_ = v___y_2565_;
v___y_2541_ = v___y_2566_;
goto v___jp_2536_;
}
}
else
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
lean_dec(v___x_2557_);
lean_dec_ref(v_h_2528_);
v_a_2580_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2570_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2570_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
}
v___jp_2536_:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2542_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__1));
v___x_2543_ = lean_unsigned_to_nat(2u);
v___x_2544_ = lean_mk_empty_array_with_capacity(v___x_2543_);
v___x_2545_ = lean_array_push(v___x_2544_, v_atom_2537_);
v___x_2546_ = lean_array_push(v___x_2545_, v_h_2528_);
v___x_2547_ = l_Lean_Meta_mkAppM(v___x_2542_, v___x_2546_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
return v___x_2547_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___boxed(lean_object* v_val_2638_, lean_object* v___x_2639_, lean_object* v_a_2640_, lean_object* v_a_2641_, lean_object* v___x_2642_, lean_object* v_i_2643_, lean_object* v_h_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_){
_start:
{
size_t v___x_27529__boxed_2652_; lean_object* v_res_2653_; 
v___x_27529__boxed_2652_ = lean_unbox_usize(v___x_2642_);
lean_dec(v___x_2642_);
v_res_2653_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0(v_val_2638_, v___x_2639_, v_a_2640_, v_a_2641_, v___x_27529__boxed_2652_, v_i_2643_, v_h_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec_ref(v_a_2641_);
lean_dec_ref(v_a_2640_);
lean_dec(v___x_2639_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0(lean_object* v_a_2654_, size_t v_sz_2655_, size_t v_i_2656_, lean_object* v_bs_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
uint8_t v___x_2665_; 
v___x_2665_ = lean_usize_dec_lt(v_i_2656_, v_sz_2655_);
if (v___x_2665_ == 0)
{
lean_object* v___x_2666_; 
v___x_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2666_, 0, v_bs_2657_);
return v___x_2666_;
}
else
{
lean_object* v_v_2667_; lean_object* v_fst_2668_; lean_object* v_snd_2669_; lean_object* v___x_2670_; lean_object* v_bs_x27_2671_; lean_object* v_a_2673_; lean_object* v___y_2679_; uint32_t v___x_2689_; lean_object* v___x_2690_; 
v_v_2667_ = lean_array_uget_borrowed(v_bs_2657_, v_i_2656_);
v_fst_2668_ = lean_ctor_get(v_v_2667_, 0);
lean_inc(v_fst_2668_);
v_snd_2669_ = lean_ctor_get(v_v_2667_, 1);
lean_inc(v_snd_2669_);
v___x_2670_ = lean_unsigned_to_nat(0u);
v_bs_x27_2671_ = lean_array_uset(v_bs_2657_, v_i_2656_, v___x_2670_);
v___x_2689_ = lean_unbox_uint32(v_fst_2668_);
lean_dec(v_fst_2668_);
v___x_2690_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_a_2654_, v___x_2689_);
if (lean_obj_tag(v___x_2690_) == 0)
{
lean_object* v___x_2691_; 
v___x_2691_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_2669_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2691_, 1);
v___x_2693_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_2692_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
v___y_2679_ = v___x_2693_;
goto v___jp_2678_;
}
else
{
v___y_2679_ = v___x_2691_;
goto v___jp_2678_;
}
}
else
{
lean_object* v_val_2694_; 
lean_dec(v_snd_2669_);
v_val_2694_ = lean_ctor_get(v___x_2690_, 0);
lean_inc(v_val_2694_);
lean_dec_ref_known(v___x_2690_, 1);
v_a_2673_ = v_val_2694_;
goto v___jp_2672_;
}
v___jp_2672_:
{
size_t v___x_2674_; size_t v___x_2675_; lean_object* v___x_2676_; 
v___x_2674_ = ((size_t)1ULL);
v___x_2675_ = lean_usize_add(v_i_2656_, v___x_2674_);
v___x_2676_ = lean_array_uset(v_bs_x27_2671_, v_i_2656_, v_a_2673_);
v_i_2656_ = v___x_2675_;
v_bs_2657_ = v___x_2676_;
goto _start;
}
v___jp_2678_:
{
if (lean_obj_tag(v___y_2679_) == 0)
{
lean_object* v_a_2680_; 
v_a_2680_ = lean_ctor_get(v___y_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___y_2679_, 1);
v_a_2673_ = v_a_2680_;
goto v___jp_2672_;
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v_bs_x27_2671_);
v_a_2681_ = lean_ctor_get(v___y_2679_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___y_2679_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___y_2679_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___y_2679_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0___boxed(lean_object* v_a_2695_, lean_object* v_sz_2696_, lean_object* v_i_2697_, lean_object* v_bs_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
size_t v_sz_boxed_2706_; size_t v_i_boxed_2707_; lean_object* v_res_2708_; 
v_sz_boxed_2706_ = lean_unbox_usize(v_sz_2696_);
lean_dec(v_sz_2696_);
v_i_boxed_2707_ = lean_unbox_usize(v_i_2697_);
lean_dec(v_i_2697_);
v_res_2708_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0(v_a_2695_, v_sz_boxed_2706_, v_i_boxed_2707_, v_bs_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec_ref(v_a_2695_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1(lean_object* v___x_2711_, lean_object* v___x_2712_, lean_object* v_unit_2713_, lean_object* v___x_2714_, lean_object* v_val_2715_, lean_object* v_a_2716_, lean_object* v_fst_2717_, uint8_t v___x_2718_, lean_object* v_xs_2719_, lean_object* v_target_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; size_t v_sz_2731_; size_t v___x_2732_; lean_object* v___x_2733_; 
v___x_2728_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5);
lean_inc(v___x_2711_);
v___x_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2711_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
v___x_2730_ = l_Array_zip___redArg(v_xs_2719_, v___x_2712_);
v_sz_2731_ = lean_array_size(v___x_2730_);
v___x_2732_ = ((size_t)0ULL);
v___x_2733_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_2730_, v_sz_2731_, v___x_2732_, v___x_2729_);
lean_dec_ref(v___x_2730_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
lean_dec_ref_known(v___x_2733_, 1);
v___x_2735_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_2713_);
lean_inc_ref(v___x_2714_);
v___x_2736_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_2714_, v_a_2734_, v___x_2735_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec_ref(v___x_2735_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2736_, 1);
lean_inc_ref(v___x_2714_);
v___x_2738_ = lp_vampireReplay_Vampire_Reconstruct_conclusionOf(v___x_2714_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; size_t v_sz_2741_; lean_object* v___x_2742_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2739_);
lean_dec_ref_known(v___x_2738_, 1);
v___x_2740_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_2714_);
v_sz_2741_ = lean_array_size(v___x_2740_);
lean_inc_ref(v___x_2740_);
v___x_2742_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0(v_a_2737_, v_sz_2741_, v___x_2732_, v___x_2740_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2744_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v___x_2742_, 1);
v___x_2744_ = l_Lean_Meta_instantiateForall(v_a_2739_, v_a_2743_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec(v_a_2743_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v___x_2746_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
lean_dec_ref_known(v___x_2744_, 1);
v___x_2746_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_Definition_definitionUnfolding_spec__0(v_a_2737_, v_sz_2741_, v___x_2732_, v___x_2740_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref_known(v___x_2746_, 1);
v___x_2748_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed__const__1));
v___f_2749_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2749_, 0, v_val_2715_);
lean_closure_set(v___f_2749_, 1, v___x_2711_);
lean_closure_set(v___f_2749_, 2, v_a_2716_);
lean_closure_set(v___f_2749_, 3, v_a_2737_);
lean_closure_set(v___f_2749_, 4, v___x_2748_);
v___x_2750_ = l_Lean_mkAppN(v_fst_2717_, v_a_2747_);
lean_dec(v_a_2747_);
v___x_2751_ = lp_vampireReplay_Vampire_Reconstruct_carryWith(v_a_2745_, v_target_2720_, v___x_2750_, v___f_2749_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; uint8_t v___x_2753_; uint8_t v___x_2754_; lean_object* v___x_2755_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
v___x_2753_ = 0;
v___x_2754_ = 1;
v___x_2755_ = l_Lean_Meta_mkLambdaFVars(v_xs_2719_, v_a_2752_, v___x_2753_, v___x_2718_, v___x_2753_, v___x_2718_, v___x_2754_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
return v___x_2755_;
}
else
{
return v___x_2751_;
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2745_);
lean_dec(v_a_2737_);
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec(v___x_2711_);
v_a_2756_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2746_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2746_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
else
{
lean_dec_ref(v___x_2740_);
lean_dec(v_a_2737_);
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec(v___x_2711_);
return v___x_2744_;
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec_ref(v___x_2740_);
lean_dec(v_a_2739_);
lean_dec(v_a_2737_);
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec(v___x_2711_);
v_a_2764_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2742_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2742_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
else
{
lean_dec(v_a_2737_);
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec_ref(v___x_2714_);
lean_dec(v___x_2711_);
return v___x_2738_;
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec_ref(v___x_2714_);
lean_dec(v___x_2711_);
v_a_2772_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2736_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2736_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec_ref(v_target_2720_);
lean_dec_ref(v_fst_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_val_2715_);
lean_dec_ref(v___x_2714_);
lean_dec_ref(v_unit_2713_);
lean_dec(v___x_2711_);
v_a_2780_ = lean_ctor_get(v___x_2733_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2733_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2733_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed(lean_object** _args){
lean_object* v___x_2788_ = _args[0];
lean_object* v___x_2789_ = _args[1];
lean_object* v_unit_2790_ = _args[2];
lean_object* v___x_2791_ = _args[3];
lean_object* v_val_2792_ = _args[4];
lean_object* v_a_2793_ = _args[5];
lean_object* v_fst_2794_ = _args[6];
lean_object* v___x_2795_ = _args[7];
lean_object* v_xs_2796_ = _args[8];
lean_object* v_target_2797_ = _args[9];
lean_object* v___y_2798_ = _args[10];
lean_object* v___y_2799_ = _args[11];
lean_object* v___y_2800_ = _args[12];
lean_object* v___y_2801_ = _args[13];
lean_object* v___y_2802_ = _args[14];
lean_object* v___y_2803_ = _args[15];
lean_object* v___y_2804_ = _args[16];
_start:
{
uint8_t v___x_27868__boxed_2805_; lean_object* v_res_2806_; 
v___x_27868__boxed_2805_ = lean_unbox(v___x_2795_);
v_res_2806_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1(v___x_2788_, v___x_2789_, v_unit_2790_, v___x_2791_, v_val_2792_, v_a_2793_, v_fst_2794_, v___x_27868__boxed_2805_, v_xs_2796_, v_target_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec_ref(v_xs_2796_);
lean_dec_ref(v___x_2789_);
return v_res_2806_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1(void){
_start:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2808_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__0));
v___x_2809_ = l_Lean_stringToMessageData(v___x_2808_);
return v___x_2809_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3(void){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__2));
v___x_2812_ = l_Lean_stringToMessageData(v___x_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding(lean_object* v_step_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_unit_2821_; lean_object* v_premises_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; uint8_t v___x_2825_; 
v_unit_2821_ = lean_ctor_get(v_step_2813_, 0);
lean_inc_ref(v_unit_2821_);
v_premises_2822_ = lean_ctor_get(v_step_2813_, 1);
v___x_2823_ = lean_unsigned_to_nat(0u);
v___x_2824_ = lean_array_get_size(v_premises_2822_);
v___x_2825_ = lean_nat_dec_lt(v___x_2823_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
lean_dec_ref(v_unit_2821_);
lean_dec_ref(v_step_2813_);
v___x_2826_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1);
v___x_2827_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2826_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
return v___x_2827_;
}
else
{
lean_object* v___x_2828_; lean_object* v_fst_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; uint8_t v___x_2832_; 
v___x_2828_ = lean_array_fget_borrowed(v_premises_2822_, v___x_2823_);
v_fst_2829_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_fst_2829_);
lean_inc_ref(v_unit_2821_);
v___x_2830_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_2821_);
v___x_2831_ = lean_array_get_size(v___x_2830_);
v___x_2832_ = lean_nat_dec_lt(v___x_2823_, v___x_2831_);
if (v___x_2832_ == 0)
{
lean_object* v___x_2833_; lean_object* v___x_2834_; 
lean_dec_ref(v___x_2830_);
lean_dec(v_fst_2829_);
lean_dec_ref(v_unit_2821_);
lean_dec_ref(v_step_2813_);
v___x_2833_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__1);
v___x_2834_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2833_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
return v___x_2834_;
}
else
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_array_fget(v___x_2830_, v___x_2823_);
lean_dec_ref(v___x_2830_);
lean_inc(v___x_2835_);
v___x_2836_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v___x_2835_);
if (lean_obj_tag(v___x_2836_) == 1)
{
lean_object* v_val_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2862_; 
v_val_2837_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2839_ = v___x_2836_;
v_isShared_2840_ = v_isSharedCheck_2862_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_val_2837_);
lean_dec(v___x_2836_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2862_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2841_; 
lean_inc_ref(v_step_2813_);
v___x_2841_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitions(v_step_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2843_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2843_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_2813_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___f_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2844_);
lean_dec_ref_known(v___x_2843_, 1);
lean_inc_ref(v_unit_2821_);
v___x_2845_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_2821_);
v___x_2846_ = lean_box(v___x_2832_);
lean_inc_ref(v___x_2845_);
v___f_2847_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__1___boxed), 17, 8);
lean_closure_set(v___f_2847_, 0, v___x_2823_);
lean_closure_set(v___f_2847_, 1, v___x_2845_);
lean_closure_set(v___f_2847_, 2, v_unit_2821_);
lean_closure_set(v___f_2847_, 3, v___x_2835_);
lean_closure_set(v___f_2847_, 4, v_val_2837_);
lean_closure_set(v___f_2847_, 5, v_a_2842_);
lean_closure_set(v___f_2847_, 6, v_fst_2829_);
lean_closure_set(v___f_2847_, 7, v___x_2846_);
v___x_2848_ = lean_array_get_size(v___x_2845_);
lean_dec_ref(v___x_2845_);
if (v_isShared_2840_ == 0)
{
lean_ctor_set(v___x_2839_, 0, v___x_2848_);
v___x_2850_ = v___x_2839_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
uint8_t v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = 0;
v___x_2852_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_2844_, v___x_2850_, v___f_2847_, v___x_2851_, v___x_2851_, v_a_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
return v___x_2852_;
}
}
else
{
lean_dec(v_a_2842_);
lean_del_object(v___x_2839_);
lean_dec(v_val_2837_);
lean_dec(v___x_2835_);
lean_dec(v_fst_2829_);
lean_dec_ref(v_unit_2821_);
return v___x_2843_;
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2861_; 
lean_del_object(v___x_2839_);
lean_dec(v_val_2837_);
lean_dec(v___x_2835_);
lean_dec(v_fst_2829_);
lean_dec_ref(v_unit_2821_);
lean_dec_ref(v_step_2813_);
v_a_2854_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2856_ = v___x_2841_;
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2841_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
if (v_isShared_2857_ == 0)
{
v___x_2859_ = v___x_2856_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2854_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
}
else
{
lean_object* v___x_2863_; lean_object* v___x_2864_; 
lean_dec(v___x_2836_);
lean_dec(v___x_2835_);
lean_dec(v_fst_2829_);
lean_dec_ref(v_unit_2821_);
lean_dec_ref(v_step_2813_);
v___x_2863_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___closed__3);
v___x_2864_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2863_, v_a_2816_, v_a_2817_, v_a_2818_, v_a_2819_);
return v___x_2864_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___boxed(lean_object* v_step_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding(v_step_2865_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v_a_2868_);
lean_dec(v_a_2867_);
lean_dec_ref(v_a_2866_);
return v_res_2873_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1(void){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__0));
v___x_2876_ = l_Lean_stringToMessageData(v___x_2875_);
return v___x_2876_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3(void){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__2));
v___x_2879_ = l_Lean_stringToMessageData(v___x_2878_);
return v___x_2879_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5(void){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2881_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__4));
v___x_2882_ = l_Lean_stringToMessageData(v___x_2881_);
return v___x_2882_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7(void){
_start:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__6));
v___x_2885_ = l_Lean_stringToMessageData(v___x_2884_);
return v___x_2885_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10(void){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2888_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__9));
v___x_2889_ = l_Lean_stringToMessageData(v___x_2888_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0___boxed(lean_object* v_premise_2893_, lean_object* v_body_2894_, lean_object* v_body_2895_, lean_object* v___y_2896_, lean_object* v___x_2897_, lean_object* v_x_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
uint8_t v___y_10486__boxed_2906_; uint8_t v___x_10487__boxed_2907_; lean_object* v_res_2908_; 
v___y_10486__boxed_2906_ = lean_unbox(v___y_2896_);
v___x_10487__boxed_2907_ = lean_unbox(v___x_2897_);
v_res_2908_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0(v_premise_2893_, v_body_2894_, v_body_2895_, v___y_10486__boxed_2906_, v___x_10487__boxed_2907_, v_x_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec_ref(v_body_2895_);
lean_dec_ref(v_body_2894_);
return v_res_2908_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; 
v___x_2910_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__12));
v___x_2911_ = l_Lean_stringToMessageData(v___x_2910_);
return v___x_2911_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15(void){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__14));
v___x_2914_ = l_Lean_stringToMessageData(v___x_2913_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken(lean_object* v_premise_2915_, lean_object* v_stated_2916_, lean_object* v_conclusion_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2960_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___x_3066_; 
lean_inc(v_a_2923_);
lean_inc_ref(v_a_2922_);
lean_inc(v_a_2921_);
lean_inc_ref(v_a_2920_);
lean_inc_ref(v_stated_2916_);
v___x_3066_ = lean_whnf(v_stated_2916_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
if (lean_obj_tag(v_a_3067_) == 7)
{
if (lean_obj_tag(v_conclusion_2917_) == 7)
{
lean_object* v_binderType_3068_; lean_object* v_body_3069_; lean_object* v_binderName_3070_; lean_object* v_binderType_3071_; lean_object* v_body_3072_; lean_object* v___x_3073_; 
v_binderType_3068_ = lean_ctor_get(v_a_3067_, 1);
lean_inc_ref_n(v_binderType_3068_, 2);
v_body_3069_ = lean_ctor_get(v_a_3067_, 2);
lean_inc_ref(v_body_3069_);
lean_dec_ref_known(v_a_3067_, 3);
v_binderName_3070_ = lean_ctor_get(v_conclusion_2917_, 0);
v_binderType_3071_ = lean_ctor_get(v_conclusion_2917_, 1);
v_body_3072_ = lean_ctor_get(v_conclusion_2917_, 2);
v___x_3073_ = l_Lean_Meta_isProp(v_binderType_3068_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; uint8_t v___y_3076_; uint8_t v___x_3110_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3073_, 1);
v___x_3110_ = lean_unbox(v_a_3074_);
if (v___x_3110_ == 0)
{
uint8_t v___x_3111_; 
lean_inc_ref(v_body_3072_);
lean_inc_ref(v_binderType_3071_);
lean_inc(v_binderName_3070_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
v___x_3111_ = lean_unbox(v_a_3074_);
lean_dec(v_a_3074_);
v___y_3076_ = v___x_3111_;
goto v___jp_3075_;
}
else
{
uint8_t v___x_3112_; 
lean_dec(v_a_3074_);
v___x_3112_ = l_Lean_Expr_hasLooseBVars(v_body_3069_);
if (v___x_3112_ == 0)
{
lean_dec_ref(v_body_3069_);
lean_dec_ref(v_binderType_3068_);
v___y_3025_ = v_a_2920_;
v___y_3026_ = v_a_2921_;
v___y_3027_ = v_a_2922_;
v___y_3028_ = v_a_2923_;
goto v___jp_3024_;
}
else
{
uint8_t v___x_3113_; 
lean_inc_ref(v_body_3072_);
lean_inc_ref(v_binderType_3071_);
lean_inc(v_binderName_3070_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
v___x_3113_ = 0;
v___y_3076_ = v___x_3113_;
goto v___jp_3075_;
}
}
v___jp_3075_:
{
lean_object* v___x_3077_; 
lean_inc_ref(v_binderType_3071_);
lean_inc_ref(v_binderType_3068_);
v___x_3077_ = l_Lean_Meta_isExprDefEq(v_binderType_3068_, v_binderType_3071_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; uint8_t v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___f_3082_; uint8_t v___x_3083_; 
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
v___x_3079_ = 1;
v___x_3080_ = lean_box(v___y_3076_);
v___x_3081_ = lean_box(v___x_3079_);
v___f_3082_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0___boxed), 13, 5);
lean_closure_set(v___f_3082_, 0, v_premise_2915_);
lean_closure_set(v___f_3082_, 1, v_body_3069_);
lean_closure_set(v___f_3082_, 2, v_body_3072_);
lean_closure_set(v___f_3082_, 3, v___x_3080_);
lean_closure_set(v___f_3082_, 4, v___x_3081_);
v___x_3083_ = lean_unbox(v_a_3078_);
lean_dec(v_a_3078_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3084_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__13);
v___x_3085_ = l_Lean_indentExpr(v_binderType_3068_);
v___x_3086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3084_);
lean_ctor_set(v___x_3086_, 1, v___x_3085_);
v___x_3087_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__15);
v___x_3088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3086_);
lean_ctor_set(v___x_3088_, 1, v___x_3087_);
lean_inc_ref(v_binderType_3071_);
v___x_3089_ = l_Lean_indentExpr(v_binderType_3071_);
v___x_3090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3088_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3090_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v___x_3092_; 
lean_dec_ref_known(v___x_3091_, 1);
v___x_3092_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_binderName_3070_, v_binderType_3071_, v___f_3082_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
return v___x_3092_;
}
else
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3100_; 
lean_dec_ref(v___f_3082_);
lean_dec_ref(v_binderType_3071_);
lean_dec(v_binderName_3070_);
v_a_3093_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3095_ = v___x_3091_;
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v___x_3091_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3100_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
}
else
{
lean_object* v___x_3101_; 
lean_dec_ref(v_binderType_3068_);
v___x_3101_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v_binderName_3070_, v_binderType_3071_, v___f_3082_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_, v_a_2923_);
return v___x_3101_;
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec_ref(v_body_3072_);
lean_dec_ref(v_binderType_3071_);
lean_dec(v_binderName_3070_);
lean_dec_ref(v_body_3069_);
lean_dec_ref(v_binderType_3068_);
lean_dec_ref(v_premise_2915_);
v_a_3102_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3077_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3077_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3121_; 
lean_dec_ref(v_body_3069_);
lean_dec_ref(v_binderType_3068_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_3114_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3116_ = v___x_3073_;
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_a_3114_);
lean_dec(v___x_3073_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3121_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3119_; 
if (v_isShared_3117_ == 0)
{
v___x_3119_ = v___x_3116_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3114_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_3067_, 3);
v___y_3025_ = v_a_2920_;
v___y_3026_ = v_a_2921_;
v___y_3027_ = v_a_2922_;
v___y_3028_ = v_a_2923_;
goto v___jp_3024_;
}
}
else
{
lean_dec(v_a_3067_);
v___y_3025_ = v_a_2920_;
v___y_3026_ = v_a_2921_;
v___y_3027_ = v_a_2922_;
v___y_3028_ = v_a_2923_;
goto v___jp_3024_;
}
}
else
{
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
return v___x_3066_;
}
v___jp_2925_:
{
lean_object* v___x_2930_; 
lean_inc_ref(v_conclusion_2917_);
lean_inc_ref(v_stated_2916_);
v___x_2930_ = l_Lean_Meta_isExprDefEq(v_stated_2916_, v_conclusion_2917_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2930_) == 0)
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2947_; 
v_a_2931_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2933_ = v___x_2930_;
v_isShared_2934_ = v_isSharedCheck_2947_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2930_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2947_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
uint8_t v___x_2935_; 
v___x_2935_ = lean_unbox(v_a_2931_);
lean_dec(v_a_2931_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_del_object(v___x_2933_);
lean_dec_ref(v_premise_2915_);
v___x_2936_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__1);
v___x_2937_ = l_Lean_indentExpr(v_conclusion_2917_);
v___x_2938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2936_);
lean_ctor_set(v___x_2938_, 1, v___x_2937_);
v___x_2939_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__3);
v___x_2940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2938_);
lean_ctor_set(v___x_2940_, 1, v___x_2939_);
v___x_2941_ = l_Lean_indentExpr(v_stated_2916_);
v___x_2942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2942_, 0, v___x_2940_);
lean_ctor_set(v___x_2942_, 1, v___x_2941_);
v___x_2943_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2942_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
return v___x_2943_;
}
else
{
lean_object* v___x_2945_; 
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 0, v_premise_2915_);
v___x_2945_ = v___x_2933_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_premise_2915_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
else
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_2948_ = lean_ctor_get(v___x_2930_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2930_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2930_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2930_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
}
v___jp_2956_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2961_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__5);
lean_inc_ref(v_stated_2916_);
v___x_2962_ = l_Lean_indentExpr(v_stated_2916_);
v___x_2963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2961_);
lean_ctor_set(v___x_2963_, 1, v___x_2962_);
v___x_2964_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__7);
v___x_2965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2963_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
lean_inc_ref(v_conclusion_2917_);
v___x_2966_ = l_Lean_indentExpr(v_conclusion_2917_);
v___x_2967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2965_);
lean_ctor_set(v___x_2967_, 1, v___x_2966_);
v___x_2968_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2967_, v___y_2960_, v___y_2957_, v___y_2958_, v___y_2959_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_dec_ref_known(v___x_2968_, 1);
v___y_2926_ = v___y_2960_;
v___y_2927_ = v___y_2957_;
v___y_2928_ = v___y_2958_;
v___y_2929_ = v___y_2959_;
goto v___jp_2925_;
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2968_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2968_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
v___jp_2977_:
{
lean_object* v___x_2987_; 
v___x_2987_ = l_Lean_Meta_isExprDefEq(v___y_2986_, v___y_2985_, v___y_2984_, v___y_2981_, v___y_2982_, v___y_2983_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; lean_object* v___x_2989_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_2989_ = l_Lean_Meta_isExprDefEq(v___y_2978_, v___y_2979_, v___y_2984_, v___y_2981_, v___y_2982_, v___y_2983_);
if (lean_obj_tag(v___x_2989_) == 0)
{
uint8_t v___x_2990_; 
v___x_2990_ = lean_unbox(v_a_2988_);
lean_dec(v_a_2988_);
if (v___x_2990_ == 0)
{
lean_dec_ref_known(v___x_2989_, 1);
v___y_2957_ = v___y_2981_;
v___y_2958_ = v___y_2982_;
v___y_2959_ = v___y_2983_;
v___y_2960_ = v___y_2984_;
goto v___jp_2956_;
}
else
{
lean_object* v_a_2991_; uint8_t v___x_2992_; 
v_a_2991_ = lean_ctor_get(v___x_2989_, 0);
lean_inc(v_a_2991_);
lean_dec_ref_known(v___x_2989_, 1);
v___x_2992_ = lean_unbox(v_a_2991_);
lean_dec(v_a_2991_);
if (v___x_2992_ == 0)
{
v___y_2957_ = v___y_2981_;
v___y_2958_ = v___y_2982_;
v___y_2959_ = v___y_2983_;
v___y_2960_ = v___y_2984_;
goto v___jp_2956_;
}
else
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
v___x_2993_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__8));
lean_inc_ref(v___y_2980_);
v___x_2994_ = l_Lean_Name_mkStr2(v___y_2980_, v___x_2993_);
v___x_2995_ = lean_unsigned_to_nat(1u);
v___x_2996_ = lean_mk_empty_array_with_capacity(v___x_2995_);
v___x_2997_ = lean_array_push(v___x_2996_, v_premise_2915_);
v___x_2998_ = l_Lean_Meta_mkAppM(v___x_2994_, v___x_2997_, v___y_2984_, v___y_2981_, v___y_2982_, v___y_2983_);
return v___x_2998_;
}
}
}
else
{
lean_object* v_a_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3006_; 
lean_dec(v_a_2988_);
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_2999_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_3001_ = v___x_2989_;
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_a_2999_);
lean_dec(v___x_2989_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3006_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
lean_object* v___x_3004_; 
if (v_isShared_3002_ == 0)
{
v___x_3004_ = v___x_3001_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_a_2999_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
else
{
lean_object* v_a_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3014_; 
lean_dec_ref(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v_conclusion_2917_);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_3007_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3009_ = v___x_2987_;
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_a_3007_);
lean_dec(v___x_2987_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3014_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3012_; 
if (v_isShared_3010_ == 0)
{
v___x_3012_ = v___x_3009_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_a_3007_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
v___jp_3015_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3020_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__10);
v___x_3021_ = l_Lean_indentExpr(v_conclusion_2917_);
v___x_3022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
lean_ctor_set(v___x_3022_, 1, v___x_3021_);
v___x_3023_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3022_, v___y_3019_, v___y_3016_, v___y_3017_, v___y_3018_);
return v___x_3023_;
}
v___jp_3024_:
{
if (lean_obj_tag(v_conclusion_2917_) == 7)
{
lean_object* v_binderType_3029_; lean_object* v_body_3030_; uint8_t v___x_3031_; 
v_binderType_3029_ = lean_ctor_get(v_conclusion_2917_, 1);
v_body_3030_ = lean_ctor_get(v_conclusion_2917_, 2);
v___x_3031_ = l_Lean_Expr_hasLooseBVars(v_body_3030_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3032_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__2));
v___x_3033_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition___lam__0___closed__3));
v___x_3034_ = lean_unsigned_to_nat(2u);
v___x_3035_ = l_Lean_Expr_isAppOfArity(v_stated_2916_, v___x_3033_, v___x_3034_);
if (v___x_3035_ == 0)
{
v___y_2926_ = v___y_3025_;
v___y_2927_ = v___y_3026_;
v___y_2928_ = v___y_3027_;
v___y_2929_ = v___y_3028_;
goto v___jp_2925_;
}
else
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = l_Lean_Expr_appFn_x21(v_stated_2916_);
v___x_3037_ = l_Lean_Expr_appArg_x21(v___x_3036_);
lean_dec_ref(v___x_3036_);
lean_inc_ref(v_binderType_3029_);
lean_inc_ref(v___x_3037_);
v___x_3038_ = l_Lean_Meta_isExprDefEq(v___x_3037_, v_binderType_3029_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3038_, 1);
v___x_3040_ = l_Lean_Expr_appArg_x21(v_stated_2916_);
lean_inc_ref(v_body_3030_);
lean_inc_ref(v___x_3040_);
v___x_3041_ = l_Lean_Meta_isExprDefEq(v___x_3040_, v_body_3030_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
if (lean_obj_tag(v___x_3041_) == 0)
{
uint8_t v___x_3042_; 
v___x_3042_ = lean_unbox(v_a_3039_);
lean_dec(v_a_3039_);
if (v___x_3042_ == 0)
{
lean_dec_ref_known(v___x_3041_, 1);
lean_inc_ref(v_binderType_3029_);
lean_inc_ref(v_body_3030_);
v___y_2978_ = v___x_3037_;
v___y_2979_ = v_body_3030_;
v___y_2980_ = v___x_3032_;
v___y_2981_ = v___y_3026_;
v___y_2982_ = v___y_3027_;
v___y_2983_ = v___y_3028_;
v___y_2984_ = v___y_3025_;
v___y_2985_ = v_binderType_3029_;
v___y_2986_ = v___x_3040_;
goto v___jp_2977_;
}
else
{
lean_object* v_a_3043_; uint8_t v___x_3044_; 
v_a_3043_ = lean_ctor_get(v___x_3041_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3041_, 1);
v___x_3044_ = lean_unbox(v_a_3043_);
lean_dec(v_a_3043_);
if (v___x_3044_ == 0)
{
lean_inc_ref(v_binderType_3029_);
lean_inc_ref(v_body_3030_);
v___y_2978_ = v___x_3037_;
v___y_2979_ = v_body_3030_;
v___y_2980_ = v___x_3032_;
v___y_2981_ = v___y_3026_;
v___y_2982_ = v___y_3027_;
v___y_2983_ = v___y_3028_;
v___y_2984_ = v___y_3025_;
v___y_2985_ = v_binderType_3029_;
v___y_2986_ = v___x_3040_;
goto v___jp_2977_;
}
else
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_dec_ref(v___x_3040_);
lean_dec_ref(v___x_3037_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
v___x_3045_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11));
v___x_3046_ = lean_unsigned_to_nat(1u);
v___x_3047_ = lean_mk_empty_array_with_capacity(v___x_3046_);
v___x_3048_ = lean_array_push(v___x_3047_, v_premise_2915_);
v___x_3049_ = l_Lean_Meta_mkAppM(v___x_3045_, v___x_3048_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
return v___x_3049_;
}
}
}
else
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3057_; 
lean_dec_ref(v___x_3040_);
lean_dec(v_a_3039_);
lean_dec_ref(v___x_3037_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_3050_ = lean_ctor_get(v___x_3041_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3041_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3052_ = v___x_3041_;
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3041_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3057_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_3053_ == 0)
{
v___x_3055_ = v___x_3052_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec_ref(v___x_3037_);
lean_dec_ref_known(v_conclusion_2917_, 3);
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v_a_3058_ = lean_ctor_get(v___x_3038_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3038_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3038_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3038_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
else
{
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v___y_3016_ = v___y_3026_;
v___y_3017_ = v___y_3027_;
v___y_3018_ = v___y_3028_;
v___y_3019_ = v___y_3025_;
goto v___jp_3015_;
}
}
else
{
lean_dec_ref(v_stated_2916_);
lean_dec_ref(v_premise_2915_);
v___y_3016_ = v___y_3026_;
v___y_3017_ = v___y_3027_;
v___y_3018_ = v___y_3028_;
v___y_3019_ = v___y_3025_;
goto v___jp_3015_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___lam__0(lean_object* v_premise_3122_, lean_object* v_body_3123_, lean_object* v_body_3124_, uint8_t v___y_3125_, uint8_t v___x_3126_, lean_object* v_x_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
lean_inc_ref(v_x_3127_);
v___x_3135_ = l_Lean_Expr_app___override(v_premise_3122_, v_x_3127_);
v___x_3136_ = lean_expr_instantiate1(v_body_3123_, v_x_3127_);
v___x_3137_ = lean_expr_instantiate1(v_body_3124_, v_x_3127_);
v___x_3138_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken(v___x_3135_, v___x_3136_, v___x_3137_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; uint8_t v___x_3143_; lean_object* v___x_3144_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3139_);
lean_dec_ref_known(v___x_3138_, 1);
v___x_3140_ = lean_unsigned_to_nat(1u);
v___x_3141_ = lean_mk_empty_array_with_capacity(v___x_3140_);
v___x_3142_ = lean_array_push(v___x_3141_, v_x_3127_);
v___x_3143_ = 1;
v___x_3144_ = l_Lean_Meta_mkLambdaFVars(v___x_3142_, v_a_3139_, v___y_3125_, v___x_3126_, v___y_3125_, v___x_3126_, v___x_3143_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_);
lean_dec_ref(v___x_3142_);
return v___x_3144_;
}
else
{
lean_dec_ref(v_x_3127_);
return v___x_3138_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___boxed(lean_object* v_premise_3145_, lean_object* v_stated_3146_, lean_object* v_conclusion_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_, lean_object* v_a_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_){
_start:
{
lean_object* v_res_3155_; 
v_res_3155_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken(v_premise_3145_, v_stated_3146_, v_conclusion_3147_, v_a_3148_, v_a_3149_, v_a_3150_, v_a_3151_, v_a_3152_, v_a_3153_);
lean_dec(v_a_3153_);
lean_dec_ref(v_a_3152_);
lean_dec(v_a_3151_);
lean_dec_ref(v_a_3150_);
lean_dec(v_a_3149_);
lean_dec_ref(v_a_3148_);
return v_res_3155_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3157_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__0));
v___x_3158_ = l_Lean_stringToMessageData(v___x_3157_);
return v___x_3158_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3(void){
_start:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3160_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__2));
v___x_3161_ = l_Lean_stringToMessageData(v___x_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(lean_object* v_step_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_){
_start:
{
lean_object* v_unit_3168_; lean_object* v___x_3169_; uint32_t v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v_unit_3168_ = lean_ctor_get(v_step_3162_, 0);
v___x_3169_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__1);
v___x_3170_ = lp_vampireReplay_Vampire_Unit_number(v_unit_3168_);
v___x_3171_ = lean_uint32_to_nat(v___x_3170_);
v___x_3172_ = l_Nat_reprFast(v___x_3171_);
v___x_3173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
v___x_3174_ = l_Lean_MessageData_ofFormat(v___x_3173_);
v___x_3175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3169_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
v___x_3176_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___closed__3);
v___x_3177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3175_);
lean_ctor_set(v___x_3177_, 1, v___x_3176_);
v___x_3178_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3177_, v_a_3163_, v_a_3164_, v_a_3165_, v_a_3166_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg___boxed(lean_object* v_step_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(v_step_3179_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
lean_dec(v_a_3183_);
lean_dec_ref(v_a_3182_);
lean_dec(v_a_3181_);
lean_dec_ref(v_a_3180_);
lean_dec_ref(v_step_3179_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval(lean_object* v_step_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___redArg(v_step_3186_, v_a_3189_, v_a_3190_, v_a_3191_, v_a_3192_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval___boxed(lean_object* v_step_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = lp_vampireReplay_Vampire_Reconstruct_Definition_purePredicateRemoval(v_step_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_, v_a_3201_);
lean_dec(v_a_3201_);
lean_dec_ref(v_a_3200_);
lean_dec(v_a_3199_);
lean_dec_ref(v_a_3198_);
lean_dec(v_a_3197_);
lean_dec_ref(v_a_3196_);
lean_dec_ref(v_step_3195_);
return v_res_3203_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__0));
v___x_3206_ = l_Lean_stringToMessageData(v___x_3205_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval(lean_object* v_step_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v_premises_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v_premises_3215_ = lean_ctor_get(v_step_3207_, 1);
v___x_3216_ = lean_array_get_size(v_premises_3215_);
v___x_3217_ = lean_unsigned_to_nat(1u);
v___x_3218_ = lean_nat_dec_eq(v___x_3216_, v___x_3217_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
lean_dec_ref(v_step_3207_);
v___x_3219_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___closed__1);
v___x_3220_ = l_Nat_reprFast(v___x_3216_);
v___x_3221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
v___x_3222_ = l_Lean_MessageData_ofFormat(v___x_3221_);
v___x_3223_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3219_);
lean_ctor_set(v___x_3223_, 1, v___x_3222_);
v___x_3224_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3223_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
return v___x_3224_;
}
else
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v_fst_3227_; lean_object* v_snd_3228_; lean_object* v___x_3229_; lean_object* v_a_3230_; lean_object* v___x_3231_; 
v___x_3225_ = lean_unsigned_to_nat(0u);
v___x_3226_ = lean_array_fget_borrowed(v_premises_3215_, v___x_3225_);
v_fst_3227_ = lean_ctor_get(v___x_3226_, 0);
lean_inc(v_fst_3227_);
v_snd_3228_ = lean_ctor_get(v___x_3226_, 1);
lean_inc(v_snd_3228_);
v___x_3229_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_3228_, v_a_3211_);
v_a_3230_ = lean_ctor_get(v___x_3229_, 0);
lean_inc(v_a_3230_);
lean_dec_ref(v___x_3229_);
v___x_3231_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3233_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v___x_3233_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken(v_fst_3227_, v_a_3230_, v_a_3232_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
return v___x_3233_;
}
else
{
lean_dec(v_a_3230_);
lean_dec(v_fst_3227_);
return v___x_3231_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval___boxed(lean_object* v_step_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = lp_vampireReplay_Vampire_Reconstruct_Definition_unusedDefinitionRemoval(v_step_3234_, v_a_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_);
lean_dec(v_a_3240_);
lean_dec_ref(v_a_3239_);
lean_dec(v_a_3238_);
lean_dec_ref(v_a_3237_);
lean_dec(v_a_3236_);
lean_dec_ref(v_a_3235_);
return v_res_3242_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1(void){
_start:
{
lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3244_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__0));
v___x_3245_ = l_Lean_stringToMessageData(v___x_3244_);
return v___x_3245_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3(void){
_start:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3247_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__2));
v___x_3248_ = l_Lean_stringToMessageData(v___x_3247_);
return v___x_3248_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5(void){
_start:
{
lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3250_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__4));
v___x_3251_ = l_Lean_stringToMessageData(v___x_3250_);
return v___x_3251_;
}
}
static lean_object* _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__6));
v___x_3254_ = l_Lean_stringToMessageData(v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(lean_object* v_u_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v___x_3262_; 
v___x_3262_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_definitionLiteral___redArg(v_u_3255_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3351_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3265_ = v___x_3262_;
v_isShared_3266_ = v_isSharedCheck_3351_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3262_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3351_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3308_; lean_object* v___y_3309_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; uint8_t v___x_3336_; 
v___x_3336_ = lp_vampireReplay_Vampire_Literal_isEquality(v_a_3263_);
if (v___x_3336_ == 0)
{
v___y_3308_ = v_a_3256_;
v___y_3309_ = v_a_3257_;
v___y_3310_ = v_a_3258_;
v___y_3311_ = v_a_3259_;
v___y_3312_ = v_a_3260_;
goto v___jp_3307_;
}
else
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_del_object(v___x_3265_);
v___x_3337_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__7);
v___x_3338_ = lp_vampireReplay_Vampire_Literal_render(v_a_3263_);
v___x_3339_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
v___x_3340_ = l_Lean_MessageData_ofFormat(v___x_3339_);
v___x_3341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3337_);
lean_ctor_set(v___x_3341_, 1, v___x_3340_);
v___x_3342_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3341_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_);
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3342_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3342_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
v___jp_3267_:
{
lean_object* v___x_3272_; 
v___x_3272_ = lp_vampireReplay_Vampire_Literal_symbol_x3f(v_a_3263_);
if (lean_obj_tag(v___x_3272_) == 1)
{
lean_object* v_val_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3298_; 
v_val_3273_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3275_ = v___x_3272_;
v_isShared_3276_ = v_isSharedCheck_3298_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_val_3273_);
lean_dec(v___x_3272_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3298_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
v___x_3277_ = lp_vampireReplay_Vampire_Literal_args(v_a_3263_);
v___x_3278_ = lean_array_get_size(v___x_3277_);
v___x_3279_ = lean_unsigned_to_nat(1u);
v___x_3280_ = lean_nat_dec_eq(v___x_3278_, v___x_3279_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3284_; 
lean_dec_ref(v___x_3277_);
lean_dec(v_val_3273_);
lean_del_object(v___x_3265_);
v___x_3281_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__1);
v___x_3282_ = l_Nat_reprFast(v___x_3278_);
if (v_isShared_3276_ == 0)
{
lean_ctor_set_tag(v___x_3275_, 3);
lean_ctor_set(v___x_3275_, 0, v___x_3282_);
v___x_3284_ = v___x_3275_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v___x_3282_);
v___x_3284_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3285_ = l_Lean_MessageData_ofFormat(v___x_3284_);
v___x_3286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3281_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__3);
v___x_3288_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3286_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3288_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3289_;
}
}
else
{
lean_object* v_name_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3296_; 
lean_del_object(v___x_3275_);
v_name_3291_ = lean_ctor_get(v_val_3273_, 0);
lean_inc_ref(v_name_3291_);
lean_dec(v_val_3273_);
v___x_3292_ = lean_unsigned_to_nat(0u);
v___x_3293_ = lean_array_fget(v___x_3277_, v___x_3292_);
lean_dec_ref(v___x_3277_);
v___x_3294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3294_, 0, v_name_3291_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3294_);
v___x_3296_ = v___x_3265_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3294_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
else
{
lean_object* v___x_3299_; uint32_t v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
lean_dec(v___x_3272_);
lean_del_object(v___x_3265_);
v___x_3299_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__6);
v___x_3300_ = lp_vampireReplay_Vampire_Literal_predicate(v_a_3263_);
lean_dec(v_a_3263_);
v___x_3301_ = lean_uint32_to_nat(v___x_3300_);
v___x_3302_ = l_Nat_reprFast(v___x_3301_);
v___x_3303_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3302_);
v___x_3304_ = l_Lean_MessageData_ofFormat(v___x_3303_);
v___x_3305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3299_);
lean_ctor_set(v___x_3305_, 1, v___x_3304_);
v___x_3306_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3305_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3306_;
}
}
v___jp_3307_:
{
lean_object* v___x_3313_; lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3335_; 
v___x_3313_ = lp_vampireReplay_Vampire_Reconstruct_literalPolarity___redArg(v_a_3263_, v___y_3308_);
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3335_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3335_ == 0)
{
v___x_3316_ = v___x_3313_;
v_isShared_3317_ = v_isSharedCheck_3335_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3335_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
uint8_t v___x_3318_; 
v___x_3318_ = lean_unbox(v_a_3314_);
lean_dec(v_a_3314_);
if (v___x_3318_ == 0)
{
lean_del_object(v___x_3316_);
v___y_3268_ = v___y_3309_;
v___y_3269_ = v___y_3310_;
v___y_3270_ = v___y_3311_;
v___y_3271_ = v___y_3312_;
goto v___jp_3267_;
}
else
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3322_; 
lean_del_object(v___x_3265_);
v___x_3319_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___closed__5);
v___x_3320_ = lp_vampireReplay_Vampire_Literal_render(v_a_3263_);
if (v_isShared_3317_ == 0)
{
lean_ctor_set_tag(v___x_3316_, 3);
lean_ctor_set(v___x_3316_, 0, v___x_3320_);
v___x_3322_ = v___x_3316_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3320_);
v___x_3322_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
v___x_3323_ = l_Lean_MessageData_ofFormat(v___x_3322_);
v___x_3324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3319_);
lean_ctor_set(v___x_3324_, 1, v___x_3323_);
v___x_3325_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3324_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3325_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3325_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
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
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
v_a_3352_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3262_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3262_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg___boxed(lean_object* v_u_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_){
_start:
{
lean_object* v_res_3367_; 
v_res_3367_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(v_u_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_);
lean_dec(v_a_3365_);
lean_dec_ref(v_a_3364_);
lean_dec(v_a_3363_);
lean_dec_ref(v_a_3362_);
lean_dec_ref(v_a_3361_);
return v_res_3367_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf(lean_object* v_u_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_){
_start:
{
lean_object* v___x_3376_; 
v___x_3376_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(v_u_3368_, v_a_3369_, v_a_3371_, v_a_3372_, v_a_3373_, v_a_3374_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___boxed(lean_object* v_u_3377_, lean_object* v_a_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf(v_u_3377_, v_a_3378_, v_a_3379_, v_a_3380_, v_a_3381_, v_a_3382_, v_a_3383_);
lean_dec(v_a_3383_);
lean_dec_ref(v_a_3382_);
lean_dec(v_a_3381_);
lean_dec_ref(v_a_3380_);
lean_dec(v_a_3379_);
lean_dec_ref(v_a_3378_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0(lean_object* v_snd_3386_, lean_object* v_vars_3387_, lean_object* v_x_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_3387_, v_snd_3386_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
return v___x_3396_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0___boxed(lean_object* v_snd_3397_, lean_object* v_vars_3398_, lean_object* v_x_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0(v_snd_3397_, v_vars_3398_, v_x_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec_ref(v_x_3399_);
lean_dec_ref(v_vars_3398_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1(lean_object* v_a_3408_, lean_object* v_x_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v___x_3417_; 
lean_inc_ref(v_x_3409_);
v___x_3417_ = l_Lean_Meta_mkEq(v_x_3409_, v_a_3408_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_object* v_a_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; uint8_t v___x_3424_; uint8_t v___x_3425_; uint8_t v___x_3426_; lean_object* v___x_3427_; 
v_a_3418_ = lean_ctor_get(v___x_3417_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3417_, 1);
v___x_3419_ = lean_unsigned_to_nat(1u);
v___x_3420_ = lean_mk_empty_array_with_capacity(v___x_3419_);
v___x_3421_ = lean_array_push(v___x_3420_, v_x_3409_);
v___x_3422_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4, &lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_definitionUnfolding___lam__0___closed__4);
v___x_3423_ = l_Lean_Expr_app___override(v___x_3422_, v_a_3418_);
v___x_3424_ = 0;
v___x_3425_ = 1;
v___x_3426_ = 1;
v___x_3427_ = l_Lean_Meta_mkLambdaFVars(v___x_3421_, v___x_3423_, v___x_3424_, v___x_3425_, v___x_3424_, v___x_3425_, v___x_3426_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
lean_dec_ref(v___x_3421_);
return v___x_3427_;
}
else
{
lean_dec_ref(v_x_3409_);
return v___x_3417_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1___boxed(lean_object* v_a_3428_, lean_object* v_x_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1(v_a_3428_, v_x_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3434_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting(lean_object* v_u_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_){
_start:
{
lean_object* v___x_3449_; 
lean_inc_ref(v_u_3441_);
v___x_3449_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(v_u_3441_, v_a_3442_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; lean_object* v_fst_3451_; lean_object* v_snd_3452_; lean_object* v___f_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v_fst_3451_ = lean_ctor_get(v_a_3450_, 0);
lean_inc(v_fst_3451_);
v_snd_3452_ = lean_ctor_get(v_a_3450_, 1);
lean_inc(v_snd_3452_);
lean_dec(v_a_3450_);
v___f_3453_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0___boxed), 10, 1);
lean_closure_set(v___f_3453_, 0, v_snd_3452_);
v___x_3454_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_3441_);
v___x_3455_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_3456_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_3454_, v___x_3455_, v___f_3453_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3458_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc_n(v_a_3457_, 2);
lean_dec_ref_known(v___x_3456_, 1);
lean_inc(v_a_3447_);
lean_inc_ref(v_a_3446_);
lean_inc(v_a_3445_);
lean_inc_ref(v_a_3444_);
v___x_3458_ = lean_infer_type(v_a_3457_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___f_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3459_);
lean_dec_ref_known(v___x_3458_, 1);
v___f_3460_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__1___boxed), 9, 1);
lean_closure_set(v___f_3460_, 0, v_a_3457_);
v___x_3461_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___closed__1));
v___x_3462_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3461_, v_a_3459_, v___f_3460_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_);
if (lean_obj_tag(v___x_3462_) == 0)
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3488_; 
v_a_3463_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3465_ = v___x_3462_;
v_isShared_3466_ = v_isSharedCheck_3488_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3462_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3488_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3467_; lean_object* v_proofs_3468_; lean_object* v_unimplemented_3469_; lean_object* v_introduced_3470_; lean_object* v_named_3471_; lean_object* v_conclusions_3472_; lean_object* v_shared_3473_; lean_object* v_nonempty_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3487_; 
v___x_3467_ = lean_st_ref_take(v_a_3443_);
v_proofs_3468_ = lean_ctor_get(v___x_3467_, 0);
v_unimplemented_3469_ = lean_ctor_get(v___x_3467_, 1);
v_introduced_3470_ = lean_ctor_get(v___x_3467_, 2);
v_named_3471_ = lean_ctor_get(v___x_3467_, 3);
v_conclusions_3472_ = lean_ctor_get(v___x_3467_, 4);
v_shared_3473_ = lean_ctor_get(v___x_3467_, 5);
v_nonempty_3474_ = lean_ctor_get(v___x_3467_, 6);
v_isSharedCheck_3487_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3476_ = v___x_3467_;
v_isShared_3477_ = v_isSharedCheck_3487_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_nonempty_3474_);
lean_inc(v_shared_3473_);
lean_inc(v_conclusions_3472_);
lean_inc(v_named_3471_);
lean_inc(v_introduced_3470_);
lean_inc(v_unimplemented_3469_);
lean_inc(v_proofs_3468_);
lean_dec(v___x_3467_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3487_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3478_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Server_Test_Cancel_mkTestTask_spec__1___redArg(v_introduced_3470_, v_fst_3451_, v_a_3463_);
if (v_isShared_3477_ == 0)
{
lean_ctor_set(v___x_3476_, 2, v___x_3478_);
v___x_3480_ = v___x_3476_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_proofs_3468_);
lean_ctor_set(v_reuseFailAlloc_3486_, 1, v_unimplemented_3469_);
lean_ctor_set(v_reuseFailAlloc_3486_, 2, v___x_3478_);
lean_ctor_set(v_reuseFailAlloc_3486_, 3, v_named_3471_);
lean_ctor_set(v_reuseFailAlloc_3486_, 4, v_conclusions_3472_);
lean_ctor_set(v_reuseFailAlloc_3486_, 5, v_shared_3473_);
lean_ctor_set(v_reuseFailAlloc_3486_, 6, v_nonempty_3474_);
v___x_3480_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v___x_3481_ = lean_st_ref_set(v_a_3443_, v___x_3480_);
v___x_3482_ = lean_box(0);
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 0, v___x_3482_);
v___x_3484_ = v___x_3465_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
lean_dec(v_fst_3451_);
v_a_3489_ = lean_ctor_get(v___x_3462_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3462_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3491_ = v___x_3462_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3462_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_a_3489_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3504_; 
lean_dec(v_a_3457_);
lean_dec(v_fst_3451_);
v_a_3497_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3499_ = v___x_3458_;
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_a_3497_);
lean_dec(v___x_3458_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3504_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3502_; 
if (v_isShared_3500_ == 0)
{
v___x_3502_ = v___x_3499_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3497_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec(v_fst_3451_);
v_a_3505_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3456_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3456_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec_ref(v_u_3441_);
v_a_3513_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3449_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3449_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___boxed(lean_object* v_u_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting(v_u_3521_, v_a_3522_, v_a_3523_, v_a_3524_, v_a_3525_, v_a_3526_, v_a_3527_);
lean_dec(v_a_3527_);
lean_dec_ref(v_a_3526_);
lean_dec(v_a_3525_);
lean_dec_ref(v_a_3524_);
lean_dec(v_a_3523_);
lean_dec_ref(v_a_3522_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1(lean_object* v_a_3530_, lean_object* v_h_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; uint8_t v___x_3544_; uint8_t v___x_3545_; lean_object* v___x_3546_; 
v___x_3539_ = lean_unsigned_to_nat(1u);
v___x_3540_ = lean_mk_empty_array_with_capacity(v___x_3539_);
lean_inc_ref(v_h_3531_);
v___x_3541_ = lean_array_push(v___x_3540_, v_h_3531_);
v___x_3542_ = l_Lean_Expr_app___override(v_h_3531_, v_a_3530_);
v___x_3543_ = 0;
v___x_3544_ = 1;
v___x_3545_ = 1;
v___x_3546_ = l_Lean_Meta_mkLambdaFVars(v___x_3541_, v___x_3542_, v___x_3543_, v___x_3544_, v___x_3543_, v___x_3544_, v___x_3545_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
lean_dec_ref(v___x_3541_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1___boxed(lean_object* v_a_3547_, lean_object* v_h_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
lean_object* v_res_3556_; 
v_res_3556_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1(v_a_3547_, v_h_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
return v_res_3556_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3(void){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3561_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__2));
v___x_3562_ = l_Lean_stringToMessageData(v___x_3561_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName(lean_object* v_step_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v_unit_3571_; lean_object* v___x_3572_; 
v_unit_3571_ = lean_ctor_get(v_step_3563_, 0);
lean_inc_ref_n(v_unit_3571_, 2);
v___x_3572_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_splitNameOf___redArg(v_unit_3571_, v_a_3564_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; lean_object* v_snd_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3598_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref_known(v___x_3572_, 1);
v_snd_3574_ = lean_ctor_get(v_a_3573_, 1);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_a_3573_);
if (v_isSharedCheck_3598_ == 0)
{
lean_object* v_unused_3599_; 
v_unused_3599_ = lean_ctor_get(v_a_3573_, 0);
lean_dec(v_unused_3599_);
v___x_3576_ = v_a_3573_;
v_isShared_3577_ = v_isSharedCheck_3598_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_snd_3574_);
lean_dec(v_a_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3598_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; 
v___x_3578_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3580_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc_n(v_a_3579_, 2);
lean_dec_ref_known(v___x_3578_, 1);
v___x_3580_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_3579_);
if (lean_obj_tag(v___x_3580_) == 1)
{
lean_object* v_val_3581_; lean_object* v___f_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
lean_dec(v_a_3579_);
lean_del_object(v___x_3576_);
v_val_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_val_3581_);
lean_dec_ref_known(v___x_3580_, 1);
v___f_3582_ = lean_alloc_closure((void*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting___lam__0___boxed), 10, 1);
lean_closure_set(v___f_3582_, 0, v_snd_3574_);
v___x_3583_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_3571_);
v___x_3584_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__6);
v___x_3585_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___x_3583_, v___x_3584_, v___f_3582_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; lean_object* v___x_3587_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref_known(v___x_3585_, 1);
v___x_3587_ = l_Lean_Meta_mkEqRefl(v_a_3586_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___f_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v___f_3589_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___lam__1___boxed), 9, 1);
lean_closure_set(v___f_3589_, 0, v_a_3588_);
v___x_3590_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__1));
v___x_3591_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3590_, v_val_3581_, v___f_3589_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
return v___x_3591_;
}
else
{
lean_dec(v_val_3581_);
return v___x_3587_;
}
}
else
{
lean_dec(v_val_3581_);
return v___x_3585_;
}
}
else
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3595_; 
lean_dec(v___x_3580_);
lean_dec(v_snd_3574_);
lean_dec_ref(v_unit_3571_);
v___x_3592_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___closed__3);
v___x_3593_ = l_Lean_indentExpr(v_a_3579_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set_tag(v___x_3576_, 7);
lean_ctor_set(v___x_3576_, 1, v___x_3593_);
lean_ctor_set(v___x_3576_, 0, v___x_3592_);
v___x_3595_ = v___x_3576_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3592_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; 
v___x_3596_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3595_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
return v___x_3596_;
}
}
}
else
{
lean_del_object(v___x_3576_);
lean_dec(v_snd_3574_);
lean_dec_ref(v_unit_3571_);
return v___x_3578_;
}
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec_ref(v_unit_3571_);
lean_dec_ref(v_step_3563_);
v_a_3600_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3572_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3572_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName___boxed(lean_object* v_step_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplittingName(v_step_3608_, v_a_3609_, v_a_3610_, v_a_3611_, v_a_3612_, v_a_3613_, v_a_3614_);
lean_dec(v_a_3614_);
lean_dec_ref(v_a_3613_);
lean_dec(v_a_3612_);
lean_dec_ref(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec_ref(v_a_3609_);
return v_res_3616_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(lean_object* v_x_3617_, lean_object* v_x_3618_){
_start:
{
if (lean_obj_tag(v_x_3617_) == 0)
{
if (lean_obj_tag(v_x_3618_) == 0)
{
uint8_t v___x_3619_; 
v___x_3619_ = 1;
return v___x_3619_;
}
else
{
uint8_t v___x_3620_; 
v___x_3620_ = 0;
return v___x_3620_;
}
}
else
{
if (lean_obj_tag(v_x_3618_) == 0)
{
uint8_t v___x_3621_; 
v___x_3621_ = 0;
return v___x_3621_;
}
else
{
lean_object* v_val_3622_; lean_object* v_val_3623_; uint8_t v___x_3624_; uint8_t v___x_3625_; uint8_t v___x_3626_; 
v_val_3622_ = lean_ctor_get(v_x_3617_, 0);
v_val_3623_ = lean_ctor_get(v_x_3618_, 0);
v___x_3624_ = lean_unbox(v_val_3622_);
v___x_3625_ = lean_unbox(v_val_3623_);
v___x_3626_ = lp_vampireReplay_Vampire_instBEqInferenceRule_beq(v___x_3624_, v___x_3625_);
return v___x_3626_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0___boxed(lean_object* v_x_3627_, lean_object* v_x_3628_){
_start:
{
uint8_t v_res_3629_; lean_object* v_r_3630_; 
v_res_3629_ = lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(v_x_3627_, v_x_3628_);
lean_dec(v_x_3628_);
lean_dec(v_x_3627_);
v_r_3630_ = lean_box(v_res_3629_);
return v_r_3630_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0(lean_object* v___x_3631_, lean_object* v___x_3632_, lean_object* v_unit_3633_, lean_object* v___x_3634_, lean_object* v_fst_3635_, lean_object* v_snd_3636_, uint8_t v___x_3637_, lean_object* v_xs_3638_, lean_object* v_target_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; size_t v_sz_3650_; size_t v___x_3651_; lean_object* v___x_3652_; 
v___x_3647_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition___closed__5);
v___x_3648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3631_);
lean_ctor_set(v___x_3648_, 1, v___x_3647_);
v___x_3649_ = l_Array_zip___redArg(v_xs_3638_, v___x_3632_);
v_sz_3650_ = lean_array_size(v___x_3649_);
v___x_3651_ = ((size_t)0ULL);
v___x_3652_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_3649_, v_sz_3650_, v___x_3651_, v___x_3648_);
lean_dec_ref(v___x_3649_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3653_);
lean_dec_ref_known(v___x_3652_, 1);
v___x_3654_ = lp_vampireReplay_Vampire_Unit_boundVarSorts(v_unit_3633_);
lean_inc_ref(v___x_3634_);
v___x_3655_ = lp_vampireReplay_Vampire_Reconstruct_coverVars(v___x_3634_, v_a_3653_, v___x_3654_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
lean_dec_ref(v___x_3654_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3657_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_a_3656_);
lean_dec_ref_known(v___x_3655_, 1);
v___x_3657_ = lp_vampireReplay_Vampire_Reconstruct_Clause_instantiateAt(v___x_3634_, v_a_3656_, v_fst_3635_, v_snd_3636_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
lean_dec(v_a_3656_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; lean_object* v_fst_3659_; lean_object* v_snd_3660_; lean_object* v___x_3661_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v___x_3657_, 1);
v_fst_3659_ = lean_ctor_get(v_a_3658_, 0);
lean_inc(v_fst_3659_);
v_snd_3660_ = lean_ctor_get(v_a_3658_, 1);
lean_inc(v_snd_3660_);
lean_dec(v_a_3658_);
v___x_3661_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_snd_3660_, v_target_3639_, v_fst_3659_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; uint8_t v___x_3663_; uint8_t v___x_3664_; lean_object* v___x_3665_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
v___x_3663_ = 0;
v___x_3664_ = 1;
v___x_3665_ = l_Lean_Meta_mkLambdaFVars(v_xs_3638_, v_a_3662_, v___x_3663_, v___x_3637_, v___x_3663_, v___x_3637_, v___x_3664_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
return v___x_3665_;
}
else
{
return v___x_3661_;
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec_ref(v_target_3639_);
v_a_3666_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3657_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3657_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec_ref(v_target_3639_);
lean_dec_ref(v_snd_3636_);
lean_dec_ref(v_fst_3635_);
lean_dec_ref(v___x_3634_);
v_a_3674_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3655_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3655_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v_target_3639_);
lean_dec_ref(v_snd_3636_);
lean_dec_ref(v_fst_3635_);
lean_dec_ref(v___x_3634_);
lean_dec_ref(v_unit_3633_);
v_a_3682_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3652_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3652_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0___boxed(lean_object* v___x_3690_, lean_object* v___x_3691_, lean_object* v_unit_3692_, lean_object* v___x_3693_, lean_object* v_fst_3694_, lean_object* v_snd_3695_, lean_object* v___x_3696_, lean_object* v_xs_3697_, lean_object* v_target_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_){
_start:
{
uint8_t v___x_3587__boxed_3706_; lean_object* v_res_3707_; 
v___x_3587__boxed_3706_ = lean_unbox(v___x_3696_);
v_res_3707_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0(v___x_3690_, v___x_3691_, v_unit_3692_, v___x_3693_, v_fst_3694_, v_snd_3695_, v___x_3587__boxed_3706_, v_xs_3697_, v_target_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
lean_dec(v___y_3704_);
lean_dec_ref(v___y_3703_);
lean_dec(v___y_3702_);
lean_dec_ref(v___y_3701_);
lean_dec(v___y_3700_);
lean_dec_ref(v___y_3699_);
lean_dec_ref(v_xs_3697_);
lean_dec_ref(v___x_3691_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1(lean_object* v_as_3711_, lean_object* v_j_3712_){
_start:
{
lean_object* v___x_3713_; uint8_t v___x_3714_; 
v___x_3713_ = lean_array_get_size(v_as_3711_);
v___x_3714_ = lean_nat_dec_lt(v_j_3712_, v___x_3713_);
if (v___x_3714_ == 0)
{
lean_object* v___x_3715_; 
lean_dec(v_j_3712_);
v___x_3715_ = lean_box(0);
return v___x_3715_;
}
else
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; uint8_t v___x_3719_; 
v___x_3716_ = lean_array_fget_borrowed(v_as_3711_, v_j_3712_);
v___x_3717_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v___x_3716_);
v___x_3718_ = ((lean_object*)(lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___closed__0));
v___x_3719_ = lp_vampireReplay_Option_instBEq_beq___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__0(v___x_3717_, v___x_3718_);
lean_dec(v___x_3717_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; 
v___x_3720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3720_, 0, v_j_3712_);
return v___x_3720_;
}
else
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = lean_unsigned_to_nat(1u);
v___x_3722_ = lean_nat_add(v_j_3712_, v___x_3721_);
lean_dec(v_j_3712_);
v_j_3712_ = v___x_3722_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1___boxed(lean_object* v_as_3724_, lean_object* v_j_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1(v_as_3724_, v_j_3725_);
lean_dec_ref(v_as_3724_);
return v_res_3726_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__0));
v___x_3729_ = l_Lean_stringToMessageData(v___x_3728_);
return v___x_3729_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3(void){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3731_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__2));
v___x_3732_ = l_Lean_stringToMessageData(v___x_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting(lean_object* v_step_3733_, lean_object* v_a_3734_, lean_object* v_a_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_){
_start:
{
lean_object* v_unit_3741_; lean_object* v_premises_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v_unit_3741_ = lean_ctor_get(v_step_3733_, 0);
lean_inc_ref_n(v_unit_3741_, 2);
v_premises_3742_ = lean_ctor_get(v_step_3733_, 1);
v___x_3743_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_3741_);
v___x_3744_ = lean_unsigned_to_nat(0u);
v___x_3745_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_inequalitySplitting_spec__1(v___x_3743_, v___x_3744_);
if (lean_obj_tag(v___x_3745_) == 1)
{
lean_object* v_val_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3773_; 
v_val_3746_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3748_ = v___x_3745_;
v_isShared_3749_ = v_isSharedCheck_3773_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_val_3746_);
lean_dec(v___x_3745_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3773_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; uint8_t v___x_3751_; 
v___x_3750_ = lean_array_get_size(v___x_3743_);
v___x_3751_ = lean_nat_dec_lt(v_val_3746_, v___x_3750_);
if (v___x_3751_ == 0)
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
lean_dec_ref(v___x_3743_);
lean_dec_ref(v_unit_3741_);
lean_dec_ref(v_step_3733_);
v___x_3752_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1);
v___x_3753_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3752_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
return v___x_3753_;
}
else
{
lean_object* v___x_3754_; uint8_t v___x_3755_; 
v___x_3754_ = lean_array_get_size(v_premises_3742_);
v___x_3755_ = lean_nat_dec_lt(v_val_3746_, v___x_3754_);
if (v___x_3755_ == 0)
{
lean_object* v___x_3756_; lean_object* v___x_3757_; 
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
lean_dec_ref(v___x_3743_);
lean_dec_ref(v_unit_3741_);
lean_dec_ref(v_step_3733_);
v___x_3756_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__3);
v___x_3757_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3756_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
return v___x_3757_;
}
else
{
lean_object* v___x_3758_; lean_object* v_fst_3759_; lean_object* v_snd_3760_; lean_object* v___x_3761_; 
v___x_3758_ = lean_array_fget_borrowed(v_premises_3742_, v_val_3746_);
v_fst_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_fst_3759_);
v_snd_3760_ = lean_ctor_get(v___x_3758_, 1);
lean_inc(v_snd_3760_);
v___x_3761_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_3733_, v_a_3734_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___f_3766_; lean_object* v___x_3767_; lean_object* v___x_3769_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v___x_3763_ = lean_array_fget(v___x_3743_, v_val_3746_);
lean_dec(v_val_3746_);
lean_dec_ref(v___x_3743_);
lean_inc_ref(v_unit_3741_);
v___x_3764_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_3741_);
v___x_3765_ = lean_box(v___x_3755_);
lean_inc_ref(v___x_3764_);
v___f_3766_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___lam__0___boxed), 16, 7);
lean_closure_set(v___f_3766_, 0, v___x_3744_);
lean_closure_set(v___f_3766_, 1, v___x_3764_);
lean_closure_set(v___f_3766_, 2, v_unit_3741_);
lean_closure_set(v___f_3766_, 3, v___x_3763_);
lean_closure_set(v___f_3766_, 4, v_fst_3759_);
lean_closure_set(v___f_3766_, 5, v_snd_3760_);
lean_closure_set(v___f_3766_, 6, v___x_3765_);
v___x_3767_ = lean_array_get_size(v___x_3764_);
lean_dec_ref(v___x_3764_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 0, v___x_3767_);
v___x_3769_ = v___x_3748_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
uint8_t v___x_3770_; lean_object* v___x_3771_; 
v___x_3770_ = 0;
v___x_3771_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_3762_, v___x_3769_, v___f_3766_, v___x_3770_, v___x_3770_, v_a_3734_, v_a_3735_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
return v___x_3771_;
}
}
else
{
lean_dec(v_snd_3760_);
lean_dec(v_fst_3759_);
lean_del_object(v___x_3748_);
lean_dec(v_val_3746_);
lean_dec_ref(v___x_3743_);
lean_dec_ref(v_unit_3741_);
return v___x_3761_;
}
}
}
}
}
else
{
lean_object* v___x_3774_; lean_object* v___x_3775_; 
lean_dec(v___x_3745_);
lean_dec_ref(v___x_3743_);
lean_dec_ref(v_unit_3741_);
lean_dec_ref(v_step_3733_);
v___x_3774_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___closed__1);
v___x_3775_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3774_, v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_);
return v___x_3775_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting___boxed(lean_object* v_step_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = lp_vampireReplay_Vampire_Reconstruct_Definition_inequalitySplitting(v_step_3776_, v_a_3777_, v_a_3778_, v_a_3779_, v_a_3780_, v_a_3781_, v_a_3782_);
lean_dec(v_a_3782_);
lean_dec_ref(v_a_3781_);
lean_dec(v_a_3780_);
lean_dec_ref(v_a_3779_);
lean_dec(v_a_3778_);
lean_dec_ref(v_a_3777_);
return v_res_3784_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(uint8_t v_x_3785_){
_start:
{
switch(v_x_3785_)
{
case 125:
{
uint8_t v___x_3786_; 
v___x_3786_ = 1;
return v___x_3786_;
}
case 156:
{
uint8_t v___x_3787_; 
v___x_3787_ = 1;
return v___x_3787_;
}
case 126:
{
uint8_t v___x_3788_; 
v___x_3788_ = 1;
return v___x_3788_;
}
case 134:
{
uint8_t v___x_3789_; 
v___x_3789_ = 1;
return v___x_3789_;
}
case 121:
{
uint8_t v___x_3790_; 
v___x_3790_ = 1;
return v___x_3790_;
}
default: 
{
uint8_t v___x_3791_; 
v___x_3791_ = 0;
return v___x_3791_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName___boxed(lean_object* v_x_3792_){
_start:
{
uint8_t v_x_41__boxed_3793_; uint8_t v_res_3794_; lean_object* v_r_3795_; 
v_x_41__boxed_3793_ = lean_unbox(v_x_3792_);
v_res_3794_ = lp_vampireReplay_Vampire_Reconstruct_Definition_introducesName(v_x_41__boxed_3793_);
v_r_3795_ = lean_box(v_res_3794_);
return v_r_3795_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_register(lean_object* v_u_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = lp_vampireReplay_Vampire_Unit_rule_x3f(v_u_3796_);
if (lean_obj_tag(v___x_3807_) == 1)
{
lean_object* v_val_3808_; uint8_t v___x_3809_; 
v_val_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_val_3808_);
lean_dec_ref_known(v___x_3807_, 1);
v___x_3809_ = lean_unbox(v_val_3808_);
lean_dec(v_val_3808_);
switch(v___x_3809_)
{
case 125:
{
lean_object* v___x_3810_; 
v___x_3810_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerFunctionDefinition(v_u_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
return v___x_3810_;
}
case 156:
{
lean_object* v___x_3811_; 
v___x_3811_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerAvatarDefinition(v_u_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
return v___x_3811_;
}
case 126:
{
lean_object* v___x_3812_; 
v___x_3812_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition(v_u_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
return v___x_3812_;
}
case 121:
{
lean_object* v___x_3813_; 
v___x_3813_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerPredicateDefinition(v_u_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
return v___x_3813_;
}
case 134:
{
lean_object* v___x_3814_; 
v___x_3814_ = lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_registerInequalitySplitting(v_u_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_);
return v___x_3814_;
}
default: 
{
lean_dec_ref(v_u_3796_);
goto v___jp_3804_;
}
}
}
else
{
lean_dec(v___x_3807_);
lean_dec_ref(v_u_3796_);
goto v___jp_3804_;
}
v___jp_3804_:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3805_ = lean_box(0);
v___x_3806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3805_);
return v___x_3806_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_register___boxed(lean_object* v_u_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_){
_start:
{
lean_object* v_res_3823_; 
v_res_3823_ = lp_vampireReplay_Vampire_Reconstruct_Definition_register(v_u_3815_, v_a_3816_, v_a_3817_, v_a_3818_, v_a_3819_, v_a_3820_, v_a_3821_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_a_3819_);
lean_dec_ref(v_a_3818_);
lean_dec(v_a_3817_);
lean_dec_ref(v_a_3816_);
return v_res_3823_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0(lean_object* v_as_3824_, lean_object* v_j_3825_){
_start:
{
lean_object* v___x_3826_; uint8_t v___x_3827_; 
v___x_3826_ = lean_array_get_size(v_as_3824_);
v___x_3827_ = lean_nat_dec_lt(v_j_3825_, v___x_3826_);
if (v___x_3827_ == 0)
{
lean_object* v___x_3828_; 
lean_dec(v_j_3825_);
v___x_3828_ = lean_box(0);
return v___x_3828_;
}
else
{
lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___x_3829_ = lean_array_fget_borrowed(v_as_3824_, v_j_3825_);
lean_inc(v___x_3829_);
v___x_3830_ = lp_vampireReplay_Vampire_Unit_clause_x3f(v___x_3829_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = lean_unsigned_to_nat(1u);
v___x_3832_ = lean_nat_add(v_j_3825_, v___x_3831_);
lean_dec(v_j_3825_);
v_j_3825_ = v___x_3832_;
goto _start;
}
else
{
lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
v_isSharedCheck_3840_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; 
v_unused_3841_ = lean_ctor_get(v___x_3830_, 0);
lean_dec(v_unused_3841_);
v___x_3835_ = v___x_3830_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_dec(v___x_3830_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 0, v_j_3825_);
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v_j_3825_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0___boxed(lean_object* v_as_3842_, lean_object* v_j_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0(v_as_3842_, v_j_3843_);
lean_dec_ref(v_as_3842_);
return v_res_3844_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1(void){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___x_3846_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__0));
v___x_3847_ = l_Lean_stringToMessageData(v___x_3846_);
return v___x_3847_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3(void){
_start:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; 
v___x_3849_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__2));
v___x_3850_ = l_Lean_stringToMessageData(v___x_3849_);
return v___x_3850_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement(lean_object* v_step_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_){
_start:
{
lean_object* v_unit_3859_; lean_object* v_premises_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; 
v_unit_3859_ = lean_ctor_get(v_step_3851_, 0);
v_premises_3860_ = lean_ctor_get(v_step_3851_, 1);
lean_inc_ref(v_unit_3859_);
v___x_3861_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_3859_);
v___x_3862_ = lean_unsigned_to_nat(0u);
v___x_3863_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00Vampire_Reconstruct_Definition_equalityProxyReplacement_spec__0(v___x_3861_, v___x_3862_);
lean_dec_ref(v___x_3861_);
if (lean_obj_tag(v___x_3863_) == 1)
{
lean_object* v_val_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3911_; 
v_val_3864_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3866_ = v___x_3863_;
v_isShared_3867_ = v_isSharedCheck_3911_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_val_3864_);
lean_dec(v___x_3863_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3911_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3868_; uint8_t v___x_3869_; 
v___x_3868_ = lean_array_get_size(v_premises_3860_);
v___x_3869_ = lean_nat_dec_lt(v_val_3864_, v___x_3868_);
if (v___x_3869_ == 0)
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3873_; 
lean_dec_ref(v_step_3851_);
v___x_3870_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__1);
v___x_3871_ = l_Nat_reprFast(v_val_3864_);
if (v_isShared_3867_ == 0)
{
lean_ctor_set_tag(v___x_3866_, 3);
lean_ctor_set(v___x_3866_, 0, v___x_3871_);
v___x_3873_ = v___x_3866_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v___x_3871_);
v___x_3873_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = l_Lean_MessageData_ofFormat(v___x_3873_);
v___x_3875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3870_);
lean_ctor_set(v___x_3875_, 1, v___x_3874_);
v___x_3876_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3875_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
return v___x_3876_;
}
}
else
{
lean_object* v___x_3878_; lean_object* v_fst_3879_; lean_object* v_snd_3880_; lean_object* v___x_3881_; 
lean_del_object(v___x_3866_);
v___x_3878_ = lean_array_fget_borrowed(v_premises_3860_, v_val_3864_);
lean_dec(v_val_3864_);
v_fst_3879_ = lean_ctor_get(v___x_3878_, 0);
lean_inc(v_fst_3879_);
v_snd_3880_ = lean_ctor_get(v___x_3878_, 1);
lean_inc(v_snd_3880_);
v___x_3881_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_3851_, v_a_3852_, v_a_3853_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3883_; lean_object* v_a_3884_; lean_object* v___x_3885_; 
v_a_3882_ = lean_ctor_get(v___x_3881_, 0);
lean_inc_n(v_a_3882_, 2);
lean_dec_ref_known(v___x_3881_, 1);
lean_inc(v_snd_3880_);
v___x_3883_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_3880_, v_a_3855_);
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref(v___x_3883_);
v___x_3885_ = l_Lean_Meta_isExprDefEq(v_a_3884_, v_a_3882_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3902_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3888_ = v___x_3885_;
v_isShared_3889_ = v_isSharedCheck_3902_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3885_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3902_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
uint8_t v___x_3890_; 
v___x_3890_ = lean_unbox(v_a_3886_);
lean_dec(v_a_3886_);
if (v___x_3890_ == 0)
{
lean_object* v___x_3891_; 
lean_del_object(v___x_3888_);
v___x_3891_ = lp_vampireReplay_Vampire_Reconstruct_equiv(v_snd_3880_, v_a_3882_, v_a_3852_, v_a_3853_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc(v_a_3892_);
lean_dec_ref_known(v___x_3891_, 1);
v___x_3893_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_weaken___closed__11));
v___x_3894_ = lean_unsigned_to_nat(2u);
v___x_3895_ = lean_mk_empty_array_with_capacity(v___x_3894_);
v___x_3896_ = lean_array_push(v___x_3895_, v_a_3892_);
v___x_3897_ = lean_array_push(v___x_3896_, v_fst_3879_);
v___x_3898_ = l_Lean_Meta_mkAppM(v___x_3893_, v___x_3897_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
return v___x_3898_;
}
else
{
lean_dec(v_fst_3879_);
return v___x_3891_;
}
}
else
{
lean_object* v___x_3900_; 
lean_dec(v_a_3882_);
lean_dec(v_snd_3880_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 0, v_fst_3879_);
v___x_3900_ = v___x_3888_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_fst_3879_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3910_; 
lean_dec(v_a_3882_);
lean_dec(v_snd_3880_);
lean_dec(v_fst_3879_);
v_a_3903_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3910_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3905_ = v___x_3885_;
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3885_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v___x_3908_; 
if (v_isShared_3906_ == 0)
{
v___x_3908_ = v___x_3905_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_a_3903_);
v___x_3908_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
return v___x_3908_;
}
}
}
}
else
{
lean_dec(v_snd_3880_);
lean_dec(v_fst_3879_);
return v___x_3881_;
}
}
}
}
else
{
lean_object* v___x_3912_; lean_object* v___x_3913_; 
lean_dec(v___x_3863_);
lean_dec_ref(v_step_3851_);
v___x_3912_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___closed__3);
v___x_3913_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3912_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
return v___x_3913_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement___boxed(lean_object* v_step_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_){
_start:
{
lean_object* v_res_3922_; 
v_res_3922_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyReplacement(v_step_3914_, v_a_3915_, v_a_3916_, v_a_3917_, v_a_3918_, v_a_3919_, v_a_3920_);
lean_dec(v_a_3920_);
lean_dec_ref(v_a_3919_);
lean_dec(v_a_3918_);
lean_dec_ref(v_a_3917_);
lean_dec(v_a_3916_);
lean_dec_ref(v_a_3915_);
return v_res_3922_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0(lean_object* v_x_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3933_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___closed__0));
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0___boxed(lean_object* v_x_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_res_3943_; 
v_res_3943_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__0(v_x_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec(v___y_3939_);
lean_dec_ref(v___y_3938_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec_ref(v_x_3935_);
return v_res_3943_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1(lean_object* v_e_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3952_ = l_Lean_Expr_headBeta(v_e_3944_);
v___x_3953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3952_);
v___x_3954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1___boxed(lean_object* v_e_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___lam__1(v_e_3955_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0(lean_object* v_00_u03b1_3964_, lean_object* v_x_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3973_ = lean_apply_1(v_x_3965_, lean_box(0));
v___x_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
return v___x_3974_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0___boxed(lean_object* v_00_u03b1_3975_, lean_object* v_x_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0(v_00_u03b1_3975_, v_x_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_);
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0(lean_object* v_k_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v_b_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_){
_start:
{
lean_object* v___x_3995_; 
lean_inc(v___y_3993_);
lean_inc_ref(v___y_3992_);
lean_inc(v___y_3991_);
lean_inc_ref(v___y_3990_);
lean_inc(v___y_3988_);
lean_inc_ref(v___y_3987_);
lean_inc(v___y_3986_);
v___x_3995_ = lean_apply_9(v_k_3985_, v_b_3989_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, lean_box(0));
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v_k_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v_b_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
lean_object* v_res_4006_; 
v_res_4006_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0(v_k_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v_b_4000_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
lean_dec(v___y_4004_);
lean_dec_ref(v___y_4003_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec(v___y_3997_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg(lean_object* v_name_4007_, lean_object* v_type_4008_, lean_object* v_val_4009_, lean_object* v_k_4010_, uint8_t v_nondep_4011_, uint8_t v_kind_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v___f_4021_; lean_object* v___x_4022_; 
lean_inc(v___y_4015_);
lean_inc_ref(v___y_4014_);
lean_inc(v___y_4013_);
v___f_4021_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_4021_, 0, v_k_4010_);
lean_closure_set(v___f_4021_, 1, v___y_4013_);
lean_closure_set(v___f_4021_, 2, v___y_4014_);
lean_closure_set(v___f_4021_, 3, v___y_4015_);
v___x_4022_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(v_name_4007_, v_type_4008_, v_val_4009_, v___f_4021_, v_nondep_4011_, v_kind_4012_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_);
if (lean_obj_tag(v___x_4022_) == 0)
{
return v___x_4022_;
}
else
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4030_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4025_ = v___x_4022_;
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4028_; 
if (v_isShared_4026_ == 0)
{
v___x_4028_ = v___x_4025_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_a_4023_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg___boxed(lean_object* v_name_4031_, lean_object* v_type_4032_, lean_object* v_val_4033_, lean_object* v_k_4034_, lean_object* v_nondep_4035_, lean_object* v_kind_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_){
_start:
{
uint8_t v_nondep_boxed_4045_; uint8_t v_kind_boxed_4046_; lean_object* v_res_4047_; 
v_nondep_boxed_4045_ = lean_unbox(v_nondep_4035_);
v_kind_boxed_4046_ = lean_unbox(v_kind_4036_);
v_res_4047_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg(v_name_4031_, v_type_4032_, v_val_4033_, v_k_4034_, v_nondep_boxed_4045_, v_kind_boxed_4046_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec(v___y_4037_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2(lean_object* v___x_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4056_, 0, v___x_4048_);
return v___x_4056_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2___boxed(lean_object* v___x_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
lean_object* v_res_4065_; 
v_res_4065_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2(v___x_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v___y_4059_);
lean_dec_ref(v___y_4058_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_name_4066_, uint8_t v_bi_4067_, lean_object* v_type_4068_, lean_object* v_k_4069_, uint8_t v_kind_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v___f_4079_; lean_object* v___x_4080_; 
lean_inc(v___y_4073_);
lean_inc_ref(v___y_4072_);
lean_inc(v___y_4071_);
v___f_4079_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_4079_, 0, v_k_4069_);
lean_closure_set(v___f_4079_, 1, v___y_4071_);
lean_closure_set(v___f_4079_, 2, v___y_4072_);
lean_closure_set(v___f_4079_, 3, v___y_4073_);
v___x_4080_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___redArg(v_name_4066_, v_bi_4067_, v_type_4068_, v___f_4079_, v_kind_4070_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
if (lean_obj_tag(v___x_4080_) == 0)
{
return v___x_4080_;
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
v_a_4081_ = lean_ctor_get(v___x_4080_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4080_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4080_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4080_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_name_4089_, lean_object* v_bi_4090_, lean_object* v_type_4091_, lean_object* v_k_4092_, lean_object* v_kind_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
uint8_t v_bi_boxed_4102_; uint8_t v_kind_boxed_4103_; lean_object* v_res_4104_; 
v_bi_boxed_4102_ = lean_unbox(v_bi_4090_);
v_kind_boxed_4103_ = lean_unbox(v_kind_4093_);
v_res_4104_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(v_name_4089_, v_bi_boxed_4102_, v_type_4091_, v_k_4092_, v_kind_boxed_4103_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec(v___y_4094_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg(lean_object* v_x_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
lean_object* v___y_4115_; lean_object* v_fileName_4124_; lean_object* v_fileMap_4125_; lean_object* v_options_4126_; lean_object* v_currRecDepth_4127_; lean_object* v_maxRecDepth_4128_; lean_object* v_ref_4129_; lean_object* v_currNamespace_4130_; lean_object* v_openDecls_4131_; lean_object* v_initHeartbeats_4132_; lean_object* v_maxHeartbeats_4133_; lean_object* v_quotContext_4134_; lean_object* v_currMacroScope_4135_; uint8_t v_diag_4136_; lean_object* v_cancelTk_x3f_4137_; uint8_t v_suppressElabErrors_4138_; lean_object* v_inheritedTraceOptions_4139_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
v_fileName_4124_ = lean_ctor_get(v___y_4111_, 0);
v_fileMap_4125_ = lean_ctor_get(v___y_4111_, 1);
v_options_4126_ = lean_ctor_get(v___y_4111_, 2);
v_currRecDepth_4127_ = lean_ctor_get(v___y_4111_, 3);
v_maxRecDepth_4128_ = lean_ctor_get(v___y_4111_, 4);
v_ref_4129_ = lean_ctor_get(v___y_4111_, 5);
v_currNamespace_4130_ = lean_ctor_get(v___y_4111_, 6);
v_openDecls_4131_ = lean_ctor_get(v___y_4111_, 7);
v_initHeartbeats_4132_ = lean_ctor_get(v___y_4111_, 8);
v_maxHeartbeats_4133_ = lean_ctor_get(v___y_4111_, 9);
v_quotContext_4134_ = lean_ctor_get(v___y_4111_, 10);
v_currMacroScope_4135_ = lean_ctor_get(v___y_4111_, 11);
v_diag_4136_ = lean_ctor_get_uint8(v___y_4111_, sizeof(void*)*14);
v_cancelTk_x3f_4137_ = lean_ctor_get(v___y_4111_, 12);
v_suppressElabErrors_4138_ = lean_ctor_get_uint8(v___y_4111_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4139_ = lean_ctor_get(v___y_4111_, 13);
v___x_4145_ = lean_unsigned_to_nat(0u);
v___x_4146_ = lean_nat_dec_eq(v_maxRecDepth_4128_, v___x_4145_);
if (v___x_4146_ == 0)
{
uint8_t v___x_4147_; 
v___x_4147_ = lean_nat_dec_eq(v_currRecDepth_4127_, v_maxRecDepth_4128_);
if (v___x_4147_ == 0)
{
goto v___jp_4140_;
}
else
{
lean_object* v___x_4148_; 
lean_dec_ref(v_x_4105_);
lean_inc(v_ref_4129_);
v___x_4148_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_4129_);
v___y_4115_ = v___x_4148_;
goto v___jp_4114_;
}
}
else
{
goto v___jp_4140_;
}
v___jp_4114_:
{
if (lean_obj_tag(v___y_4115_) == 0)
{
return v___y_4115_;
}
else
{
lean_object* v_a_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4123_; 
v_a_4116_ = lean_ctor_get(v___y_4115_, 0);
v_isSharedCheck_4123_ = !lean_is_exclusive(v___y_4115_);
if (v_isSharedCheck_4123_ == 0)
{
v___x_4118_ = v___y_4115_;
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_a_4116_);
lean_dec(v___y_4115_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4123_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___x_4121_; 
if (v_isShared_4119_ == 0)
{
v___x_4121_ = v___x_4118_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v_a_4116_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
}
v___jp_4140_:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4141_ = lean_unsigned_to_nat(1u);
v___x_4142_ = lean_nat_add(v_currRecDepth_4127_, v___x_4141_);
lean_inc_ref(v_inheritedTraceOptions_4139_);
lean_inc(v_cancelTk_x3f_4137_);
lean_inc(v_currMacroScope_4135_);
lean_inc(v_quotContext_4134_);
lean_inc(v_maxHeartbeats_4133_);
lean_inc(v_initHeartbeats_4132_);
lean_inc(v_openDecls_4131_);
lean_inc(v_currNamespace_4130_);
lean_inc(v_ref_4129_);
lean_inc(v_maxRecDepth_4128_);
lean_inc_ref(v_options_4126_);
lean_inc_ref(v_fileMap_4125_);
lean_inc_ref(v_fileName_4124_);
v___x_4143_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_4143_, 0, v_fileName_4124_);
lean_ctor_set(v___x_4143_, 1, v_fileMap_4125_);
lean_ctor_set(v___x_4143_, 2, v_options_4126_);
lean_ctor_set(v___x_4143_, 3, v___x_4142_);
lean_ctor_set(v___x_4143_, 4, v_maxRecDepth_4128_);
lean_ctor_set(v___x_4143_, 5, v_ref_4129_);
lean_ctor_set(v___x_4143_, 6, v_currNamespace_4130_);
lean_ctor_set(v___x_4143_, 7, v_openDecls_4131_);
lean_ctor_set(v___x_4143_, 8, v_initHeartbeats_4132_);
lean_ctor_set(v___x_4143_, 9, v_maxHeartbeats_4133_);
lean_ctor_set(v___x_4143_, 10, v_quotContext_4134_);
lean_ctor_set(v___x_4143_, 11, v_currMacroScope_4135_);
lean_ctor_set(v___x_4143_, 12, v_cancelTk_x3f_4137_);
lean_ctor_set(v___x_4143_, 13, v_inheritedTraceOptions_4139_);
lean_ctor_set_uint8(v___x_4143_, sizeof(void*)*14, v_diag_4136_);
lean_ctor_set_uint8(v___x_4143_, sizeof(void*)*14 + 1, v_suppressElabErrors_4138_);
lean_inc(v___y_4112_);
lean_inc(v___y_4110_);
lean_inc_ref(v___y_4109_);
lean_inc(v___y_4108_);
lean_inc_ref(v___y_4107_);
lean_inc(v___y_4106_);
v___x_4144_ = lean_apply_8(v_x_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___x_4143_, v___y_4112_, lean_box(0));
v___y_4115_ = v___x_4144_;
goto v___jp_4114_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg___boxed(lean_object* v_x_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg(v_x_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_);
lean_dec(v___y_4156_);
lean_dec_ref(v___y_4155_);
lean_dec(v___y_4154_);
lean_dec_ref(v___y_4153_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec(v___y_4150_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2(lean_object* v_a_4159_, lean_object* v_e_4160_, lean_object* v_a_4161_){
_start:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4163_ = lean_st_ref_take(v_a_4159_);
v___x_4164_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_ExprDefEq_0__Lean_Meta_CheckAssignment_cache_spec__0___redArg(v___x_4163_, v_e_4160_, v_a_4161_);
v___x_4165_ = lean_st_ref_set(v_a_4159_, v___x_4164_);
v___x_4166_ = lean_box(0);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2___boxed(lean_object* v_a_4167_, lean_object* v_e_4168_, lean_object* v_a_4169_, lean_object* v___y_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2(v_a_4167_, v_e_4168_, v_a_4169_);
lean_dec(v_a_4167_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_4172_, lean_object* v_x_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_apply_1(v_x_4173_, lean_box(0));
v___x_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_4183_, lean_object* v_x_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0(v_00_u03b1_4183_, v_x_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
lean_dec(v___y_4190_);
lean_dec_ref(v___y_4189_);
lean_dec(v___y_4188_);
lean_dec_ref(v___y_4187_);
lean_dec(v___y_4186_);
lean_dec_ref(v___y_4185_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0(lean_object* v_fvars_4194_, lean_object* v_pre_4195_, lean_object* v_post_4196_, uint8_t v_usedLetOnly_4197_, uint8_t v_skipConstInApp_4198_, uint8_t v_skipInstances_4199_, lean_object* v_body_4200_, lean_object* v_x_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4210_ = lean_array_push(v_fvars_4194_, v_x_4201_);
v___x_4211_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5(v_pre_4195_, v_post_4196_, v_usedLetOnly_4197_, v_skipConstInApp_4198_, v_skipInstances_4199_, v___x_4210_, v_body_4200_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_);
return v___x_4211_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0___boxed(lean_object* v_fvars_4212_, lean_object* v_pre_4213_, lean_object* v_post_4214_, lean_object* v_usedLetOnly_4215_, lean_object* v_skipConstInApp_4216_, lean_object* v_skipInstances_4217_, lean_object* v_body_4218_, lean_object* v_x_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_){
_start:
{
uint8_t v_usedLetOnly_boxed_4228_; uint8_t v_skipConstInApp_boxed_4229_; uint8_t v_skipInstances_boxed_4230_; lean_object* v_res_4231_; 
v_usedLetOnly_boxed_4228_ = lean_unbox(v_usedLetOnly_4215_);
v_skipConstInApp_boxed_4229_ = lean_unbox(v_skipConstInApp_4216_);
v_skipInstances_boxed_4230_ = lean_unbox(v_skipInstances_4217_);
v_res_4231_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0(v_fvars_4212_, v_pre_4213_, v_post_4214_, v_usedLetOnly_boxed_4228_, v_skipConstInApp_boxed_4229_, v_skipInstances_boxed_4230_, v_body_4218_, v_x_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
lean_dec(v___y_4222_);
lean_dec_ref(v___y_4221_);
lean_dec(v___y_4220_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(lean_object* v_pre_4232_, lean_object* v_post_4233_, uint8_t v_usedLetOnly_4234_, uint8_t v_skipConstInApp_4235_, uint8_t v_skipInstances_4236_, lean_object* v_e_4237_, lean_object* v_a_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_){
_start:
{
lean_object* v___x_4246_; 
lean_inc_ref(v_post_4233_);
lean_inc(v___y_4244_);
lean_inc_ref(v___y_4243_);
lean_inc(v___y_4242_);
lean_inc_ref(v___y_4241_);
lean_inc(v___y_4240_);
lean_inc_ref(v___y_4239_);
lean_inc_ref(v_e_4237_);
v___x_4246_ = lean_apply_8(v_post_4233_, v_e_4237_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_, lean_box(0));
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4265_; 
v_a_4247_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4249_ = v___x_4246_;
v_isShared_4250_ = v_isSharedCheck_4265_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4246_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4265_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
switch(lean_obj_tag(v_a_4247_))
{
case 0:
{
lean_object* v_e_4251_; lean_object* v___x_4253_; 
lean_dec_ref(v_e_4237_);
lean_dec_ref(v_post_4233_);
lean_dec_ref(v_pre_4232_);
v_e_4251_ = lean_ctor_get(v_a_4247_, 0);
lean_inc_ref(v_e_4251_);
lean_dec_ref_known(v_a_4247_, 1);
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v_e_4251_);
v___x_4253_ = v___x_4249_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_e_4251_);
v___x_4253_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
return v___x_4253_;
}
}
case 1:
{
lean_object* v_e_4255_; lean_object* v___x_4256_; 
lean_del_object(v___x_4249_);
lean_dec_ref(v_e_4237_);
v_e_4255_ = lean_ctor_get(v_a_4247_, 0);
lean_inc_ref(v_e_4255_);
lean_dec_ref_known(v_a_4247_, 1);
v___x_4256_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4232_, v_post_4233_, v_usedLetOnly_4234_, v_skipConstInApp_4235_, v_skipInstances_4236_, v_e_4255_, v_a_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_);
return v___x_4256_;
}
default: 
{
lean_object* v_e_x3f_4257_; 
lean_dec_ref(v_post_4233_);
lean_dec_ref(v_pre_4232_);
v_e_x3f_4257_ = lean_ctor_get(v_a_4247_, 0);
lean_inc(v_e_x3f_4257_);
lean_dec_ref_known(v_a_4247_, 1);
if (lean_obj_tag(v_e_x3f_4257_) == 0)
{
lean_object* v___x_4259_; 
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v_e_4237_);
v___x_4259_ = v___x_4249_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_e_4237_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
else
{
lean_object* v_val_4261_; lean_object* v___x_4263_; 
lean_dec_ref(v_e_4237_);
v_val_4261_ = lean_ctor_get(v_e_x3f_4257_, 0);
lean_inc(v_val_4261_);
lean_dec_ref_known(v_e_x3f_4257_, 1);
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v_val_4261_);
v___x_4263_ = v___x_4249_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_val_4261_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
}
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec_ref(v_e_4237_);
lean_dec_ref(v_post_4233_);
lean_dec_ref(v_pre_4232_);
v_a_4266_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4246_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4246_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5(lean_object* v_pre_4274_, lean_object* v_post_4275_, uint8_t v_usedLetOnly_4276_, uint8_t v_skipConstInApp_4277_, uint8_t v_skipInstances_4278_, lean_object* v_fvars_4279_, lean_object* v_e_4280_, lean_object* v_a_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
if (lean_obj_tag(v_e_4280_) == 6)
{
lean_object* v_binderName_4289_; lean_object* v_binderType_4290_; lean_object* v_body_4291_; uint8_t v_binderInfo_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v_binderName_4289_ = lean_ctor_get(v_e_4280_, 0);
lean_inc(v_binderName_4289_);
v_binderType_4290_ = lean_ctor_get(v_e_4280_, 1);
lean_inc_ref(v_binderType_4290_);
v_body_4291_ = lean_ctor_get(v_e_4280_, 2);
lean_inc_ref(v_body_4291_);
v_binderInfo_4292_ = lean_ctor_get_uint8(v_e_4280_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4280_, 3);
v___x_4293_ = lean_expr_instantiate_rev(v_binderType_4290_, v_fvars_4279_);
lean_dec_ref(v_binderType_4290_);
lean_inc_ref(v_post_4275_);
lean_inc_ref(v_pre_4274_);
v___x_4294_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4274_, v_post_4275_, v_usedLetOnly_4276_, v_skipConstInApp_4277_, v_skipInstances_4278_, v___x_4293_, v_a_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___f_4299_; uint8_t v___x_4300_; lean_object* v___x_4301_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v___x_4296_ = lean_box(v_usedLetOnly_4276_);
v___x_4297_ = lean_box(v_skipConstInApp_4277_);
v___x_4298_ = lean_box(v_skipInstances_4278_);
v___f_4299_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___lam__0___boxed), 16, 7);
lean_closure_set(v___f_4299_, 0, v_fvars_4279_);
lean_closure_set(v___f_4299_, 1, v_pre_4274_);
lean_closure_set(v___f_4299_, 2, v_post_4275_);
lean_closure_set(v___f_4299_, 3, v___x_4296_);
lean_closure_set(v___f_4299_, 4, v___x_4297_);
lean_closure_set(v___f_4299_, 5, v___x_4298_);
lean_closure_set(v___f_4299_, 6, v_body_4291_);
v___x_4300_ = 0;
v___x_4301_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(v_binderName_4289_, v_binderInfo_4292_, v_a_4295_, v___f_4299_, v___x_4300_, v_a_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
return v___x_4301_;
}
else
{
lean_dec_ref(v_body_4291_);
lean_dec(v_binderName_4289_);
lean_dec_ref(v_fvars_4279_);
lean_dec_ref(v_post_4275_);
lean_dec_ref(v_pre_4274_);
return v___x_4294_;
}
}
else
{
lean_object* v___x_4302_; lean_object* v___x_4303_; 
v___x_4302_ = lean_expr_instantiate_rev(v_e_4280_, v_fvars_4279_);
lean_dec_ref(v_e_4280_);
lean_inc_ref(v_post_4275_);
lean_inc_ref(v_pre_4274_);
v___x_4303_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4274_, v_post_4275_, v_usedLetOnly_4276_, v_skipConstInApp_4277_, v_skipInstances_4278_, v___x_4302_, v_a_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v_a_4304_; uint8_t v___x_4305_; uint8_t v___x_4306_; uint8_t v___x_4307_; lean_object* v___x_4308_; 
v_a_4304_ = lean_ctor_get(v___x_4303_, 0);
lean_inc(v_a_4304_);
lean_dec_ref_known(v___x_4303_, 1);
v___x_4305_ = 0;
v___x_4306_ = 1;
v___x_4307_ = 1;
v___x_4308_ = l_Lean_Meta_mkLambdaFVars(v_fvars_4279_, v_a_4304_, v___x_4305_, v_usedLetOnly_4276_, v___x_4305_, v___x_4306_, v___x_4307_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
lean_dec_ref(v_fvars_4279_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v___x_4310_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v___x_4308_, 1);
v___x_4310_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4274_, v_post_4275_, v_usedLetOnly_4276_, v_skipConstInApp_4277_, v_skipInstances_4278_, v_a_4309_, v_a_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
return v___x_4310_;
}
else
{
lean_dec_ref(v_post_4275_);
lean_dec_ref(v_pre_4274_);
return v___x_4308_;
}
}
else
{
lean_dec_ref(v_fvars_4279_);
lean_dec_ref(v_post_4275_);
lean_dec_ref(v_pre_4274_);
return v___x_4303_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0(lean_object* v_fvars_4311_, lean_object* v_pre_4312_, lean_object* v_post_4313_, uint8_t v_usedLetOnly_4314_, uint8_t v_skipConstInApp_4315_, uint8_t v_skipInstances_4316_, lean_object* v_body_4317_, lean_object* v_x_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4327_ = lean_array_push(v_fvars_4311_, v_x_4318_);
v___x_4328_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6(v_pre_4312_, v_post_4313_, v_usedLetOnly_4314_, v_skipConstInApp_4315_, v_skipInstances_4316_, v___x_4327_, v_body_4317_, v___y_4319_, v___y_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0___boxed(lean_object* v_fvars_4329_, lean_object* v_pre_4330_, lean_object* v_post_4331_, lean_object* v_usedLetOnly_4332_, lean_object* v_skipConstInApp_4333_, lean_object* v_skipInstances_4334_, lean_object* v_body_4335_, lean_object* v_x_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_){
_start:
{
uint8_t v_usedLetOnly_boxed_4345_; uint8_t v_skipConstInApp_boxed_4346_; uint8_t v_skipInstances_boxed_4347_; lean_object* v_res_4348_; 
v_usedLetOnly_boxed_4345_ = lean_unbox(v_usedLetOnly_4332_);
v_skipConstInApp_boxed_4346_ = lean_unbox(v_skipConstInApp_4333_);
v_skipInstances_boxed_4347_ = lean_unbox(v_skipInstances_4334_);
v_res_4348_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0(v_fvars_4329_, v_pre_4330_, v_post_4331_, v_usedLetOnly_boxed_4345_, v_skipConstInApp_boxed_4346_, v_skipInstances_boxed_4347_, v_body_4335_, v_x_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6(lean_object* v_pre_4349_, lean_object* v_post_4350_, uint8_t v_usedLetOnly_4351_, uint8_t v_skipConstInApp_4352_, uint8_t v_skipInstances_4353_, lean_object* v_fvars_4354_, lean_object* v_e_4355_, lean_object* v_a_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
if (lean_obj_tag(v_e_4355_) == 8)
{
lean_object* v_declName_4364_; lean_object* v_type_4365_; lean_object* v_value_4366_; lean_object* v_body_4367_; uint8_t v_nondep_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v_declName_4364_ = lean_ctor_get(v_e_4355_, 0);
lean_inc(v_declName_4364_);
v_type_4365_ = lean_ctor_get(v_e_4355_, 1);
lean_inc_ref(v_type_4365_);
v_value_4366_ = lean_ctor_get(v_e_4355_, 2);
lean_inc_ref(v_value_4366_);
v_body_4367_ = lean_ctor_get(v_e_4355_, 3);
lean_inc_ref(v_body_4367_);
v_nondep_4368_ = lean_ctor_get_uint8(v_e_4355_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_4355_, 4);
v___x_4369_ = lean_expr_instantiate_rev(v_type_4365_, v_fvars_4354_);
lean_dec_ref(v_type_4365_);
lean_inc_ref(v_post_4350_);
lean_inc_ref(v_pre_4349_);
v___x_4370_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4349_, v_post_4350_, v_usedLetOnly_4351_, v_skipConstInApp_4352_, v_skipInstances_4353_, v___x_4369_, v_a_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc(v_a_4371_);
lean_dec_ref_known(v___x_4370_, 1);
v___x_4372_ = lean_expr_instantiate_rev(v_value_4366_, v_fvars_4354_);
lean_dec_ref(v_value_4366_);
lean_inc_ref(v_post_4350_);
lean_inc_ref(v_pre_4349_);
v___x_4373_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4349_, v_post_4350_, v_usedLetOnly_4351_, v_skipConstInApp_4352_, v_skipInstances_4353_, v___x_4372_, v_a_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
if (lean_obj_tag(v___x_4373_) == 0)
{
lean_object* v_a_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___f_4378_; uint8_t v___x_4379_; lean_object* v___x_4380_; 
v_a_4374_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_a_4374_);
lean_dec_ref_known(v___x_4373_, 1);
v___x_4375_ = lean_box(v_usedLetOnly_4351_);
v___x_4376_ = lean_box(v_skipConstInApp_4352_);
v___x_4377_ = lean_box(v_skipInstances_4353_);
v___f_4378_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___lam__0___boxed), 16, 7);
lean_closure_set(v___f_4378_, 0, v_fvars_4354_);
lean_closure_set(v___f_4378_, 1, v_pre_4349_);
lean_closure_set(v___f_4378_, 2, v_post_4350_);
lean_closure_set(v___f_4378_, 3, v___x_4375_);
lean_closure_set(v___f_4378_, 4, v___x_4376_);
lean_closure_set(v___f_4378_, 5, v___x_4377_);
lean_closure_set(v___f_4378_, 6, v_body_4367_);
v___x_4379_ = 0;
v___x_4380_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg(v_declName_4364_, v_a_4371_, v_a_4374_, v___f_4378_, v_nondep_4368_, v___x_4379_, v_a_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
return v___x_4380_;
}
else
{
lean_dec(v_a_4371_);
lean_dec_ref(v_body_4367_);
lean_dec(v_declName_4364_);
lean_dec_ref(v_fvars_4354_);
lean_dec_ref(v_post_4350_);
lean_dec_ref(v_pre_4349_);
return v___x_4373_;
}
}
else
{
lean_dec_ref(v_body_4367_);
lean_dec_ref(v_value_4366_);
lean_dec(v_declName_4364_);
lean_dec_ref(v_fvars_4354_);
lean_dec_ref(v_post_4350_);
lean_dec_ref(v_pre_4349_);
return v___x_4370_;
}
}
else
{
lean_object* v___x_4381_; lean_object* v___x_4382_; 
v___x_4381_ = lean_expr_instantiate_rev(v_e_4355_, v_fvars_4354_);
lean_dec_ref(v_e_4355_);
lean_inc_ref(v_post_4350_);
lean_inc_ref(v_pre_4349_);
v___x_4382_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4349_, v_post_4350_, v_usedLetOnly_4351_, v_skipConstInApp_4352_, v_skipInstances_4353_, v___x_4381_, v_a_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; uint8_t v___x_4384_; uint8_t v___x_4385_; lean_object* v___x_4386_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___x_4382_, 1);
v___x_4384_ = 0;
v___x_4385_ = 1;
v___x_4386_ = l_Lean_Meta_mkLetFVars(v_fvars_4354_, v_a_4383_, v_usedLetOnly_4351_, v___x_4384_, v___x_4385_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
lean_dec_ref(v_fvars_4354_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4388_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4386_, 1);
v___x_4388_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4349_, v_post_4350_, v_usedLetOnly_4351_, v_skipConstInApp_4352_, v_skipInstances_4353_, v_a_4387_, v_a_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
return v___x_4388_;
}
else
{
lean_dec_ref(v_post_4350_);
lean_dec_ref(v_pre_4349_);
return v___x_4386_;
}
}
else
{
lean_dec_ref(v_fvars_4354_);
lean_dec_ref(v_post_4350_);
lean_dec_ref(v_pre_4349_);
return v___x_4382_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1(lean_object* v_pre_4389_, lean_object* v_post_4390_, uint8_t v_usedLetOnly_4391_, uint8_t v_skipConstInApp_4392_, uint8_t v_skipInstances_4393_, size_t v_sz_4394_, size_t v_i_4395_, lean_object* v_bs_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_){
_start:
{
uint8_t v___x_4405_; 
v___x_4405_ = lean_usize_dec_lt(v_i_4395_, v_sz_4394_);
if (v___x_4405_ == 0)
{
lean_object* v___x_4406_; 
lean_dec_ref(v_post_4390_);
lean_dec_ref(v_pre_4389_);
v___x_4406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4406_, 0, v_bs_4396_);
return v___x_4406_;
}
else
{
lean_object* v_v_4407_; lean_object* v___x_4408_; 
v_v_4407_ = lean_array_uget_borrowed(v_bs_4396_, v_i_4395_);
lean_inc(v_v_4407_);
lean_inc_ref(v_post_4390_);
lean_inc_ref(v_pre_4389_);
v___x_4408_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4389_, v_post_4390_, v_usedLetOnly_4391_, v_skipConstInApp_4392_, v_skipInstances_4393_, v_v_4407_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_);
if (lean_obj_tag(v___x_4408_) == 0)
{
lean_object* v_a_4409_; lean_object* v___x_4410_; lean_object* v_bs_x27_4411_; size_t v___x_4412_; size_t v___x_4413_; lean_object* v___x_4414_; 
v_a_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4409_);
lean_dec_ref_known(v___x_4408_, 1);
v___x_4410_ = lean_unsigned_to_nat(0u);
v_bs_x27_4411_ = lean_array_uset(v_bs_4396_, v_i_4395_, v___x_4410_);
v___x_4412_ = ((size_t)1ULL);
v___x_4413_ = lean_usize_add(v_i_4395_, v___x_4412_);
v___x_4414_ = lean_array_uset(v_bs_x27_4411_, v_i_4395_, v_a_4409_);
v_i_4395_ = v___x_4413_;
v_bs_4396_ = v___x_4414_;
goto _start;
}
else
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4423_; 
lean_dec_ref(v_bs_4396_);
lean_dec_ref(v_post_4390_);
lean_dec_ref(v_pre_4389_);
v_a_4416_ = lean_ctor_get(v___x_4408_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4408_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4418_ = v___x_4408_;
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v___x_4408_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_pre_4424_, lean_object* v_post_4425_, uint8_t v_usedLetOnly_4426_, uint8_t v_skipConstInApp_4427_, uint8_t v_skipInstances_4428_, lean_object* v___x_4429_, lean_object* v___y_4430_, lean_object* v_b_4431_, lean_object* v_a_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v___x_4440_; 
v___x_4440_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4424_, v_post_4425_, v_usedLetOnly_4426_, v_skipConstInApp_4427_, v_skipInstances_4428_, v___x_4429_, v___y_4430_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4450_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4443_ = v___x_4440_;
v_isShared_4444_ = v_isSharedCheck_4450_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4440_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4450_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4448_; 
v___x_4445_ = lean_array_fset(v_b_4431_, v_a_4432_, v_a_4441_);
v___x_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4445_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 0, v___x_4446_);
v___x_4448_ = v___x_4443_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v___x_4446_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec_ref(v_b_4431_);
v_a_4451_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4440_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4440_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_pre_4459_, lean_object* v_post_4460_, lean_object* v_usedLetOnly_4461_, lean_object* v_skipConstInApp_4462_, lean_object* v_skipInstances_4463_, lean_object* v___x_4464_, lean_object* v___y_4465_, lean_object* v_b_4466_, lean_object* v_a_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
uint8_t v_usedLetOnly_boxed_4475_; uint8_t v_skipConstInApp_boxed_4476_; uint8_t v_skipInstances_boxed_4477_; lean_object* v_res_4478_; 
v_usedLetOnly_boxed_4475_ = lean_unbox(v_usedLetOnly_4461_);
v_skipConstInApp_boxed_4476_ = lean_unbox(v_skipConstInApp_4462_);
v_skipInstances_boxed_4477_ = lean_unbox(v_skipInstances_4463_);
v_res_4478_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0(v_pre_4459_, v_post_4460_, v_usedLetOnly_boxed_4475_, v_skipConstInApp_boxed_4476_, v_skipInstances_boxed_4477_, v___x_4464_, v___y_4465_, v_b_4466_, v_a_4467_, v___y_4468_, v___y_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
lean_dec(v___y_4469_);
lean_dec_ref(v___y_4468_);
lean_dec(v_a_4467_);
lean_dec(v___y_4465_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg(lean_object* v_upperBound_4479_, lean_object* v___x_4480_, lean_object* v_pre_4481_, lean_object* v_post_4482_, uint8_t v_usedLetOnly_4483_, uint8_t v_skipConstInApp_4484_, uint8_t v_skipInstances_4485_, lean_object* v_a_4486_, lean_object* v_b_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_){
_start:
{
lean_object* v___y_4497_; uint8_t v___x_4520_; 
v___x_4520_ = lean_nat_dec_lt(v_a_4486_, v_upperBound_4479_);
if (v___x_4520_ == 0)
{
lean_object* v___x_4521_; 
lean_dec(v_a_4486_);
lean_dec_ref(v_post_4482_);
lean_dec_ref(v_pre_4481_);
v___x_4521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4521_, 0, v_b_4487_);
return v___x_4521_;
}
else
{
lean_object* v___x_4522_; lean_object* v___x_4523_; uint8_t v___x_4524_; 
v___x_4522_ = lean_array_fget_borrowed(v_b_4487_, v_a_4486_);
v___x_4523_ = lean_array_get_size(v___x_4480_);
v___x_4524_ = lean_nat_dec_lt(v_a_4486_, v___x_4523_);
if (v___x_4524_ == 0)
{
lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___f_4528_; 
lean_inc(v___x_4522_);
v___x_4525_ = lean_box(v_usedLetOnly_4483_);
v___x_4526_ = lean_box(v_skipConstInApp_4484_);
v___x_4527_ = lean_box(v_skipInstances_4485_);
lean_inc(v_a_4486_);
lean_inc(v___y_4488_);
lean_inc_ref(v_post_4482_);
lean_inc_ref(v_pre_4481_);
v___f_4528_ = lean_alloc_closure((void*)(lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_4528_, 0, v_pre_4481_);
lean_closure_set(v___f_4528_, 1, v_post_4482_);
lean_closure_set(v___f_4528_, 2, v___x_4525_);
lean_closure_set(v___f_4528_, 3, v___x_4526_);
lean_closure_set(v___f_4528_, 4, v___x_4527_);
lean_closure_set(v___f_4528_, 5, v___x_4522_);
lean_closure_set(v___f_4528_, 6, v___y_4488_);
lean_closure_set(v___f_4528_, 7, v_b_4487_);
lean_closure_set(v___f_4528_, 8, v_a_4486_);
v___y_4497_ = v___f_4528_;
goto v___jp_4496_;
}
else
{
lean_object* v___x_4529_; uint8_t v_isInstance_4530_; 
v___x_4529_ = lean_array_fget_borrowed(v___x_4480_, v_a_4486_);
v_isInstance_4530_ = lean_ctor_get_uint8(v___x_4529_, sizeof(void*)*1 + 4);
if (v_isInstance_4530_ == 0)
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___f_4534_; 
lean_inc(v___x_4522_);
v___x_4531_ = lean_box(v_usedLetOnly_4483_);
v___x_4532_ = lean_box(v_skipConstInApp_4484_);
v___x_4533_ = lean_box(v_skipInstances_4485_);
lean_inc(v_a_4486_);
lean_inc(v___y_4488_);
lean_inc_ref(v_post_4482_);
lean_inc_ref(v_pre_4481_);
v___f_4534_ = lean_alloc_closure((void*)(lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_4534_, 0, v_pre_4481_);
lean_closure_set(v___f_4534_, 1, v_post_4482_);
lean_closure_set(v___f_4534_, 2, v___x_4531_);
lean_closure_set(v___f_4534_, 3, v___x_4532_);
lean_closure_set(v___f_4534_, 4, v___x_4533_);
lean_closure_set(v___f_4534_, 5, v___x_4522_);
lean_closure_set(v___f_4534_, 6, v___y_4488_);
lean_closure_set(v___f_4534_, 7, v_b_4487_);
lean_closure_set(v___f_4534_, 8, v_a_4486_);
v___y_4497_ = v___f_4534_;
goto v___jp_4496_;
}
else
{
lean_object* v___x_4535_; lean_object* v___f_4536_; 
v___x_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4535_, 0, v_b_4487_);
v___f_4536_ = lean_alloc_closure((void*)(lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___lam__2___boxed), 8, 1);
lean_closure_set(v___f_4536_, 0, v___x_4535_);
v___y_4497_ = v___f_4536_;
goto v___jp_4496_;
}
}
}
v___jp_4496_:
{
lean_object* v___x_4498_; 
lean_inc(v___y_4494_);
lean_inc_ref(v___y_4493_);
lean_inc(v___y_4492_);
lean_inc_ref(v___y_4491_);
lean_inc(v___y_4490_);
lean_inc_ref(v___y_4489_);
v___x_4498_ = lean_apply_7(v___y_4497_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_, lean_box(0));
if (lean_obj_tag(v___x_4498_) == 0)
{
lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4511_; 
v_a_4499_ = lean_ctor_get(v___x_4498_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4498_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4501_ = v___x_4498_;
v_isShared_4502_ = v_isSharedCheck_4511_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_dec(v___x_4498_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4511_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
if (lean_obj_tag(v_a_4499_) == 0)
{
lean_object* v_a_4503_; lean_object* v___x_4505_; 
lean_dec(v_a_4486_);
lean_dec_ref(v_post_4482_);
lean_dec_ref(v_pre_4481_);
v_a_4503_ = lean_ctor_get(v_a_4499_, 0);
lean_inc(v_a_4503_);
lean_dec_ref_known(v_a_4499_, 1);
if (v_isShared_4502_ == 0)
{
lean_ctor_set(v___x_4501_, 0, v_a_4503_);
v___x_4505_ = v___x_4501_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4503_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
return v___x_4505_;
}
}
else
{
lean_object* v_a_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
lean_del_object(v___x_4501_);
v_a_4507_ = lean_ctor_get(v_a_4499_, 0);
lean_inc(v_a_4507_);
lean_dec_ref_known(v_a_4499_, 1);
v___x_4508_ = lean_unsigned_to_nat(1u);
v___x_4509_ = lean_nat_add(v_a_4486_, v___x_4508_);
lean_dec(v_a_4486_);
v_a_4486_ = v___x_4509_;
v_b_4487_ = v_a_4507_;
goto _start;
}
}
}
else
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
lean_dec(v_a_4486_);
lean_dec_ref(v_post_4482_);
lean_dec_ref(v_pre_4481_);
v_a_4512_ = lean_ctor_get(v___x_4498_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4498_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4498_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4498_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_a_4512_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7(uint8_t v_skipInstances_4537_, lean_object* v_pre_4538_, lean_object* v_post_4539_, uint8_t v_usedLetOnly_4540_, uint8_t v_skipConstInApp_4541_, lean_object* v_x_4542_, lean_object* v_x_4543_, lean_object* v_x_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_){
_start:
{
lean_object* v_f_4554_; lean_object* v___y_4555_; lean_object* v___y_4556_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4560_; lean_object* v___y_4561_; 
if (lean_obj_tag(v_x_4542_) == 5)
{
lean_object* v_fn_4604_; lean_object* v_arg_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v_fn_4604_ = lean_ctor_get(v_x_4542_, 0);
lean_inc_ref(v_fn_4604_);
v_arg_4605_ = lean_ctor_get(v_x_4542_, 1);
lean_inc_ref(v_arg_4605_);
lean_dec_ref_known(v_x_4542_, 2);
v___x_4606_ = lean_array_set(v_x_4543_, v_x_4544_, v_arg_4605_);
v___x_4607_ = lean_unsigned_to_nat(1u);
v___x_4608_ = lean_nat_sub(v_x_4544_, v___x_4607_);
lean_dec(v_x_4544_);
v_x_4542_ = v_fn_4604_;
v_x_4543_ = v___x_4606_;
v_x_4544_ = v___x_4608_;
goto _start;
}
else
{
lean_dec(v_x_4544_);
if (v_skipConstInApp_4541_ == 0)
{
goto v___jp_4601_;
}
else
{
uint8_t v___x_4610_; 
v___x_4610_ = l_Lean_Expr_isConst(v_x_4542_);
if (v___x_4610_ == 0)
{
goto v___jp_4601_;
}
else
{
v_f_4554_ = v_x_4542_;
v___y_4555_ = v___y_4545_;
v___y_4556_ = v___y_4546_;
v___y_4557_ = v___y_4547_;
v___y_4558_ = v___y_4548_;
v___y_4559_ = v___y_4549_;
v___y_4560_ = v___y_4550_;
v___y_4561_ = v___y_4551_;
goto v___jp_4553_;
}
}
}
v___jp_4553_:
{
if (v_skipInstances_4537_ == 0)
{
size_t v_sz_4562_; size_t v___x_4563_; lean_object* v___x_4564_; 
v_sz_4562_ = lean_array_size(v_x_4543_);
v___x_4563_ = ((size_t)0ULL);
lean_inc_ref(v_post_4539_);
lean_inc_ref(v_pre_4538_);
v___x_4564_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1(v_pre_4538_, v_post_4539_, v_usedLetOnly_4540_, v_skipConstInApp_4541_, v_skipInstances_4537_, v_sz_4562_, v___x_4563_, v_x_4543_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4564_) == 0)
{
lean_object* v_a_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v_a_4565_ = lean_ctor_get(v___x_4564_, 0);
lean_inc(v_a_4565_);
lean_dec_ref_known(v___x_4564_, 1);
v___x_4566_ = l_Lean_mkAppN(v_f_4554_, v_a_4565_);
lean_dec(v_a_4565_);
v___x_4567_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4538_, v_post_4539_, v_usedLetOnly_4540_, v_skipConstInApp_4541_, v_skipInstances_4537_, v___x_4566_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
return v___x_4567_;
}
else
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4575_; 
lean_dec_ref(v_f_4554_);
lean_dec_ref(v_post_4539_);
lean_dec_ref(v_pre_4538_);
v_a_4568_ = lean_ctor_get(v___x_4564_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4564_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4570_ = v___x_4564_;
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4564_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v___x_4573_; 
if (v_isShared_4571_ == 0)
{
v___x_4573_ = v___x_4570_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4568_);
v___x_4573_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
return v___x_4573_;
}
}
}
}
else
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = lean_array_get_size(v_x_4543_);
lean_inc_ref(v_f_4554_);
v___x_4577_ = l_Lean_Meta_getFunInfoNArgs(v_f_4554_, v___x_4576_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v_paramInfo_4579_; lean_object* v___x_4580_; lean_object* v___x_4581_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4578_);
lean_dec_ref_known(v___x_4577_, 1);
v_paramInfo_4579_ = lean_ctor_get(v_a_4578_, 0);
lean_inc_ref(v_paramInfo_4579_);
lean_dec(v_a_4578_);
v___x_4580_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_4539_);
lean_inc_ref(v_pre_4538_);
v___x_4581_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg(v___x_4576_, v_paramInfo_4579_, v_pre_4538_, v_post_4539_, v_usedLetOnly_4540_, v_skipConstInApp_4541_, v_skipInstances_4537_, v___x_4580_, v_x_4543_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
lean_dec_ref(v_paramInfo_4579_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v_a_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
v_a_4582_ = lean_ctor_get(v___x_4581_, 0);
lean_inc(v_a_4582_);
lean_dec_ref_known(v___x_4581_, 1);
v___x_4583_ = l_Lean_mkAppN(v_f_4554_, v_a_4582_);
lean_dec(v_a_4582_);
v___x_4584_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4538_, v_post_4539_, v_usedLetOnly_4540_, v_skipConstInApp_4541_, v_skipInstances_4537_, v___x_4583_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
return v___x_4584_;
}
else
{
lean_object* v_a_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4592_; 
lean_dec_ref(v_f_4554_);
lean_dec_ref(v_post_4539_);
lean_dec_ref(v_pre_4538_);
v_a_4585_ = lean_ctor_get(v___x_4581_, 0);
v_isSharedCheck_4592_ = !lean_is_exclusive(v___x_4581_);
if (v_isSharedCheck_4592_ == 0)
{
v___x_4587_ = v___x_4581_;
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_a_4585_);
lean_dec(v___x_4581_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v_a_4585_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
}
}
else
{
lean_object* v_a_4593_; lean_object* v___x_4595_; uint8_t v_isShared_4596_; uint8_t v_isSharedCheck_4600_; 
lean_dec_ref(v_f_4554_);
lean_dec_ref(v_x_4543_);
lean_dec_ref(v_post_4539_);
lean_dec_ref(v_pre_4538_);
v_a_4593_ = lean_ctor_get(v___x_4577_, 0);
v_isSharedCheck_4600_ = !lean_is_exclusive(v___x_4577_);
if (v_isSharedCheck_4600_ == 0)
{
v___x_4595_ = v___x_4577_;
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
else
{
lean_inc(v_a_4593_);
lean_dec(v___x_4577_);
v___x_4595_ = lean_box(0);
v_isShared_4596_ = v_isSharedCheck_4600_;
goto v_resetjp_4594_;
}
v_resetjp_4594_:
{
lean_object* v___x_4598_; 
if (v_isShared_4596_ == 0)
{
v___x_4598_ = v___x_4595_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4599_; 
v_reuseFailAlloc_4599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4599_, 0, v_a_4593_);
v___x_4598_ = v_reuseFailAlloc_4599_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
return v___x_4598_;
}
}
}
}
}
v___jp_4601_:
{
lean_object* v___x_4602_; 
lean_inc_ref(v_post_4539_);
lean_inc_ref(v_pre_4538_);
v___x_4602_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4538_, v_post_4539_, v_usedLetOnly_4540_, v_skipConstInApp_4541_, v_skipInstances_4537_, v_x_4542_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_, v___y_4551_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_object* v_a_4603_; 
v_a_4603_ = lean_ctor_get(v___x_4602_, 0);
lean_inc(v_a_4603_);
lean_dec_ref_known(v___x_4602_, 1);
v_f_4554_ = v_a_4603_;
v___y_4555_ = v___y_4545_;
v___y_4556_ = v___y_4546_;
v___y_4557_ = v___y_4547_;
v___y_4558_ = v___y_4548_;
v___y_4559_ = v___y_4549_;
v___y_4560_ = v___y_4550_;
v___y_4561_ = v___y_4551_;
goto v___jp_4553_;
}
else
{
lean_dec_ref(v_x_4543_);
lean_dec_ref(v_post_4539_);
lean_dec_ref(v_pre_4538_);
return v___x_4602_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1(lean_object* v___x_4611_, lean_object* v_pre_4612_, lean_object* v_e_4613_, lean_object* v_post_4614_, uint8_t v_usedLetOnly_4615_, uint8_t v_skipConstInApp_4616_, uint8_t v_skipInstances_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_){
_start:
{
lean_object* v___x_4626_; 
v___x_4626_ = l_Lean_Core_checkSystem(v___x_4611_, v___y_4623_, v___y_4624_);
if (lean_obj_tag(v___x_4626_) == 0)
{
lean_object* v___x_4627_; 
lean_dec_ref_known(v___x_4626_, 1);
lean_inc_ref(v_pre_4612_);
lean_inc(v___y_4624_);
lean_inc_ref(v___y_4623_);
lean_inc(v___y_4622_);
lean_inc_ref(v___y_4621_);
lean_inc(v___y_4620_);
lean_inc_ref(v___y_4619_);
lean_inc_ref(v_e_4613_);
v___x_4627_ = lean_apply_8(v_pre_4612_, v_e_4613_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_, lean_box(0));
if (lean_obj_tag(v___x_4627_) == 0)
{
lean_object* v_a_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4676_; 
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4630_ = v___x_4627_;
v_isShared_4631_ = v_isSharedCheck_4676_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_a_4628_);
lean_dec(v___x_4627_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4676_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v___y_4633_; 
switch(lean_obj_tag(v_a_4628_))
{
case 0:
{
lean_object* v_e_4668_; lean_object* v___x_4670_; 
lean_dec_ref(v_post_4614_);
lean_dec_ref(v_e_4613_);
lean_dec_ref(v_pre_4612_);
v_e_4668_ = lean_ctor_get(v_a_4628_, 0);
lean_inc_ref(v_e_4668_);
lean_dec_ref_known(v_a_4628_, 1);
if (v_isShared_4631_ == 0)
{
lean_ctor_set(v___x_4630_, 0, v_e_4668_);
v___x_4670_ = v___x_4630_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_e_4668_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
case 1:
{
lean_object* v_e_4672_; lean_object* v___x_4673_; 
lean_del_object(v___x_4630_);
lean_dec_ref(v_e_4613_);
v_e_4672_ = lean_ctor_get(v_a_4628_, 0);
lean_inc_ref(v_e_4672_);
lean_dec_ref_known(v_a_4628_, 1);
v___x_4673_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v_e_4672_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4673_;
}
default: 
{
lean_object* v_e_x3f_4674_; 
lean_del_object(v___x_4630_);
v_e_x3f_4674_ = lean_ctor_get(v_a_4628_, 0);
lean_inc(v_e_x3f_4674_);
lean_dec_ref_known(v_a_4628_, 1);
if (lean_obj_tag(v_e_x3f_4674_) == 0)
{
v___y_4633_ = v_e_4613_;
goto v___jp_4632_;
}
else
{
lean_object* v_val_4675_; 
lean_dec_ref(v_e_4613_);
v_val_4675_ = lean_ctor_get(v_e_x3f_4674_, 0);
lean_inc(v_val_4675_);
lean_dec_ref_known(v_e_x3f_4674_, 1);
v___y_4633_ = v_val_4675_;
goto v___jp_4632_;
}
}
}
v___jp_4632_:
{
switch(lean_obj_tag(v___y_4633_))
{
case 7:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
v___x_4634_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0));
v___x_4635_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___x_4634_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4635_;
}
case 6:
{
lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4636_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0));
v___x_4637_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___x_4636_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4637_;
}
case 8:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4638_ = ((lean_object*)(lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_unfold___closed__0));
v___x_4639_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___x_4638_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4639_;
}
case 5:
{
lean_object* v_dummy_4640_; lean_object* v_nargs_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_dummy_4640_ = lean_obj_once(&lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0, &lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0_once, _init_lp_vampireReplay___private_VampireReplay_Reconstruct_Rules_Definition_0__Vampire_Reconstruct_Definition_headOf___closed__0);
v_nargs_4641_ = l_Lean_Expr_getAppNumArgs(v___y_4633_);
lean_inc(v_nargs_4641_);
v___x_4642_ = lean_mk_array(v_nargs_4641_, v_dummy_4640_);
v___x_4643_ = lean_unsigned_to_nat(1u);
v___x_4644_ = lean_nat_sub(v_nargs_4641_, v___x_4643_);
lean_dec(v_nargs_4641_);
v___x_4645_ = lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7(v_skipInstances_4617_, v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v___y_4633_, v___x_4642_, v___x_4644_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4645_;
}
case 10:
{
lean_object* v_data_4646_; lean_object* v_expr_4647_; lean_object* v___x_4648_; 
v_data_4646_ = lean_ctor_get(v___y_4633_, 0);
v_expr_4647_ = lean_ctor_get(v___y_4633_, 1);
lean_inc_ref(v_expr_4647_);
lean_inc_ref(v_post_4614_);
lean_inc_ref(v_pre_4612_);
v___x_4648_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v_expr_4647_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; size_t v___x_4650_; size_t v___x_4651_; uint8_t v___x_4652_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4649_);
lean_dec_ref_known(v___x_4648_, 1);
v___x_4650_ = lean_ptr_addr(v_expr_4647_);
v___x_4651_ = lean_ptr_addr(v_a_4649_);
v___x_4652_ = lean_usize_dec_eq(v___x_4650_, v___x_4651_);
if (v___x_4652_ == 0)
{
lean_object* v___x_4653_; lean_object* v___x_4654_; 
lean_inc(v_data_4646_);
lean_dec_ref_known(v___y_4633_, 2);
v___x_4653_ = l_Lean_Expr_mdata___override(v_data_4646_, v_a_4649_);
v___x_4654_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___x_4653_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4654_;
}
else
{
lean_object* v___x_4655_; 
lean_dec(v_a_4649_);
v___x_4655_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4655_;
}
}
else
{
lean_dec_ref_known(v___y_4633_, 2);
lean_dec_ref(v_post_4614_);
lean_dec_ref(v_pre_4612_);
return v___x_4648_;
}
}
case 11:
{
lean_object* v_typeName_4656_; lean_object* v_idx_4657_; lean_object* v_struct_4658_; lean_object* v___x_4659_; 
v_typeName_4656_ = lean_ctor_get(v___y_4633_, 0);
v_idx_4657_ = lean_ctor_get(v___y_4633_, 1);
v_struct_4658_ = lean_ctor_get(v___y_4633_, 2);
lean_inc_ref(v_struct_4658_);
lean_inc_ref(v_post_4614_);
lean_inc_ref(v_pre_4612_);
v___x_4659_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v_struct_4658_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
if (lean_obj_tag(v___x_4659_) == 0)
{
lean_object* v_a_4660_; size_t v___x_4661_; size_t v___x_4662_; uint8_t v___x_4663_; 
v_a_4660_ = lean_ctor_get(v___x_4659_, 0);
lean_inc(v_a_4660_);
lean_dec_ref_known(v___x_4659_, 1);
v___x_4661_ = lean_ptr_addr(v_struct_4658_);
v___x_4662_ = lean_ptr_addr(v_a_4660_);
v___x_4663_ = lean_usize_dec_eq(v___x_4661_, v___x_4662_);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
lean_inc(v_idx_4657_);
lean_inc(v_typeName_4656_);
lean_dec_ref_known(v___y_4633_, 3);
v___x_4664_ = l_Lean_Expr_proj___override(v_typeName_4656_, v_idx_4657_, v_a_4660_);
v___x_4665_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___x_4664_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4665_;
}
else
{
lean_object* v___x_4666_; 
lean_dec(v_a_4660_);
v___x_4666_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4666_;
}
}
else
{
lean_dec_ref_known(v___y_4633_, 3);
lean_dec_ref(v_post_4614_);
lean_dec_ref(v_pre_4612_);
return v___x_4659_;
}
}
default: 
{
lean_object* v___x_4667_; 
v___x_4667_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4612_, v_post_4614_, v_usedLetOnly_4615_, v_skipConstInApp_4616_, v_skipInstances_4617_, v___y_4633_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
return v___x_4667_;
}
}
}
}
}
else
{
lean_object* v_a_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4684_; 
lean_dec_ref(v_post_4614_);
lean_dec_ref(v_e_4613_);
lean_dec_ref(v_pre_4612_);
v_a_4677_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4684_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4684_ == 0)
{
v___x_4679_ = v___x_4627_;
v_isShared_4680_ = v_isSharedCheck_4684_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_a_4677_);
lean_dec(v___x_4627_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4684_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v___x_4682_; 
if (v_isShared_4680_ == 0)
{
v___x_4682_ = v___x_4679_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4683_; 
v_reuseFailAlloc_4683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4683_, 0, v_a_4677_);
v___x_4682_ = v_reuseFailAlloc_4683_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
return v___x_4682_;
}
}
}
}
else
{
lean_object* v_a_4685_; lean_object* v___x_4687_; uint8_t v_isShared_4688_; uint8_t v_isSharedCheck_4692_; 
lean_dec_ref(v_post_4614_);
lean_dec_ref(v_e_4613_);
lean_dec_ref(v_pre_4612_);
v_a_4685_ = lean_ctor_get(v___x_4626_, 0);
v_isSharedCheck_4692_ = !lean_is_exclusive(v___x_4626_);
if (v_isSharedCheck_4692_ == 0)
{
v___x_4687_ = v___x_4626_;
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
else
{
lean_inc(v_a_4685_);
lean_dec(v___x_4626_);
v___x_4687_ = lean_box(0);
v_isShared_4688_ = v_isSharedCheck_4692_;
goto v_resetjp_4686_;
}
v_resetjp_4686_:
{
lean_object* v___x_4690_; 
if (v_isShared_4688_ == 0)
{
v___x_4690_ = v___x_4687_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v_a_4685_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1___boxed(lean_object* v___x_4693_, lean_object* v_pre_4694_, lean_object* v_e_4695_, lean_object* v_post_4696_, lean_object* v_usedLetOnly_4697_, lean_object* v_skipConstInApp_4698_, lean_object* v_skipInstances_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
uint8_t v_usedLetOnly_boxed_4708_; uint8_t v_skipConstInApp_boxed_4709_; uint8_t v_skipInstances_boxed_4710_; lean_object* v_res_4711_; 
v_usedLetOnly_boxed_4708_ = lean_unbox(v_usedLetOnly_4697_);
v_skipConstInApp_boxed_4709_ = lean_unbox(v_skipConstInApp_4698_);
v_skipInstances_boxed_4710_ = lean_unbox(v_skipInstances_4699_);
v_res_4711_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1(v___x_4693_, v_pre_4694_, v_e_4695_, v_post_4696_, v_usedLetOnly_boxed_4708_, v_skipConstInApp_boxed_4709_, v_skipInstances_boxed_4710_, v___y_4700_, v___y_4701_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_, v___y_4706_);
lean_dec(v___y_4706_);
lean_dec_ref(v___y_4705_);
lean_dec(v___y_4704_);
lean_dec_ref(v___y_4703_);
lean_dec(v___y_4702_);
lean_dec_ref(v___y_4701_);
lean_dec(v___y_4700_);
return v_res_4711_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(lean_object* v_pre_4712_, lean_object* v_post_4713_, uint8_t v_usedLetOnly_4714_, uint8_t v_skipConstInApp_4715_, uint8_t v_skipInstances_4716_, lean_object* v_e_4717_, lean_object* v_a_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v___x_4726_; lean_object* v___x_4727_; 
lean_inc(v_a_4718_);
v___x_4726_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4726_, 0, lean_box(0));
lean_closure_set(v___x_4726_, 1, lean_box(0));
lean_closure_set(v___x_4726_, 2, v_a_4718_);
v___x_4727_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0(lean_box(0), v___x_4726_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_);
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4762_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4762_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4762_ == 0)
{
v___x_4730_ = v___x_4727_;
v_isShared_4731_ = v_isSharedCheck_4762_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4727_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4762_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_ExprDefEq_0__Lean_Meta_CheckAssignment_findCached_x3f_spec__0___redArg(v_a_4728_, v_e_4717_);
lean_dec(v_a_4728_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___f_4737_; lean_object* v___x_4738_; 
lean_del_object(v___x_4730_);
v___x_4733_ = ((lean_object*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___closed__0));
v___x_4734_ = lean_box(v_usedLetOnly_4714_);
v___x_4735_ = lean_box(v_skipConstInApp_4715_);
v___x_4736_ = lean_box(v_skipInstances_4716_);
lean_inc_ref(v_e_4717_);
v___f_4737_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__1___boxed), 15, 7);
lean_closure_set(v___f_4737_, 0, v___x_4733_);
lean_closure_set(v___f_4737_, 1, v_pre_4712_);
lean_closure_set(v___f_4737_, 2, v_e_4717_);
lean_closure_set(v___f_4737_, 3, v_post_4713_);
lean_closure_set(v___f_4737_, 4, v___x_4734_);
lean_closure_set(v___f_4737_, 5, v___x_4735_);
lean_closure_set(v___f_4737_, 6, v___x_4736_);
v___x_4738_ = lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg(v___f_4737_, v_a_4718_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___f_4740_; lean_object* v___x_4741_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc_n(v_a_4739_, 2);
lean_dec_ref_known(v___x_4738_, 1);
lean_inc(v_a_4718_);
v___f_4740_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4740_, 0, v_a_4718_);
lean_closure_set(v___f_4740_, 1, v_e_4717_);
lean_closure_set(v___f_4740_, 2, v_a_4739_);
v___x_4741_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___lam__0(lean_box(0), v___f_4740_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4748_; 
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4748_ == 0)
{
lean_object* v_unused_4749_; 
v_unused_4749_ = lean_ctor_get(v___x_4741_, 0);
lean_dec(v_unused_4749_);
v___x_4743_ = v___x_4741_;
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
else
{
lean_dec(v___x_4741_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v___x_4746_; 
if (v_isShared_4744_ == 0)
{
lean_ctor_set(v___x_4743_, 0, v_a_4739_);
v___x_4746_ = v___x_4743_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_a_4739_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
else
{
lean_object* v_a_4750_; lean_object* v___x_4752_; uint8_t v_isShared_4753_; uint8_t v_isSharedCheck_4757_; 
lean_dec(v_a_4739_);
v_a_4750_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4752_ = v___x_4741_;
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
else
{
lean_inc(v_a_4750_);
lean_dec(v___x_4741_);
v___x_4752_ = lean_box(0);
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
v_resetjp_4751_:
{
lean_object* v___x_4755_; 
if (v_isShared_4753_ == 0)
{
v___x_4755_ = v___x_4752_;
goto v_reusejp_4754_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_a_4750_);
v___x_4755_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4754_;
}
v_reusejp_4754_:
{
return v___x_4755_;
}
}
}
}
else
{
lean_dec_ref(v_e_4717_);
return v___x_4738_;
}
}
else
{
lean_object* v_val_4758_; lean_object* v___x_4760_; 
lean_dec_ref(v_e_4717_);
lean_dec_ref(v_post_4713_);
lean_dec_ref(v_pre_4712_);
v_val_4758_ = lean_ctor_get(v___x_4732_, 0);
lean_inc(v_val_4758_);
lean_dec_ref_known(v___x_4732_, 1);
if (v_isShared_4731_ == 0)
{
lean_ctor_set(v___x_4730_, 0, v_val_4758_);
v___x_4760_ = v___x_4730_;
goto v_reusejp_4759_;
}
else
{
lean_object* v_reuseFailAlloc_4761_; 
v_reuseFailAlloc_4761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4761_, 0, v_val_4758_);
v___x_4760_ = v_reuseFailAlloc_4761_;
goto v_reusejp_4759_;
}
v_reusejp_4759_:
{
return v___x_4760_;
}
}
}
}
else
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4770_; 
lean_dec_ref(v_e_4717_);
lean_dec_ref(v_post_4713_);
lean_dec_ref(v_pre_4712_);
v_a_4763_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4770_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4770_ == 0)
{
v___x_4765_ = v___x_4727_;
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v___x_4727_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4770_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
return v___x_4768_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0___boxed(lean_object* v_fvars_4771_, lean_object* v_pre_4772_, lean_object* v_post_4773_, lean_object* v_usedLetOnly_4774_, lean_object* v_skipConstInApp_4775_, lean_object* v_skipInstances_4776_, lean_object* v_body_4777_, lean_object* v_x_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_){
_start:
{
uint8_t v_usedLetOnly_boxed_4787_; uint8_t v_skipConstInApp_boxed_4788_; uint8_t v_skipInstances_boxed_4789_; lean_object* v_res_4790_; 
v_usedLetOnly_boxed_4787_ = lean_unbox(v_usedLetOnly_4774_);
v_skipConstInApp_boxed_4788_ = lean_unbox(v_skipConstInApp_4775_);
v_skipInstances_boxed_4789_ = lean_unbox(v_skipInstances_4776_);
v_res_4790_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0(v_fvars_4771_, v_pre_4772_, v_post_4773_, v_usedLetOnly_boxed_4787_, v_skipConstInApp_boxed_4788_, v_skipInstances_boxed_4789_, v_body_4777_, v_x_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_, v___y_4785_);
lean_dec(v___y_4785_);
lean_dec_ref(v___y_4784_);
lean_dec(v___y_4783_);
lean_dec_ref(v___y_4782_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4(lean_object* v_pre_4791_, lean_object* v_post_4792_, uint8_t v_usedLetOnly_4793_, uint8_t v_skipConstInApp_4794_, uint8_t v_skipInstances_4795_, lean_object* v_fvars_4796_, lean_object* v_e_4797_, lean_object* v_a_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_){
_start:
{
if (lean_obj_tag(v_e_4797_) == 7)
{
lean_object* v_binderName_4806_; lean_object* v_binderType_4807_; lean_object* v_body_4808_; uint8_t v_binderInfo_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; 
v_binderName_4806_ = lean_ctor_get(v_e_4797_, 0);
lean_inc(v_binderName_4806_);
v_binderType_4807_ = lean_ctor_get(v_e_4797_, 1);
lean_inc_ref(v_binderType_4807_);
v_body_4808_ = lean_ctor_get(v_e_4797_, 2);
lean_inc_ref(v_body_4808_);
v_binderInfo_4809_ = lean_ctor_get_uint8(v_e_4797_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_4797_, 3);
v___x_4810_ = lean_expr_instantiate_rev(v_binderType_4807_, v_fvars_4796_);
lean_dec_ref(v_binderType_4807_);
lean_inc_ref(v_post_4792_);
lean_inc_ref(v_pre_4791_);
v___x_4811_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4791_, v_post_4792_, v_usedLetOnly_4793_, v_skipConstInApp_4794_, v_skipInstances_4795_, v___x_4810_, v_a_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
if (lean_obj_tag(v___x_4811_) == 0)
{
lean_object* v_a_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___f_4816_; uint8_t v___x_4817_; lean_object* v___x_4818_; 
v_a_4812_ = lean_ctor_get(v___x_4811_, 0);
lean_inc(v_a_4812_);
lean_dec_ref_known(v___x_4811_, 1);
v___x_4813_ = lean_box(v_usedLetOnly_4793_);
v___x_4814_ = lean_box(v_skipConstInApp_4794_);
v___x_4815_ = lean_box(v_skipInstances_4795_);
v___f_4816_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0___boxed), 16, 7);
lean_closure_set(v___f_4816_, 0, v_fvars_4796_);
lean_closure_set(v___f_4816_, 1, v_pre_4791_);
lean_closure_set(v___f_4816_, 2, v_post_4792_);
lean_closure_set(v___f_4816_, 3, v___x_4813_);
lean_closure_set(v___f_4816_, 4, v___x_4814_);
lean_closure_set(v___f_4816_, 5, v___x_4815_);
lean_closure_set(v___f_4816_, 6, v_body_4808_);
v___x_4817_ = 0;
v___x_4818_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(v_binderName_4806_, v_binderInfo_4809_, v_a_4812_, v___f_4816_, v___x_4817_, v_a_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
return v___x_4818_;
}
else
{
lean_dec_ref(v_body_4808_);
lean_dec(v_binderName_4806_);
lean_dec_ref(v_fvars_4796_);
lean_dec_ref(v_post_4792_);
lean_dec_ref(v_pre_4791_);
return v___x_4811_;
}
}
else
{
lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___x_4819_ = lean_expr_instantiate_rev(v_e_4797_, v_fvars_4796_);
lean_dec_ref(v_e_4797_);
lean_inc_ref(v_post_4792_);
lean_inc_ref(v_pre_4791_);
v___x_4820_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4791_, v_post_4792_, v_usedLetOnly_4793_, v_skipConstInApp_4794_, v_skipInstances_4795_, v___x_4819_, v_a_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
if (lean_obj_tag(v___x_4820_) == 0)
{
lean_object* v_a_4821_; uint8_t v___x_4822_; uint8_t v___x_4823_; uint8_t v___x_4824_; lean_object* v___x_4825_; 
v_a_4821_ = lean_ctor_get(v___x_4820_, 0);
lean_inc(v_a_4821_);
lean_dec_ref_known(v___x_4820_, 1);
v___x_4822_ = 0;
v___x_4823_ = 1;
v___x_4824_ = 1;
v___x_4825_ = l_Lean_Meta_mkForallFVars(v_fvars_4796_, v_a_4821_, v___x_4822_, v_usedLetOnly_4793_, v___x_4823_, v___x_4824_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
lean_dec_ref(v_fvars_4796_);
if (lean_obj_tag(v___x_4825_) == 0)
{
lean_object* v_a_4826_; lean_object* v___x_4827_; 
v_a_4826_ = lean_ctor_get(v___x_4825_, 0);
lean_inc(v_a_4826_);
lean_dec_ref_known(v___x_4825_, 1);
v___x_4827_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4791_, v_post_4792_, v_usedLetOnly_4793_, v_skipConstInApp_4794_, v_skipInstances_4795_, v_a_4826_, v_a_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
return v___x_4827_;
}
else
{
lean_dec_ref(v_post_4792_);
lean_dec_ref(v_pre_4791_);
return v___x_4825_;
}
}
else
{
lean_dec_ref(v_fvars_4796_);
lean_dec_ref(v_post_4792_);
lean_dec_ref(v_pre_4791_);
return v___x_4820_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___lam__0(lean_object* v_fvars_4828_, lean_object* v_pre_4829_, lean_object* v_post_4830_, uint8_t v_usedLetOnly_4831_, uint8_t v_skipConstInApp_4832_, uint8_t v_skipInstances_4833_, lean_object* v_body_4834_, lean_object* v_x_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4844_ = lean_array_push(v_fvars_4828_, v_x_4835_);
v___x_4845_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4(v_pre_4829_, v_post_4830_, v_usedLetOnly_4831_, v_skipConstInApp_4832_, v_skipInstances_4833_, v___x_4844_, v_body_4834_, v___y_4836_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4845_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_4846_, lean_object* v_post_4847_, lean_object* v_usedLetOnly_4848_, lean_object* v_skipConstInApp_4849_, lean_object* v_skipInstances_4850_, lean_object* v_e_4851_, lean_object* v_a_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_){
_start:
{
uint8_t v_usedLetOnly_boxed_4860_; uint8_t v_skipConstInApp_boxed_4861_; uint8_t v_skipInstances_boxed_4862_; lean_object* v_res_4863_; 
v_usedLetOnly_boxed_4860_ = lean_unbox(v_usedLetOnly_4848_);
v_skipConstInApp_boxed_4861_ = lean_unbox(v_skipConstInApp_4849_);
v_skipInstances_boxed_4862_ = lean_unbox(v_skipInstances_4850_);
v_res_4863_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__2(v_pre_4846_, v_post_4847_, v_usedLetOnly_boxed_4860_, v_skipConstInApp_boxed_4861_, v_skipInstances_boxed_4862_, v_e_4851_, v_a_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_);
lean_dec(v___y_4858_);
lean_dec_ref(v___y_4857_);
lean_dec(v___y_4856_);
lean_dec_ref(v___y_4855_);
lean_dec(v___y_4854_);
lean_dec_ref(v___y_4853_);
lean_dec(v_a_4852_);
return v_res_4863_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_4864_, lean_object* v_post_4865_, lean_object* v_usedLetOnly_4866_, lean_object* v_skipConstInApp_4867_, lean_object* v_skipInstances_4868_, lean_object* v_sz_4869_, lean_object* v_i_4870_, lean_object* v_bs_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_){
_start:
{
uint8_t v_usedLetOnly_boxed_4880_; uint8_t v_skipConstInApp_boxed_4881_; uint8_t v_skipInstances_boxed_4882_; size_t v_sz_boxed_4883_; size_t v_i_boxed_4884_; lean_object* v_res_4885_; 
v_usedLetOnly_boxed_4880_ = lean_unbox(v_usedLetOnly_4866_);
v_skipConstInApp_boxed_4881_ = lean_unbox(v_skipConstInApp_4867_);
v_skipInstances_boxed_4882_ = lean_unbox(v_skipInstances_4868_);
v_sz_boxed_4883_ = lean_unbox_usize(v_sz_4869_);
lean_dec(v_sz_4869_);
v_i_boxed_4884_ = lean_unbox_usize(v_i_4870_);
lean_dec(v_i_4870_);
v_res_4885_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__1(v_pre_4864_, v_post_4865_, v_usedLetOnly_boxed_4880_, v_skipConstInApp_boxed_4881_, v_skipInstances_boxed_4882_, v_sz_boxed_4883_, v_i_boxed_4884_, v_bs_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_);
lean_dec(v___y_4878_);
lean_dec_ref(v___y_4877_);
lean_dec(v___y_4876_);
lean_dec_ref(v___y_4875_);
lean_dec(v___y_4874_);
lean_dec_ref(v___y_4873_);
lean_dec(v___y_4872_);
return v_res_4885_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0___boxed(lean_object* v_pre_4886_, lean_object* v_post_4887_, lean_object* v_usedLetOnly_4888_, lean_object* v_skipConstInApp_4889_, lean_object* v_skipInstances_4890_, lean_object* v_e_4891_, lean_object* v_a_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_){
_start:
{
uint8_t v_usedLetOnly_boxed_4900_; uint8_t v_skipConstInApp_boxed_4901_; uint8_t v_skipInstances_boxed_4902_; lean_object* v_res_4903_; 
v_usedLetOnly_boxed_4900_ = lean_unbox(v_usedLetOnly_4888_);
v_skipConstInApp_boxed_4901_ = lean_unbox(v_skipConstInApp_4889_);
v_skipInstances_boxed_4902_ = lean_unbox(v_skipInstances_4890_);
v_res_4903_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_4886_, v_post_4887_, v_usedLetOnly_boxed_4900_, v_skipConstInApp_boxed_4901_, v_skipInstances_boxed_4902_, v_e_4891_, v_a_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_, v___y_4898_);
lean_dec(v___y_4898_);
lean_dec_ref(v___y_4897_);
lean_dec(v___y_4896_);
lean_dec_ref(v___y_4895_);
lean_dec(v___y_4894_);
lean_dec_ref(v___y_4893_);
lean_dec(v_a_4892_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_4904_, lean_object* v_post_4905_, lean_object* v_usedLetOnly_4906_, lean_object* v_skipConstInApp_4907_, lean_object* v_skipInstances_4908_, lean_object* v_fvars_4909_, lean_object* v_e_4910_, lean_object* v_a_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_){
_start:
{
uint8_t v_usedLetOnly_boxed_4919_; uint8_t v_skipConstInApp_boxed_4920_; uint8_t v_skipInstances_boxed_4921_; lean_object* v_res_4922_; 
v_usedLetOnly_boxed_4919_ = lean_unbox(v_usedLetOnly_4906_);
v_skipConstInApp_boxed_4920_ = lean_unbox(v_skipConstInApp_4907_);
v_skipInstances_boxed_4921_ = lean_unbox(v_skipInstances_4908_);
v_res_4922_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4(v_pre_4904_, v_post_4905_, v_usedLetOnly_boxed_4919_, v_skipConstInApp_boxed_4920_, v_skipInstances_boxed_4921_, v_fvars_4909_, v_e_4910_, v_a_4911_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_, v___y_4916_, v___y_4917_);
lean_dec(v___y_4917_);
lean_dec_ref(v___y_4916_);
lean_dec(v___y_4915_);
lean_dec_ref(v___y_4914_);
lean_dec(v___y_4913_);
lean_dec_ref(v___y_4912_);
lean_dec(v_a_4911_);
return v_res_4922_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5___boxed(lean_object* v_pre_4923_, lean_object* v_post_4924_, lean_object* v_usedLetOnly_4925_, lean_object* v_skipConstInApp_4926_, lean_object* v_skipInstances_4927_, lean_object* v_fvars_4928_, lean_object* v_e_4929_, lean_object* v_a_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_){
_start:
{
uint8_t v_usedLetOnly_boxed_4938_; uint8_t v_skipConstInApp_boxed_4939_; uint8_t v_skipInstances_boxed_4940_; lean_object* v_res_4941_; 
v_usedLetOnly_boxed_4938_ = lean_unbox(v_usedLetOnly_4925_);
v_skipConstInApp_boxed_4939_ = lean_unbox(v_skipConstInApp_4926_);
v_skipInstances_boxed_4940_ = lean_unbox(v_skipInstances_4927_);
v_res_4941_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__5(v_pre_4923_, v_post_4924_, v_usedLetOnly_boxed_4938_, v_skipConstInApp_boxed_4939_, v_skipInstances_boxed_4940_, v_fvars_4928_, v_e_4929_, v_a_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_);
lean_dec(v___y_4936_);
lean_dec_ref(v___y_4935_);
lean_dec(v___y_4934_);
lean_dec_ref(v___y_4933_);
lean_dec(v___y_4932_);
lean_dec_ref(v___y_4931_);
lean_dec(v_a_4930_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6___boxed(lean_object* v_pre_4942_, lean_object* v_post_4943_, lean_object* v_usedLetOnly_4944_, lean_object* v_skipConstInApp_4945_, lean_object* v_skipInstances_4946_, lean_object* v_fvars_4947_, lean_object* v_e_4948_, lean_object* v_a_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_){
_start:
{
uint8_t v_usedLetOnly_boxed_4957_; uint8_t v_skipConstInApp_boxed_4958_; uint8_t v_skipInstances_boxed_4959_; lean_object* v_res_4960_; 
v_usedLetOnly_boxed_4957_ = lean_unbox(v_usedLetOnly_4944_);
v_skipConstInApp_boxed_4958_ = lean_unbox(v_skipConstInApp_4945_);
v_skipInstances_boxed_4959_ = lean_unbox(v_skipInstances_4946_);
v_res_4960_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6(v_pre_4942_, v_post_4943_, v_usedLetOnly_boxed_4957_, v_skipConstInApp_boxed_4958_, v_skipInstances_boxed_4959_, v_fvars_4947_, v_e_4948_, v_a_4949_, v___y_4950_, v___y_4951_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_);
lean_dec(v___y_4955_);
lean_dec_ref(v___y_4954_);
lean_dec(v___y_4953_);
lean_dec_ref(v___y_4952_);
lean_dec(v___y_4951_);
lean_dec_ref(v___y_4950_);
lean_dec(v_a_4949_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_4961_ = _args[0];
lean_object* v___x_4962_ = _args[1];
lean_object* v_pre_4963_ = _args[2];
lean_object* v_post_4964_ = _args[3];
lean_object* v_usedLetOnly_4965_ = _args[4];
lean_object* v_skipConstInApp_4966_ = _args[5];
lean_object* v_skipInstances_4967_ = _args[6];
lean_object* v_a_4968_ = _args[7];
lean_object* v_b_4969_ = _args[8];
lean_object* v___y_4970_ = _args[9];
lean_object* v___y_4971_ = _args[10];
lean_object* v___y_4972_ = _args[11];
lean_object* v___y_4973_ = _args[12];
lean_object* v___y_4974_ = _args[13];
lean_object* v___y_4975_ = _args[14];
lean_object* v___y_4976_ = _args[15];
lean_object* v___y_4977_ = _args[16];
_start:
{
uint8_t v_usedLetOnly_boxed_4978_; uint8_t v_skipConstInApp_boxed_4979_; uint8_t v_skipInstances_boxed_4980_; lean_object* v_res_4981_; 
v_usedLetOnly_boxed_4978_ = lean_unbox(v_usedLetOnly_4965_);
v_skipConstInApp_boxed_4979_ = lean_unbox(v_skipConstInApp_4966_);
v_skipInstances_boxed_4980_ = lean_unbox(v_skipInstances_4967_);
v_res_4981_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg(v_upperBound_4961_, v___x_4962_, v_pre_4963_, v_post_4964_, v_usedLetOnly_boxed_4978_, v_skipConstInApp_boxed_4979_, v_skipInstances_boxed_4980_, v_a_4968_, v_b_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, v___y_4974_, v___y_4975_, v___y_4976_);
lean_dec(v___y_4976_);
lean_dec_ref(v___y_4975_);
lean_dec(v___y_4974_);
lean_dec_ref(v___y_4973_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
lean_dec(v___y_4970_);
lean_dec_ref(v___x_4962_);
lean_dec(v_upperBound_4961_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7___boxed(lean_object* v_skipInstances_4982_, lean_object* v_pre_4983_, lean_object* v_post_4984_, lean_object* v_usedLetOnly_4985_, lean_object* v_skipConstInApp_4986_, lean_object* v_x_4987_, lean_object* v_x_4988_, lean_object* v_x_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
uint8_t v_skipInstances_boxed_4998_; uint8_t v_usedLetOnly_boxed_4999_; uint8_t v_skipConstInApp_boxed_5000_; lean_object* v_res_5001_; 
v_skipInstances_boxed_4998_ = lean_unbox(v_skipInstances_4982_);
v_usedLetOnly_boxed_4999_ = lean_unbox(v_usedLetOnly_4985_);
v_skipConstInApp_boxed_5000_ = lean_unbox(v_skipConstInApp_4986_);
v_res_5001_ = lp_vampireReplay_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__7(v_skipInstances_boxed_4998_, v_pre_4983_, v_post_4984_, v_usedLetOnly_boxed_4999_, v_skipConstInApp_boxed_5000_, v_x_4987_, v_x_4988_, v_x_4989_, v___y_4990_, v___y_4991_, v___y_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
lean_dec(v___y_4996_);
lean_dec_ref(v___y_4995_);
lean_dec(v___y_4994_);
lean_dec_ref(v___y_4993_);
lean_dec(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec(v___y_4990_);
return v_res_5001_;
}
}
static lean_object* _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_5002_ = lean_box(0);
v___x_5003_ = lean_unsigned_to_nat(16u);
v___x_5004_ = lean_mk_array(v___x_5003_, v___x_5002_);
return v___x_5004_;
}
}
static lean_object* _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1(void){
_start:
{
lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_5005_ = lean_obj_once(&lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0, &lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0_once, _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__0);
v___x_5006_ = lean_unsigned_to_nat(0u);
v___x_5007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5007_, 0, v___x_5006_);
lean_ctor_set(v___x_5007_, 1, v___x_5005_);
return v___x_5007_;
}
}
static lean_object* _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2(void){
_start:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5008_ = lean_obj_once(&lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1, &lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1_once, _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__1);
v___x_5009_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_5009_, 0, lean_box(0));
lean_closure_set(v___x_5009_, 1, lean_box(0));
lean_closure_set(v___x_5009_, 2, v___x_5008_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0(lean_object* v_input_5010_, lean_object* v_pre_5011_, lean_object* v_post_5012_, uint8_t v_usedLetOnly_5013_, uint8_t v_skipConstInApp_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_){
_start:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v_a_5024_; uint8_t v___x_5025_; lean_object* v___x_5026_; 
v___x_5022_ = lean_obj_once(&lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2, &lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2_once, _init_lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___closed__2);
v___x_5023_ = lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0(lean_box(0), v___x_5022_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_);
v_a_5024_ = lean_ctor_get(v___x_5023_, 0);
lean_inc(v_a_5024_);
lean_dec_ref(v___x_5023_);
v___x_5025_ = 0;
v___x_5026_ = lp_vampireReplay___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0(v_pre_5011_, v_post_5012_, v_usedLetOnly_5013_, v_skipConstInApp_5014_, v___x_5025_, v_input_5010_, v_a_5024_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_);
if (lean_obj_tag(v___x_5026_) == 0)
{
lean_object* v_a_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5031_; uint8_t v_isShared_5032_; uint8_t v_isSharedCheck_5036_; 
v_a_5027_ = lean_ctor_get(v___x_5026_, 0);
lean_inc(v_a_5027_);
lean_dec_ref_known(v___x_5026_, 1);
v___x_5028_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_5028_, 0, lean_box(0));
lean_closure_set(v___x_5028_, 1, lean_box(0));
lean_closure_set(v___x_5028_, 2, v_a_5024_);
v___x_5029_ = lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___lam__0(lean_box(0), v___x_5028_, v___y_5015_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_);
v_isSharedCheck_5036_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5036_ == 0)
{
lean_object* v_unused_5037_; 
v_unused_5037_ = lean_ctor_get(v___x_5029_, 0);
lean_dec(v_unused_5037_);
v___x_5031_ = v___x_5029_;
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
else
{
lean_dec(v___x_5029_);
v___x_5031_ = lean_box(0);
v_isShared_5032_ = v_isSharedCheck_5036_;
goto v_resetjp_5030_;
}
v_resetjp_5030_:
{
lean_object* v___x_5034_; 
if (v_isShared_5032_ == 0)
{
lean_ctor_set(v___x_5031_, 0, v_a_5027_);
v___x_5034_ = v___x_5031_;
goto v_reusejp_5033_;
}
else
{
lean_object* v_reuseFailAlloc_5035_; 
v_reuseFailAlloc_5035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5035_, 0, v_a_5027_);
v___x_5034_ = v_reuseFailAlloc_5035_;
goto v_reusejp_5033_;
}
v_reusejp_5033_:
{
return v___x_5034_;
}
}
}
else
{
lean_dec(v_a_5024_);
return v___x_5026_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0___boxed(lean_object* v_input_5038_, lean_object* v_pre_5039_, lean_object* v_post_5040_, lean_object* v_usedLetOnly_5041_, lean_object* v_skipConstInApp_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
uint8_t v_usedLetOnly_boxed_5050_; uint8_t v_skipConstInApp_boxed_5051_; lean_object* v_res_5052_; 
v_usedLetOnly_boxed_5050_ = lean_unbox(v_usedLetOnly_5041_);
v_skipConstInApp_boxed_5051_ = lean_unbox(v_skipConstInApp_5042_);
v_res_5052_ = lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0(v_input_5038_, v_pre_5039_, v_post_5040_, v_usedLetOnly_boxed_5050_, v_skipConstInApp_boxed_5051_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_);
lean_dec(v___y_5048_);
lean_dec_ref(v___y_5047_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
lean_dec(v___y_5044_);
lean_dec_ref(v___y_5043_);
return v_res_5052_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom(lean_object* v_step_5055_, lean_object* v_a_5056_, lean_object* v_a_5057_, lean_object* v_a_5058_, lean_object* v_a_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_){
_start:
{
lean_object* v___x_5063_; 
v___x_5063_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_5055_, v_a_5056_, v_a_5057_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v___f_5065_; lean_object* v___f_5066_; uint8_t v___x_5067_; lean_object* v___x_5068_; 
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc_n(v_a_5064_, 2);
lean_dec_ref_known(v___x_5063_, 1);
v___f_5065_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__0));
v___f_5066_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___closed__1));
v___x_5067_ = 0;
v___x_5068_ = lp_vampireReplay_Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0(v_a_5064_, v___f_5065_, v___f_5066_, v___x_5067_, v___x_5067_, v_a_5056_, v_a_5057_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5070_; 
v_a_5069_ = lean_ctor_get(v___x_5068_, 0);
lean_inc(v_a_5069_);
lean_dec_ref_known(v___x_5068_, 1);
v___x_5070_ = lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition(v_a_5069_, v_a_5056_, v_a_5057_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_object* v_a_5071_; lean_object* v___x_5072_; 
v_a_5071_ = lean_ctor_get(v___x_5070_, 0);
lean_inc(v_a_5071_);
lean_dec_ref_known(v___x_5070_, 1);
v___x_5072_ = l_Lean_Meta_mkExpectedTypeHint(v_a_5071_, v_a_5064_, v_a_5058_, v_a_5059_, v_a_5060_, v_a_5061_);
return v___x_5072_;
}
else
{
lean_dec(v_a_5064_);
return v___x_5070_;
}
}
else
{
lean_dec(v_a_5064_);
return v___x_5068_;
}
}
else
{
return v___x_5063_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom___boxed(lean_object* v_step_5073_, lean_object* v_a_5074_, lean_object* v_a_5075_, lean_object* v_a_5076_, lean_object* v_a_5077_, lean_object* v_a_5078_, lean_object* v_a_5079_, lean_object* v_a_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = lp_vampireReplay_Vampire_Reconstruct_Definition_equalityProxyAxiom(v_step_5073_, v_a_5074_, v_a_5075_, v_a_5076_, v_a_5077_, v_a_5078_, v_a_5079_);
lean_dec(v_a_5079_);
lean_dec_ref(v_a_5078_);
lean_dec(v_a_5077_);
lean_dec_ref(v_a_5076_);
lean_dec(v_a_5075_);
lean_dec_ref(v_a_5074_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3(lean_object* v_upperBound_5082_, lean_object* v___x_5083_, lean_object* v_pre_5084_, lean_object* v_post_5085_, uint8_t v_usedLetOnly_5086_, uint8_t v_skipConstInApp_5087_, uint8_t v_skipInstances_5088_, lean_object* v___x_5089_, lean_object* v_inst_5090_, lean_object* v_R_5091_, lean_object* v_a_5092_, lean_object* v_b_5093_, lean_object* v_c_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_){
_start:
{
lean_object* v___x_5103_; 
v___x_5103_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___redArg(v_upperBound_5082_, v___x_5083_, v_pre_5084_, v_post_5085_, v_usedLetOnly_5086_, v_skipConstInApp_5087_, v_skipInstances_5088_, v_a_5092_, v_b_5093_, v___y_5095_, v___y_5096_, v___y_5097_, v___y_5098_, v___y_5099_, v___y_5100_, v___y_5101_);
return v___x_5103_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3___boxed(lean_object** _args){
lean_object* v_upperBound_5104_ = _args[0];
lean_object* v___x_5105_ = _args[1];
lean_object* v_pre_5106_ = _args[2];
lean_object* v_post_5107_ = _args[3];
lean_object* v_usedLetOnly_5108_ = _args[4];
lean_object* v_skipConstInApp_5109_ = _args[5];
lean_object* v_skipInstances_5110_ = _args[6];
lean_object* v___x_5111_ = _args[7];
lean_object* v_inst_5112_ = _args[8];
lean_object* v_R_5113_ = _args[9];
lean_object* v_a_5114_ = _args[10];
lean_object* v_b_5115_ = _args[11];
lean_object* v_c_5116_ = _args[12];
lean_object* v___y_5117_ = _args[13];
lean_object* v___y_5118_ = _args[14];
lean_object* v___y_5119_ = _args[15];
lean_object* v___y_5120_ = _args[16];
lean_object* v___y_5121_ = _args[17];
lean_object* v___y_5122_ = _args[18];
lean_object* v___y_5123_ = _args[19];
lean_object* v___y_5124_ = _args[20];
_start:
{
uint8_t v_usedLetOnly_boxed_5125_; uint8_t v_skipConstInApp_boxed_5126_; uint8_t v_skipInstances_boxed_5127_; lean_object* v_res_5128_; 
v_usedLetOnly_boxed_5125_ = lean_unbox(v_usedLetOnly_5108_);
v_skipConstInApp_boxed_5126_ = lean_unbox(v_skipConstInApp_5109_);
v_skipInstances_boxed_5127_ = lean_unbox(v_skipInstances_5110_);
v_res_5128_ = lp_vampireReplay_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__3(v_upperBound_5104_, v___x_5105_, v_pre_5106_, v_post_5107_, v_usedLetOnly_boxed_5125_, v_skipConstInApp_boxed_5126_, v_skipInstances_boxed_5127_, v___x_5111_, v_inst_5112_, v_R_5113_, v_a_5114_, v_b_5115_, v_c_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_);
lean_dec(v___y_5123_);
lean_dec_ref(v___y_5122_);
lean_dec(v___y_5121_);
lean_dec_ref(v___y_5120_);
lean_dec(v___y_5119_);
lean_dec_ref(v___y_5118_);
lean_dec(v___y_5117_);
lean_dec(v___x_5111_);
lean_dec_ref(v___x_5105_);
lean_dec(v_upperBound_5104_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5(lean_object* v_00_u03b1_5129_, lean_object* v_name_5130_, uint8_t v_bi_5131_, lean_object* v_type_5132_, lean_object* v_k_5133_, uint8_t v_kind_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v___x_5143_; 
v___x_5143_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___redArg(v_name_5130_, v_bi_5131_, v_type_5132_, v_k_5133_, v_kind_5134_, v___y_5135_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_);
return v___x_5143_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_00_u03b1_5144_, lean_object* v_name_5145_, lean_object* v_bi_5146_, lean_object* v_type_5147_, lean_object* v_k_5148_, lean_object* v_kind_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_){
_start:
{
uint8_t v_bi_boxed_5158_; uint8_t v_kind_boxed_5159_; lean_object* v_res_5160_; 
v_bi_boxed_5158_ = lean_unbox(v_bi_5146_);
v_kind_boxed_5159_ = lean_unbox(v_kind_5149_);
v_res_5160_ = lp_vampireReplay_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__4_spec__5(v_00_u03b1_5144_, v_name_5145_, v_bi_boxed_5158_, v_type_5147_, v_k_5148_, v_kind_boxed_5159_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_, v___y_5156_);
lean_dec(v___y_5156_);
lean_dec_ref(v___y_5155_);
lean_dec(v___y_5154_);
lean_dec_ref(v___y_5153_);
lean_dec(v___y_5152_);
lean_dec_ref(v___y_5151_);
lean_dec(v___y_5150_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8(lean_object* v_00_u03b1_5161_, lean_object* v_name_5162_, lean_object* v_type_5163_, lean_object* v_val_5164_, lean_object* v_k_5165_, uint8_t v_nondep_5166_, uint8_t v_kind_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v___x_5176_; 
v___x_5176_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___redArg(v_name_5162_, v_type_5163_, v_val_5164_, v_k_5165_, v_nondep_5166_, v_kind_5167_, v___y_5168_, v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_);
return v___x_5176_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8___boxed(lean_object* v_00_u03b1_5177_, lean_object* v_name_5178_, lean_object* v_type_5179_, lean_object* v_val_5180_, lean_object* v_k_5181_, lean_object* v_nondep_5182_, lean_object* v_kind_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_){
_start:
{
uint8_t v_nondep_boxed_5192_; uint8_t v_kind_boxed_5193_; lean_object* v_res_5194_; 
v_nondep_boxed_5192_ = lean_unbox(v_nondep_5182_);
v_kind_boxed_5193_ = lean_unbox(v_kind_5183_);
v_res_5194_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__6_spec__8(v_00_u03b1_5177_, v_name_5178_, v_type_5179_, v_val_5180_, v_k_5181_, v_nondep_boxed_5192_, v_kind_boxed_5193_, v___y_5184_, v___y_5185_, v___y_5186_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_);
lean_dec(v___y_5190_);
lean_dec_ref(v___y_5189_);
lean_dec(v___y_5188_);
lean_dec_ref(v___y_5187_);
lean_dec(v___y_5186_);
lean_dec_ref(v___y_5185_);
lean_dec(v___y_5184_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8(lean_object* v_00_u03b1_5195_, lean_object* v_x_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_){
_start:
{
lean_object* v___x_5205_; 
v___x_5205_ = lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___redArg(v_x_5196_, v___y_5197_, v___y_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_);
return v___x_5205_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8___boxed(lean_object* v_00_u03b1_5206_, lean_object* v_x_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_){
_start:
{
lean_object* v_res_5216_; 
v_res_5216_ = lp_vampireReplay_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Vampire_Reconstruct_Definition_equalityProxyAxiom_spec__0_spec__0_spec__8(v_00_u03b1_5206_, v_x_5207_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_);
lean_dec(v___y_5214_);
lean_dec_ref(v___y_5213_);
lean_dec(v___y_5212_);
lean_dec_ref(v___y_5211_);
lean_dec(v___y_5210_);
lean_dec_ref(v___y_5209_);
lean_dec(v___y_5208_);
return v_res_5216_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(lean_object* v_step_5217_, lean_object* v_a_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_){
_start:
{
lean_object* v_unit_5225_; lean_object* v___x_5226_; 
v_unit_5225_ = lean_ctor_get(v_step_5217_, 0);
lean_inc_ref(v_unit_5225_);
v___x_5226_ = lp_vampireReplay_Vampire_Reconstruct_Definition_register(v_unit_5225_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_);
if (lean_obj_tag(v___x_5226_) == 0)
{
lean_object* v___x_5227_; 
lean_dec_ref_known(v___x_5226_, 1);
v___x_5227_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_5217_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_);
if (lean_obj_tag(v___x_5227_) == 0)
{
lean_object* v_a_5228_; lean_object* v___x_5229_; 
v_a_5228_ = lean_ctor_get(v___x_5227_, 0);
lean_inc(v_a_5228_);
lean_dec_ref_known(v___x_5227_, 1);
v___x_5229_ = lp_vampireReplay_Vampire_Reconstruct_Definition_byDefinition(v_a_5228_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_);
return v___x_5229_;
}
else
{
return v___x_5227_;
}
}
else
{
lean_object* v_a_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5237_; 
lean_dec_ref(v_step_5217_);
v_a_5230_ = lean_ctor_get(v___x_5226_, 0);
v_isSharedCheck_5237_ = !lean_is_exclusive(v___x_5226_);
if (v_isSharedCheck_5237_ == 0)
{
v___x_5232_ = v___x_5226_;
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_a_5230_);
lean_dec(v___x_5226_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v___x_5235_; 
if (v_isShared_5233_ == 0)
{
v___x_5235_ = v___x_5232_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_a_5230_);
v___x_5235_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
return v___x_5235_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep___boxed(lean_object* v_step_5238_, lean_object* v_a_5239_, lean_object* v_a_5240_, lean_object* v_a_5241_, lean_object* v_a_5242_, lean_object* v_a_5243_, lean_object* v_a_5244_, lean_object* v_a_5245_){
_start:
{
lean_object* v_res_5246_; 
v_res_5246_ = lp_vampireReplay_Vampire_Reconstruct_Definition_definitionStep(v_step_5238_, v_a_5239_, v_a_5240_, v_a_5241_, v_a_5242_, v_a_5243_, v_a_5244_);
lean_dec(v_a_5244_);
lean_dec_ref(v_a_5243_);
lean_dec(v_a_5242_);
lean_dec_ref(v_a_5241_);
lean_dec(v_a_5240_);
lean_dec_ref(v_a_5239_);
return v_res_5246_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Basic(uint8_t builtin);
lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Clause(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Definition(uint8_t builtin) {
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
res = initialize_vampireReplay_VampireReplay_Reconstruct_Rules_Clause(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
