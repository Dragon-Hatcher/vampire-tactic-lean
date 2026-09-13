// Lean compiler output
// Module: Vampire.Reconstruct.Rules.Clausify
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_injectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lp_vampireReplay_Vampire_GenClause_literals(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_formula(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_GenClause_position_x3f(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_subformulas(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(lean_object*, uint32_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_blockProp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(lean_object*, uint32_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_asNegation(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_ofNotNot(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(lean_object*, uint32_t);
lean_object* lp_vampireReplay_Vampire_Reconstruct_sortType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_someElement(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Formula_boundVars(lean_object*);
lean_object* lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_epsilon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_introGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zipIdx___redArg(lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_projectGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_elimGiven(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_instReprConnective_repr(uint8_t, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_GenClause_replacement(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_genClause_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_conjunctChoices(lean_object*);
lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(uint32_t, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_carryAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_placeLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_GenClause_bindings(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_term(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_GenClause_parent_x3f(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_junction(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Term_symbol_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_registerSkolem(lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_varSorts(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_parents(lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_formula_x3f(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_Vampire_Unit_skolems(lean_object*);
lean_object* lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "the skolem term for X"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " has no symbol"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "no skolem recorded for X"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__5 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a quantifier without a body"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Exists"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Iff"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__3_value),LEAN_SCALAR_PTR_LITERAL(147, 220, 216, 40, 239, 165, 44, 174)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "a universal block is not refuted by"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__8_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not_forall"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__9 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__9_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__8_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__9_value),LEAN_SCALAR_PTR_LITERAL(113, 55, 178, 26, 122, 226, 82, 222)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "a universal block is not one:"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__11 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__11_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "a junction of "};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " parts is not one:"};
static const lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Or"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 237, 162, 225, 217, 98, 205, 196)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "nothing among the clause's parts says"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "a refutation of a negation is not one"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a refutation is not one"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__0_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "a replacement without a refutation"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__1_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a junction has no part "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "a part of a junction is not among what replaced it"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "what a step put in place of a junction is not one of its parts"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "a step replaced a position by nothing"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0(lean_object*, uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a quantifier's variable"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__0 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__0_value;
static lean_once_cell_t lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1;
static const lean_string_object lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__2 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__2_value;
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 29, 48, 135, 199, 176, 149, 70)}};
static const lean_ctor_object lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(74, 55, 158, 60, 144, 34, 77, 172)}};
static const lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3 = (const lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3_value;
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "a clausification step replaced a position that is not there"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1;
static const lean_closure_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__2_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "a quantifier replaced by nothing"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__3 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__3_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "a skolemised block leaves"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__5 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__5_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nwhich is not what the step put in its place"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__7 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__7_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "a quantifier's replacement is not refuted"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__9 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__9_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "iff_of_true"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__11 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__11_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__11_value),LEAN_SCALAR_PTR_LITERAL(233, 33, 117, 49, 69, 62, 224, 141)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__12 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__12_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "iff_of_false"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__13 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__13_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__13_value),LEAN_SCALAR_PTR_LITERAL(250, 57, 149, 116, 152, 187, 30, 121)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__14 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__14_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mpr"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__15 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__15_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 54, 203, 28, 77, 25, 163, 137)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16_value_aux_0),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__15_value),LEAN_SCALAR_PTR_LITERAL(14, 81, 9, 215, 230, 198, 87, 3)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "the failing of an exclusive or is not a negation"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__17 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__17_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "an equivalence of "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__19 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__19_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " parts"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__21 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__21_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "cannot replay a clausification step on "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__23 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__23_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "a clausification step replaced"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__25 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__25_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\nby nothing"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__27 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__27_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__29 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__29_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__29_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__31 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__31_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__31_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__32 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__32_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__31_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33_value_aux_0),((lean_object*)&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "clausification began at a clause of "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = " parts, which is neither the formula nor a definition"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "neither part of a definition is a negation"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "a definition's parts"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\nand"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\nare not each other's negation"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__10 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__10_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__1 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "not_congr"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__2_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(21, 52, 231, 191, 117, 147, 16, 240)}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__3 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__3_value;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "the clause does not say"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "\nwhich a step it was reached from does"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2(uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "a clausification step without a proof of what it was reached from"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "a clausification step without the position it replaced"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 67, 188, 79, 172, 243, 130, 138)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2(uint32_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1;
static const lean_array_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__0_value;
static const lean_array_object lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__1 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__1_value;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_chainTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "a clausification without a clause"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "g"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__2_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a missing disjunct"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "variable X"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__0_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1;
static const lean_string_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " has no recorded sort"};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__2 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3;
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__4 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__4_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___closed__0 = (const lean_object*)&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__0 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__0_value;
static const lean_ctor_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1_value;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "nothing says which conjunct of"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__2 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__2_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nthis clause came from"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__4 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__4_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a clause came from conjunct "};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__6 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__6_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7;
static const lean_string_object lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ", which is not there"};
static const lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__8 = (const lean_object*)&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__8_value;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9;
static lean_once_cell_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10;
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0___boxed(lean_object**);
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "clausify should have one premise, got "};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__0 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__0_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "clausify without a premise"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__2 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__2_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3;
static const lean_string_object lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "clausify should be given a formula"};
static const lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__4 = (const lean_object*)&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__4_value;
static lean_once_cell_t lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5;
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(lean_object* v_sorts_7_, lean_object* v_vars_8_, lean_object* v_l_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_fst_17_; lean_object* v_snd_18_; lean_object* v___x_19_; 
v_fst_17_ = lean_ctor_get(v_l_9_, 0);
lean_inc(v_fst_17_);
v_snd_18_ = lean_ctor_get(v_l_9_, 1);
lean_inc(v_snd_18_);
lean_dec_ref(v_l_9_);
v___x_19_ = lp_vampireReplay_Vampire_Reconstruct_formula(v_sorts_7_, v_vars_8_, v_fst_17_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, v_a_15_);
if (lean_obj_tag(v___x_19_) == 0)
{
uint8_t v___x_20_; 
v___x_20_ = lean_unbox(v_snd_18_);
lean_dec(v_snd_18_);
if (v___x_20_ == 0)
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_30_; 
v_a_21_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_30_ == 0)
{
v___x_23_ = v___x_19_;
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_19_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_30_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_25_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2);
v___x_26_ = l_Lean_Expr_app___override(v___x_25_, v_a_21_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_26_);
v___x_28_ = v___x_23_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
else
{
return v___x_19_;
}
}
else
{
lean_dec(v_snd_18_);
return v___x_19_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___boxed(lean_object* v_sorts_31_, lean_object* v_vars_32_, lean_object* v_l_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_31_, v_vars_32_, v_l_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0(lean_object* v_sorts_42_, lean_object* v_vars_43_, size_t v_sz_44_, size_t v_i_45_, lean_object* v_bs_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
uint8_t v___x_54_; 
v___x_54_ = lean_usize_dec_lt(v_i_45_, v_sz_44_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec_ref(v_vars_43_);
lean_dec_ref(v_sorts_42_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v_bs_46_);
return v___x_55_;
}
else
{
lean_object* v_v_56_; lean_object* v___x_57_; 
v_v_56_ = lean_array_uget_borrowed(v_bs_46_, v_i_45_);
lean_inc(v_v_56_);
lean_inc_ref(v_vars_43_);
lean_inc_ref(v_sorts_42_);
v___x_57_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_42_, v_vars_43_, v_v_56_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; lean_object* v___x_59_; lean_object* v_bs_x27_60_; size_t v___x_61_; size_t v___x_62_; lean_object* v___x_63_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc(v_a_58_);
lean_dec_ref_known(v___x_57_, 1);
v___x_59_ = lean_unsigned_to_nat(0u);
v_bs_x27_60_ = lean_array_uset(v_bs_46_, v_i_45_, v___x_59_);
v___x_61_ = ((size_t)1ULL);
v___x_62_ = lean_usize_add(v_i_45_, v___x_61_);
v___x_63_ = lean_array_uset(v_bs_x27_60_, v_i_45_, v_a_58_);
v_i_45_ = v___x_62_;
v_bs_46_ = v___x_63_;
goto _start;
}
else
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
lean_dec_ref(v_bs_46_);
lean_dec_ref(v_vars_43_);
lean_dec_ref(v_sorts_42_);
v_a_65_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_57_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_57_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0___boxed(lean_object* v_sorts_73_, lean_object* v_vars_74_, lean_object* v_sz_75_, lean_object* v_i_76_, lean_object* v_bs_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
size_t v_sz_boxed_85_; size_t v_i_boxed_86_; lean_object* v_res_87_; 
v_sz_boxed_85_ = lean_unbox_usize(v_sz_75_);
lean_dec(v_sz_75_);
v_i_boxed_86_ = lean_unbox_usize(v_i_76_);
lean_dec(v_i_76_);
v_res_87_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0(v_sorts_73_, v_vars_74_, v_sz_boxed_85_, v_i_boxed_86_, v_bs_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts(lean_object* v_sorts_88_, lean_object* v_vars_89_, lean_object* v_c_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___x_98_; size_t v_sz_99_; size_t v___x_100_; lean_object* v___x_101_; 
v___x_98_ = lp_vampireReplay_Vampire_GenClause_literals(v_c_90_);
v_sz_99_ = lean_array_size(v___x_98_);
v___x_100_ = ((size_t)0ULL);
v___x_101_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts_spec__0(v_sorts_88_, v_vars_89_, v_sz_99_, v___x_100_, v___x_98_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts___boxed(lean_object* v_sorts_102_, lean_object* v_vars_103_, lean_object* v_c_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts(v_sorts_102_, v_vars_103_, v_c_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(lean_object* v_sorts_113_, lean_object* v_f_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_115_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_114_);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_array_get_size(v___x_115_);
v___x_118_ = lp_vampireReplay_Array_filterMapM___at___00Vampire_Reconstruct_formula_spec__2(v_sorts_113_, v___x_115_, v___x_116_, v___x_117_);
lean_dec_ref(v___x_115_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf___boxed(lean_object* v_sorts_119_, lean_object* v_f_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(v_sorts_119_, v_f_120_);
lean_dec_ref(v_sorts_119_);
return v_res_121_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises(uint8_t v_connective_122_, uint8_t v_sign_123_){
_start:
{
switch(v_connective_122_)
{
case 8:
{
return v_sign_123_;
}
case 7:
{
if (v_sign_123_ == 0)
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
default: 
{
uint8_t v___x_126_; 
v___x_126_ = 0;
return v___x_126_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises___boxed(lean_object* v_connective_127_, lean_object* v_sign_128_){
_start:
{
uint8_t v_connective_boxed_129_; uint8_t v_sign_boxed_130_; uint8_t v_res_131_; lean_object* v_r_132_; 
v_connective_boxed_129_ = lean_unbox(v_connective_127_);
v_sign_boxed_130_ = lean_unbox(v_sign_128_);
v_res_131_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises(v_connective_boxed_129_, v_sign_boxed_130_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0(lean_object* v_vars_133_, uint32_t v_fst_134_, uint8_t v_positive_135_, lean_object* v_sorts_136_, lean_object* v_tail_137_, lean_object* v_body_138_, uint8_t v_a_139_, uint8_t v___x_140_, lean_object* v_x_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; 
lean_inc_ref(v_x_141_);
v___x_149_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_133_, v_fst_134_, v_x_141_);
v___x_150_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v_positive_135_, v_sorts_136_, v_tail_137_, v___x_149_, v_body_138_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v___x_150_, 1);
v___x_152_ = lean_unsigned_to_nat(1u);
v___x_153_ = lean_mk_empty_array_with_capacity(v___x_152_);
v___x_154_ = lean_array_push(v___x_153_, v_x_141_);
v___x_155_ = 1;
v___x_156_ = l_Lean_Meta_mkLambdaFVars(v___x_154_, v_a_151_, v_a_139_, v___x_140_, v_a_139_, v___x_140_, v___x_155_, v___y_144_, v___y_145_, v___y_146_, v___y_147_);
lean_dec_ref(v___x_154_);
return v___x_156_;
}
else
{
lean_dec_ref(v_x_141_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0___boxed(lean_object* v_vars_157_, lean_object* v_fst_158_, lean_object* v_positive_159_, lean_object* v_sorts_160_, lean_object* v_tail_161_, lean_object* v_body_162_, lean_object* v_a_163_, lean_object* v___x_164_, lean_object* v_x_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
uint32_t v_fst_4595__boxed_173_; uint8_t v_positive_boxed_174_; uint8_t v_a_4597__boxed_175_; uint8_t v___x_4598__boxed_176_; lean_object* v_res_177_; 
v_fst_4595__boxed_173_ = lean_unbox_uint32(v_fst_158_);
lean_dec(v_fst_158_);
v_positive_boxed_174_ = lean_unbox(v_positive_159_);
v_a_4597__boxed_175_ = lean_unbox(v_a_163_);
v___x_4598__boxed_176_ = lean_unbox(v___x_164_);
v_res_177_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0(v_vars_157_, v_fst_4595__boxed_173_, v_positive_boxed_174_, v_sorts_160_, v_tail_161_, v_body_162_, v_a_4597__boxed_175_, v___x_4598__boxed_176_, v_x_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_177_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__1));
v___x_181_ = l_Lean_stringToMessageData(v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__3));
v___x_184_ = l_Lean_stringToMessageData(v___x_183_);
return v___x_184_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__5));
v___x_187_ = l_Lean_stringToMessageData(v___x_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go(lean_object* v_sorts_188_, uint8_t v_positive_189_, lean_object* v_skolems_190_, lean_object* v_body_191_, lean_object* v_rest_192_, lean_object* v_vars_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
if (lean_obj_tag(v_rest_192_) == 0)
{
lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v___x_201_ = lean_box(0);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
else
{
lean_object* v_head_203_; lean_object* v_tail_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_318_; 
v_head_203_ = lean_ctor_get(v_rest_192_, 0);
v_tail_204_ = lean_ctor_get(v_rest_192_, 1);
v_isSharedCheck_318_ = !lean_is_exclusive(v_rest_192_);
if (v_isSharedCheck_318_ == 0)
{
v___x_206_ = v_rest_192_;
v_isShared_207_ = v_isSharedCheck_318_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_tail_204_);
lean_inc(v_head_203_);
lean_dec(v_rest_192_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_318_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_317_; 
v_fst_208_ = lean_ctor_get(v_head_203_, 0);
v_snd_209_ = lean_ctor_get(v_head_203_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_head_203_);
if (v_isSharedCheck_317_ == 0)
{
v___x_211_ = v_head_203_;
v_isShared_212_ = v_isSharedCheck_317_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_snd_209_);
lean_inc(v_fst_208_);
lean_dec(v_head_203_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_317_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_witness_214_; lean_object* v___y_215_; lean_object* v___y_216_; lean_object* v___y_217_; lean_object* v___y_218_; lean_object* v___y_219_; lean_object* v___y_220_; uint32_t v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_unbox_uint32(v_fst_208_);
v___x_225_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_skolems_190_, v___x_224_);
if (lean_obj_tag(v___x_225_) == 1)
{
lean_object* v_val_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_306_; 
v_val_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_306_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_306_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_val_226_);
lean_dec(v___x_225_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_306_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_230_; 
v___x_230_ = lp_vampireReplay_Vampire_Term_symbol_x3f(v_val_226_);
if (lean_obj_tag(v___x_230_) == 1)
{
lean_object* v_val_231_; lean_object* v_name_232_; lean_object* v___x_233_; lean_object* v_a_234_; uint8_t v___x_235_; 
lean_del_object(v___x_228_);
lean_del_object(v___x_211_);
lean_del_object(v___x_206_);
v_val_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_val_231_);
lean_dec_ref_known(v___x_230_, 1);
v_name_232_ = lean_ctor_get(v_val_231_, 0);
lean_inc_ref(v_name_232_);
lean_dec(v_val_231_);
v___x_233_ = lp_vampireReplay_Vampire_Reconstruct_resolvesSymbol___redArg(v_name_232_, v_a_194_, v_a_195_);
lean_dec_ref(v_name_232_);
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref(v___x_233_);
v___x_235_ = lean_unbox(v_a_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; 
lean_dec(v_val_226_);
v___x_236_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_209_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___f_241_; lean_object* v___x_242_; uint32_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc_n(v_a_237_, 2);
lean_dec_ref_known(v___x_236_, 1);
v___x_238_ = 1;
v___x_239_ = lean_box(v_positive_189_);
v___x_240_ = lean_box(v___x_238_);
lean_inc_ref(v_body_191_);
lean_inc(v_tail_204_);
lean_inc_ref(v_sorts_188_);
lean_inc(v_fst_208_);
lean_inc_ref(v_vars_193_);
v___f_241_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___lam__0___boxed), 16, 8);
lean_closure_set(v___f_241_, 0, v_vars_193_);
lean_closure_set(v___f_241_, 1, v_fst_208_);
lean_closure_set(v___f_241_, 2, v___x_239_);
lean_closure_set(v___f_241_, 3, v_sorts_188_);
lean_closure_set(v___f_241_, 4, v_tail_204_);
lean_closure_set(v___f_241_, 5, v_body_191_);
lean_closure_set(v___f_241_, 6, v_a_234_);
lean_closure_set(v___f_241_, 7, v___x_240_);
v___x_242_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0));
v___x_243_ = lean_unbox_uint32(v_fst_208_);
v___x_244_ = lean_uint32_to_nat(v___x_243_);
v___x_245_ = l_Nat_reprFast(v___x_244_);
v___x_246_ = lean_string_append(v___x_242_, v___x_245_);
lean_dec_ref(v___x_245_);
v___x_247_ = lean_box(0);
v___x_248_ = l_Lean_Name_str___override(v___x_247_, v___x_246_);
v___x_249_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_248_, v_a_237_, v___f_241_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_a_237_, v_a_250_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; lean_object* v_fst_253_; uint32_t v___x_254_; lean_object* v___x_255_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_251_, 1);
v_fst_253_ = lean_ctor_get(v_a_252_, 0);
lean_inc_n(v_fst_253_, 2);
lean_dec(v_a_252_);
v___x_254_ = lean_unbox_uint32(v_fst_208_);
v___x_255_ = lp_vampireReplay_Vampire_Reconstruct_registerSkolem(v_skolems_190_, v_vars_193_, v___x_254_, v_fst_253_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_dec_ref_known(v___x_255_, 1);
v_witness_214_ = v_fst_253_;
v___y_215_ = v_a_194_;
v___y_216_ = v_a_195_;
v___y_217_ = v_a_196_;
v___y_218_ = v_a_197_;
v___y_219_ = v_a_198_;
v___y_220_ = v_a_199_;
goto v___jp_213_;
}
else
{
lean_dec(v_fst_253_);
lean_dec(v_fst_208_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
return v___x_255_;
}
}
else
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v_fst_208_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v_a_256_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_251_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_251_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v_a_237_);
lean_dec(v_fst_208_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v_a_264_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_249_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_249_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_dec(v_a_234_);
lean_dec(v_fst_208_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v_a_272_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_236_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_236_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
else
{
lean_object* v___x_280_; 
lean_dec(v_a_234_);
lean_dec(v_snd_209_);
v___x_280_ = lp_vampireReplay_Vampire_Reconstruct_term(v_vars_193_, v_val_226_, v_a_194_, v_a_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v_witness_214_ = v_a_281_;
v___y_215_ = v_a_194_;
v___y_216_ = v_a_195_;
v___y_217_ = v_a_196_;
v___y_218_ = v_a_197_;
v___y_219_ = v_a_198_;
v___y_220_ = v_a_199_;
goto v___jp_213_;
}
else
{
lean_object* v_a_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
lean_dec(v_fst_208_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v_a_282_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_289_ == 0)
{
v___x_284_ = v___x_280_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_a_282_);
lean_dec(v___x_280_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_282_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
else
{
lean_object* v___x_290_; uint32_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
lean_dec(v___x_230_);
lean_dec(v_val_226_);
lean_dec(v_snd_209_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v___x_290_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__2);
v___x_291_ = lean_unbox_uint32(v_fst_208_);
lean_dec(v_fst_208_);
v___x_292_ = lean_uint32_to_nat(v___x_291_);
v___x_293_ = l_Nat_reprFast(v___x_292_);
if (v_isShared_229_ == 0)
{
lean_ctor_set_tag(v___x_228_, 3);
lean_ctor_set(v___x_228_, 0, v___x_293_);
v___x_295_ = v___x_228_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_293_);
v___x_295_ = v_reuseFailAlloc_305_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
lean_object* v___x_296_; lean_object* v___x_298_; 
v___x_296_ = l_Lean_MessageData_ofFormat(v___x_295_);
if (v_isShared_212_ == 0)
{
lean_ctor_set_tag(v___x_211_, 7);
lean_ctor_set(v___x_211_, 1, v___x_296_);
lean_ctor_set(v___x_211_, 0, v___x_290_);
v___x_298_ = v___x_211_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_296_);
v___x_298_ = v_reuseFailAlloc_304_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__4);
if (v_isShared_207_ == 0)
{
lean_ctor_set_tag(v___x_206_, 7);
lean_ctor_set(v___x_206_, 1, v___x_299_);
lean_ctor_set(v___x_206_, 0, v___x_298_);
v___x_301_ = v___x_206_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v___x_299_);
v___x_301_ = v_reuseFailAlloc_303_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; 
v___x_302_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_301_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
return v___x_302_;
}
}
}
}
}
}
else
{
lean_object* v___x_307_; uint32_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
lean_dec(v___x_225_);
lean_dec(v_snd_209_);
lean_del_object(v___x_206_);
lean_dec(v_tail_204_);
lean_dec_ref(v_vars_193_);
lean_dec_ref(v_body_191_);
lean_dec_ref(v_sorts_188_);
v___x_307_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__6);
v___x_308_ = lean_unbox_uint32(v_fst_208_);
lean_dec(v_fst_208_);
v___x_309_ = lean_uint32_to_nat(v___x_308_);
v___x_310_ = l_Nat_reprFast(v___x_309_);
v___x_311_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
v___x_312_ = l_Lean_MessageData_ofFormat(v___x_311_);
if (v_isShared_212_ == 0)
{
lean_ctor_set_tag(v___x_211_, 7);
lean_ctor_set(v___x_211_, 1, v___x_312_);
lean_ctor_set(v___x_211_, 0, v___x_307_);
v___x_314_ = v___x_211_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_312_);
v___x_314_ = v_reuseFailAlloc_316_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_315_; 
v___x_315_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_314_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
return v___x_315_;
}
}
v___jp_213_:
{
uint32_t v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_unbox_uint32(v_fst_208_);
lean_dec(v_fst_208_);
v___x_222_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_193_, v___x_221_, v_witness_214_);
v_rest_192_ = v_tail_204_;
v_vars_193_ = v___x_222_;
v_a_194_ = v___y_215_;
v_a_195_ = v___y_216_;
v_a_196_ = v___y_217_;
v_a_197_ = v___y_218_;
v_a_198_ = v___y_219_;
v_a_199_ = v___y_220_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___boxed(lean_object* v_sorts_319_, lean_object* v_positive_320_, lean_object* v_skolems_321_, lean_object* v_body_322_, lean_object* v_rest_323_, lean_object* v_vars_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
uint8_t v_positive_boxed_332_; lean_object* v_res_333_; 
v_positive_boxed_332_ = lean_unbox(v_positive_320_);
v_res_333_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go(v_sorts_319_, v_positive_boxed_332_, v_skolems_321_, v_body_322_, v_rest_323_, v_vars_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_, v_a_330_);
lean_dec(v_a_330_);
lean_dec_ref(v_a_329_);
lean_dec(v_a_328_);
lean_dec_ref(v_a_327_);
lean_dec(v_a_326_);
lean_dec_ref(v_a_325_);
lean_dec_ref(v_skolems_321_);
return v_res_333_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__0));
v___x_336_ = l_Lean_stringToMessageData(v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock(lean_object* v_sorts_337_, uint8_t v_positive_338_, lean_object* v_skolems_339_, lean_object* v_vars_340_, lean_object* v_f_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
lean_inc_ref(v_f_341_);
v___x_349_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_341_);
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lean_array_get_size(v___x_349_);
v___x_352_ = lean_nat_dec_lt(v___x_350_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec_ref(v___x_349_);
lean_dec_ref(v_f_341_);
lean_dec_ref(v_vars_340_);
lean_dec_ref(v_sorts_337_);
v___x_353_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1);
v___x_354_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_353_, v_a_344_, v_a_345_, v_a_346_, v_a_347_);
return v___x_354_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_355_ = lean_array_fget(v___x_349_, v___x_350_);
lean_dec_ref(v___x_349_);
v___x_356_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(v_sorts_337_, v_f_341_);
v___x_357_ = lean_array_to_list(v___x_356_);
v___x_358_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go(v_sorts_337_, v_positive_338_, v_skolems_339_, v___x_355_, v___x_357_, v_vars_340_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___boxed(lean_object* v_sorts_359_, lean_object* v_positive_360_, lean_object* v_skolems_361_, lean_object* v_vars_362_, lean_object* v_f_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
uint8_t v_positive_boxed_371_; lean_object* v_res_372_; 
v_positive_boxed_371_ = lean_unbox(v_positive_360_);
v_res_372_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock(v_sorts_359_, v_positive_boxed_371_, v_skolems_361_, v_vars_362_, v_f_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec_ref(v_skolems_361_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0(lean_object* v_vars_373_, uint32_t v_fst_374_, uint8_t v_positive_375_, lean_object* v_sorts_376_, lean_object* v_tail_377_, lean_object* v_body_378_, lean_object* v_x_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
lean_inc_ref(v_x_379_);
v___x_387_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_373_, v_fst_374_, v_x_379_);
v___x_388_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v_positive_375_, v_sorts_376_, v_tail_377_, v___x_387_, v_body_378_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; uint8_t v___x_394_; uint8_t v___x_395_; lean_object* v___x_396_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_mk_empty_array_with_capacity(v___x_390_);
v___x_392_ = lean_array_push(v___x_391_, v_x_379_);
v___x_393_ = 0;
v___x_394_ = 1;
v___x_395_ = 1;
v___x_396_ = l_Lean_Meta_mkLambdaFVars(v___x_392_, v_a_389_, v___x_393_, v___x_394_, v___x_393_, v___x_394_, v___x_395_, v___y_382_, v___y_383_, v___y_384_, v___y_385_);
lean_dec_ref(v___x_392_);
return v___x_396_;
}
else
{
lean_dec_ref(v_x_379_);
return v___x_388_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0___boxed(lean_object* v_vars_397_, lean_object* v_fst_398_, lean_object* v_positive_399_, lean_object* v_sorts_400_, lean_object* v_tail_401_, lean_object* v_body_402_, lean_object* v_x_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
uint32_t v_fst_13486__boxed_411_; uint8_t v_positive_boxed_412_; lean_object* v_res_413_; 
v_fst_13486__boxed_411_ = lean_unbox_uint32(v_fst_398_);
lean_dec(v_fst_398_);
v_positive_boxed_412_ = lean_unbox(v_positive_399_);
v_res_413_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0(v_vars_397_, v_fst_13486__boxed_411_, v_positive_boxed_412_, v_sorts_400_, v_tail_401_, v_body_402_, v_x_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
return v_res_413_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_box(0);
v___x_423_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4));
v___x_424_ = l_Lean_Expr_const___override(v___x_423_, v___x_422_);
return v___x_424_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__6));
v___x_427_ = l_Lean_stringToMessageData(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__11));
v___x_435_ = l_Lean_stringToMessageData(v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go(lean_object* v_sorts_436_, uint8_t v_positive_437_, lean_object* v_body_438_, lean_object* v_rest_439_, lean_object* v_vars_440_, lean_object* v_h_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
if (lean_obj_tag(v_rest_439_) == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v___x_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_449_, 0, v_vars_440_);
lean_ctor_set(v___x_449_, 1, v_h_441_);
v___x_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
return v___x_450_;
}
else
{
lean_object* v_head_451_; lean_object* v_tail_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_627_; 
v_head_451_ = lean_ctor_get(v_rest_439_, 0);
v_tail_452_ = lean_ctor_get(v_rest_439_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_rest_439_);
if (v_isSharedCheck_627_ == 0)
{
v___x_454_ = v_rest_439_;
v_isShared_455_ = v_isSharedCheck_627_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_tail_452_);
lean_inc(v_head_451_);
lean_dec(v_rest_439_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_627_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v_fst_456_; lean_object* v_snd_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_626_; 
v_fst_456_ = lean_ctor_get(v_head_451_, 0);
v_snd_457_ = lean_ctor_get(v_head_451_, 1);
v_isSharedCheck_626_ = !lean_is_exclusive(v_head_451_);
if (v_isSharedCheck_626_ == 0)
{
v___x_459_ = v_head_451_;
v_isShared_460_ = v_isSharedCheck_626_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_snd_457_);
lean_inc(v_fst_456_);
lean_dec(v_head_451_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_626_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; 
v___x_461_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_457_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; lean_object* v___f_464_; lean_object* v___x_465_; uint32_t v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc_n(v_a_462_, 2);
lean_dec_ref_known(v___x_461_, 1);
v___x_463_ = lean_box(v_positive_437_);
lean_inc_ref(v_body_438_);
lean_inc(v_tail_452_);
lean_inc_ref(v_sorts_436_);
lean_inc(v_fst_456_);
lean_inc_ref(v_vars_440_);
v___f_464_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___lam__0___boxed), 14, 6);
lean_closure_set(v___f_464_, 0, v_vars_440_);
lean_closure_set(v___f_464_, 1, v_fst_456_);
lean_closure_set(v___f_464_, 2, v___x_463_);
lean_closure_set(v___f_464_, 3, v_sorts_436_);
lean_closure_set(v___f_464_, 4, v_tail_452_);
lean_closure_set(v___f_464_, 5, v_body_438_);
v___x_465_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0));
v___x_466_ = lean_unbox_uint32(v_fst_456_);
v___x_467_ = lean_uint32_to_nat(v___x_466_);
v___x_468_ = l_Nat_reprFast(v___x_467_);
v___x_469_ = lean_string_append(v___x_465_, v___x_468_);
lean_dec_ref(v___x_468_);
v___x_470_ = lean_box(0);
v___x_471_ = l_Lean_Name_str___override(v___x_470_, v___x_469_);
v___x_472_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_471_, v_a_462_, v___f_464_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc_n(v_a_473_, 2);
lean_dec_ref_known(v___x_472_, 1);
lean_inc(v_a_462_);
v___x_474_ = lp_vampireReplay_Vampire_Reconstruct_epsilon(v_a_462_, v_a_473_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v_fst_476_; lean_object* v_snd_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_601_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v_fst_476_ = lean_ctor_get(v_a_475_, 0);
v_snd_477_ = lean_ctor_get(v_a_475_, 1);
v_isSharedCheck_601_ = !lean_is_exclusive(v_a_475_);
if (v_isSharedCheck_601_ == 0)
{
v___x_479_ = v_a_475_;
v_isShared_480_ = v_isSharedCheck_601_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_snd_477_);
lean_inc(v_fst_476_);
lean_dec(v_a_475_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_601_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; 
lean_inc(v_a_462_);
v___x_481_ = l_Lean_Meta_getLevel(v_a_462_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 1);
v___x_483_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__1));
v___x_484_ = lean_box(0);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_484_);
lean_ctor_set(v___x_454_, 0, v_a_482_);
v___x_486_ = v___x_454_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_482_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_484_);
v___x_486_ = v_reuseFailAlloc_592_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_existence_490_; lean_object* v___y_491_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; 
v___x_487_ = l_Lean_Expr_const___override(v___x_483_, v___x_486_);
lean_inc(v_a_473_);
v___x_488_ = l_Lean_mkAppB(v___x_487_, v_a_462_, v_a_473_);
if (v_positive_437_ == 0)
{
lean_object* v___x_506_; 
lean_inc(v_a_447_);
lean_inc_ref(v_a_446_);
lean_inc(v_a_445_);
lean_inc_ref(v_a_444_);
lean_inc_ref(v_h_441_);
v___x_506_ = lean_infer_type(v_h_441_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_508_; lean_object* v_a_509_; lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_507_, v_a_445_);
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref(v___x_508_);
v___x_510_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = l_Lean_Expr_isAppOfArity(v_a_509_, v___x_510_, v___x_511_);
if (v___x_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
lean_dec(v_a_509_);
lean_dec_ref(v___x_488_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_dec(v_tail_452_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v___x_513_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__7);
v___x_514_ = l_Lean_indentExpr(v_h_441_);
if (v_isShared_480_ == 0)
{
lean_ctor_set_tag(v___x_479_, 7);
lean_ctor_set(v___x_479_, 1, v___x_514_);
lean_ctor_set(v___x_479_, 0, v___x_513_);
v___x_516_ = v___x_479_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_513_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v___x_514_);
v___x_516_ = v_reuseFailAlloc_526_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
v___x_517_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_516_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
v_a_518_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_517_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_Expr_appArg_x21(v_a_509_);
lean_dec(v_a_509_);
if (lean_obj_tag(v___x_527_) == 7)
{
lean_object* v_binderName_528_; lean_object* v_binderType_529_; lean_object* v_body_530_; uint8_t v_binderInfo_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_binderName_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc_n(v_binderName_528_, 2);
v_binderType_529_ = lean_ctor_get(v___x_527_, 1);
lean_inc_ref_n(v_binderType_529_, 3);
v_body_530_ = lean_ctor_get(v___x_527_, 2);
lean_inc_ref_n(v_body_530_, 2);
v_binderInfo_531_ = lean_ctor_get_uint8(v___x_527_, sizeof(void*)*3 + 8);
v___x_532_ = l_Lean_Expr_lam___override(v_binderName_528_, v_binderType_529_, v_body_530_, v_binderInfo_531_);
v___x_533_ = l_Lean_Meta_getLevel(v_binderType_529_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
lean_inc_ref(v_binderType_529_);
v___x_535_ = l_Lean_Meta_getLevel(v_binderType_529_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5);
v___x_538_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2);
v___x_539_ = l_Lean_Expr_app___override(v___x_538_, v___x_527_);
if (v_isShared_480_ == 0)
{
lean_ctor_set_tag(v___x_479_, 1);
lean_ctor_set(v___x_479_, 1, v___x_484_);
lean_ctor_set(v___x_479_, 0, v_a_534_);
v___x_541_ = v___x_479_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_534_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v___x_484_);
v___x_541_ = v_reuseFailAlloc_553_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_542_ = l_Lean_Expr_const___override(v___x_483_, v___x_541_);
v___x_543_ = l_Lean_Expr_app___override(v___x_538_, v_body_530_);
lean_inc_ref_n(v_binderType_529_, 2);
v___x_544_ = l_Lean_Expr_lam___override(v_binderName_528_, v_binderType_529_, v___x_543_, v_binderInfo_531_);
v___x_545_ = l_Lean_mkAppB(v___x_542_, v_binderType_529_, v___x_544_);
v___x_546_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__10));
if (v_isShared_460_ == 0)
{
lean_ctor_set_tag(v___x_459_, 1);
lean_ctor_set(v___x_459_, 1, v___x_484_);
lean_ctor_set(v___x_459_, 0, v_a_536_);
v___x_548_ = v___x_459_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_536_);
lean_ctor_set(v_reuseFailAlloc_552_, 1, v___x_484_);
v___x_548_ = v_reuseFailAlloc_552_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_549_ = l_Lean_Expr_const___override(v___x_546_, v___x_548_);
v___x_550_ = l_Lean_mkAppB(v___x_549_, v_binderType_529_, v___x_532_);
v___x_551_ = l_Lean_mkApp4(v___x_537_, v___x_539_, v___x_545_, v___x_550_, v_h_441_);
v_existence_490_ = v___x_551_;
v___y_491_ = v_a_442_;
v___y_492_ = v_a_443_;
v___y_493_ = v_a_444_;
v___y_494_ = v_a_445_;
v___y_495_ = v_a_446_;
v___y_496_ = v_a_447_;
goto v___jp_489_;
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_a_534_);
lean_dec_ref(v___x_532_);
lean_dec_ref(v_body_530_);
lean_dec_ref(v_binderType_529_);
lean_dec_ref_known(v___x_527_, 3);
lean_dec(v_binderName_528_);
lean_dec_ref(v___x_488_);
lean_del_object(v___x_479_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_554_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_535_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_535_);
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
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec_ref(v___x_532_);
lean_dec_ref(v_body_530_);
lean_dec_ref(v_binderType_529_);
lean_dec(v_binderName_528_);
lean_dec_ref_known(v___x_527_, 3);
lean_dec_ref(v___x_488_);
lean_del_object(v___x_479_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_562_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_533_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_533_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
lean_dec_ref(v___x_488_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v___x_570_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__12);
v___x_571_ = l_Lean_indentExpr(v___x_527_);
if (v_isShared_480_ == 0)
{
lean_ctor_set_tag(v___x_479_, 7);
lean_ctor_set(v___x_479_, 1, v___x_571_);
lean_ctor_set(v___x_479_, 0, v___x_570_);
v___x_573_ = v___x_479_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___x_571_);
v___x_573_ = v_reuseFailAlloc_583_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v___x_574_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_573_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
v_a_575_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_574_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_574_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec_ref(v___x_488_);
lean_del_object(v___x_479_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_584_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_506_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_506_);
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
else
{
lean_del_object(v___x_479_);
lean_del_object(v___x_459_);
v_existence_490_ = v_h_441_;
v___y_491_ = v_a_442_;
v___y_492_ = v_a_443_;
v___y_493_ = v_a_444_;
v___y_494_ = v_a_445_;
v___y_495_ = v_a_446_;
v___y_496_ = v_a_447_;
goto v___jp_489_;
}
v___jp_489_:
{
uint32_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_497_ = lean_unbox_uint32(v_fst_456_);
lean_dec(v_fst_456_);
lean_inc(v_fst_476_);
v___x_498_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_vars_440_, v___x_497_, v_fst_476_);
v___x_499_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__5);
v___x_500_ = lean_unsigned_to_nat(1u);
v___x_501_ = lean_mk_empty_array_with_capacity(v___x_500_);
v___x_502_ = lean_array_push(v___x_501_, v_fst_476_);
v___x_503_ = l_Lean_Expr_beta(v_a_473_, v___x_502_);
v___x_504_ = l_Lean_mkApp4(v___x_499_, v___x_488_, v___x_503_, v_snd_477_, v_existence_490_);
v_rest_439_ = v_tail_452_;
v_vars_440_ = v___x_498_;
v_h_441_ = v___x_504_;
v_a_442_ = v___y_491_;
v_a_443_ = v___y_492_;
v_a_444_ = v___y_493_;
v_a_445_ = v___y_494_;
v_a_446_ = v___y_495_;
v_a_447_ = v___y_496_;
goto _start;
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
lean_del_object(v___x_479_);
lean_dec(v_snd_477_);
lean_dec(v_fst_476_);
lean_dec(v_a_473_);
lean_dec(v_a_462_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_del_object(v___x_454_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_593_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_481_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_481_);
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
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_a_473_);
lean_dec(v_a_462_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_del_object(v___x_454_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_602_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_474_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_474_);
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
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec(v_a_462_);
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_del_object(v___x_454_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_610_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_472_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_472_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_del_object(v___x_459_);
lean_dec(v_fst_456_);
lean_del_object(v___x_454_);
lean_dec(v_tail_452_);
lean_dec_ref(v_h_441_);
lean_dec_ref(v_vars_440_);
lean_dec_ref(v_body_438_);
lean_dec_ref(v_sorts_436_);
v_a_618_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_461_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_461_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___boxed(lean_object* v_sorts_628_, lean_object* v_positive_629_, lean_object* v_body_630_, lean_object* v_rest_631_, lean_object* v_vars_632_, lean_object* v_h_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_){
_start:
{
uint8_t v_positive_boxed_641_; lean_object* v_res_642_; 
v_positive_boxed_641_ = lean_unbox(v_positive_629_);
v_res_642_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go(v_sorts_628_, v_positive_boxed_641_, v_body_630_, v_rest_631_, v_vars_632_, v_h_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock(lean_object* v_sorts_643_, uint8_t v_positive_644_, lean_object* v_vars_645_, lean_object* v_f_646_, lean_object* v_h_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
lean_inc_ref(v_f_646_);
v___x_655_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_646_);
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = lean_array_get_size(v___x_655_);
v___x_658_ = lean_nat_dec_lt(v___x_656_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; 
lean_dec_ref(v___x_655_);
lean_dec_ref(v_h_647_);
lean_dec_ref(v_f_646_);
lean_dec_ref(v_vars_645_);
lean_dec_ref(v_sorts_643_);
v___x_659_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1);
v___x_660_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_659_, v_a_650_, v_a_651_, v_a_652_, v_a_653_);
return v___x_660_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = lean_array_fget(v___x_655_, v___x_656_);
lean_dec_ref(v___x_655_);
v___x_662_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(v_sorts_643_, v_f_646_);
v___x_663_ = lean_array_to_list(v___x_662_);
v___x_664_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go(v_sorts_643_, v_positive_644_, v___x_661_, v___x_663_, v_vars_645_, v_h_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_, v_a_653_);
return v___x_664_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock___boxed(lean_object* v_sorts_665_, lean_object* v_positive_666_, lean_object* v_vars_667_, lean_object* v_f_668_, lean_object* v_h_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
uint8_t v_positive_boxed_677_; lean_object* v_res_678_; 
v_positive_boxed_677_ = lean_unbox(v_positive_666_);
v_res_678_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock(v_sorts_665_, v_positive_boxed_677_, v_vars_667_, v_f_668_, v_h_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
return v_res_678_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__0));
v___x_681_ = l_Lean_stringToMessageData(v___x_680_);
return v___x_681_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__2));
v___x_684_ = l_Lean_stringToMessageData(v___x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg(lean_object* v_fn_685_, lean_object* v_count_686_, lean_object* v_whole_687_, lean_object* v_range_688_, lean_object* v_b_689_, lean_object* v_i_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_stop_696_; lean_object* v_step_697_; uint8_t v___x_698_; 
v_stop_696_ = lean_ctor_get(v_range_688_, 1);
v_step_697_ = lean_ctor_get(v_range_688_, 2);
v___x_698_ = lean_nat_dec_lt(v_i_690_, v_stop_696_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; 
lean_dec(v_i_690_);
lean_dec_ref(v_whole_687_);
lean_dec(v_count_686_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v_b_689_);
return v___x_699_;
}
else
{
lean_object* v_fst_700_; lean_object* v_snd_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_735_; 
v_fst_700_ = lean_ctor_get(v_b_689_, 0);
v_snd_701_ = lean_ctor_get(v_b_689_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v_b_689_);
if (v_isSharedCheck_735_ == 0)
{
v___x_703_ = v_b_689_;
v_isShared_704_ = v_isSharedCheck_735_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_snd_701_);
lean_inc(v_fst_700_);
lean_dec(v_b_689_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_735_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = lean_unsigned_to_nat(2u);
v___x_716_ = l_Lean_Expr_isAppOfArity(v_snd_701_, v_fn_685_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_del_object(v___x_703_);
lean_dec(v_snd_701_);
lean_dec(v_fst_700_);
lean_dec(v_i_690_);
v___x_717_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__1);
v___x_718_ = l_Nat_reprFast(v_count_686_);
v___x_719_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
v___x_720_ = l_Lean_MessageData_ofFormat(v___x_719_);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_717_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
v___x_722_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3, &lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___closed__3);
v___x_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = l_Lean_indentExpr(v_whole_687_);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_725_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
v_a_727_ = lean_ctor_get(v___x_726_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_726_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
else
{
goto v___jp_705_;
}
v___jp_705_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_706_ = l_Lean_Expr_appFn_x21(v_snd_701_);
v___x_707_ = l_Lean_Expr_appArg_x21(v___x_706_);
lean_dec_ref(v___x_706_);
v___x_708_ = lean_array_push(v_fst_700_, v___x_707_);
v___x_709_ = l_Lean_Expr_appArg_x21(v_snd_701_);
lean_dec(v_snd_701_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_709_);
lean_ctor_set(v___x_703_, 0, v___x_708_);
v___x_711_ = v___x_703_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___x_708_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_709_);
v___x_711_ = v_reuseFailAlloc_714_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_712_; 
v___x_712_ = lean_nat_add(v_i_690_, v_step_697_);
lean_dec(v_i_690_);
v_b_689_ = v___x_711_;
v_i_690_ = v___x_712_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg___boxed(lean_object* v_fn_736_, lean_object* v_count_737_, lean_object* v_whole_738_, lean_object* v_range_739_, lean_object* v_b_740_, lean_object* v_i_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg(v_fn_736_, v_count_737_, v_whole_738_, v_range_739_, v_b_740_, v_i_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec_ref(v_range_739_);
lean_dec(v_fn_736_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(lean_object* v_fn_750_, lean_object* v_whole_751_, lean_object* v_count_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_unsigned_to_nat(0u);
v___x_761_ = lean_nat_dec_eq(v_count_752_, v___x_760_);
if (v___x_761_ == 0)
{
lean_object* v_parts_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_parts_762_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0));
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_sub(v_count_752_, v___x_763_);
v___x_765_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_765_, 0, v___x_760_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
lean_ctor_set(v___x_765_, 2, v___x_763_);
lean_inc_ref(v_whole_751_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_parts_762_);
lean_ctor_set(v___x_766_, 1, v_whole_751_);
v___x_767_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg(v_fn_750_, v_count_752_, v_whole_751_, v___x_765_, v___x_766_, v___x_760_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
lean_dec_ref_known(v___x_765_, 3);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_778_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_778_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_778_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_778_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v_fst_772_; lean_object* v_snd_773_; lean_object* v___x_774_; lean_object* v___x_776_; 
v_fst_772_ = lean_ctor_get(v_a_768_, 0);
lean_inc(v_fst_772_);
v_snd_773_ = lean_ctor_get(v_a_768_, 1);
lean_inc(v_snd_773_);
lean_dec(v_a_768_);
v___x_774_ = lean_array_push(v_fst_772_, v_snd_773_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v___x_774_);
v___x_776_ = v___x_770_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_767_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_767_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec(v_count_752_);
lean_dec_ref(v_whole_751_);
v___x_787_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0));
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___boxed(lean_object* v_fn_789_, lean_object* v_whole_790_, lean_object* v_count_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(v_fn_789_, v_whole_790_, v_count_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_fn_789_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0(lean_object* v_fn_800_, lean_object* v_count_801_, lean_object* v_whole_802_, lean_object* v_range_803_, lean_object* v_b_804_, lean_object* v_i_805_, lean_object* v_hs_806_, lean_object* v_hl_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___redArg(v_fn_800_, v_count_801_, v_whole_802_, v_range_803_, v_b_804_, v_i_805_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0___boxed(lean_object* v_fn_816_, lean_object* v_count_817_, lean_object* v_whole_818_, lean_object* v_range_819_, lean_object* v_b_820_, lean_object* v_i_821_, lean_object* v_hs_822_, lean_object* v_hl_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = lp_vampireReplay___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf_spec__0(v_fn_816_, v_count_817_, v_whole_818_, v_range_819_, v_b_820_, v_i_821_, v_hs_822_, v_hl_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v_range_819_);
lean_dec(v_fn_816_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts(lean_object* v_sorts_840_, lean_object* v_vars_841_, lean_object* v_g_842_, uint8_t v_sign_843_, lean_object* v_stated_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_){
_start:
{
lean_object* v___y_853_; 
if (v_sign_843_ == 0)
{
lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_928_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = l_Lean_Expr_isAppOfArity(v_stated_844_, v___x_928_, v___x_929_);
if (v___x_930_ == 0)
{
v___y_853_ = v_stated_844_;
goto v___jp_852_;
}
else
{
lean_object* v___x_931_; 
v___x_931_ = l_Lean_Expr_appArg_x21(v_stated_844_);
lean_dec_ref(v_stated_844_);
v___y_853_ = v___x_931_;
goto v___jp_852_;
}
}
else
{
v___y_853_ = v_stated_844_;
goto v___jp_852_;
}
v___jp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_g_842_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_919_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_919_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_919_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_919_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v_subs_859_; uint8_t v___x_860_; 
v_subs_859_ = lp_vampireReplay_Vampire_Formula_subformulas(v_g_842_);
v___x_860_ = lean_unbox(v_a_855_);
lean_dec(v_a_855_);
switch(v___x_860_)
{
case 1:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
lean_del_object(v___x_857_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v___x_861_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__1));
v___x_862_ = lean_array_get_size(v_subs_859_);
lean_dec_ref(v_subs_859_);
v___x_863_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(v___x_861_, v___y_853_, v___x_862_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_863_;
}
case 2:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
lean_del_object(v___x_857_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v___x_864_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3));
v___x_865_ = lean_array_get_size(v_subs_859_);
lean_dec_ref(v_subs_859_);
v___x_866_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(v___x_864_, v___y_853_, v___x_865_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_866_;
}
case 4:
{
lean_object* v___x_867_; lean_object* v___x_868_; uint8_t v___x_869_; 
v___x_867_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__4));
v___x_868_ = lean_unsigned_to_nat(2u);
v___x_869_ = l_Lean_Expr_isAppOfArity(v___y_853_, v___x_867_, v___x_868_);
if (v___x_869_ == 0)
{
size_t v_sz_870_; size_t v___x_871_; lean_object* v___x_872_; 
lean_del_object(v___x_857_);
lean_dec_ref(v___y_853_);
v_sz_870_ = lean_array_size(v_subs_859_);
v___x_871_ = ((size_t)0ULL);
v___x_872_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_840_, v_vars_841_, v_sz_870_, v___x_871_, v_subs_859_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_872_;
}
else
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
lean_dec_ref(v_subs_859_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v___x_873_ = l_Lean_Expr_appFn_x21(v___y_853_);
v___x_874_ = l_Lean_Expr_appArg_x21(v___x_873_);
lean_dec_ref(v___x_873_);
v___x_875_ = l_Lean_Expr_appArg_x21(v___y_853_);
lean_dec_ref(v___y_853_);
v___x_876_ = lean_mk_empty_array_with_capacity(v___x_868_);
v___x_877_ = lean_array_push(v___x_876_, v___x_874_);
v___x_878_ = lean_array_push(v___x_877_, v___x_875_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_878_);
v___x_880_ = v___x_857_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
case 5:
{
lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v___x_882_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_883_ = lean_unsigned_to_nat(1u);
v___x_884_ = l_Lean_Expr_isAppOfArity(v___y_853_, v___x_882_, v___x_883_);
if (v___x_884_ == 0)
{
size_t v_sz_885_; size_t v___x_886_; lean_object* v___x_887_; 
lean_del_object(v___x_857_);
lean_dec_ref(v___y_853_);
v_sz_885_ = lean_array_size(v_subs_859_);
v___x_886_ = ((size_t)0ULL);
v___x_887_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_840_, v_vars_841_, v_sz_885_, v___x_886_, v_subs_859_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_887_;
}
else
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_888_ = l_Lean_Expr_appArg_x21(v___y_853_);
lean_dec_ref(v___y_853_);
v___x_889_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__4));
v___x_890_ = lean_unsigned_to_nat(2u);
v___x_891_ = l_Lean_Expr_isAppOfArity(v___x_888_, v___x_889_, v___x_890_);
if (v___x_891_ == 0)
{
size_t v_sz_892_; size_t v___x_893_; lean_object* v___x_894_; 
lean_dec_ref(v___x_888_);
lean_del_object(v___x_857_);
v_sz_892_ = lean_array_size(v_subs_859_);
v___x_893_ = ((size_t)0ULL);
v___x_894_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_840_, v_vars_841_, v_sz_892_, v___x_893_, v_subs_859_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_902_; 
lean_dec_ref(v_subs_859_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v___x_895_ = l_Lean_Expr_appFn_x21(v___x_888_);
v___x_896_ = l_Lean_Expr_appArg_x21(v___x_895_);
lean_dec_ref(v___x_895_);
v___x_897_ = l_Lean_Expr_appArg_x21(v___x_888_);
lean_dec_ref(v___x_888_);
v___x_898_ = lean_mk_empty_array_with_capacity(v___x_890_);
v___x_899_ = lean_array_push(v___x_898_, v___x_896_);
v___x_900_ = lean_array_push(v___x_899_, v___x_897_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_900_);
v___x_902_ = v___x_857_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
case 6:
{
lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v___x_904_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_905_ = lean_unsigned_to_nat(1u);
v___x_906_ = l_Lean_Expr_isAppOfArity(v___y_853_, v___x_904_, v___x_905_);
if (v___x_906_ == 0)
{
size_t v_sz_907_; size_t v___x_908_; lean_object* v___x_909_; 
lean_del_object(v___x_857_);
lean_dec_ref(v___y_853_);
v_sz_907_ = lean_array_size(v_subs_859_);
v___x_908_ = ((size_t)0ULL);
v___x_909_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_840_, v_vars_841_, v_sz_907_, v___x_908_, v_subs_859_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_914_; 
lean_dec_ref(v_subs_859_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v___x_910_ = l_Lean_Expr_appArg_x21(v___y_853_);
lean_dec_ref(v___y_853_);
v___x_911_ = lean_mk_empty_array_with_capacity(v___x_905_);
v___x_912_ = lean_array_push(v___x_911_, v___x_910_);
if (v_isShared_858_ == 0)
{
lean_ctor_set(v___x_857_, 0, v___x_912_);
v___x_914_ = v___x_857_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
default: 
{
size_t v_sz_916_; size_t v___x_917_; lean_object* v___x_918_; 
lean_del_object(v___x_857_);
lean_dec_ref(v___y_853_);
v_sz_916_ = lean_array_size(v_subs_859_);
v___x_917_ = ((size_t)0ULL);
v___x_918_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Vampire_Reconstruct_formula_spec__3(v_sorts_840_, v_vars_841_, v_sz_916_, v___x_917_, v_subs_859_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_);
return v___x_918_;
}
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec_ref(v___y_853_);
lean_dec_ref(v_g_842_);
lean_dec_ref(v_vars_841_);
lean_dec_ref(v_sorts_840_);
v_a_920_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_854_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_854_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___boxed(lean_object* v_sorts_932_, lean_object* v_vars_933_, lean_object* v_g_934_, lean_object* v_sign_935_, lean_object* v_stated_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
uint8_t v_sign_boxed_944_; lean_object* v_res_945_; 
v_sign_boxed_944_ = lean_unbox(v_sign_935_);
v_res_945_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts(v_sorts_932_, v_vars_933_, v_g_934_, v_sign_boxed_944_, v_stated_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(lean_object* v_l_946_, lean_object* v_as_947_, lean_object* v_j_948_){
_start:
{
uint8_t v___y_954_; lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = lean_array_get_size(v_as_947_);
v___x_957_ = lean_nat_dec_lt(v_j_948_, v___x_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
lean_dec(v_j_948_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
else
{
lean_object* v___x_959_; lean_object* v_fst_960_; lean_object* v_fst_961_; lean_object* v_snd_962_; lean_object* v_snd_963_; uint32_t v_idx_964_; uint32_t v_idx_965_; uint8_t v___x_966_; 
v___x_959_ = lean_array_fget_borrowed(v_as_947_, v_j_948_);
v_fst_960_ = lean_ctor_get(v___x_959_, 0);
v_fst_961_ = lean_ctor_get(v_l_946_, 0);
v_snd_962_ = lean_ctor_get(v___x_959_, 1);
v_snd_963_ = lean_ctor_get(v_l_946_, 1);
v_idx_964_ = lean_ctor_get_uint32(v_fst_960_, sizeof(void*)*1);
v_idx_965_ = lean_ctor_get_uint32(v_fst_961_, sizeof(void*)*1);
v___x_966_ = lean_uint32_dec_eq(v_idx_964_, v_idx_965_);
if (v___x_966_ == 0)
{
v___y_954_ = v___x_966_;
goto v___jp_953_;
}
else
{
uint8_t v___x_967_; 
v___x_967_ = lean_unbox(v_snd_962_);
if (v___x_967_ == 0)
{
uint8_t v___x_968_; 
v___x_968_ = lean_unbox(v_snd_963_);
if (v___x_968_ == 0)
{
v___y_954_ = v___x_966_;
goto v___jp_953_;
}
else
{
goto v___jp_949_;
}
}
else
{
uint8_t v___x_969_; 
v___x_969_ = lean_unbox(v_snd_963_);
v___y_954_ = v___x_969_;
goto v___jp_953_;
}
}
}
v___jp_949_:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_unsigned_to_nat(1u);
v___x_951_ = lean_nat_add(v_j_948_, v___x_950_);
lean_dec(v_j_948_);
v_j_948_ = v___x_951_;
goto _start;
}
v___jp_953_:
{
if (v___y_954_ == 0)
{
goto v___jp_949_;
}
else
{
lean_object* v___x_955_; 
v___x_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_955_, 0, v_j_948_);
return v___x_955_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1___boxed(lean_object* v_l_970_, lean_object* v_as_971_, lean_object* v_j_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(v_l_970_, v_as_971_, v_j_972_);
lean_dec_ref(v_as_971_);
lean_dec_ref(v_l_970_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0(lean_object* v_l_974_, lean_object* v_as_975_, lean_object* v_j_976_){
_start:
{
lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_977_ = lean_array_get_size(v_as_975_);
v___x_978_ = lean_nat_dec_lt(v_j_976_, v___x_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; 
lean_dec(v_j_976_);
v___x_979_ = lean_box(0);
return v___x_979_;
}
else
{
lean_object* v_fst_980_; lean_object* v___x_981_; uint32_t v_idx_982_; uint32_t v_idx_983_; uint8_t v___x_984_; 
v_fst_980_ = lean_ctor_get(v_l_974_, 0);
v___x_981_ = lean_array_fget_borrowed(v_as_975_, v_j_976_);
v_idx_982_ = lean_ctor_get_uint32(v___x_981_, sizeof(void*)*1);
v_idx_983_ = lean_ctor_get_uint32(v_fst_980_, sizeof(void*)*1);
v___x_984_ = lean_uint32_dec_eq(v_idx_982_, v_idx_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_unsigned_to_nat(1u);
v___x_986_ = lean_nat_add(v_j_976_, v___x_985_);
lean_dec(v_j_976_);
v_j_976_ = v___x_986_;
goto _start;
}
else
{
lean_object* v___x_988_; 
v___x_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_988_, 0, v_j_976_);
return v___x_988_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0___boxed(lean_object* v_l_989_, lean_object* v_as_990_, lean_object* v_j_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0(v_l_989_, v_as_990_, v_j_991_);
lean_dec_ref(v_as_990_);
lean_dec_ref(v_l_989_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2(lean_object* v_replaced_993_, lean_object* v_sorts_994_, lean_object* v_vars_995_, lean_object* v_parent_996_, lean_object* v_parentParts_997_, size_t v_sz_998_, size_t v_i_999_, lean_object* v_bs_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
uint8_t v___x_1008_; 
v___x_1008_ = lean_usize_dec_lt(v_i_999_, v_sz_998_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; 
lean_dec_ref(v_vars_995_);
lean_dec_ref(v_sorts_994_);
v___x_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_bs_1000_);
return v___x_1009_;
}
else
{
lean_object* v_v_1010_; lean_object* v___x_1011_; lean_object* v_bs_x27_1012_; lean_object* v_a_1014_; lean_object* v___y_1020_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___x_1052_; 
v_v_1010_ = lean_array_uget(v_bs_1000_, v_i_999_);
v___x_1011_ = lean_unsigned_to_nat(0u);
v_bs_x27_1012_ = lean_array_uset(v_bs_1000_, v_i_999_, v___x_1011_);
v___x_1052_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(v_v_1010_, v_parent_996_, v___x_1011_);
if (lean_obj_tag(v___x_1052_) == 1)
{
lean_object* v_val_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v_val_1053_ = lean_ctor_get(v___x_1052_, 0);
lean_inc(v_val_1053_);
lean_dec_ref_known(v___x_1052_, 1);
v___x_1054_ = lean_array_get_size(v_parentParts_997_);
v___x_1055_ = lean_nat_dec_lt(v_val_1053_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_dec(v_val_1053_);
v___y_1031_ = v___y_1001_;
v___y_1032_ = v___y_1002_;
v___y_1033_ = v___y_1003_;
v___y_1034_ = v___y_1004_;
v___y_1035_ = v___y_1005_;
v___y_1036_ = v___y_1006_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1056_; 
lean_dec(v_v_1010_);
v___x_1056_ = lean_array_fget_borrowed(v_parentParts_997_, v_val_1053_);
lean_dec(v_val_1053_);
lean_inc(v___x_1056_);
v_a_1014_ = v___x_1056_;
goto v___jp_1013_;
}
}
else
{
lean_dec(v___x_1052_);
v___y_1031_ = v___y_1001_;
v___y_1032_ = v___y_1002_;
v___y_1033_ = v___y_1003_;
v___y_1034_ = v___y_1004_;
v___y_1035_ = v___y_1005_;
v___y_1036_ = v___y_1006_;
goto v___jp_1030_;
}
v___jp_1013_:
{
size_t v___x_1015_; size_t v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_add(v_i_999_, v___x_1015_);
v___x_1017_ = lean_array_uset(v_bs_x27_1012_, v_i_999_, v_a_1014_);
v_i_999_ = v___x_1016_;
v_bs_1000_ = v___x_1017_;
goto _start;
}
v___jp_1019_:
{
if (lean_obj_tag(v___y_1020_) == 0)
{
lean_object* v_a_1021_; 
v_a_1021_ = lean_ctor_get(v___y_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___y_1020_, 1);
v_a_1014_ = v_a_1021_;
goto v___jp_1013_;
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec_ref(v_bs_x27_1012_);
lean_dec_ref(v_vars_995_);
lean_dec_ref(v_sorts_994_);
v_a_1022_ = lean_ctor_get(v___y_1020_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___y_1020_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___y_1020_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___y_1020_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
v___jp_1030_:
{
if (lean_obj_tag(v_replaced_993_) == 1)
{
lean_object* v_val_1037_; lean_object* v_fst_1038_; lean_object* v_snd_1039_; lean_object* v___x_1040_; 
v_val_1037_ = lean_ctor_get(v_replaced_993_, 0);
v_fst_1038_ = lean_ctor_get(v_val_1037_, 0);
v_snd_1039_ = lean_ctor_get(v_val_1037_, 1);
v___x_1040_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__0(v_v_1010_, v_fst_1038_, v___x_1011_);
if (lean_obj_tag(v___x_1040_) == 1)
{
lean_object* v_val_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v_val_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_val_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = lean_array_get_size(v_snd_1039_);
v___x_1043_ = lean_nat_dec_lt(v_val_1041_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; 
lean_dec(v_val_1041_);
lean_inc_ref(v_vars_995_);
lean_inc_ref(v_sorts_994_);
v___x_1044_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_994_, v_vars_995_, v_v_1010_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
v___y_1020_ = v___x_1044_;
goto v___jp_1019_;
}
else
{
lean_object* v_snd_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_snd_1045_ = lean_ctor_get(v_v_1010_, 1);
lean_inc(v_snd_1045_);
lean_dec(v_v_1010_);
v___x_1046_ = lean_array_fget_borrowed(v_snd_1039_, v_val_1041_);
lean_dec(v_val_1041_);
v___x_1047_ = lean_unbox(v_snd_1045_);
lean_dec(v_snd_1045_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2);
lean_inc(v___x_1046_);
v___x_1049_ = l_Lean_Expr_app___override(v___x_1048_, v___x_1046_);
v_a_1014_ = v___x_1049_;
goto v___jp_1013_;
}
else
{
lean_inc(v___x_1046_);
v_a_1014_ = v___x_1046_;
goto v___jp_1013_;
}
}
}
else
{
lean_object* v___x_1050_; 
lean_dec(v___x_1040_);
lean_inc_ref(v_vars_995_);
lean_inc_ref(v_sorts_994_);
v___x_1050_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_994_, v_vars_995_, v_v_1010_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
v___y_1020_ = v___x_1050_;
goto v___jp_1019_;
}
}
else
{
lean_object* v___x_1051_; 
lean_inc_ref(v_vars_995_);
lean_inc_ref(v_sorts_994_);
v___x_1051_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_994_, v_vars_995_, v_v_1010_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
v___y_1020_ = v___x_1051_;
goto v___jp_1019_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2___boxed(lean_object* v_replaced_1057_, lean_object* v_sorts_1058_, lean_object* v_vars_1059_, lean_object* v_parent_1060_, lean_object* v_parentParts_1061_, lean_object* v_sz_1062_, lean_object* v_i_1063_, lean_object* v_bs_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
size_t v_sz_boxed_1072_; size_t v_i_boxed_1073_; lean_object* v_res_1074_; 
v_sz_boxed_1072_ = lean_unbox_usize(v_sz_1062_);
lean_dec(v_sz_1062_);
v_i_boxed_1073_ = lean_unbox_usize(v_i_1063_);
lean_dec(v_i_1063_);
v_res_1074_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2(v_replaced_1057_, v_sorts_1058_, v_vars_1059_, v_parent_1060_, v_parentParts_1061_, v_sz_boxed_1072_, v_i_boxed_1073_, v_bs_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec_ref(v_parentParts_1061_);
lean_dec_ref(v_parent_1060_);
lean_dec(v_replaced_1057_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom(lean_object* v_sorts_1075_, lean_object* v_vars_1076_, lean_object* v_c_1077_, lean_object* v_parent_1078_, lean_object* v_parentParts_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v_replaced_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___x_1099_; 
v___x_1099_ = lp_vampireReplay_Vampire_GenClause_position_x3f(v_c_1077_);
if (lean_obj_tag(v___x_1099_) == 1)
{
lean_object* v_val_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1149_; 
v_val_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1149_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_val_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1149_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
uint32_t v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v___x_1104_ = lean_unbox_uint32(v_val_1100_);
lean_dec(v_val_1100_);
v___x_1105_ = lean_uint32_to_nat(v___x_1104_);
v___x_1106_ = lean_array_get_size(v_parent_1078_);
v___x_1107_ = lean_nat_dec_lt(v___x_1105_, v___x_1106_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1108_; 
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___x_1108_ = lean_box(0);
v_replaced_1088_ = v___x_1108_;
v___y_1089_ = v_a_1080_;
v___y_1090_ = v_a_1081_;
v___y_1091_ = v_a_1082_;
v___y_1092_ = v_a_1083_;
v___y_1093_ = v_a_1084_;
v___y_1094_ = v_a_1085_;
goto v___jp_1087_;
}
else
{
lean_object* v___x_1109_; lean_object* v_fst_1110_; lean_object* v_snd_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1148_; 
v___x_1109_ = lean_array_fget(v_parent_1078_, v___x_1105_);
v_fst_1110_ = lean_ctor_get(v___x_1109_, 0);
v_snd_1111_ = lean_ctor_get(v___x_1109_, 1);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1113_ = v___x_1109_;
v_isShared_1114_ = v_isSharedCheck_1148_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snd_1111_);
lean_inc(v_fst_1110_);
lean_dec(v___x_1109_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1148_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; uint8_t v___x_1116_; 
v___x_1115_ = lean_array_get_size(v_parentParts_1079_);
v___x_1116_ = lean_nat_dec_lt(v___x_1105_, v___x_1115_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___x_1117_ = lean_box(0);
v_replaced_1088_ = v___x_1117_;
v___y_1089_ = v_a_1080_;
v___y_1090_ = v_a_1081_;
v___y_1091_ = v_a_1082_;
v___y_1092_ = v_a_1083_;
v___y_1093_ = v_a_1084_;
v___y_1094_ = v_a_1085_;
goto v___jp_1087_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_1110_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; uint8_t v___x_1128_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc(v_a_1119_);
lean_dec_ref_known(v___x_1118_, 1);
v___x_1128_ = lean_unbox(v_a_1119_);
lean_dec(v_a_1119_);
switch(v___x_1128_)
{
case 7:
{
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___y_1121_ = v_a_1080_;
v___y_1122_ = v_a_1081_;
v___y_1123_ = v_a_1082_;
v___y_1124_ = v_a_1083_;
v___y_1125_ = v_a_1084_;
v___y_1126_ = v_a_1085_;
goto v___jp_1120_;
}
case 8:
{
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___y_1121_ = v_a_1080_;
v___y_1122_ = v_a_1081_;
v___y_1123_ = v_a_1082_;
v___y_1124_ = v_a_1083_;
v___y_1125_ = v_a_1084_;
v___y_1126_ = v_a_1085_;
goto v___jp_1120_;
}
case 12:
{
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___y_1121_ = v_a_1080_;
v___y_1122_ = v_a_1081_;
v___y_1123_ = v_a_1082_;
v___y_1124_ = v_a_1083_;
v___y_1125_ = v_a_1084_;
v___y_1126_ = v_a_1085_;
goto v___jp_1120_;
}
case 0:
{
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
v___y_1121_ = v_a_1080_;
v___y_1122_ = v_a_1081_;
v___y_1123_ = v_a_1082_;
v___y_1124_ = v_a_1083_;
v___y_1125_ = v_a_1084_;
v___y_1126_ = v_a_1085_;
goto v___jp_1120_;
}
default: 
{
lean_object* v___x_1129_; uint8_t v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_array_fget_borrowed(v_parentParts_1079_, v___x_1105_);
lean_dec(v___x_1105_);
v___x_1130_ = lean_unbox(v_snd_1111_);
lean_dec(v_snd_1111_);
lean_inc(v___x_1129_);
lean_inc(v_fst_1110_);
lean_inc_ref(v_vars_1076_);
lean_inc_ref(v_sorts_1075_);
v___x_1131_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts(v_sorts_1075_, v_vars_1076_, v_fst_1110_, v___x_1130_, v___x_1129_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1133_; lean_object* v___x_1135_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1133_ = lp_vampireReplay_Vampire_Formula_subformulas(v_fst_1110_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 1, v_a_1132_);
lean_ctor_set(v___x_1113_, 0, v___x_1133_);
v___x_1135_ = v___x_1113_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_a_1132_);
v___x_1135_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1137_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1135_);
v___x_1137_ = v___x_1102_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
v_replaced_1088_ = v___x_1137_;
v___y_1089_ = v_a_1080_;
v___y_1090_ = v_a_1081_;
v___y_1091_ = v_a_1082_;
v___y_1092_ = v_a_1083_;
v___y_1093_ = v_a_1084_;
v___y_1094_ = v_a_1085_;
goto v___jp_1087_;
}
}
}
else
{
lean_del_object(v___x_1113_);
lean_dec(v_fst_1110_);
lean_del_object(v___x_1102_);
lean_dec_ref(v_c_1077_);
lean_dec_ref(v_vars_1076_);
lean_dec_ref(v_sorts_1075_);
return v___x_1131_;
}
}
}
v___jp_1120_:
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_box(0);
v_replaced_1088_ = v___x_1127_;
v___y_1089_ = v___y_1121_;
v___y_1090_ = v___y_1122_;
v___y_1091_ = v___y_1123_;
v___y_1092_ = v___y_1124_;
v___y_1093_ = v___y_1125_;
v___y_1094_ = v___y_1126_;
goto v___jp_1087_;
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_del_object(v___x_1113_);
lean_dec(v_snd_1111_);
lean_dec(v_fst_1110_);
lean_dec(v___x_1105_);
lean_del_object(v___x_1102_);
lean_dec_ref(v_c_1077_);
lean_dec_ref(v_vars_1076_);
lean_dec_ref(v_sorts_1075_);
v_a_1140_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1118_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1118_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
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
lean_object* v___x_1150_; 
lean_dec(v___x_1099_);
v___x_1150_ = lean_box(0);
v_replaced_1088_ = v___x_1150_;
v___y_1089_ = v_a_1080_;
v___y_1090_ = v_a_1081_;
v___y_1091_ = v_a_1082_;
v___y_1092_ = v_a_1083_;
v___y_1093_ = v_a_1084_;
v___y_1094_ = v_a_1085_;
goto v___jp_1087_;
}
v___jp_1087_:
{
lean_object* v___x_1095_; size_t v_sz_1096_; size_t v___x_1097_; lean_object* v___x_1098_; 
v___x_1095_ = lp_vampireReplay_Vampire_GenClause_literals(v_c_1077_);
v_sz_1096_ = lean_array_size(v___x_1095_);
v___x_1097_ = ((size_t)0ULL);
v___x_1098_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__2(v_replaced_1088_, v_sorts_1075_, v_vars_1076_, v_parent_1078_, v_parentParts_1079_, v_sz_1096_, v___x_1097_, v___x_1095_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
lean_dec(v_replaced_1088_);
return v___x_1098_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom___boxed(lean_object* v_sorts_1151_, lean_object* v_vars_1152_, lean_object* v_c_1153_, lean_object* v_parent_1154_, lean_object* v_parentParts_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom(v_sorts_1151_, v_vars_1152_, v_c_1153_, v_parent_1154_, v_parentParts_1155_, v_a_1156_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_);
lean_dec(v_a_1161_);
lean_dec_ref(v_a_1160_);
lean_dec(v_a_1159_);
lean_dec_ref(v_a_1158_);
lean_dec(v_a_1157_);
lean_dec_ref(v_a_1156_);
lean_dec_ref(v_parentParts_1155_);
lean_dec_ref(v_parent_1154_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg(lean_object* v_e_1167_, lean_object* v_as_1168_, size_t v_sz_1169_, size_t v_i_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
uint8_t v___x_1177_; 
v___x_1177_ = lean_usize_dec_lt(v_i_1170_, v_sz_1169_);
if (v___x_1177_ == 0)
{
lean_object* v___x_1178_; 
lean_dec_ref(v_e_1167_);
v___x_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1178_, 0, v_b_1171_);
return v___x_1178_;
}
else
{
lean_object* v_a_1179_; lean_object* v_fst_1180_; lean_object* v_snd_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v_b_1171_);
v_a_1179_ = lean_array_uget(v_as_1168_, v_i_1170_);
v_fst_1180_ = lean_ctor_get(v_a_1179_, 0);
v_snd_1181_ = lean_ctor_get(v_a_1179_, 1);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_a_1179_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1183_ = v_a_1179_;
v_isShared_1184_ = v_isSharedCheck_1212_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_snd_1181_);
lean_inc(v_fst_1180_);
lean_dec(v_a_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1212_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; 
lean_inc_ref(v_e_1167_);
v___x_1185_ = l_Lean_Meta_isExprDefEq(v_fst_1180_, v_e_1167_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1203_; 
v_a_1186_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1188_ = v___x_1185_;
v_isShared_1189_ = v_isSharedCheck_1203_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1185_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1203_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1190_; uint8_t v___x_1191_; 
v___x_1190_ = lean_box(0);
v___x_1191_ = lean_unbox(v_a_1186_);
lean_dec(v_a_1186_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; 
lean_del_object(v___x_1188_);
lean_del_object(v___x_1183_);
lean_dec(v_snd_1181_);
v___x_1192_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___closed__0));
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1170_, v___x_1193_);
v_i_1170_ = v___x_1194_;
v_b_1171_ = v___x_1192_;
goto _start;
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
lean_dec_ref(v_e_1167_);
v___x_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1196_, 0, v_snd_1181_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1190_);
lean_ctor_set(v___x_1183_, 0, v___x_1196_);
v___x_1198_ = v___x_1183_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v___x_1190_);
v___x_1198_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1200_; 
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v___x_1198_);
v___x_1200_ = v___x_1188_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1198_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_del_object(v___x_1183_);
lean_dec(v_snd_1181_);
lean_dec_ref(v_e_1167_);
v_a_1204_ = lean_ctor_get(v___x_1185_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1185_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1185_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1185_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___boxed(lean_object* v_e_1213_, lean_object* v_as_1214_, lean_object* v_sz_1215_, lean_object* v_i_1216_, lean_object* v_b_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
size_t v_sz_boxed_1223_; size_t v_i_boxed_1224_; lean_object* v_res_1225_; 
v_sz_boxed_1223_ = lean_unbox_usize(v_sz_1215_);
lean_dec(v_sz_1215_);
v_i_boxed_1224_ = lean_unbox_usize(v_i_1216_);
lean_dec(v_i_1216_);
v_res_1225_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg(v_e_1213_, v_as_1214_, v_sz_boxed_1223_, v_i_boxed_1224_, v_b_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec_ref(v_as_1214_);
return v_res_1225_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__0));
v___x_1228_ = l_Lean_stringToMessageData(v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart(lean_object* v_parts_1229_, lean_object* v_e_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; size_t v_sz_1241_; size_t v___x_1242_; lean_object* v___x_1243_; 
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = l_Array_zipIdx___redArg(v_parts_1229_, v___x_1238_);
v___x_1240_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg___closed__0));
v_sz_1241_ = lean_array_size(v___x_1239_);
v___x_1242_ = ((size_t)0ULL);
lean_inc_ref(v_e_1230_);
v___x_1243_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg(v_e_1230_, v___x_1239_, v_sz_1241_, v___x_1242_, v___x_1240_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
lean_dec_ref(v___x_1239_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1264_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1246_ = v___x_1243_;
v_isShared_1247_ = v_isSharedCheck_1264_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1243_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1264_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v_fst_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1262_; 
v_fst_1248_ = lean_ctor_get(v_a_1244_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_a_1244_);
if (v_isSharedCheck_1262_ == 0)
{
lean_object* v_unused_1263_; 
v_unused_1263_ = lean_ctor_get(v_a_1244_, 1);
lean_dec(v_unused_1263_);
v___x_1250_ = v_a_1244_;
v_isShared_1251_ = v_isSharedCheck_1262_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_fst_1248_);
lean_dec(v_a_1244_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1262_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
if (lean_obj_tag(v_fst_1248_) == 0)
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1255_; 
lean_del_object(v___x_1246_);
v___x_1252_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___closed__1);
v___x_1253_ = l_Lean_indentExpr(v_e_1230_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set_tag(v___x_1250_, 7);
lean_ctor_set(v___x_1250_, 1, v___x_1253_);
lean_ctor_set(v___x_1250_, 0, v___x_1252_);
v___x_1255_ = v___x_1250_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1252_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
lean_object* v___x_1256_; 
v___x_1256_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1255_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_);
return v___x_1256_;
}
}
else
{
lean_object* v_val_1258_; lean_object* v___x_1260_; 
lean_del_object(v___x_1250_);
lean_dec_ref(v_e_1230_);
v_val_1258_ = lean_ctor_get(v_fst_1248_, 0);
lean_inc(v_val_1258_);
lean_dec_ref_known(v_fst_1248_, 1);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 0, v_val_1258_);
v___x_1260_ = v___x_1246_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_val_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec_ref(v_e_1230_);
v_a_1265_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1243_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1243_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart___boxed(lean_object* v_parts_1273_, lean_object* v_e_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart(v_parts_1273_, v_e_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0(lean_object* v_e_1283_, lean_object* v_as_1284_, size_t v_sz_1285_, size_t v_i_1286_, lean_object* v_b_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___redArg(v_e_1283_, v_as_1284_, v_sz_1285_, v_i_1286_, v_b_1287_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0___boxed(lean_object* v_e_1296_, lean_object* v_as_1297_, lean_object* v_sz_1298_, lean_object* v_i_1299_, lean_object* v_b_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
size_t v_sz_boxed_1308_; size_t v_i_boxed_1309_; lean_object* v_res_1310_; 
v_sz_boxed_1308_ = lean_unbox_usize(v_sz_1298_);
lean_dec(v_sz_1298_);
v_i_boxed_1309_ = lean_unbox_usize(v_i_1299_);
lean_dec(v_i_1299_);
v_res_1310_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_indexOfPart_spec__0(v_e_1296_, v_as_1297_, v_sz_boxed_1308_, v_i_boxed_1309_, v_b_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec_ref(v_as_1297_);
return v_res_1310_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__0));
v___x_1313_ = l_Lean_stringToMessageData(v___x_1312_);
return v___x_1313_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__2));
v___x_1316_ = l_Lean_stringToMessageData(v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(uint8_t v_sign_1317_, lean_object* v_negation_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
if (v_sign_1317_ == 0)
{
lean_object* v___x_1326_; 
lean_inc(v___y_1324_);
lean_inc_ref(v___y_1323_);
lean_inc(v___y_1322_);
lean_inc_ref(v___y_1321_);
lean_inc_ref(v_negation_1318_);
v___x_1326_ = lean_infer_type(v_negation_1318_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1345_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_1327_, v___y_1322_);
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1345_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1345_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; 
v___x_1333_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_1329_);
if (lean_obj_tag(v___x_1333_) == 1)
{
lean_object* v_val_1334_; lean_object* v___x_1335_; 
v_val_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_val_1334_);
lean_dec_ref_known(v___x_1333_, 1);
v___x_1335_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_val_1334_);
if (lean_obj_tag(v___x_1335_) == 1)
{
lean_object* v_val_1336_; lean_object* v___x_1337_; lean_object* v___x_1339_; 
v_val_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_val_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_val_1336_, v_negation_1318_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v___x_1337_);
v___x_1339_ = v___x_1331_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
else
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
lean_dec(v___x_1335_);
lean_del_object(v___x_1331_);
lean_dec_ref(v_negation_1318_);
v___x_1341_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__1);
v___x_1342_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1341_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
return v___x_1342_;
}
}
else
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
lean_dec(v___x_1333_);
lean_del_object(v___x_1331_);
lean_dec_ref(v_negation_1318_);
v___x_1343_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___closed__3);
v___x_1344_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1343_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
return v___x_1344_;
}
}
}
else
{
lean_dec_ref(v_negation_1318_);
return v___x_1326_;
}
}
else
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_negation_1318_);
return v___x_1346_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0___boxed(lean_object* v_sign_1347_, lean_object* v_negation_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
uint8_t v_sign_boxed_1356_; lean_object* v_res_1357_; 
v_sign_boxed_1356_ = lean_unbox(v_sign_1347_);
v_res_1357_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v_sign_boxed_1356_, v_negation_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1357_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__1));
v___x_1363_ = l_Lean_stringToMessageData(v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg(lean_object* v___x_1364_, lean_object* v_a_1365_, lean_object* v_as_1366_, size_t v_sz_1367_, size_t v_i_1368_, lean_object* v_b_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_a_1376_; uint8_t v___x_1380_; 
v___x_1380_ = lean_usize_dec_lt(v_i_1368_, v_sz_1367_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v_b_1369_);
return v___x_1381_;
}
else
{
lean_object* v_a_1382_; lean_object* v_fst_1383_; lean_object* v_fst_1384_; lean_object* v_snd_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_b_1369_);
v_a_1382_ = lean_array_uget(v_as_1366_, v_i_1368_);
v_fst_1383_ = lean_ctor_get(v_a_1382_, 0);
lean_inc(v_fst_1383_);
v_fst_1384_ = lean_ctor_get(v_fst_1383_, 0);
lean_inc(v_fst_1384_);
v_snd_1385_ = lean_ctor_get(v_a_1382_, 1);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_a_1382_);
if (v_isSharedCheck_1421_ == 0)
{
lean_object* v_unused_1422_; 
v_unused_1422_ = lean_ctor_get(v_a_1382_, 0);
lean_dec(v_unused_1422_);
v___x_1387_ = v_a_1382_;
v_isShared_1388_ = v_isSharedCheck_1421_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_snd_1385_);
lean_dec(v_a_1382_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1421_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v_snd_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1419_; 
v_snd_1389_ = lean_ctor_get(v_fst_1383_, 1);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_fst_1383_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; 
v_unused_1420_ = lean_ctor_get(v_fst_1383_, 0);
lean_dec(v_unused_1420_);
v___x_1391_ = v_fst_1383_;
v_isShared_1392_ = v_isSharedCheck_1419_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_snd_1389_);
lean_dec(v_fst_1383_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1419_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
uint32_t v_idx_1393_; uint32_t v_idx_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v_idx_1393_ = lean_ctor_get_uint32(v_fst_1384_, sizeof(void*)*1);
lean_dec(v_fst_1384_);
v_idx_1394_ = lean_ctor_get_uint32(v___x_1364_, sizeof(void*)*1);
v___x_1395_ = lean_box(0);
v___x_1396_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__0));
v___x_1397_ = lean_uint32_dec_eq(v_idx_1393_, v_idx_1394_);
if (v___x_1397_ == 0)
{
lean_del_object(v___x_1391_);
lean_dec(v_snd_1389_);
lean_del_object(v___x_1387_);
lean_dec(v_snd_1385_);
v_a_1376_ = v___x_1396_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = lean_array_get_size(v_a_1365_);
v___x_1399_ = lean_nat_dec_lt(v_snd_1385_, v___x_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_del_object(v___x_1391_);
lean_dec(v_snd_1389_);
lean_del_object(v___x_1387_);
lean_dec(v_snd_1385_);
v___x_1400_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2);
v___x_1401_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1400_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_dec_ref_known(v___x_1401_, 1);
v_a_1376_ = v___x_1396_;
goto v___jp_1375_;
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1401_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1401_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = lean_array_fget_borrowed(v_a_1365_, v_snd_1385_);
lean_dec(v_snd_1385_);
lean_inc(v___x_1410_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 1, v___x_1410_);
lean_ctor_set(v___x_1391_, 0, v_snd_1389_);
v___x_1412_ = v___x_1391_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_snd_1389_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1415_; 
v___x_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 1, v___x_1395_);
lean_ctor_set(v___x_1387_, 0, v___x_1413_);
v___x_1415_ = v___x_1387_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1413_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v___x_1395_);
v___x_1415_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
}
}
}
}
}
v___jp_1375_:
{
size_t v___x_1377_; size_t v___x_1378_; 
v___x_1377_ = ((size_t)1ULL);
v___x_1378_ = lean_usize_add(v_i_1368_, v___x_1377_);
lean_inc_ref(v_a_1376_);
v_i_1368_ = v___x_1378_;
v_b_1369_ = v_a_1376_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___boxed(lean_object* v___x_1423_, lean_object* v_a_1424_, lean_object* v_as_1425_, lean_object* v_sz_1426_, lean_object* v_i_1427_, lean_object* v_b_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
size_t v_sz_boxed_1434_; size_t v_i_boxed_1435_; lean_object* v_res_1436_; 
v_sz_boxed_1434_ = lean_unbox_usize(v_sz_1426_);
lean_dec(v_sz_1426_);
v_i_boxed_1435_ = lean_unbox_usize(v_i_1427_);
lean_dec(v_i_1427_);
v_res_1436_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg(v___x_1423_, v_a_1424_, v_as_1425_, v_sz_boxed_1434_, v_i_boxed_1435_, v_b_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec_ref(v_as_1425_);
lean_dec_ref(v_a_1424_);
lean_dec_ref(v___x_1423_);
return v_res_1436_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__0));
v___x_1439_ = l_Lean_stringToMessageData(v___x_1438_);
return v___x_1439_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__2));
v___x_1442_ = l_Lean_stringToMessageData(v___x_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1(lean_object* v___x_1443_, lean_object* v_replacement_1444_, lean_object* v_a_1445_, size_t v___x_1446_, lean_object* v_j_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = lean_array_get_size(v___x_1443_);
v___x_1456_ = lean_nat_dec_lt(v_j_1447_, v___x_1455_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
lean_dec_ref(v_replacement_1444_);
v___x_1457_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__1);
v___x_1458_ = l_Nat_reprFast(v_j_1447_);
v___x_1459_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
v___x_1460_ = l_Lean_MessageData_ofFormat(v___x_1459_);
v___x_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1457_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
v___x_1462_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1461_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
return v___x_1462_;
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; size_t v_sz_1467_; lean_object* v___x_1468_; 
v___x_1463_ = lean_array_fget_borrowed(v___x_1443_, v_j_1447_);
lean_dec(v_j_1447_);
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = l_Array_zipIdx___redArg(v_replacement_1444_, v___x_1464_);
v___x_1466_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__0));
v_sz_1467_ = lean_array_size(v___x_1465_);
v___x_1468_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg(v___x_1463_, v_a_1445_, v___x_1465_, v_sz_1467_, v___x_1446_, v___x_1466_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec_ref(v___x_1465_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1480_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1480_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1480_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_fst_1473_; 
v_fst_1473_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_fst_1473_);
lean_dec(v_a_1469_);
if (lean_obj_tag(v_fst_1473_) == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_del_object(v___x_1471_);
v___x_1474_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___closed__3);
v___x_1475_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1474_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
return v___x_1475_;
}
else
{
lean_object* v_val_1476_; lean_object* v___x_1478_; 
v_val_1476_ = lean_ctor_get(v_fst_1473_, 0);
lean_inc(v_val_1476_);
lean_dec_ref_known(v_fst_1473_, 1);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v_val_1476_);
v___x_1478_ = v___x_1471_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_val_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1468_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1468_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___boxed(lean_object* v___x_1489_, lean_object* v_replacement_1490_, lean_object* v_a_1491_, lean_object* v___x_1492_, lean_object* v_j_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
size_t v___x_79720__boxed_1501_; lean_object* v_res_1502_; 
v___x_79720__boxed_1501_ = lean_unbox_usize(v___x_1492_);
lean_dec(v___x_1492_);
v_res_1502_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1(v___x_1489_, v_replacement_1490_, v_a_1491_, v___x_79720__boxed_1501_, v_j_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec_ref(v_a_1491_);
lean_dec_ref(v___x_1489_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2(lean_object* v___f_1503_, lean_object* v___f_1504_, lean_object* v_j_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; 
lean_inc(v___y_1511_);
lean_inc_ref(v___y_1510_);
lean_inc(v___y_1509_);
lean_inc_ref(v___y_1508_);
lean_inc(v___y_1507_);
lean_inc_ref(v___y_1506_);
v___x_1513_ = lean_apply_8(v___f_1503_, v_j_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, lean_box(0));
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v_fst_1515_; lean_object* v_snd_1516_; lean_object* v___x_1517_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v___x_1513_, 1);
v_fst_1515_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_fst_1515_);
v_snd_1516_ = lean_ctor_get(v_a_1514_, 1);
lean_inc(v_snd_1516_);
lean_dec(v_a_1514_);
lean_inc(v___y_1511_);
lean_inc_ref(v___y_1510_);
lean_inc(v___y_1509_);
lean_inc_ref(v___y_1508_);
lean_inc(v___y_1507_);
lean_inc_ref(v___y_1506_);
v___x_1517_ = lean_apply_9(v___f_1504_, v_fst_1515_, v_snd_1516_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, lean_box(0));
return v___x_1517_;
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec_ref(v___f_1504_);
v_a_1518_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1513_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1513_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2___boxed(lean_object* v___f_1526_, lean_object* v___f_1527_, lean_object* v_j_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2(v___f_1526_, v___f_1527_, v_j_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3(lean_object* v___f_1537_, lean_object* v_j_1538_, lean_object* v_hj_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v___x_1547_; 
lean_inc(v___y_1545_);
lean_inc_ref(v___y_1544_);
lean_inc(v___y_1543_);
lean_inc_ref(v___y_1542_);
lean_inc(v___y_1541_);
lean_inc_ref(v___y_1540_);
v___x_1547_ = lean_apply_8(v___f_1537_, v_j_1538_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, lean_box(0));
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1557_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1557_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1557_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v_snd_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v_snd_1552_ = lean_ctor_get(v_a_1548_, 1);
lean_inc(v_snd_1552_);
lean_dec(v_a_1548_);
v___x_1553_ = l_Lean_Expr_app___override(v_snd_1552_, v_hj_1539_);
if (v_isShared_1551_ == 0)
{
lean_ctor_set(v___x_1550_, 0, v___x_1553_);
v___x_1555_ = v___x_1550_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v_hj_1539_);
v_a_1558_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1547_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1547_);
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
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3___boxed(lean_object* v___f_1566_, lean_object* v_j_1567_, lean_object* v_hj_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3(v___f_1566_, v_j_1567_, v_hj_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg(lean_object* v_fst_1580_, uint8_t v_snd_1581_, lean_object* v___x_1582_, lean_object* v_as_1583_, size_t v_sz_1584_, size_t v_i_1585_, lean_object* v_b_1586_){
_start:
{
uint8_t v___x_1588_; 
v___x_1588_ = lean_usize_dec_lt(v_i_1585_, v_sz_1584_);
if (v___x_1588_ == 0)
{
lean_object* v___x_1589_; 
lean_dec_ref(v___x_1582_);
v___x_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_b_1586_);
return v___x_1589_;
}
else
{
lean_object* v_a_1590_; lean_object* v_fst_1591_; lean_object* v_snd_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1612_; 
lean_dec_ref(v_b_1586_);
v_a_1590_ = lean_array_uget(v_as_1583_, v_i_1585_);
v_fst_1591_ = lean_ctor_get(v_a_1590_, 0);
v_snd_1592_ = lean_ctor_get(v_a_1590_, 1);
v_isSharedCheck_1612_ = !lean_is_exclusive(v_a_1590_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1594_ = v_a_1590_;
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_snd_1592_);
lean_inc(v_fst_1591_);
lean_dec(v_a_1590_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1612_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
uint32_t v_idx_1596_; uint32_t v_idx_1597_; lean_object* v___x_1598_; uint8_t v___x_1599_; 
v_idx_1596_ = lean_ctor_get_uint32(v_fst_1580_, sizeof(void*)*1);
v_idx_1597_ = lean_ctor_get_uint32(v_fst_1591_, sizeof(void*)*1);
lean_dec(v_fst_1591_);
v___x_1598_ = lean_box(0);
v___x_1599_ = lean_uint32_dec_eq(v_idx_1596_, v_idx_1597_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; size_t v___x_1601_; size_t v___x_1602_; 
lean_del_object(v___x_1594_);
lean_dec(v_snd_1592_);
v___x_1600_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___closed__0));
v___x_1601_ = ((size_t)1ULL);
v___x_1602_ = lean_usize_add(v_i_1585_, v___x_1601_);
v_i_1585_ = v___x_1602_;
v_b_1586_ = v___x_1600_;
goto _start;
}
else
{
lean_object* v___x_1604_; lean_object* v___x_1606_; 
v___x_1604_ = lean_box(v_snd_1581_);
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 1, v___x_1582_);
lean_ctor_set(v___x_1594_, 0, v___x_1604_);
v___x_1606_ = v___x_1594_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v___x_1604_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v___x_1582_);
v___x_1606_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1607_, 0, v_snd_1592_);
lean_ctor_set(v___x_1607_, 1, v___x_1606_);
v___x_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
lean_ctor_set(v___x_1609_, 1, v___x_1598_);
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
return v___x_1610_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___boxed(lean_object* v_fst_1613_, lean_object* v_snd_1614_, lean_object* v___x_1615_, lean_object* v_as_1616_, lean_object* v_sz_1617_, lean_object* v_i_1618_, lean_object* v_b_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_snd_79941__boxed_1621_; size_t v_sz_boxed_1622_; size_t v_i_boxed_1623_; lean_object* v_res_1624_; 
v_snd_79941__boxed_1621_ = lean_unbox(v_snd_1614_);
v_sz_boxed_1622_ = lean_unbox_usize(v_sz_1617_);
lean_dec(v_sz_1617_);
v_i_boxed_1623_ = lean_unbox_usize(v_i_1618_);
lean_dec(v_i_1618_);
v_res_1624_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg(v_fst_1613_, v_snd_79941__boxed_1621_, v___x_1615_, v_as_1616_, v_sz_boxed_1622_, v_i_boxed_1623_, v_b_1619_);
lean_dec_ref(v_as_1616_);
lean_dec_ref(v_fst_1613_);
return v_res_1624_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1626_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__0));
v___x_1627_ = l_Lean_stringToMessageData(v___x_1626_);
return v___x_1627_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__2));
v___x_1630_ = l_Lean_stringToMessageData(v___x_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4(lean_object* v___y_1631_, lean_object* v_a_1632_, lean_object* v___x_1633_, lean_object* v___x_1634_, size_t v___x_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
if (lean_obj_tag(v___y_1631_) == 1)
{
lean_object* v_val_1643_; lean_object* v_fst_1644_; lean_object* v_snd_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; 
v_val_1643_ = lean_ctor_get(v___y_1631_, 0);
v_fst_1644_ = lean_ctor_get(v_val_1643_, 0);
v_snd_1645_ = lean_ctor_get(v_val_1643_, 1);
v___x_1646_ = lean_array_get_size(v_a_1632_);
v___x_1647_ = lean_nat_dec_lt(v___x_1633_, v___x_1646_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_dec_ref(v___x_1634_);
v___x_1648_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg___closed__2);
v___x_1649_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1648_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
return v___x_1649_;
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; size_t v_sz_1653_; uint8_t v___x_1654_; lean_object* v___x_1655_; 
v___x_1650_ = lean_array_fget_borrowed(v_a_1632_, v___x_1633_);
v___x_1651_ = l_Array_zipIdx___redArg(v___x_1634_, v___x_1633_);
v___x_1652_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg___closed__0));
v_sz_1653_ = lean_array_size(v___x_1651_);
v___x_1654_ = lean_unbox(v_snd_1645_);
lean_inc(v___x_1650_);
v___x_1655_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg(v_fst_1644_, v___x_1654_, v___x_1650_, v___x_1651_, v_sz_1653_, v___x_1635_, v___x_1652_);
lean_dec_ref(v___x_1651_);
if (lean_obj_tag(v___x_1655_) == 0)
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1667_; 
v_a_1656_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1658_ = v___x_1655_;
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1655_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1667_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v_fst_1660_; 
v_fst_1660_ = lean_ctor_get(v_a_1656_, 0);
lean_inc(v_fst_1660_);
lean_dec(v_a_1656_);
if (lean_obj_tag(v_fst_1660_) == 0)
{
lean_object* v___x_1661_; lean_object* v___x_1662_; 
lean_del_object(v___x_1658_);
v___x_1661_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__1);
v___x_1662_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1661_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
return v___x_1662_;
}
else
{
lean_object* v_val_1663_; lean_object* v___x_1665_; 
v_val_1663_ = lean_ctor_get(v_fst_1660_, 0);
lean_inc(v_val_1663_);
lean_dec_ref_known(v_fst_1660_, 1);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 0, v_val_1663_);
v___x_1665_ = v___x_1658_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_val_1663_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_a_1668_ = lean_ctor_get(v___x_1655_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1655_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1655_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1655_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
else
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
lean_dec_ref(v___x_1634_);
v___x_1676_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___closed__3);
v___x_1677_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1676_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4___boxed(lean_object* v___y_1678_, lean_object* v_a_1679_, lean_object* v___x_1680_, lean_object* v___x_1681_, lean_object* v___x_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
size_t v___x_80021__boxed_1690_; lean_object* v_res_1691_; 
v___x_80021__boxed_1690_ = lean_unbox_usize(v___x_1682_);
lean_dec(v___x_1682_);
v_res_1691_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4(v___y_1678_, v_a_1679_, v___x_1680_, v___x_1681_, v___x_80021__boxed_1690_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v___x_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v___y_1678_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0(lean_object* v_c_1692_, lean_object* v_refuted_1693_, lean_object* v_r_1694_, lean_object* v_childParts_1695_, size_t v_sz_1696_, size_t v_i_1697_, lean_object* v_bs_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v___x_1706_; 
v___x_1706_ = lean_usize_dec_lt(v_i_1697_, v_sz_1696_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; 
lean_dec_ref(v_r_1694_);
lean_dec_ref(v_refuted_1693_);
lean_dec_ref(v_c_1692_);
v___x_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1707_, 0, v_bs_1698_);
return v___x_1707_;
}
else
{
lean_object* v_v_1708_; lean_object* v___x_1709_; lean_object* v_bs_x27_1710_; lean_object* v___y_1712_; lean_object* v___y_1727_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_v_1708_ = lean_array_uget(v_bs_1698_, v_i_1697_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v_bs_x27_1710_ = lean_array_uset(v_bs_1698_, v_i_1697_, v___x_1709_);
lean_inc_ref(v_c_1692_);
v___x_1738_ = lp_vampireReplay_Vampire_GenClause_literals(v_c_1692_);
v___x_1739_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(v_v_1708_, v___x_1738_, v___x_1709_);
lean_dec_ref(v___x_1738_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_sorts_1740_; lean_object* v_vars_1741_; lean_object* v___x_1742_; 
v_sorts_1740_ = lean_ctor_get(v_r_1694_, 0);
v_vars_1741_ = lean_ctor_get(v_r_1694_, 1);
lean_inc_ref(v_vars_1741_);
lean_inc_ref(v_sorts_1740_);
v___x_1742_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_1740_, v_vars_1741_, v_v_1708_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
v___y_1727_ = v___x_1742_;
goto v___jp_1726_;
}
else
{
lean_object* v_val_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; 
v_val_1743_ = lean_ctor_get(v___x_1739_, 0);
lean_inc(v_val_1743_);
lean_dec_ref_known(v___x_1739_, 1);
v___x_1744_ = lean_array_get_size(v_childParts_1695_);
v___x_1745_ = lean_nat_dec_lt(v_val_1743_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v_sorts_1746_; lean_object* v_vars_1747_; lean_object* v___x_1748_; 
lean_dec(v_val_1743_);
v_sorts_1746_ = lean_ctor_get(v_r_1694_, 0);
v_vars_1747_ = lean_ctor_get(v_r_1694_, 1);
lean_inc_ref(v_vars_1747_);
lean_inc_ref(v_sorts_1746_);
v___x_1748_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_1746_, v_vars_1747_, v_v_1708_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
v___y_1727_ = v___x_1748_;
goto v___jp_1726_;
}
else
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_dec(v_v_1708_);
v___x_1749_ = lean_array_fget_borrowed(v_childParts_1695_, v_val_1743_);
lean_dec(v_val_1743_);
lean_inc_ref(v_refuted_1693_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1700_);
lean_inc_ref(v___y_1699_);
lean_inc(v___x_1749_);
v___x_1750_ = lean_apply_8(v_refuted_1693_, v___x_1749_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, lean_box(0));
v___y_1712_ = v___x_1750_;
goto v___jp_1711_;
}
}
v___jp_1711_:
{
if (lean_obj_tag(v___y_1712_) == 0)
{
lean_object* v_a_1713_; size_t v___x_1714_; size_t v___x_1715_; lean_object* v___x_1716_; 
v_a_1713_ = lean_ctor_get(v___y_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref_known(v___y_1712_, 1);
v___x_1714_ = ((size_t)1ULL);
v___x_1715_ = lean_usize_add(v_i_1697_, v___x_1714_);
v___x_1716_ = lean_array_uset(v_bs_x27_1710_, v_i_1697_, v_a_1713_);
v_i_1697_ = v___x_1715_;
v_bs_1698_ = v___x_1716_;
goto _start;
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref(v_bs_x27_1710_);
lean_dec_ref(v_r_1694_);
lean_dec_ref(v_refuted_1693_);
lean_dec_ref(v_c_1692_);
v_a_1718_ = lean_ctor_get(v___y_1712_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___y_1712_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___y_1712_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___y_1712_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
v___jp_1726_:
{
if (lean_obj_tag(v___y_1727_) == 0)
{
lean_object* v_a_1728_; lean_object* v___x_1729_; 
v_a_1728_ = lean_ctor_get(v___y_1727_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___y_1727_, 1);
lean_inc_ref(v_refuted_1693_);
lean_inc(v___y_1704_);
lean_inc_ref(v___y_1703_);
lean_inc(v___y_1702_);
lean_inc_ref(v___y_1701_);
lean_inc(v___y_1700_);
lean_inc_ref(v___y_1699_);
v___x_1729_ = lean_apply_8(v_refuted_1693_, v_a_1728_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_, lean_box(0));
v___y_1712_ = v___x_1729_;
goto v___jp_1711_;
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
lean_dec_ref(v_bs_x27_1710_);
lean_dec_ref(v_r_1694_);
lean_dec_ref(v_refuted_1693_);
lean_dec_ref(v_c_1692_);
v_a_1730_ = lean_ctor_get(v___y_1727_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___y_1727_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___y_1727_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___y_1727_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0___boxed(lean_object* v_c_1751_, lean_object* v_refuted_1752_, lean_object* v_r_1753_, lean_object* v_childParts_1754_, lean_object* v_sz_1755_, lean_object* v_i_1756_, lean_object* v_bs_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
size_t v_sz_boxed_1765_; size_t v_i_boxed_1766_; lean_object* v_res_1767_; 
v_sz_boxed_1765_ = lean_unbox_usize(v_sz_1755_);
lean_dec(v_sz_1755_);
v_i_boxed_1766_ = lean_unbox_usize(v_i_1756_);
lean_dec(v_i_1756_);
v_res_1767_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0(v_c_1751_, v_refuted_1752_, v_r_1753_, v_childParts_1754_, v_sz_boxed_1765_, v_i_boxed_1766_, v_bs_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec_ref(v_childParts_1754_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0(lean_object* v_c_1768_, lean_object* v_r_1769_, lean_object* v_childParts_1770_, lean_object* v_refuted_1771_, size_t v_sz_1772_, size_t v_i_1773_, lean_object* v_bs_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
uint8_t v___x_1782_; 
v___x_1782_ = lean_usize_dec_lt(v_i_1773_, v_sz_1772_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1783_; 
lean_dec_ref(v_refuted_1771_);
lean_dec_ref(v_r_1769_);
lean_dec_ref(v_c_1768_);
v___x_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1783_, 0, v_bs_1774_);
return v___x_1783_;
}
else
{
lean_object* v_v_1784_; lean_object* v___x_1785_; lean_object* v_bs_x27_1786_; lean_object* v___y_1788_; lean_object* v___y_1803_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v_v_1784_ = lean_array_uget(v_bs_1774_, v_i_1773_);
v___x_1785_ = lean_unsigned_to_nat(0u);
v_bs_x27_1786_ = lean_array_uset(v_bs_1774_, v_i_1773_, v___x_1785_);
lean_inc_ref(v_c_1768_);
v___x_1814_ = lp_vampireReplay_Vampire_GenClause_literals(v_c_1768_);
v___x_1815_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(v_v_1784_, v___x_1814_, v___x_1785_);
lean_dec_ref(v___x_1814_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_sorts_1816_; lean_object* v_vars_1817_; lean_object* v___x_1818_; 
v_sorts_1816_ = lean_ctor_get(v_r_1769_, 0);
v_vars_1817_ = lean_ctor_get(v_r_1769_, 1);
lean_inc_ref(v_vars_1817_);
lean_inc_ref(v_sorts_1816_);
v___x_1818_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_1816_, v_vars_1817_, v_v_1784_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
v___y_1803_ = v___x_1818_;
goto v___jp_1802_;
}
else
{
lean_object* v_val_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
v_val_1819_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_val_1819_);
lean_dec_ref_known(v___x_1815_, 1);
v___x_1820_ = lean_array_get_size(v_childParts_1770_);
v___x_1821_ = lean_nat_dec_lt(v_val_1819_, v___x_1820_);
if (v___x_1821_ == 0)
{
lean_object* v_sorts_1822_; lean_object* v_vars_1823_; lean_object* v___x_1824_; 
lean_dec(v_val_1819_);
v_sorts_1822_ = lean_ctor_get(v_r_1769_, 0);
v_vars_1823_ = lean_ctor_get(v_r_1769_, 1);
lean_inc_ref(v_vars_1823_);
lean_inc_ref(v_sorts_1822_);
v___x_1824_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_1822_, v_vars_1823_, v_v_1784_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
v___y_1803_ = v___x_1824_;
goto v___jp_1802_;
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec(v_v_1784_);
v___x_1825_ = lean_array_fget_borrowed(v_childParts_1770_, v_val_1819_);
lean_dec(v_val_1819_);
lean_inc_ref(v_refuted_1771_);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1775_);
lean_inc(v___x_1825_);
v___x_1826_ = lean_apply_8(v_refuted_1771_, v___x_1825_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
v___y_1788_ = v___x_1826_;
goto v___jp_1787_;
}
}
v___jp_1787_:
{
if (lean_obj_tag(v___y_1788_) == 0)
{
lean_object* v_a_1789_; size_t v___x_1790_; size_t v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_a_1789_ = lean_ctor_get(v___y_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___y_1788_, 1);
v___x_1790_ = ((size_t)1ULL);
v___x_1791_ = lean_usize_add(v_i_1773_, v___x_1790_);
v___x_1792_ = lean_array_uset(v_bs_x27_1786_, v_i_1773_, v_a_1789_);
v___x_1793_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0_spec__0(v_c_1768_, v_refuted_1771_, v_r_1769_, v_childParts_1770_, v_sz_1772_, v___x_1791_, v___x_1792_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
return v___x_1793_;
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v_bs_x27_1786_);
lean_dec_ref(v_refuted_1771_);
lean_dec_ref(v_r_1769_);
lean_dec_ref(v_c_1768_);
v_a_1794_ = lean_ctor_get(v___y_1788_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___y_1788_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___y_1788_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___y_1788_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
v___jp_1802_:
{
if (lean_obj_tag(v___y_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1805_; 
v_a_1804_ = lean_ctor_get(v___y_1803_, 0);
lean_inc(v_a_1804_);
lean_dec_ref_known(v___y_1803_, 1);
lean_inc_ref(v_refuted_1771_);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1775_);
v___x_1805_ = lean_apply_8(v_refuted_1771_, v_a_1804_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
v___y_1788_ = v___x_1805_;
goto v___jp_1787_;
}
else
{
lean_object* v_a_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1813_; 
lean_dec_ref(v_bs_x27_1786_);
lean_dec_ref(v_refuted_1771_);
lean_dec_ref(v_r_1769_);
lean_dec_ref(v_c_1768_);
v_a_1806_ = lean_ctor_get(v___y_1803_, 0);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___y_1803_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1808_ = v___y_1803_;
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_a_1806_);
lean_dec(v___y_1803_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1813_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1811_; 
if (v_isShared_1809_ == 0)
{
v___x_1811_ = v___x_1808_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1806_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0___boxed(lean_object* v_c_1827_, lean_object* v_r_1828_, lean_object* v_childParts_1829_, lean_object* v_refuted_1830_, lean_object* v_sz_1831_, lean_object* v_i_1832_, lean_object* v_bs_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_){
_start:
{
size_t v_sz_boxed_1841_; size_t v_i_boxed_1842_; lean_object* v_res_1843_; 
v_sz_boxed_1841_ = lean_unbox_usize(v_sz_1831_);
lean_dec(v_sz_1831_);
v_i_boxed_1842_ = lean_unbox_usize(v_i_1832_);
lean_dec(v_i_1832_);
v_res_1843_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0(v_c_1827_, v_r_1828_, v_childParts_1829_, v_refuted_1830_, v_sz_boxed_1841_, v_i_boxed_1842_, v_bs_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
lean_dec_ref(v_childParts_1829_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2(lean_object* v___x_1844_, size_t v_sz_1845_, size_t v_i_1846_, lean_object* v_bs_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
uint8_t v___x_1855_; 
v___x_1855_ = lean_usize_dec_lt(v_i_1846_, v_sz_1845_);
if (v___x_1855_ == 0)
{
lean_object* v___x_1856_; 
v___x_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1856_, 0, v_bs_1847_);
return v___x_1856_;
}
else
{
lean_object* v_v_1857_; lean_object* v_fst_1858_; lean_object* v_snd_1859_; lean_object* v___x_1860_; lean_object* v_bs_x27_1861_; lean_object* v_a_1863_; lean_object* v___y_1869_; uint32_t v___x_1879_; lean_object* v___x_1880_; 
v_v_1857_ = lean_array_uget_borrowed(v_bs_1847_, v_i_1846_);
v_fst_1858_ = lean_ctor_get(v_v_1857_, 0);
lean_inc(v_fst_1858_);
v_snd_1859_ = lean_ctor_get(v_v_1857_, 1);
lean_inc(v_snd_1859_);
v___x_1860_ = lean_unsigned_to_nat(0u);
v_bs_x27_1861_ = lean_array_uset(v_bs_1847_, v_i_1846_, v___x_1860_);
v___x_1879_ = lean_unbox_uint32(v_fst_1858_);
lean_dec(v_fst_1858_);
v___x_1880_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v___x_1844_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1881_; 
v___x_1881_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_1859_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
v___x_1883_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_1882_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
v___y_1869_ = v___x_1883_;
goto v___jp_1868_;
}
else
{
v___y_1869_ = v___x_1881_;
goto v___jp_1868_;
}
}
else
{
lean_object* v_val_1884_; 
lean_dec(v_snd_1859_);
v_val_1884_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_val_1884_);
lean_dec_ref_known(v___x_1880_, 1);
v_a_1863_ = v_val_1884_;
goto v___jp_1862_;
}
v___jp_1862_:
{
size_t v___x_1864_; size_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = ((size_t)1ULL);
v___x_1865_ = lean_usize_add(v_i_1846_, v___x_1864_);
v___x_1866_ = lean_array_uset(v_bs_x27_1861_, v_i_1846_, v_a_1863_);
v_i_1846_ = v___x_1865_;
v_bs_1847_ = v___x_1866_;
goto _start;
}
v___jp_1868_:
{
if (lean_obj_tag(v___y_1869_) == 0)
{
lean_object* v_a_1870_; 
v_a_1870_ = lean_ctor_get(v___y_1869_, 0);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___y_1869_, 1);
v_a_1863_ = v_a_1870_;
goto v___jp_1862_;
}
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec_ref(v_bs_x27_1861_);
v_a_1871_ = lean_ctor_get(v___y_1869_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___y_1869_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___y_1869_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___y_1869_);
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
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2___boxed(lean_object* v___x_1885_, lean_object* v_sz_1886_, lean_object* v_i_1887_, lean_object* v_bs_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
size_t v_sz_boxed_1896_; size_t v_i_boxed_1897_; lean_object* v_res_1898_; 
v_sz_boxed_1896_ = lean_unbox_usize(v_sz_1886_);
lean_dec(v_sz_1886_);
v_i_boxed_1897_ = lean_unbox_usize(v_i_1887_);
lean_dec(v_i_1887_);
v_res_1898_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2(v___x_1885_, v_sz_boxed_1896_, v_i_boxed_1897_, v_bs_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec_ref(v___x_1885_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0(lean_object* v_a_1899_, uint32_t v_fst_1900_, uint8_t v___y_1901_, lean_object* v___x_1902_, lean_object* v___x_1903_, lean_object* v___x_1904_, lean_object* v___x_1905_, uint8_t v___x_1906_, lean_object* v_x_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
lean_inc_ref(v_x_1907_);
v___x_1915_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_a_1899_, v_fst_1900_, v_x_1907_);
v___x_1916_ = lp_vampireReplay_Vampire_Reconstruct_blockProp(v___y_1901_, v___x_1902_, v___x_1903_, v___x_1915_, v___x_1904_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; uint8_t v___x_1920_; lean_object* v___x_1921_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref_known(v___x_1916_, 1);
v___x_1918_ = lean_mk_empty_array_with_capacity(v___x_1905_);
v___x_1919_ = lean_array_push(v___x_1918_, v_x_1907_);
v___x_1920_ = 1;
v___x_1921_ = l_Lean_Meta_mkLambdaFVars(v___x_1919_, v_a_1917_, v___x_1906_, v___y_1901_, v___x_1906_, v___y_1901_, v___x_1920_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_);
lean_dec_ref(v___x_1919_);
return v___x_1921_;
}
else
{
lean_dec_ref(v_x_1907_);
return v___x_1916_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0___boxed(lean_object* v_a_1922_, lean_object* v_fst_1923_, lean_object* v___y_1924_, lean_object* v___x_1925_, lean_object* v___x_1926_, lean_object* v___x_1927_, lean_object* v___x_1928_, lean_object* v___x_1929_, lean_object* v_x_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
uint32_t v_fst_80405__boxed_1938_; uint8_t v___y_80406__boxed_1939_; uint8_t v___x_80411__boxed_1940_; lean_object* v_res_1941_; 
v_fst_80405__boxed_1938_ = lean_unbox_uint32(v_fst_1923_);
lean_dec(v_fst_1923_);
v___y_80406__boxed_1939_ = lean_unbox(v___y_1924_);
v___x_80411__boxed_1940_ = lean_unbox(v___x_1929_);
v_res_1941_ = lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0(v_a_1922_, v_fst_80405__boxed_1938_, v___y_80406__boxed_1939_, v___x_1925_, v___x_1926_, v___x_1927_, v___x_1928_, v___x_80411__boxed_1940_, v_x_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_);
lean_dec(v___y_1936_);
lean_dec_ref(v___y_1935_);
lean_dec(v___y_1934_);
lean_dec_ref(v___y_1933_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___x_1928_);
return v_res_1941_;
}
}
static lean_object* _init_lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1943_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__0));
v___x_1944_ = l_Lean_stringToMessageData(v___x_1943_);
return v___x_1944_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg(lean_object* v___x_1949_, lean_object* v___x_1950_, lean_object* v_a_1951_, uint8_t v___y_1952_, lean_object* v___x_1953_, lean_object* v___x_1954_, uint8_t v___x_1955_, lean_object* v_a_1956_, lean_object* v_as_x27_1957_, lean_object* v_b_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
if (lean_obj_tag(v_as_x27_1957_) == 0)
{
lean_object* v___x_1966_; 
lean_dec_ref(v___x_1954_);
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1966_, 0, v_b_1958_);
return v___x_1966_;
}
else
{
lean_object* v_head_1967_; lean_object* v_tail_1968_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
v_head_1967_ = lean_ctor_get(v_as_x27_1957_, 0);
v_tail_1968_ = lean_ctor_get(v_as_x27_1957_, 1);
v___x_1969_ = lean_array_get_size(v___x_1949_);
v___x_1970_ = lean_nat_dec_lt(v_head_1967_, v___x_1969_);
if (v___x_1970_ == 0)
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1980_; 
lean_dec_ref(v_b_1958_);
lean_dec_ref(v___x_1954_);
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_a_1951_);
lean_dec(v___x_1950_);
v___x_1971_ = lean_obj_once(&lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1, &lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1_once, _init_lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__1);
v___x_1972_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_1971_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1975_ = v___x_1972_;
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1972_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1980_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1978_; 
if (v_isShared_1976_ == 0)
{
v___x_1978_ = v___x_1975_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_a_1973_);
v___x_1978_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
return v___x_1978_;
}
}
}
else
{
lean_object* v___x_1981_; lean_object* v_fst_1982_; lean_object* v_snd_1983_; lean_object* v___x_1984_; 
v___x_1981_ = lean_array_fget_borrowed(v___x_1949_, v_head_1967_);
v_fst_1982_ = lean_ctor_get(v___x_1981_, 0);
v_snd_1983_ = lean_ctor_get(v___x_1981_, 1);
lean_inc(v_snd_1983_);
v___x_1984_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_1983_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2029_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_2029_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2029_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___f_1995_; lean_object* v___x_1996_; uint32_t v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_1989_ = lean_unsigned_to_nat(1u);
v___x_1990_ = lean_nat_add(v_head_1967_, v___x_1989_);
lean_inc(v___x_1950_);
v___x_1991_ = l_Array_extract___redArg(v___x_1949_, v___x_1990_, v___x_1950_);
v___x_1992_ = lean_array_to_list(v___x_1991_);
v___x_1993_ = lean_box(v___y_1952_);
v___x_1994_ = lean_box(v___x_1955_);
lean_inc_ref(v___x_1954_);
lean_inc_ref(v___x_1953_);
lean_inc(v_fst_1982_);
lean_inc_ref(v_a_1951_);
v___f_1995_ = lean_alloc_closure((void*)(lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___lam__0___boxed), 16, 8);
lean_closure_set(v___f_1995_, 0, v_a_1951_);
lean_closure_set(v___f_1995_, 1, v_fst_1982_);
lean_closure_set(v___f_1995_, 2, v___x_1993_);
lean_closure_set(v___f_1995_, 3, v___x_1953_);
lean_closure_set(v___f_1995_, 4, v___x_1992_);
lean_closure_set(v___f_1995_, 5, v___x_1954_);
lean_closure_set(v___f_1995_, 6, v___x_1989_);
lean_closure_set(v___f_1995_, 7, v___x_1994_);
v___x_1996_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock_go___closed__0));
v___x_1997_ = lean_unbox_uint32(v_fst_1982_);
v___x_1998_ = lean_uint32_to_nat(v___x_1997_);
v___x_1999_ = l_Nat_reprFast(v___x_1998_);
v___x_2000_ = lean_string_append(v___x_1996_, v___x_1999_);
lean_dec_ref(v___x_1999_);
v___x_2001_ = lean_box(0);
v___x_2002_ = l_Lean_Name_str___override(v___x_2001_, v___x_2000_);
lean_inc(v_a_1985_);
v___x_2003_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_2002_, v_a_1985_, v___f_1995_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2028_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2028_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2028_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2008_; lean_object* v___x_2010_; 
v___x_2008_ = ((lean_object*)(lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___closed__3));
if (v_isShared_2007_ == 0)
{
lean_ctor_set_tag(v___x_2006_, 1);
lean_ctor_set(v___x_2006_, 0, v_a_1985_);
v___x_2010_ = v___x_2006_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_1985_);
v___x_2010_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2012_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set_tag(v___x_1987_, 1);
lean_ctor_set(v___x_1987_, 0, v_a_2004_);
v___x_2012_ = v___x_1987_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2004_);
v___x_2012_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2013_ = l_Lean_instInhabitedExpr;
v___x_2014_ = lean_array_get_borrowed(v___x_2013_, v_a_1956_, v_head_1967_);
lean_inc(v___x_2014_);
v___x_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
v___x_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2016_, 0, v_b_1958_);
v___x_2017_ = lean_unsigned_to_nat(4u);
v___x_2018_ = lean_mk_empty_array_with_capacity(v___x_2017_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2010_);
v___x_2020_ = lean_array_push(v___x_2019_, v___x_2012_);
v___x_2021_ = lean_array_push(v___x_2020_, v___x_2015_);
v___x_2022_ = lean_array_push(v___x_2021_, v___x_2016_);
v___x_2023_ = l_Lean_Meta_mkAppOptM(v___x_2008_, v___x_2022_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc(v_a_2024_);
lean_dec_ref_known(v___x_2023_, 1);
v_as_x27_1957_ = v_tail_1968_;
v_b_1958_ = v_a_2024_;
goto _start;
}
else
{
lean_dec_ref(v___x_1954_);
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_a_1951_);
lean_dec(v___x_1950_);
return v___x_2023_;
}
}
}
}
}
else
{
lean_del_object(v___x_1987_);
lean_dec(v_a_1985_);
lean_dec_ref(v_b_1958_);
lean_dec_ref(v___x_1954_);
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_a_1951_);
lean_dec(v___x_1950_);
return v___x_2003_;
}
}
}
else
{
lean_dec_ref(v_b_1958_);
lean_dec_ref(v___x_1954_);
lean_dec_ref(v___x_1953_);
lean_dec_ref(v_a_1951_);
lean_dec(v___x_1950_);
return v___x_1984_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg___boxed(lean_object** _args){
lean_object* v___x_2030_ = _args[0];
lean_object* v___x_2031_ = _args[1];
lean_object* v_a_2032_ = _args[2];
lean_object* v___y_2033_ = _args[3];
lean_object* v___x_2034_ = _args[4];
lean_object* v___x_2035_ = _args[5];
lean_object* v___x_2036_ = _args[6];
lean_object* v_a_2037_ = _args[7];
lean_object* v_as_x27_2038_ = _args[8];
lean_object* v_b_2039_ = _args[9];
lean_object* v___y_2040_ = _args[10];
lean_object* v___y_2041_ = _args[11];
lean_object* v___y_2042_ = _args[12];
lean_object* v___y_2043_ = _args[13];
lean_object* v___y_2044_ = _args[14];
lean_object* v___y_2045_ = _args[15];
lean_object* v___y_2046_ = _args[16];
_start:
{
uint8_t v___y_80483__boxed_2047_; uint8_t v___x_80486__boxed_2048_; lean_object* v_res_2049_; 
v___y_80483__boxed_2047_ = lean_unbox(v___y_2033_);
v___x_80486__boxed_2048_ = lean_unbox(v___x_2036_);
v_res_2049_ = lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg(v___x_2030_, v___x_2031_, v_a_2032_, v___y_80483__boxed_2047_, v___x_2034_, v___x_2035_, v___x_80486__boxed_2048_, v_a_2037_, v_as_x27_2038_, v_b_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v_as_x27_2038_);
lean_dec_ref(v_a_2037_);
lean_dec_ref(v___x_2030_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg(lean_object* v_as_2050_, size_t v_sz_2051_, size_t v_i_2052_, lean_object* v_b_2053_){
_start:
{
uint8_t v___x_2055_; 
v___x_2055_ = lean_usize_dec_lt(v_i_2052_, v_sz_2051_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_b_2053_);
return v___x_2056_;
}
else
{
lean_object* v_a_2057_; lean_object* v_fst_2058_; lean_object* v_snd_2059_; lean_object* v_fst_2060_; uint32_t v___x_2061_; lean_object* v___x_2062_; size_t v___x_2063_; size_t v___x_2064_; 
v_a_2057_ = lean_array_uget_borrowed(v_as_2050_, v_i_2052_);
v_fst_2058_ = lean_ctor_get(v_a_2057_, 0);
v_snd_2059_ = lean_ctor_get(v_a_2057_, 1);
v_fst_2060_ = lean_ctor_get(v_fst_2058_, 0);
v___x_2061_ = lean_unbox_uint32(v_fst_2060_);
lean_inc(v_snd_2059_);
v___x_2062_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_2053_, v___x_2061_, v_snd_2059_);
v___x_2063_ = ((size_t)1ULL);
v___x_2064_ = lean_usize_add(v_i_2052_, v___x_2063_);
v_i_2052_ = v___x_2064_;
v_b_2053_ = v___x_2062_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg___boxed(lean_object* v_as_2066_, lean_object* v_sz_2067_, lean_object* v_i_2068_, lean_object* v_b_2069_, lean_object* v___y_2070_){
_start:
{
size_t v_sz_boxed_2071_; size_t v_i_boxed_2072_; lean_object* v_res_2073_; 
v_sz_boxed_2071_ = lean_unbox_usize(v_sz_2067_);
lean_dec(v_sz_2067_);
v_i_boxed_2072_ = lean_unbox_usize(v_i_2068_);
lean_dec(v_i_2068_);
v_res_2073_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg(v_as_2066_, v_sz_boxed_2071_, v_i_boxed_2072_, v_b_2069_);
lean_dec_ref(v_as_2066_);
return v_res_2073_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1(void){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
v___x_2075_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__0));
v___x_2076_ = l_Lean_stringToMessageData(v___x_2075_);
return v___x_2076_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2079_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__3));
v___x_2080_ = l_Lean_stringToMessageData(v___x_2079_);
return v___x_2080_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__5));
v___x_2083_ = l_Lean_stringToMessageData(v___x_2082_);
return v___x_2083_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8(void){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__7));
v___x_2086_ = l_Lean_stringToMessageData(v___x_2085_);
return v___x_2086_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10(void){
_start:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__9));
v___x_2089_ = l_Lean_stringToMessageData(v___x_2088_);
return v___x_2089_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__17));
v___x_2102_ = l_Lean_stringToMessageData(v___x_2101_);
return v___x_2102_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20(void){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__19));
v___x_2105_ = l_Lean_stringToMessageData(v___x_2104_);
return v___x_2105_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__21));
v___x_2108_ = l_Lean_stringToMessageData(v___x_2107_);
return v___x_2108_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__23));
v___x_2111_ = l_Lean_stringToMessageData(v___x_2110_);
return v___x_2111_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__25));
v___x_2114_ = l_Lean_stringToMessageData(v___x_2113_);
return v___x_2114_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2116_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__27));
v___x_2117_ = l_Lean_stringToMessageData(v___x_2116_);
return v___x_2117_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34(void){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2127_ = lean_box(0);
v___x_2128_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__33));
v___x_2129_ = l_Lean_Expr_const___override(v___x_2128_, v___x_2127_);
return v___x_2129_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced(lean_object* v_r_2130_, lean_object* v_c_2131_, lean_object* v_p_2132_, lean_object* v_position_2133_, lean_object* v_childParts_2134_, lean_object* v_parentParts_2135_, lean_object* v_h_2136_, lean_object* v_refuted_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_){
_start:
{
lean_object* v___y_2146_; lean_object* v_sides_2147_; lean_object* v___x_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v___x_2150_ = lp_vampireReplay_Vampire_GenClause_literals(v_p_2132_);
v___x_2151_ = lean_array_get_size(v___x_2150_);
v___x_2152_ = lean_nat_dec_lt(v_position_2133_, v___x_2151_);
if (v___x_2152_ == 0)
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
lean_dec_ref(v___x_2150_);
lean_dec_ref(v_refuted_2137_);
lean_dec_ref(v_h_2136_);
lean_dec_ref(v_c_2131_);
lean_dec_ref(v_r_2130_);
v___x_2153_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1);
v___x_2154_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2153_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
return v___x_2154_;
}
else
{
lean_object* v___x_2155_; lean_object* v_fst_2156_; lean_object* v_snd_2157_; lean_object* v___f_2158_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___y_2169_; size_t v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; uint8_t v___y_2173_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; size_t v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v___y_2337_; lean_object* v___y_2338_; lean_object* v___y_2339_; uint8_t v___y_2354_; lean_object* v___y_2355_; lean_object* v___y_2356_; lean_object* v___y_2357_; lean_object* v___y_2358_; lean_object* v___y_2359_; lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v___y_2362_; lean_object* v___y_2363_; lean_object* v___y_2364_; uint8_t v___y_2365_; lean_object* v___y_2366_; uint8_t v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2436_; uint8_t v___y_2437_; lean_object* v___y_2438_; lean_object* v___y_2439_; uint8_t v___y_2440_; uint8_t v___y_2474_; lean_object* v___y_2475_; uint8_t v___y_2476_; uint8_t v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v_equivalence_2482_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; uint8_t v___y_2503_; uint8_t v___y_2504_; lean_object* v___y_2505_; uint8_t v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; lean_object* v___y_2510_; lean_object* v___y_2511_; lean_object* v___y_2512_; lean_object* v___y_2513_; lean_object* v___y_2514_; uint8_t v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; lean_object* v___y_2519_; uint8_t v___y_2520_; uint8_t v___y_2532_; lean_object* v___y_2533_; uint8_t v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; uint8_t v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; uint8_t v___y_2548_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; size_t v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; size_t v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; lean_object* v___y_2722_; size_t v___y_2723_; lean_object* v___y_2724_; lean_object* v___y_2725_; size_t v___y_2726_; lean_object* v___y_2727_; lean_object* v___y_2728_; lean_object* v___y_2729_; lean_object* v___y_2730_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2760_; size_t v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; size_t v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2788_; size_t v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; size_t v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2817_; size_t v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; size_t v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v_a_2831_; lean_object* v___y_2854_; size_t v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; lean_object* v___y_2859_; lean_object* v___y_2860_; size_t v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v_stated_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___x_2908_; uint8_t v___x_2909_; 
v___x_2155_ = lean_array_fget(v___x_2150_, v_position_2133_);
lean_dec_ref(v___x_2150_);
v_fst_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_fst_2156_);
v_snd_2157_ = lean_ctor_get(v___x_2155_, 1);
lean_inc(v_snd_2157_);
v___f_2158_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__2));
v___x_2908_ = lean_array_get_size(v_parentParts_2135_);
v___x_2909_ = lean_nat_dec_lt(v_position_2133_, v___x_2908_);
if (v___x_2909_ == 0)
{
lean_object* v_sorts_2910_; lean_object* v_vars_2911_; lean_object* v___x_2912_; 
v_sorts_2910_ = lean_ctor_get(v_r_2130_, 0);
v_vars_2911_ = lean_ctor_get(v_r_2130_, 1);
lean_inc_ref(v_vars_2911_);
lean_inc_ref(v_sorts_2910_);
v___x_2912_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_2910_, v_vars_2911_, v___x_2155_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
v_stated_2871_ = v_a_2913_;
v___y_2872_ = v_a_2138_;
v___y_2873_ = v_a_2139_;
v___y_2874_ = v_a_2140_;
v___y_2875_ = v_a_2141_;
v___y_2876_ = v_a_2142_;
v___y_2877_ = v_a_2143_;
goto v___jp_2870_;
}
else
{
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_refuted_2137_);
lean_dec_ref(v_h_2136_);
lean_dec_ref(v_c_2131_);
lean_dec_ref(v_r_2130_);
return v___x_2912_;
}
}
else
{
lean_object* v___x_2914_; 
lean_dec(v___x_2155_);
v___x_2914_ = lean_array_fget_borrowed(v_parentParts_2135_, v_position_2133_);
lean_inc(v___x_2914_);
v_stated_2871_ = v___x_2914_;
v___y_2872_ = v_a_2138_;
v___y_2873_ = v_a_2139_;
v___y_2874_ = v_a_2140_;
v___y_2875_ = v_a_2141_;
v___y_2876_ = v_a_2142_;
v___y_2877_ = v_a_2143_;
goto v___jp_2870_;
}
v___jp_2159_:
{
lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2174_ = lean_array_get_size(v___y_2161_);
v___x_2175_ = lean_nat_dec_lt(v___y_2167_, v___x_2174_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v___x_2176_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__4);
v___x_2177_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2176_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
return v___x_2177_;
}
else
{
lean_object* v___x_2178_; 
v___x_2178_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_2156_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; uint8_t v___x_2182_; uint8_t v___x_2183_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = lean_array_fget(v___y_2161_, v___y_2167_);
lean_dec_ref(v___y_2161_);
v___x_2181_ = lean_unbox(v_a_2179_);
lean_dec(v_a_2179_);
v___x_2182_ = lean_unbox(v_snd_2157_);
v___x_2183_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises(v___x_2181_, v___x_2182_);
if (v___x_2183_ == 0)
{
size_t v_sz_2184_; lean_object* v___x_2185_; 
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
v_sz_2184_ = lean_array_size(v___y_2169_);
lean_inc_ref(v___y_2169_);
v___x_2185_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__2(v___y_2160_, v_sz_2184_, v___y_2170_, v___y_2169_, v___y_2162_, v___y_2163_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2185_) == 0)
{
if (v___y_2173_ == 0)
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2195_; 
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2160_);
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2188_ = v___x_2185_;
v_isShared_2189_ = v_isSharedCheck_2195_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2185_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2195_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2193_; 
v___x_2190_ = l_Lean_mkAppN(v_h_2136_, v_a_2186_);
lean_dec(v_a_2186_);
v___x_2191_ = l_Lean_Expr_app___override(v___x_2180_, v___x_2190_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 0, v___x_2191_);
v___x_2193_ = v___x_2188_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2191_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2197_; uint8_t v___x_2198_; 
v_a_2196_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2185_, 1);
v___x_2197_ = lean_array_get_size(v___y_2168_);
v___x_2198_ = lean_nat_dec_lt(v___y_2167_, v___x_2197_);
if (v___x_2198_ == 0)
{
lean_object* v___x_2199_; lean_object* v___x_2200_; 
lean_dec(v_a_2196_);
lean_dec(v___x_2180_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2160_);
lean_dec_ref(v_h_2136_);
v___x_2199_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1);
v___x_2200_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2199_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
return v___x_2200_;
}
else
{
lean_object* v___x_2201_; size_t v_sz_2202_; lean_object* v___x_2203_; 
v___x_2201_ = l_Array_zip___redArg(v___y_2169_, v_a_2196_);
v_sz_2202_ = lean_array_size(v___x_2201_);
v___x_2203_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg(v___x_2201_, v_sz_2202_, v___y_2170_, v___y_2160_);
lean_dec_ref(v___x_2201_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2205_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref_known(v___x_2203_, 1);
v___x_2205_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___x_2183_, v___x_2180_, v___y_2162_, v___y_2163_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v___x_2207_ = lean_array_fget(v___y_2168_, v___y_2167_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2168_);
v___x_2208_ = lean_array_get_size(v___y_2169_);
v___x_2209_ = l_List_range(v___x_2208_);
v___x_2210_ = l_List_reverse___redArg(v___x_2209_);
v___x_2211_ = lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg(v___y_2169_, v___x_2208_, v_a_2204_, v___y_2173_, v___y_2165_, v___x_2207_, v___x_2183_, v_a_2196_, v___x_2210_, v_a_2206_, v___y_2162_, v___y_2163_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
lean_dec(v___x_2210_);
lean_dec(v_a_2196_);
lean_dec_ref(v___y_2169_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2220_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2214_ = v___x_2211_;
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2211_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2220_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = l_Lean_Expr_app___override(v_h_2136_, v_a_2212_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_dec_ref(v_h_2136_);
return v___x_2211_;
}
}
else
{
lean_dec(v_a_2204_);
lean_dec(v_a_2196_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v_h_2136_);
return v___x_2205_;
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v_a_2196_);
lean_dec(v___x_2180_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v_h_2136_);
v_a_2221_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2203_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2203_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
}
else
{
lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2236_; 
lean_dec(v___x_2180_);
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2160_);
lean_dec_ref(v_h_2136_);
v_a_2229_ = lean_ctor_get(v___x_2185_, 0);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2231_ = v___x_2185_;
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2185_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2236_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2234_; 
if (v_isShared_2232_ == 0)
{
v___x_2234_ = v___x_2231_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2229_);
v___x_2234_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
return v___x_2234_;
}
}
}
}
else
{
uint8_t v___x_2237_; lean_object* v___x_2238_; 
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
v___x_2237_ = lean_unbox(v_snd_2157_);
lean_dec(v_snd_2157_);
v___x_2238_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock(v___y_2165_, v___x_2237_, v___y_2160_, v_fst_2156_, v_h_2136_, v___y_2162_, v___y_2163_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v_snd_2240_; lean_object* v___x_2242_; uint8_t v_isShared_2243_; uint8_t v_isSharedCheck_2309_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref_known(v___x_2238_, 1);
v_snd_2240_ = lean_ctor_get(v_a_2239_, 1);
v_isSharedCheck_2309_ = !lean_is_exclusive(v_a_2239_);
if (v_isSharedCheck_2309_ == 0)
{
lean_object* v_unused_2310_; 
v_unused_2310_ = lean_ctor_get(v_a_2239_, 0);
lean_dec(v_unused_2310_);
v___x_2242_ = v_a_2239_;
v_isShared_2243_ = v_isSharedCheck_2309_;
goto v_resetjp_2241_;
}
else
{
lean_inc(v_snd_2240_);
lean_dec(v_a_2239_);
v___x_2242_ = lean_box(0);
v_isShared_2243_ = v_isSharedCheck_2309_;
goto v_resetjp_2241_;
}
v_resetjp_2241_:
{
lean_object* v___x_2244_; 
lean_inc(v___y_2172_);
lean_inc_ref(v___y_2166_);
lean_inc(v___y_2164_);
lean_inc_ref(v___y_2171_);
lean_inc(v___x_2180_);
v___x_2244_ = lean_infer_type(v___x_2180_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2245_, v___y_2164_);
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref(v___x_2246_);
v___x_2248_ = lp_vampireReplay_Vampire_Reconstruct_asNegation(v_a_2247_);
if (lean_obj_tag(v___x_2248_) == 1)
{
lean_object* v_val_2249_; lean_object* v___x_2250_; 
v_val_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_val_2249_);
lean_dec_ref_known(v___x_2248_, 1);
lean_inc(v___y_2172_);
lean_inc_ref(v___y_2166_);
lean_inc(v___y_2164_);
lean_inc_ref(v___y_2171_);
lean_inc(v_snd_2240_);
v___x_2250_ = lean_infer_type(v_snd_2240_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v_a_2251_; lean_object* v___x_2252_; lean_object* v_a_2253_; lean_object* v___x_2254_; 
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2251_);
lean_dec_ref_known(v___x_2250_, 1);
v___x_2252_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_2251_, v___y_2164_);
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc_n(v_a_2253_, 2);
lean_dec_ref(v___x_2252_);
lean_inc(v_val_2249_);
v___x_2254_ = l_Lean_Meta_isExprDefEq(v_val_2249_, v_a_2253_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2254_) == 0)
{
lean_object* v_a_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2298_; 
v_a_2255_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2257_ = v___x_2254_;
v_isShared_2258_ = v_isSharedCheck_2298_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_a_2255_);
lean_dec(v___x_2254_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2298_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_unbox(v_a_2255_);
lean_dec(v_a_2255_);
if (v___x_2259_ == 0)
{
lean_object* v___x_2260_; 
lean_del_object(v___x_2257_);
lean_inc(v_a_2253_);
v___x_2260_ = lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(v_a_2253_, v_val_2249_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
lean_inc(v_a_2261_);
lean_dec_ref_known(v___x_2260_, 1);
if (lean_obj_tag(v_a_2261_) == 1)
{
lean_object* v_val_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
lean_dec(v_a_2253_);
lean_del_object(v___x_2242_);
v_val_2262_ = lean_ctor_get(v_a_2261_, 0);
lean_inc(v_val_2262_);
lean_dec_ref_known(v_a_2261_, 1);
v___x_2263_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4));
v___x_2264_ = lean_unsigned_to_nat(2u);
v___x_2265_ = lean_mk_empty_array_with_capacity(v___x_2264_);
v___x_2266_ = lean_array_push(v___x_2265_, v_val_2262_);
v___x_2267_ = lean_array_push(v___x_2266_, v_snd_2240_);
v___x_2268_ = l_Lean_Meta_mkAppM(v___x_2263_, v___x_2267_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2277_; 
v_a_2269_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2277_ == 0)
{
v___x_2271_ = v___x_2268_;
v_isShared_2272_ = v_isSharedCheck_2277_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2268_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2277_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; lean_object* v___x_2275_; 
v___x_2273_ = l_Lean_Expr_app___override(v___x_2180_, v_a_2269_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 0, v___x_2273_);
v___x_2275_ = v___x_2271_;
goto v_reusejp_2274_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2273_);
v___x_2275_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2274_;
}
v_reusejp_2274_:
{
return v___x_2275_;
}
}
}
else
{
lean_dec(v___x_2180_);
return v___x_2268_;
}
}
else
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
lean_dec(v_a_2261_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
v___x_2278_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__6);
v___x_2279_ = l_Lean_indentExpr(v_a_2253_);
if (v_isShared_2243_ == 0)
{
lean_ctor_set_tag(v___x_2242_, 7);
lean_ctor_set(v___x_2242_, 1, v___x_2279_);
lean_ctor_set(v___x_2242_, 0, v___x_2278_);
v___x_2281_ = v___x_2242_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v___x_2278_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v___x_2279_);
v___x_2281_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2282_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__8);
v___x_2283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2281_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2283_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
return v___x_2284_;
}
}
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_a_2253_);
lean_del_object(v___x_2242_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
v_a_2286_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2260_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2260_);
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
else
{
lean_object* v___x_2294_; lean_object* v___x_2296_; 
lean_dec(v_a_2253_);
lean_dec(v_val_2249_);
lean_del_object(v___x_2242_);
v___x_2294_ = l_Lean_Expr_app___override(v___x_2180_, v_snd_2240_);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 0, v___x_2294_);
v___x_2296_ = v___x_2257_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2294_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec(v_a_2253_);
lean_dec(v_val_2249_);
lean_del_object(v___x_2242_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
v_a_2299_ = lean_ctor_get(v___x_2254_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2254_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2254_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2254_);
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
else
{
lean_dec(v_val_2249_);
lean_del_object(v___x_2242_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
return v___x_2250_;
}
}
else
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
lean_dec(v___x_2248_);
lean_del_object(v___x_2242_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
v___x_2307_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__10);
v___x_2308_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2307_, v___y_2171_, v___y_2164_, v___y_2166_, v___y_2172_);
return v___x_2308_;
}
}
else
{
lean_del_object(v___x_2242_);
lean_dec(v_snd_2240_);
lean_dec(v___x_2180_);
return v___x_2244_;
}
}
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec(v___x_2180_);
v_a_2311_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2238_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2238_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
lean_dec_ref(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2319_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2178_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2178_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
v___jp_2327_:
{
lean_object* v___x_2340_; 
v___x_2340_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_2156_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref_known(v___x_2340_, 1);
lean_inc(v_fst_2156_);
v___x_2342_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(v___y_2328_, v_fst_2156_);
v___x_2343_ = lean_unbox(v_a_2341_);
lean_dec(v_a_2341_);
if (v___x_2343_ == 8)
{
v___y_2160_ = v___y_2329_;
v___y_2161_ = v___y_2333_;
v___y_2162_ = v___y_2334_;
v___y_2163_ = v___y_2335_;
v___y_2164_ = v___y_2337_;
v___y_2165_ = v___y_2328_;
v___y_2166_ = v___y_2338_;
v___y_2167_ = v___y_2330_;
v___y_2168_ = v___y_2331_;
v___y_2169_ = v___x_2342_;
v___y_2170_ = v___y_2332_;
v___y_2171_ = v___y_2336_;
v___y_2172_ = v___y_2339_;
v___y_2173_ = v___x_2152_;
goto v___jp_2159_;
}
else
{
uint8_t v___x_2344_; 
v___x_2344_ = 0;
v___y_2160_ = v___y_2329_;
v___y_2161_ = v___y_2333_;
v___y_2162_ = v___y_2334_;
v___y_2163_ = v___y_2335_;
v___y_2164_ = v___y_2337_;
v___y_2165_ = v___y_2328_;
v___y_2166_ = v___y_2338_;
v___y_2167_ = v___y_2330_;
v___y_2168_ = v___y_2331_;
v___y_2169_ = v___x_2342_;
v___y_2170_ = v___y_2332_;
v___y_2171_ = v___y_2336_;
v___y_2172_ = v___y_2339_;
v___y_2173_ = v___x_2344_;
goto v___jp_2159_;
}
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec_ref(v___y_2333_);
lean_dec_ref(v___y_2331_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2345_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2340_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2340_);
v___x_2347_ = lean_box(0);
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
v_resetjp_2346_:
{
lean_object* v___x_2350_; 
if (v_isShared_2348_ == 0)
{
v___x_2350_ = v___x_2347_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_a_2345_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
}
}
v___jp_2353_:
{
if (v___y_2354_ == 0)
{
lean_object* v___x_2367_; 
v___x_2367_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2354_, v___y_2363_, v___y_2364_, v___y_2356_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2395_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2370_ = v___x_2367_;
v_isShared_2371_ = v_isSharedCheck_2395_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2367_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2395_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2372_; 
v___x_2372_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2365_, v___y_2358_, v___y_2364_, v___y_2356_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2394_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2394_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2394_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2377_; lean_object* v___x_2379_; 
v___x_2377_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__12));
if (v_isShared_2376_ == 0)
{
lean_ctor_set_tag(v___x_2375_, 1);
lean_ctor_set(v___x_2375_, 0, v___y_2361_);
v___x_2379_ = v___x_2375_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v___y_2361_);
v___x_2379_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
lean_object* v___x_2381_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 1);
lean_ctor_set(v___x_2370_, 0, v___y_2357_);
v___x_2381_ = v___x_2370_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v___y_2357_);
v___x_2381_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2382_, 0, v_a_2368_);
v___x_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_a_2373_);
v___x_2384_ = lean_unsigned_to_nat(4u);
v___x_2385_ = lean_mk_empty_array_with_capacity(v___x_2384_);
v___x_2386_ = lean_array_push(v___x_2385_, v___x_2379_);
v___x_2387_ = lean_array_push(v___x_2386_, v___x_2381_);
v___x_2388_ = lean_array_push(v___x_2387_, v___x_2382_);
v___x_2389_ = lean_array_push(v___x_2388_, v___x_2383_);
v___x_2390_ = l_Lean_Meta_mkAppOptM(v___x_2377_, v___x_2389_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
v___y_2146_ = v___y_2362_;
v_sides_2147_ = v_a_2391_;
goto v___jp_2145_;
}
else
{
lean_dec_ref(v___y_2362_);
return v___x_2390_;
}
}
}
}
}
else
{
lean_del_object(v___x_2370_);
lean_dec(v_a_2368_);
lean_dec_ref(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec_ref(v___y_2357_);
return v___x_2372_;
}
}
}
else
{
lean_dec_ref(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec_ref(v___y_2358_);
lean_dec_ref(v___y_2357_);
return v___x_2367_;
}
}
else
{
lean_object* v___x_2396_; 
v___x_2396_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2354_, v___y_2363_, v___y_2364_, v___y_2356_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2424_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2424_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2424_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; 
v___x_2401_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2365_, v___y_2358_, v___y_2364_, v___y_2356_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2423_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2423_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2401_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2423_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2406_; lean_object* v___x_2408_; 
v___x_2406_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__14));
if (v_isShared_2405_ == 0)
{
lean_ctor_set_tag(v___x_2404_, 1);
lean_ctor_set(v___x_2404_, 0, v___y_2361_);
v___x_2408_ = v___x_2404_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___y_2361_);
v___x_2408_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
lean_object* v___x_2410_; 
if (v_isShared_2400_ == 0)
{
lean_ctor_set_tag(v___x_2399_, 1);
lean_ctor_set(v___x_2399_, 0, v___y_2357_);
v___x_2410_ = v___x_2399_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___y_2357_);
v___x_2410_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2411_, 0, v_a_2397_);
v___x_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2412_, 0, v_a_2402_);
v___x_2413_ = lean_unsigned_to_nat(4u);
v___x_2414_ = lean_mk_empty_array_with_capacity(v___x_2413_);
v___x_2415_ = lean_array_push(v___x_2414_, v___x_2408_);
v___x_2416_ = lean_array_push(v___x_2415_, v___x_2410_);
v___x_2417_ = lean_array_push(v___x_2416_, v___x_2411_);
v___x_2418_ = lean_array_push(v___x_2417_, v___x_2412_);
v___x_2419_ = l_Lean_Meta_mkAppOptM(v___x_2406_, v___x_2418_, v___y_2359_, v___y_2360_, v___y_2366_, v___y_2355_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
v___y_2146_ = v___y_2362_;
v_sides_2147_ = v_a_2420_;
goto v___jp_2145_;
}
else
{
lean_dec_ref(v___y_2362_);
return v___x_2419_;
}
}
}
}
}
else
{
lean_del_object(v___x_2399_);
lean_dec(v_a_2397_);
lean_dec_ref(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec_ref(v___y_2357_);
return v___x_2401_;
}
}
}
else
{
lean_dec_ref(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec_ref(v___y_2358_);
lean_dec_ref(v___y_2357_);
return v___x_2396_;
}
}
}
v___jp_2425_:
{
if (v___y_2440_ == 0)
{
v___y_2354_ = v___y_2426_;
v___y_2355_ = v___y_2427_;
v___y_2356_ = v___y_2428_;
v___y_2357_ = v___y_2429_;
v___y_2358_ = v___y_2430_;
v___y_2359_ = v___y_2431_;
v___y_2360_ = v___y_2432_;
v___y_2361_ = v___y_2433_;
v___y_2362_ = v___y_2434_;
v___y_2363_ = v___y_2435_;
v___y_2364_ = v___y_2436_;
v___y_2365_ = v___y_2437_;
v___y_2366_ = v___y_2438_;
goto v___jp_2353_;
}
else
{
lean_dec_ref(v___y_2433_);
lean_dec_ref(v___y_2429_);
if (v___y_2426_ == 0)
{
lean_object* v___x_2441_; 
v___x_2441_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2426_, v___y_2435_, v___y_2436_, v___y_2428_, v___y_2431_, v___y_2432_, v___y_2438_, v___y_2427_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
lean_inc(v_a_2442_);
lean_dec_ref_known(v___x_2441_, 1);
v___x_2443_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4));
v___x_2444_ = lean_mk_empty_array_with_capacity(v___y_2439_);
v___x_2445_ = lean_array_push(v___x_2444_, v___y_2434_);
v___x_2446_ = lean_array_push(v___x_2445_, v_a_2442_);
v___x_2447_ = l_Lean_Meta_mkAppM(v___x_2443_, v___x_2446_, v___y_2431_, v___y_2432_, v___y_2438_, v___y_2427_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2456_; 
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2450_ = v___x_2447_;
v_isShared_2451_ = v_isSharedCheck_2456_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2447_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2456_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2452_; lean_object* v___x_2454_; 
v___x_2452_ = l_Lean_Expr_app___override(v___y_2430_, v_a_2448_);
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 0, v___x_2452_);
v___x_2454_ = v___x_2450_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v___x_2452_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
}
}
}
else
{
lean_dec_ref(v___y_2430_);
return v___x_2447_;
}
}
else
{
lean_dec_ref(v___y_2434_);
lean_dec_ref(v___y_2430_);
return v___x_2441_;
}
}
else
{
lean_object* v___x_2457_; 
v___x_2457_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___y_2437_, v___y_2430_, v___y_2436_, v___y_2428_, v___y_2431_, v___y_2432_, v___y_2438_, v___y_2427_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v___x_2459_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__16));
v___x_2460_ = lean_mk_empty_array_with_capacity(v___y_2439_);
v___x_2461_ = lean_array_push(v___x_2460_, v___y_2434_);
v___x_2462_ = lean_array_push(v___x_2461_, v_a_2458_);
v___x_2463_ = l_Lean_Meta_mkAppM(v___x_2459_, v___x_2462_, v___y_2431_, v___y_2432_, v___y_2438_, v___y_2427_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2472_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2463_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2466_ = v___x_2463_;
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2463_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2468_; lean_object* v___x_2470_; 
v___x_2468_ = l_Lean_Expr_app___override(v___y_2435_, v_a_2464_);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 0, v___x_2468_);
v___x_2470_ = v___x_2466_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v___x_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
else
{
lean_dec_ref(v___y_2435_);
return v___x_2463_;
}
}
else
{
lean_dec_ref(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v___x_2457_;
}
}
}
}
v___jp_2473_:
{
lean_object* v___x_2489_; 
v___x_2489_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_2156_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
lean_dec(v_fst_2156_);
if (lean_obj_tag(v___x_2489_) == 0)
{
lean_object* v_a_2490_; uint8_t v___x_2491_; 
v_a_2490_ = lean_ctor_get(v___x_2489_, 0);
lean_inc(v_a_2490_);
lean_dec_ref_known(v___x_2489_, 1);
v___x_2491_ = lean_unbox(v_a_2490_);
lean_dec(v_a_2490_);
if (v___x_2491_ == 4)
{
uint8_t v___x_2492_; 
v___x_2492_ = lean_unbox(v_snd_2157_);
lean_dec(v_snd_2157_);
v___y_2426_ = v___y_2476_;
v___y_2427_ = v___y_2488_;
v___y_2428_ = v___y_2484_;
v___y_2429_ = v___y_2478_;
v___y_2430_ = v___y_2479_;
v___y_2431_ = v___y_2485_;
v___y_2432_ = v___y_2486_;
v___y_2433_ = v___y_2480_;
v___y_2434_ = v_equivalence_2482_;
v___y_2435_ = v___y_2475_;
v___y_2436_ = v___y_2483_;
v___y_2437_ = v___y_2477_;
v___y_2438_ = v___y_2487_;
v___y_2439_ = v___y_2481_;
v___y_2440_ = v___x_2492_;
goto v___jp_2425_;
}
else
{
uint8_t v___x_2493_; 
v___x_2493_ = lean_unbox(v_snd_2157_);
lean_dec(v_snd_2157_);
if (v___x_2493_ == 0)
{
v___y_2426_ = v___y_2476_;
v___y_2427_ = v___y_2488_;
v___y_2428_ = v___y_2484_;
v___y_2429_ = v___y_2478_;
v___y_2430_ = v___y_2479_;
v___y_2431_ = v___y_2485_;
v___y_2432_ = v___y_2486_;
v___y_2433_ = v___y_2480_;
v___y_2434_ = v_equivalence_2482_;
v___y_2435_ = v___y_2475_;
v___y_2436_ = v___y_2483_;
v___y_2437_ = v___y_2477_;
v___y_2438_ = v___y_2487_;
v___y_2439_ = v___y_2481_;
v___y_2440_ = v___y_2474_;
goto v___jp_2425_;
}
else
{
v___y_2354_ = v___y_2476_;
v___y_2355_ = v___y_2488_;
v___y_2356_ = v___y_2484_;
v___y_2357_ = v___y_2478_;
v___y_2358_ = v___y_2479_;
v___y_2359_ = v___y_2485_;
v___y_2360_ = v___y_2486_;
v___y_2361_ = v___y_2480_;
v___y_2362_ = v_equivalence_2482_;
v___y_2363_ = v___y_2475_;
v___y_2364_ = v___y_2483_;
v___y_2365_ = v___y_2477_;
v___y_2366_ = v___y_2487_;
goto v___jp_2353_;
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec_ref(v_equivalence_2482_);
lean_dec_ref(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec_ref(v___y_2475_);
lean_dec(v_snd_2157_);
v_a_2494_ = lean_ctor_get(v___x_2489_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2489_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2489_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2489_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
v___jp_2502_:
{
if (v___y_2520_ == 0)
{
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2514_);
v___y_2474_ = v___y_2503_;
v___y_2475_ = v___y_2512_;
v___y_2476_ = v___y_2506_;
v___y_2477_ = v___y_2515_;
v___y_2478_ = v___y_2508_;
v___y_2479_ = v___y_2509_;
v___y_2480_ = v___y_2510_;
v___y_2481_ = v___y_2516_;
v_equivalence_2482_ = v_h_2136_;
v___y_2483_ = v___y_2505_;
v___y_2484_ = v___y_2519_;
v___y_2485_ = v___y_2507_;
v___y_2486_ = v___y_2518_;
v___y_2487_ = v___y_2513_;
v___y_2488_ = v___y_2511_;
goto v___jp_2473_;
}
else
{
if (v___y_2504_ == 0)
{
lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
lean_inc(v___y_2517_);
v___x_2522_ = l_Lean_Expr_isAppOfArity(v___y_2514_, v___x_2521_, v___y_2517_);
if (v___x_2522_ == 0)
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2514_);
lean_dec_ref(v___y_2512_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v___x_2523_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18);
v___x_2524_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2523_, v___y_2507_, v___y_2518_, v___y_2513_, v___y_2511_);
return v___x_2524_;
}
else
{
lean_object* v___x_2525_; uint8_t v___x_2526_; 
v___x_2525_ = l_Lean_Expr_appArg_x21(v___y_2514_);
lean_dec_ref(v___y_2514_);
v___x_2526_ = l_Lean_Expr_isAppOfArity(v___x_2525_, v___x_2521_, v___y_2517_);
if (v___x_2526_ == 0)
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
lean_dec_ref(v___x_2525_);
lean_dec_ref(v___y_2512_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v___x_2527_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__18);
v___x_2528_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2527_, v___y_2507_, v___y_2518_, v___y_2513_, v___y_2511_);
return v___x_2528_;
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = l_Lean_Expr_appArg_x21(v___x_2525_);
lean_dec_ref(v___x_2525_);
v___x_2530_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v___x_2529_, v_h_2136_);
v___y_2474_ = v___y_2503_;
v___y_2475_ = v___y_2512_;
v___y_2476_ = v___y_2506_;
v___y_2477_ = v___y_2515_;
v___y_2478_ = v___y_2508_;
v___y_2479_ = v___y_2509_;
v___y_2480_ = v___y_2510_;
v___y_2481_ = v___y_2516_;
v_equivalence_2482_ = v___x_2530_;
v___y_2483_ = v___y_2505_;
v___y_2484_ = v___y_2519_;
v___y_2485_ = v___y_2507_;
v___y_2486_ = v___y_2518_;
v___y_2487_ = v___y_2513_;
v___y_2488_ = v___y_2511_;
goto v___jp_2473_;
}
}
}
else
{
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2514_);
v___y_2474_ = v___y_2503_;
v___y_2475_ = v___y_2512_;
v___y_2476_ = v___y_2506_;
v___y_2477_ = v___y_2515_;
v___y_2478_ = v___y_2508_;
v___y_2479_ = v___y_2509_;
v___y_2480_ = v___y_2510_;
v___y_2481_ = v___y_2516_;
v_equivalence_2482_ = v_h_2136_;
v___y_2483_ = v___y_2505_;
v___y_2484_ = v___y_2519_;
v___y_2485_ = v___y_2507_;
v___y_2486_ = v___y_2518_;
v___y_2487_ = v___y_2513_;
v___y_2488_ = v___y_2511_;
goto v___jp_2473_;
}
}
}
v___jp_2531_:
{
uint8_t v___x_2549_; 
v___x_2549_ = lean_unbox(v_snd_2157_);
if (v___x_2549_ == 0)
{
v___y_2503_ = v___y_2532_;
v___y_2504_ = v___y_2548_;
v___y_2505_ = v___y_2533_;
v___y_2506_ = v___y_2534_;
v___y_2507_ = v___y_2535_;
v___y_2508_ = v___y_2536_;
v___y_2509_ = v___y_2537_;
v___y_2510_ = v___y_2538_;
v___y_2511_ = v___y_2539_;
v___y_2512_ = v___y_2540_;
v___y_2513_ = v___y_2541_;
v___y_2514_ = v___y_2542_;
v___y_2515_ = v___y_2543_;
v___y_2516_ = v___y_2544_;
v___y_2517_ = v___y_2546_;
v___y_2518_ = v___y_2545_;
v___y_2519_ = v___y_2547_;
v___y_2520_ = v___y_2532_;
goto v___jp_2502_;
}
else
{
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2542_);
v___y_2474_ = v___y_2532_;
v___y_2475_ = v___y_2540_;
v___y_2476_ = v___y_2534_;
v___y_2477_ = v___y_2543_;
v___y_2478_ = v___y_2536_;
v___y_2479_ = v___y_2537_;
v___y_2480_ = v___y_2538_;
v___y_2481_ = v___y_2544_;
v_equivalence_2482_ = v_h_2136_;
v___y_2483_ = v___y_2533_;
v___y_2484_ = v___y_2547_;
v___y_2485_ = v___y_2535_;
v___y_2486_ = v___y_2545_;
v___y_2487_ = v___y_2541_;
v___y_2488_ = v___y_2539_;
goto v___jp_2473_;
}
}
v___jp_2550_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; 
v___x_2561_ = lean_array_get_size(v___y_2553_);
v___x_2562_ = lean_unsigned_to_nat(2u);
v___x_2563_ = lean_nat_dec_eq(v___x_2561_, v___x_2562_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v___x_2564_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__20);
v___x_2565_ = l_Nat_reprFast(v___x_2561_);
v___x_2566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2565_);
v___x_2567_ = l_Lean_MessageData_ofFormat(v___x_2566_);
v___x_2568_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2564_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__22);
v___x_2570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2570_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_);
return v___x_2571_;
}
else
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2572_ = lean_array_fget(v___y_2553_, v___y_2552_);
lean_inc_ref(v___y_2551_);
lean_inc(v___y_2560_);
lean_inc_ref(v___y_2559_);
lean_inc(v___y_2558_);
lean_inc_ref(v___y_2557_);
lean_inc(v___y_2556_);
lean_inc_ref(v___y_2555_);
v___x_2573_ = lean_apply_8(v___y_2551_, v___y_2552_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, lean_box(0));
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v_fst_2575_; lean_object* v_snd_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
v_fst_2575_ = lean_ctor_get(v_a_2574_, 0);
lean_inc(v_fst_2575_);
v_snd_2576_ = lean_ctor_get(v_a_2574_, 1);
lean_inc(v_snd_2576_);
lean_dec(v_a_2574_);
v___x_2577_ = lean_unsigned_to_nat(1u);
lean_inc(v___y_2560_);
lean_inc_ref(v___y_2559_);
lean_inc(v___y_2558_);
lean_inc_ref(v___y_2557_);
lean_inc(v___y_2556_);
lean_inc_ref(v___y_2555_);
v___x_2578_ = lean_apply_8(v___y_2551_, v___x_2577_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, lean_box(0));
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v_fst_2580_; lean_object* v_snd_2581_; lean_object* v___x_2582_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref_known(v___x_2578_, 1);
v_fst_2580_ = lean_ctor_get(v_a_2579_, 0);
lean_inc(v_fst_2580_);
v_snd_2581_ = lean_ctor_get(v_a_2579_, 1);
lean_inc(v_snd_2581_);
lean_dec(v_a_2579_);
v___x_2582_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_2156_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref_known(v___x_2582_, 1);
v___x_2584_ = lean_array_fget(v___y_2553_, v___x_2577_);
lean_dec_ref(v___y_2553_);
v___x_2585_ = lean_unbox(v_a_2583_);
lean_dec(v_a_2583_);
if (v___x_2585_ == 4)
{
if (v___x_2563_ == 0)
{
uint8_t v___x_2586_; uint8_t v___x_2587_; 
v___x_2586_ = lean_unbox(v_fst_2575_);
lean_dec(v_fst_2575_);
v___x_2587_ = lean_unbox(v_fst_2580_);
lean_dec(v_fst_2580_);
v___y_2532_ = v___x_2563_;
v___y_2533_ = v___y_2555_;
v___y_2534_ = v___x_2586_;
v___y_2535_ = v___y_2557_;
v___y_2536_ = v___x_2584_;
v___y_2537_ = v_snd_2581_;
v___y_2538_ = v___x_2572_;
v___y_2539_ = v___y_2560_;
v___y_2540_ = v_snd_2576_;
v___y_2541_ = v___y_2559_;
v___y_2542_ = v___y_2554_;
v___y_2543_ = v___x_2587_;
v___y_2544_ = v___x_2562_;
v___y_2545_ = v___y_2558_;
v___y_2546_ = v___x_2577_;
v___y_2547_ = v___y_2556_;
v___y_2548_ = v___x_2563_;
goto v___jp_2531_;
}
else
{
uint8_t v___x_2588_; uint8_t v___x_2589_; uint8_t v___x_2590_; 
v___x_2588_ = lean_unbox(v_fst_2575_);
lean_dec(v_fst_2575_);
v___x_2589_ = lean_unbox(v_fst_2580_);
lean_dec(v_fst_2580_);
v___x_2590_ = lean_unbox(v_snd_2157_);
v___y_2503_ = v___x_2563_;
v___y_2504_ = v___x_2563_;
v___y_2505_ = v___y_2555_;
v___y_2506_ = v___x_2588_;
v___y_2507_ = v___y_2557_;
v___y_2508_ = v___x_2584_;
v___y_2509_ = v_snd_2581_;
v___y_2510_ = v___x_2572_;
v___y_2511_ = v___y_2560_;
v___y_2512_ = v_snd_2576_;
v___y_2513_ = v___y_2559_;
v___y_2514_ = v___y_2554_;
v___y_2515_ = v___x_2589_;
v___y_2516_ = v___x_2562_;
v___y_2517_ = v___x_2577_;
v___y_2518_ = v___y_2558_;
v___y_2519_ = v___y_2556_;
v___y_2520_ = v___x_2590_;
goto v___jp_2502_;
}
}
else
{
uint8_t v___x_2591_; uint8_t v___x_2592_; uint8_t v___x_2593_; 
v___x_2591_ = 0;
v___x_2592_ = lean_unbox(v_fst_2575_);
lean_dec(v_fst_2575_);
v___x_2593_ = lean_unbox(v_fst_2580_);
lean_dec(v_fst_2580_);
v___y_2532_ = v___x_2563_;
v___y_2533_ = v___y_2555_;
v___y_2534_ = v___x_2592_;
v___y_2535_ = v___y_2557_;
v___y_2536_ = v___x_2584_;
v___y_2537_ = v_snd_2581_;
v___y_2538_ = v___x_2572_;
v___y_2539_ = v___y_2560_;
v___y_2540_ = v_snd_2576_;
v___y_2541_ = v___y_2559_;
v___y_2542_ = v___y_2554_;
v___y_2543_ = v___x_2593_;
v___y_2544_ = v___x_2562_;
v___y_2545_ = v___y_2558_;
v___y_2546_ = v___x_2577_;
v___y_2547_ = v___y_2556_;
v___y_2548_ = v___x_2591_;
goto v___jp_2531_;
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
lean_dec(v_snd_2581_);
lean_dec(v_fst_2580_);
lean_dec(v_snd_2576_);
lean_dec(v_fst_2575_);
lean_dec(v___x_2572_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2594_ = lean_ctor_get(v___x_2582_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v___x_2582_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2582_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec(v_snd_2576_);
lean_dec(v_fst_2575_);
lean_dec(v___x_2572_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2602_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2578_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2578_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
else
{
lean_object* v_a_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2617_; 
lean_dec(v___x_2572_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec_ref(v___y_2551_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2610_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2617_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2617_ == 0)
{
v___x_2612_ = v___x_2573_;
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_a_2610_);
lean_dec(v___x_2573_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2617_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
lean_object* v___x_2615_; 
if (v_isShared_2613_ == 0)
{
v___x_2615_ = v___x_2612_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2616_; 
v_reuseFailAlloc_2616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2616_, 0, v_a_2610_);
v___x_2615_ = v_reuseFailAlloc_2616_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
return v___x_2615_;
}
}
}
}
}
v___jp_2618_:
{
lean_object* v___x_2640_; 
v___x_2640_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_2156_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; uint8_t v___x_2642_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2640_, 1);
v___x_2642_ = lean_unbox(v_a_2641_);
switch(v___x_2642_)
{
case 1:
{
uint8_t v___x_2643_; 
lean_dec(v_a_2641_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2619_);
lean_dec(v_fst_2156_);
v___x_2643_ = lean_unbox(v_snd_2157_);
lean_dec(v_snd_2157_);
if (v___x_2643_ == 0)
{
lean_object* v___x_2644_; 
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
v___x_2644_ = lp_vampireReplay_Vampire_Reconstruct_introGiven(v___y_2620_, v___y_2626_, v___y_2621_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2653_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2647_ = v___x_2644_;
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2644_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2649_; lean_object* v___x_2651_; 
v___x_2649_ = l_Lean_Expr_app___override(v_h_2136_, v_a_2645_);
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 0, v___x_2649_);
v___x_2651_ = v___x_2647_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v___x_2649_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
else
{
lean_dec_ref(v_h_2136_);
return v___x_2644_;
}
}
else
{
lean_object* v___x_2654_; 
lean_dec_ref(v___y_2626_);
v___x_2654_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4(v___y_2639_, v___y_2624_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2639_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v_snd_2656_; lean_object* v_fst_2657_; lean_object* v_snd_2658_; lean_object* v___x_2659_; lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2668_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v_snd_2656_ = lean_ctor_get(v_a_2655_, 1);
lean_inc(v_snd_2656_);
v_fst_2657_ = lean_ctor_get(v_a_2655_, 0);
lean_inc(v_fst_2657_);
lean_dec(v_a_2655_);
v_snd_2658_ = lean_ctor_get(v_snd_2656_, 1);
lean_inc(v_snd_2658_);
lean_dec(v_snd_2656_);
v___x_2659_ = lp_vampireReplay_Vampire_Reconstruct_projectGiven(v___y_2620_, v_fst_2657_, v_h_2136_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec_ref(v___y_2620_);
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2668_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2668_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2664_; lean_object* v___x_2666_; 
v___x_2664_ = l_Lean_Expr_app___override(v_snd_2658_, v_a_2660_);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2664_);
v___x_2666_ = v___x_2662_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_h_2136_);
v_a_2669_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2654_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2654_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
case 2:
{
uint8_t v___x_2677_; 
lean_dec(v_a_2641_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2619_);
lean_dec(v_fst_2156_);
v___x_2677_ = lean_unbox(v_snd_2157_);
lean_dec(v_snd_2157_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
lean_dec_ref(v___y_2625_);
v___x_2678_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__4(v___y_2639_, v___y_2624_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2639_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v_snd_2680_; lean_object* v_fst_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; uint8_t v___x_2684_; lean_object* v___x_2685_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v_snd_2680_ = lean_ctor_get(v_a_2679_, 1);
lean_inc(v_snd_2680_);
v_fst_2681_ = lean_ctor_get(v_a_2679_, 0);
lean_inc(v_fst_2681_);
lean_dec(v_a_2679_);
v_fst_2682_ = lean_ctor_get(v_snd_2680_, 0);
lean_inc(v_fst_2682_);
v_snd_2683_ = lean_ctor_get(v_snd_2680_, 1);
lean_inc(v_snd_2683_);
lean_dec(v_snd_2680_);
v___x_2684_ = lean_unbox(v_fst_2682_);
lean_dec(v_fst_2682_);
v___x_2685_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__0(v___x_2684_, v_snd_2683_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
if (lean_obj_tag(v___x_2685_) == 0)
{
lean_object* v_a_2686_; lean_object* v___x_2687_; lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2696_; 
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
lean_inc(v_a_2686_);
lean_dec_ref_known(v___x_2685_, 1);
v___x_2687_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v___y_2620_, v_fst_2681_, v_a_2686_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec_ref(v___y_2620_);
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2690_ = v___x_2687_;
v_isShared_2691_ = v_isSharedCheck_2696_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2687_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2696_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2692_; lean_object* v___x_2694_; 
v___x_2692_ = l_Lean_Expr_app___override(v_h_2136_, v_a_2688_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 0, v___x_2692_);
v___x_2694_ = v___x_2690_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
else
{
lean_dec(v_fst_2681_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_h_2136_);
return v___x_2685_;
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_h_2136_);
v_a_2697_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2678_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2678_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
else
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
v___x_2705_ = lean_box(0);
v___x_2706_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v___y_2620_, v___y_2625_, v_h_2136_, v___y_2621_, v___x_2705_, v___y_2633_, v___y_2628_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
lean_dec_ref(v___y_2620_);
return v___x_2706_;
}
}
case 4:
{
lean_dec(v_a_2641_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
v___y_2551_ = v___y_2619_;
v___y_2552_ = v___y_2621_;
v___y_2553_ = v___y_2620_;
v___y_2554_ = v___y_2638_;
v___y_2555_ = v___y_2633_;
v___y_2556_ = v___y_2628_;
v___y_2557_ = v___y_2629_;
v___y_2558_ = v___y_2637_;
v___y_2559_ = v___y_2632_;
v___y_2560_ = v___y_2631_;
goto v___jp_2550_;
}
case 5:
{
lean_dec(v_a_2641_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
v___y_2551_ = v___y_2619_;
v___y_2552_ = v___y_2621_;
v___y_2553_ = v___y_2620_;
v___y_2554_ = v___y_2638_;
v___y_2555_ = v___y_2633_;
v___y_2556_ = v___y_2628_;
v___y_2557_ = v___y_2629_;
v___y_2558_ = v___y_2637_;
v___y_2559_ = v___y_2632_;
v___y_2560_ = v___y_2631_;
goto v___jp_2550_;
}
case 7:
{
lean_dec(v_a_2641_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v___y_2619_);
v___y_2328_ = v___y_2634_;
v___y_2329_ = v___y_2627_;
v___y_2330_ = v___y_2621_;
v___y_2331_ = v___y_2635_;
v___y_2332_ = v___y_2636_;
v___y_2333_ = v___y_2630_;
v___y_2334_ = v___y_2633_;
v___y_2335_ = v___y_2628_;
v___y_2336_ = v___y_2629_;
v___y_2337_ = v___y_2637_;
v___y_2338_ = v___y_2632_;
v___y_2339_ = v___y_2631_;
goto v___jp_2327_;
}
case 8:
{
lean_dec(v_a_2641_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v___y_2619_);
v___y_2328_ = v___y_2634_;
v___y_2329_ = v___y_2627_;
v___y_2330_ = v___y_2621_;
v___y_2331_ = v___y_2635_;
v___y_2332_ = v___y_2636_;
v___y_2333_ = v___y_2630_;
v___y_2334_ = v___y_2633_;
v___y_2335_ = v___y_2628_;
v___y_2336_ = v___y_2629_;
v___y_2337_ = v___y_2637_;
v___y_2338_ = v___y_2632_;
v___y_2339_ = v___y_2631_;
goto v___jp_2327_;
}
default: 
{
lean_object* v___x_2707_; uint8_t v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v___x_2707_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__24);
v___x_2708_ = lean_unbox(v_a_2641_);
lean_dec(v_a_2641_);
v___x_2709_ = lp_vampireReplay_Vampire_instReprConnective_repr(v___x_2708_, v___y_2621_);
lean_dec(v___y_2621_);
v___x_2710_ = l_Lean_MessageData_ofFormat(v___x_2709_);
v___x_2711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2707_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2711_, v___y_2629_, v___y_2637_, v___y_2632_, v___y_2631_);
return v___x_2712_;
}
}
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2713_ = lean_ctor_get(v___x_2640_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2640_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2640_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
v___jp_2721_:
{
lean_object* v_sorts_2735_; lean_object* v_vars_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
v_sorts_2735_ = lean_ctor_get(v_r_2130_, 0);
lean_inc_ref_n(v_sorts_2735_, 2);
v_vars_2736_ = lean_ctor_get(v_r_2130_, 1);
lean_inc_ref_n(v_vars_2736_, 2);
lean_dec_ref(v_r_2130_);
lean_inc_n(v_fst_2156_, 2);
v___x_2737_ = lp_vampireReplay_Vampire_Formula_subformulas(v_fst_2156_);
v___x_2738_ = lean_unbox(v_snd_2157_);
lean_inc_ref(v___y_2727_);
v___x_2739_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts(v_sorts_2735_, v_vars_2736_, v_fst_2156_, v___x_2738_, v___y_2727_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; lean_object* v___f_2742_; lean_object* v___f_2743_; lean_object* v___f_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; uint8_t v___x_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v___x_2741_ = lean_box_usize(v___y_2723_);
lean_inc_ref(v___y_2724_);
lean_inc_ref(v___x_2737_);
v___f_2742_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__1___boxed), 12, 4);
lean_closure_set(v___f_2742_, 0, v___x_2737_);
lean_closure_set(v___f_2742_, 1, v___y_2722_);
lean_closure_set(v___f_2742_, 2, v___y_2724_);
lean_closure_set(v___f_2742_, 3, v___x_2741_);
lean_inc_ref_n(v___f_2742_, 2);
v___f_2743_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__2___boxed), 10, 2);
lean_closure_set(v___f_2743_, 0, v___f_2742_);
lean_closure_set(v___f_2743_, 1, v___f_2158_);
v___f_2744_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___lam__3___boxed), 10, 1);
lean_closure_set(v___f_2744_, 0, v___f_2742_);
v___x_2745_ = lean_unsigned_to_nat(0u);
v___x_2746_ = lean_array_get_size(v___y_2725_);
v___x_2747_ = lean_nat_dec_lt(v___x_2745_, v___x_2746_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; 
lean_dec_ref(v___y_2725_);
v___x_2748_ = lean_box(0);
lean_inc_ref(v___x_2737_);
v___y_2619_ = v___f_2742_;
v___y_2620_ = v_a_2740_;
v___y_2621_ = v___x_2745_;
v___y_2622_ = v___x_2737_;
v___y_2623_ = v___y_2723_;
v___y_2624_ = v___y_2724_;
v___y_2625_ = v___f_2744_;
v___y_2626_ = v___f_2743_;
v___y_2627_ = v_vars_2736_;
v___y_2628_ = v___y_2730_;
v___y_2629_ = v___y_2731_;
v___y_2630_ = v___y_2728_;
v___y_2631_ = v___y_2734_;
v___y_2632_ = v___y_2733_;
v___y_2633_ = v___y_2729_;
v___y_2634_ = v_sorts_2735_;
v___y_2635_ = v___x_2737_;
v___y_2636_ = v___y_2726_;
v___y_2637_ = v___y_2732_;
v___y_2638_ = v___y_2727_;
v___y_2639_ = v___x_2748_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = lean_array_fget(v___y_2725_, v___x_2745_);
lean_dec_ref(v___y_2725_);
v___x_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
lean_inc_ref(v___x_2737_);
v___y_2619_ = v___f_2742_;
v___y_2620_ = v_a_2740_;
v___y_2621_ = v___x_2745_;
v___y_2622_ = v___x_2737_;
v___y_2623_ = v___y_2723_;
v___y_2624_ = v___y_2724_;
v___y_2625_ = v___f_2744_;
v___y_2626_ = v___f_2743_;
v___y_2627_ = v_vars_2736_;
v___y_2628_ = v___y_2730_;
v___y_2629_ = v___y_2731_;
v___y_2630_ = v___y_2728_;
v___y_2631_ = v___y_2734_;
v___y_2632_ = v___y_2733_;
v___y_2633_ = v___y_2729_;
v___y_2634_ = v_sorts_2735_;
v___y_2635_ = v___x_2737_;
v___y_2636_ = v___y_2726_;
v___y_2637_ = v___y_2732_;
v___y_2638_ = v___y_2727_;
v___y_2639_ = v___x_2750_;
goto v___jp_2618_;
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
lean_dec_ref(v___x_2737_);
lean_dec_ref(v_vars_2736_);
lean_dec_ref(v_sorts_2735_);
lean_dec_ref(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec_ref(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec_ref(v___y_2722_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
v_a_2751_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___x_2739_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2739_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
}
v___jp_2759_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec_ref(v___y_2766_);
lean_dec_ref(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec_ref(v___y_2760_);
v___x_2773_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__26);
v___x_2774_ = l_Lean_indentExpr(v___y_2765_);
v___x_2775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__28);
v___x_2777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2775_);
lean_ctor_set(v___x_2777_, 1, v___x_2776_);
v___x_2778_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_2777_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2778_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2778_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
v___jp_2787_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; uint8_t v___x_2803_; 
v___x_2801_ = lean_array_get_size(v___y_2791_);
v___x_2802_ = lean_unsigned_to_nat(0u);
v___x_2803_ = lean_nat_dec_eq(v___x_2801_, v___x_2802_);
if (v___x_2803_ == 0)
{
v___y_2722_ = v___y_2788_;
v___y_2723_ = v___y_2789_;
v___y_2724_ = v___y_2790_;
v___y_2725_ = v___y_2791_;
v___y_2726_ = v___y_2792_;
v___y_2727_ = v___y_2793_;
v___y_2728_ = v___y_2794_;
v___y_2729_ = v___y_2795_;
v___y_2730_ = v___y_2796_;
v___y_2731_ = v___y_2797_;
v___y_2732_ = v___y_2798_;
v___y_2733_ = v___y_2799_;
v___y_2734_ = v___y_2800_;
goto v___jp_2721_;
}
else
{
lean_object* v___x_2804_; uint8_t v___x_2805_; 
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_r_2130_);
v___x_2804_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30));
v___x_2805_ = l_Lean_Expr_isConstOf(v___y_2793_, v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v___x_2806_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = l_Lean_Expr_isAppOfArity(v___y_2793_, v___x_2806_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_dec_ref(v_h_2136_);
v___y_2760_ = v___y_2788_;
v___y_2761_ = v___y_2789_;
v___y_2762_ = v___y_2790_;
v___y_2763_ = v___y_2791_;
v___y_2764_ = v___y_2792_;
v___y_2765_ = v___y_2793_;
v___y_2766_ = v___y_2794_;
v___y_2767_ = v___y_2795_;
v___y_2768_ = v___y_2796_;
v___y_2769_ = v___y_2797_;
v___y_2770_ = v___y_2798_;
v___y_2771_ = v___y_2799_;
v___y_2772_ = v___y_2800_;
goto v___jp_2759_;
}
else
{
lean_object* v___x_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; 
v___x_2809_ = l_Lean_Expr_appArg_x21(v___y_2793_);
v___x_2810_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__32));
v___x_2811_ = l_Lean_Expr_isConstOf(v___x_2809_, v___x_2810_);
lean_dec_ref(v___x_2809_);
if (v___x_2811_ == 0)
{
lean_dec_ref(v_h_2136_);
v___y_2760_ = v___y_2788_;
v___y_2761_ = v___y_2789_;
v___y_2762_ = v___y_2790_;
v___y_2763_ = v___y_2791_;
v___y_2764_ = v___y_2792_;
v___y_2765_ = v___y_2793_;
v___y_2766_ = v___y_2794_;
v___y_2767_ = v___y_2795_;
v___y_2768_ = v___y_2796_;
v___y_2769_ = v___y_2797_;
v___y_2770_ = v___y_2798_;
v___y_2771_ = v___y_2799_;
v___y_2772_ = v___y_2800_;
goto v___jp_2759_;
}
else
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
lean_dec_ref(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec_ref(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___y_2788_);
v___x_2812_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__34);
v___x_2813_ = l_Lean_Expr_app___override(v_h_2136_, v___x_2812_);
v___x_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2813_);
return v___x_2814_;
}
}
}
else
{
lean_object* v___x_2815_; 
lean_dec_ref(v___y_2794_);
lean_dec_ref(v___y_2793_);
lean_dec_ref(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec_ref(v___y_2788_);
v___x_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2815_, 0, v_h_2136_);
return v___x_2815_;
}
}
}
v___jp_2816_:
{
lean_object* v___x_2832_; 
lean_inc_ref(v___y_2825_);
v___x_2832_ = l_Lean_Meta_isExprDefEq(v_a_2831_, v___y_2825_, v___y_2822_, v___y_2829_, v___y_2821_, v___y_2830_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2844_; 
v_a_2833_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2835_ = v___x_2832_;
v_isShared_2836_ = v_isSharedCheck_2844_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2832_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2844_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
uint8_t v___x_2837_; 
v___x_2837_ = lean_unbox(v_a_2833_);
lean_dec(v_a_2833_);
if (v___x_2837_ == 0)
{
lean_del_object(v___x_2835_);
lean_dec(v___y_2828_);
v___y_2788_ = v___y_2817_;
v___y_2789_ = v___y_2818_;
v___y_2790_ = v___y_2819_;
v___y_2791_ = v___y_2820_;
v___y_2792_ = v___y_2823_;
v___y_2793_ = v___y_2825_;
v___y_2794_ = v___y_2826_;
v___y_2795_ = v___y_2824_;
v___y_2796_ = v___y_2827_;
v___y_2797_ = v___y_2822_;
v___y_2798_ = v___y_2829_;
v___y_2799_ = v___y_2821_;
v___y_2800_ = v___y_2830_;
goto v___jp_2787_;
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
lean_dec_ref(v___y_2825_);
lean_dec_ref(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec_ref(v___y_2817_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_r_2130_);
v___x_2838_ = l_Lean_instInhabitedExpr;
v___x_2839_ = lean_array_get(v___x_2838_, v___y_2826_, v___y_2828_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2826_);
v___x_2840_ = l_Lean_Expr_app___override(v___x_2839_, v_h_2136_);
if (v_isShared_2836_ == 0)
{
lean_ctor_set(v___x_2835_, 0, v___x_2840_);
v___x_2842_ = v___x_2835_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec_ref(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec_ref(v___y_2817_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
lean_dec_ref(v_r_2130_);
v_a_2845_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2832_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2832_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
v___jp_2853_:
{
if (lean_obj_tag(v___y_2868_) == 0)
{
lean_object* v_a_2869_; 
v_a_2869_ = lean_ctor_get(v___y_2868_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___y_2868_, 1);
v___y_2817_ = v___y_2854_;
v___y_2818_ = v___y_2855_;
v___y_2819_ = v___y_2856_;
v___y_2820_ = v___y_2858_;
v___y_2821_ = v___y_2857_;
v___y_2822_ = v___y_2859_;
v___y_2823_ = v___y_2861_;
v___y_2824_ = v___y_2860_;
v___y_2825_ = v___y_2862_;
v___y_2826_ = v___y_2864_;
v___y_2827_ = v___y_2863_;
v___y_2828_ = v___y_2865_;
v___y_2829_ = v___y_2866_;
v___y_2830_ = v___y_2867_;
v_a_2831_ = v_a_2869_;
goto v___jp_2816_;
}
else
{
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec_ref(v___y_2862_);
lean_dec_ref(v___y_2858_);
lean_dec_ref(v___y_2856_);
lean_dec_ref(v___y_2854_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
lean_dec_ref(v_r_2130_);
return v___y_2868_;
}
}
v___jp_2870_:
{
lean_object* v_replacement_2878_; size_t v_sz_2879_; size_t v___x_2880_; lean_object* v___x_2881_; 
lean_inc_ref_n(v_c_2131_, 2);
v_replacement_2878_ = lp_vampireReplay_Vampire_GenClause_replacement(v_c_2131_);
v_sz_2879_ = lean_array_size(v_replacement_2878_);
v___x_2880_ = ((size_t)0ULL);
lean_inc_ref(v_replacement_2878_);
lean_inc_ref(v_r_2130_);
v___x_2881_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__0(v_c_2131_, v_r_2130_, v_childParts_2134_, v_refuted_2137_, v_sz_2879_, v___x_2880_, v_replacement_2878_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; uint8_t v___x_2885_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2881_, 1);
v___x_2883_ = lean_array_get_size(v_replacement_2878_);
v___x_2884_ = lean_unsigned_to_nat(1u);
v___x_2885_ = lean_nat_dec_eq(v___x_2883_, v___x_2884_);
if (v___x_2885_ == 0)
{
lean_dec_ref(v_c_2131_);
lean_inc(v_a_2882_);
lean_inc_ref(v_replacement_2878_);
v___y_2788_ = v_replacement_2878_;
v___y_2789_ = v___x_2880_;
v___y_2790_ = v_a_2882_;
v___y_2791_ = v_replacement_2878_;
v___y_2792_ = v___x_2880_;
v___y_2793_ = v_stated_2871_;
v___y_2794_ = v_a_2882_;
v___y_2795_ = v___y_2872_;
v___y_2796_ = v___y_2873_;
v___y_2797_ = v___y_2874_;
v___y_2798_ = v___y_2875_;
v___y_2799_ = v___y_2876_;
v___y_2800_ = v___y_2877_;
goto v___jp_2787_;
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2886_ = lp_vampireReplay_Vampire_GenClause_literals(v_c_2131_);
v___x_2887_ = lean_unsigned_to_nat(0u);
v___x_2888_ = lean_array_fget(v_replacement_2878_, v___x_2887_);
v___x_2889_ = lp_vampireReplay_Array_findIdx_x3f_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom_spec__1(v___x_2888_, v___x_2886_, v___x_2887_);
lean_dec_ref(v___x_2886_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_sorts_2890_; lean_object* v_vars_2891_; lean_object* v___x_2892_; 
v_sorts_2890_ = lean_ctor_get(v_r_2130_, 0);
v_vars_2891_ = lean_ctor_get(v_r_2130_, 1);
lean_inc_ref(v_vars_2891_);
lean_inc_ref(v_sorts_2890_);
v___x_2892_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_2890_, v_vars_2891_, v___x_2888_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_inc(v_a_2882_);
lean_inc_ref(v_replacement_2878_);
v___y_2854_ = v_replacement_2878_;
v___y_2855_ = v___x_2880_;
v___y_2856_ = v_a_2882_;
v___y_2857_ = v___y_2876_;
v___y_2858_ = v_replacement_2878_;
v___y_2859_ = v___y_2874_;
v___y_2860_ = v___y_2872_;
v___y_2861_ = v___x_2880_;
v___y_2862_ = v_stated_2871_;
v___y_2863_ = v___y_2873_;
v___y_2864_ = v_a_2882_;
v___y_2865_ = v___x_2887_;
v___y_2866_ = v___y_2875_;
v___y_2867_ = v___y_2877_;
v___y_2868_ = v___x_2892_;
goto v___jp_2853_;
}
else
{
lean_object* v_val_2893_; lean_object* v___x_2894_; uint8_t v___x_2895_; 
v_val_2893_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_val_2893_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2894_ = lean_array_get_size(v_childParts_2134_);
v___x_2895_ = lean_nat_dec_lt(v_val_2893_, v___x_2894_);
if (v___x_2895_ == 0)
{
lean_object* v_sorts_2896_; lean_object* v_vars_2897_; lean_object* v___x_2898_; 
lean_dec(v_val_2893_);
v_sorts_2896_ = lean_ctor_get(v_r_2130_, 0);
v_vars_2897_ = lean_ctor_get(v_r_2130_, 1);
lean_inc_ref(v_vars_2897_);
lean_inc_ref(v_sorts_2896_);
v___x_2898_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit(v_sorts_2896_, v_vars_2897_, v___x_2888_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_inc(v_a_2882_);
lean_inc_ref(v_replacement_2878_);
v___y_2854_ = v_replacement_2878_;
v___y_2855_ = v___x_2880_;
v___y_2856_ = v_a_2882_;
v___y_2857_ = v___y_2876_;
v___y_2858_ = v_replacement_2878_;
v___y_2859_ = v___y_2874_;
v___y_2860_ = v___y_2872_;
v___y_2861_ = v___x_2880_;
v___y_2862_ = v_stated_2871_;
v___y_2863_ = v___y_2873_;
v___y_2864_ = v_a_2882_;
v___y_2865_ = v___x_2887_;
v___y_2866_ = v___y_2875_;
v___y_2867_ = v___y_2877_;
v___y_2868_ = v___x_2898_;
goto v___jp_2853_;
}
else
{
lean_object* v___x_2899_; 
lean_dec(v___x_2888_);
v___x_2899_ = lean_array_fget_borrowed(v_childParts_2134_, v_val_2893_);
lean_dec(v_val_2893_);
lean_inc(v___x_2899_);
lean_inc(v_a_2882_);
lean_inc_ref(v_replacement_2878_);
v___y_2817_ = v_replacement_2878_;
v___y_2818_ = v___x_2880_;
v___y_2819_ = v_a_2882_;
v___y_2820_ = v_replacement_2878_;
v___y_2821_ = v___y_2876_;
v___y_2822_ = v___y_2874_;
v___y_2823_ = v___x_2880_;
v___y_2824_ = v___y_2872_;
v___y_2825_ = v_stated_2871_;
v___y_2826_ = v_a_2882_;
v___y_2827_ = v___y_2873_;
v___y_2828_ = v___x_2887_;
v___y_2829_ = v___y_2875_;
v___y_2830_ = v___y_2877_;
v_a_2831_ = v___x_2899_;
goto v___jp_2816_;
}
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec_ref(v_replacement_2878_);
lean_dec_ref(v_stated_2871_);
lean_dec(v_snd_2157_);
lean_dec(v_fst_2156_);
lean_dec_ref(v_h_2136_);
lean_dec_ref(v_c_2131_);
lean_dec_ref(v_r_2130_);
v_a_2900_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2881_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2881_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
}
v___jp_2145_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = l_Lean_Expr_app___override(v___y_2146_, v_sides_2147_);
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2148_);
return v___x_2149_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___boxed(lean_object* v_r_2915_, lean_object* v_c_2916_, lean_object* v_p_2917_, lean_object* v_position_2918_, lean_object* v_childParts_2919_, lean_object* v_parentParts_2920_, lean_object* v_h_2921_, lean_object* v_refuted_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced(v_r_2915_, v_c_2916_, v_p_2917_, v_position_2918_, v_childParts_2919_, v_parentParts_2920_, v_h_2921_, v_refuted_2922_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
lean_dec(v_a_2928_);
lean_dec_ref(v_a_2927_);
lean_dec(v_a_2926_);
lean_dec_ref(v_a_2925_);
lean_dec(v_a_2924_);
lean_dec_ref(v_a_2923_);
lean_dec_ref(v_parentParts_2920_);
lean_dec_ref(v_childParts_2919_);
lean_dec(v_position_2918_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1(lean_object* v___x_2931_, lean_object* v_a_2932_, lean_object* v_as_2933_, size_t v_sz_2934_, size_t v_i_2935_, lean_object* v_b_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___redArg(v___x_2931_, v_a_2932_, v_as_2933_, v_sz_2934_, v_i_2935_, v_b_2936_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1___boxed(lean_object* v___x_2945_, lean_object* v_a_2946_, lean_object* v_as_2947_, lean_object* v_sz_2948_, lean_object* v_i_2949_, lean_object* v_b_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
size_t v_sz_boxed_2958_; size_t v_i_boxed_2959_; lean_object* v_res_2960_; 
v_sz_boxed_2958_ = lean_unbox_usize(v_sz_2948_);
lean_dec(v_sz_2948_);
v_i_boxed_2959_ = lean_unbox_usize(v_i_2949_);
lean_dec(v_i_2949_);
v_res_2960_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__1(v___x_2945_, v_a_2946_, v_as_2947_, v_sz_boxed_2958_, v_i_boxed_2959_, v_b_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec_ref(v_as_2947_);
lean_dec_ref(v_a_2946_);
lean_dec_ref(v___x_2945_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3(lean_object* v_as_2961_, size_t v_sz_2962_, size_t v_i_2963_, lean_object* v_b_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___redArg(v_as_2961_, v_sz_2962_, v_i_2963_, v_b_2964_);
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3___boxed(lean_object* v_as_2973_, lean_object* v_sz_2974_, lean_object* v_i_2975_, lean_object* v_b_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_){
_start:
{
size_t v_sz_boxed_2984_; size_t v_i_boxed_2985_; lean_object* v_res_2986_; 
v_sz_boxed_2984_ = lean_unbox_usize(v_sz_2974_);
lean_dec(v_sz_2974_);
v_i_boxed_2985_ = lean_unbox_usize(v_i_2975_);
lean_dec(v_i_2975_);
v_res_2986_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__3(v_as_2973_, v_sz_boxed_2984_, v_i_boxed_2985_, v_b_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec_ref(v_as_2973_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4(lean_object* v___x_2987_, lean_object* v___x_2988_, lean_object* v_a_2989_, uint8_t v___y_2990_, lean_object* v___x_2991_, lean_object* v___x_2992_, uint8_t v___x_2993_, lean_object* v_a_2994_, lean_object* v_as_2995_, lean_object* v_as_x27_2996_, lean_object* v_b_2997_, lean_object* v_a_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v___x_3006_; 
v___x_3006_ = lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___redArg(v___x_2987_, v___x_2988_, v_a_2989_, v___y_2990_, v___x_2991_, v___x_2992_, v___x_2993_, v_a_2994_, v_as_x27_2996_, v_b_2997_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
return v___x_3006_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4___boxed(lean_object** _args){
lean_object* v___x_3007_ = _args[0];
lean_object* v___x_3008_ = _args[1];
lean_object* v_a_3009_ = _args[2];
lean_object* v___y_3010_ = _args[3];
lean_object* v___x_3011_ = _args[4];
lean_object* v___x_3012_ = _args[5];
lean_object* v___x_3013_ = _args[6];
lean_object* v_a_3014_ = _args[7];
lean_object* v_as_3015_ = _args[8];
lean_object* v_as_x27_3016_ = _args[9];
lean_object* v_b_3017_ = _args[10];
lean_object* v_a_3018_ = _args[11];
lean_object* v___y_3019_ = _args[12];
lean_object* v___y_3020_ = _args[13];
lean_object* v___y_3021_ = _args[14];
lean_object* v___y_3022_ = _args[15];
lean_object* v___y_3023_ = _args[16];
lean_object* v___y_3024_ = _args[17];
lean_object* v___y_3025_ = _args[18];
_start:
{
uint8_t v___y_82502__boxed_3026_; uint8_t v___x_82505__boxed_3027_; lean_object* v_res_3028_; 
v___y_82502__boxed_3026_ = lean_unbox(v___y_3010_);
v___x_82505__boxed_3027_ = lean_unbox(v___x_3013_);
v_res_3028_ = lp_vampireReplay_List_forIn_x27_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__4(v___x_3007_, v___x_3008_, v_a_3009_, v___y_82502__boxed_3026_, v___x_3011_, v___x_3012_, v___x_82505__boxed_3027_, v_a_3014_, v_as_3015_, v_as_x27_3016_, v_b_3017_, v_a_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec(v_as_x27_3016_);
lean_dec(v_as_3015_);
lean_dec_ref(v_a_3014_);
lean_dec_ref(v___x_3007_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5(lean_object* v_fst_3029_, uint8_t v_snd_3030_, lean_object* v___x_3031_, lean_object* v_as_3032_, size_t v_sz_3033_, size_t v_i_3034_, lean_object* v_b_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v___x_3043_; 
v___x_3043_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___redArg(v_fst_3029_, v_snd_3030_, v___x_3031_, v_as_3032_, v_sz_3033_, v_i_3034_, v_b_3035_);
return v___x_3043_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5___boxed(lean_object* v_fst_3044_, lean_object* v_snd_3045_, lean_object* v___x_3046_, lean_object* v_as_3047_, lean_object* v_sz_3048_, lean_object* v_i_3049_, lean_object* v_b_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
uint8_t v_snd_82550__boxed_3058_; size_t v_sz_boxed_3059_; size_t v_i_boxed_3060_; lean_object* v_res_3061_; 
v_snd_82550__boxed_3058_ = lean_unbox(v_snd_3045_);
v_sz_boxed_3059_ = lean_unbox_usize(v_sz_3048_);
lean_dec(v_sz_3048_);
v_i_boxed_3060_ = lean_unbox_usize(v_i_3049_);
lean_dec(v_i_3049_);
v_res_3061_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced_spec__5(v_fst_3044_, v_snd_82550__boxed_3058_, v___x_3046_, v_as_3047_, v_sz_boxed_3059_, v_i_boxed_3060_, v_b_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec_ref(v_as_3047_);
lean_dec_ref(v_fst_3044_);
return v_res_3061_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__0));
v___x_3064_ = l_Lean_stringToMessageData(v___x_3063_);
return v___x_3064_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__2));
v___x_3067_ = l_Lean_stringToMessageData(v___x_3066_);
return v___x_3067_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5(void){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__4));
v___x_3070_ = l_Lean_stringToMessageData(v___x_3069_);
return v___x_3070_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__6));
v___x_3073_ = l_Lean_stringToMessageData(v___x_3072_);
return v___x_3073_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9(void){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3075_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__8));
v___x_3076_ = l_Lean_stringToMessageData(v___x_3075_);
return v___x_3076_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11(void){
_start:
{
lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3078_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__10));
v___x_3079_ = l_Lean_stringToMessageData(v___x_3078_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root(lean_object* v_r_3080_, lean_object* v_parts_3081_, lean_object* v_refuted_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_){
_start:
{
lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___x_3111_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v_fst_3126_; lean_object* v_snd_3127_; lean_object* v___x_3171_; uint8_t v___x_3172_; 
v___x_3111_ = lean_array_get_size(v_parts_3081_);
v___x_3171_ = lean_unsigned_to_nat(1u);
v___x_3172_ = lean_nat_dec_eq(v___x_3111_, v___x_3171_);
if (v___x_3172_ == 0)
{
lean_object* v___x_3173_; uint8_t v___x_3174_; 
lean_dec_ref(v_r_3080_);
v___x_3173_ = lean_unsigned_to_nat(2u);
v___x_3174_ = lean_nat_dec_eq(v___x_3111_, v___x_3173_);
if (v___x_3174_ == 0)
{
lean_dec_ref(v_refuted_3082_);
v___y_3113_ = v_a_3085_;
v___y_3114_ = v_a_3086_;
v___y_3115_ = v_a_3087_;
v___y_3116_ = v_a_3088_;
goto v___jp_3112_;
}
else
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3180_; uint8_t v___x_3181_; 
v___x_3175_ = l_Lean_instInhabitedExpr;
v___x_3176_ = lean_unsigned_to_nat(0u);
v___x_3177_ = lean_array_get_borrowed(v___x_3175_, v_parts_3081_, v___x_3176_);
v___x_3180_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_3181_ = l_Lean_Expr_isAppOfArity(v___x_3177_, v___x_3180_, v___x_3171_);
if (v___x_3181_ == 0)
{
goto v___jp_3178_;
}
else
{
if (v___x_3174_ == 0)
{
goto v___jp_3178_;
}
else
{
lean_object* v___x_3182_; 
v___x_3182_ = lean_array_get_borrowed(v___x_3175_, v_parts_3081_, v___x_3171_);
lean_inc(v___x_3177_);
lean_inc(v___x_3182_);
v_fst_3126_ = v___x_3182_;
v_snd_3127_ = v___x_3177_;
goto v___jp_3125_;
}
}
v___jp_3178_:
{
lean_object* v___x_3179_; 
v___x_3179_ = lean_array_get_borrowed(v___x_3175_, v_parts_3081_, v___x_3171_);
lean_inc(v___x_3179_);
lean_inc(v___x_3177_);
v_fst_3126_ = v___x_3177_;
v_snd_3127_ = v___x_3179_;
goto v___jp_3125_;
}
}
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v___x_3183_ = lean_unsigned_to_nat(0u);
v___x_3184_ = lean_array_fget_borrowed(v_parts_3081_, v___x_3183_);
lean_inc(v_a_3088_);
lean_inc_ref(v_a_3087_);
lean_inc(v_a_3086_);
lean_inc_ref(v_a_3085_);
lean_inc(v_a_3084_);
lean_inc_ref(v_a_3083_);
lean_inc(v___x_3184_);
v___x_3185_ = lean_apply_8(v_refuted_3082_, v___x_3184_, v_a_3083_, v_a_3084_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_, lean_box(0));
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3195_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3188_ = v___x_3185_;
v_isShared_3189_ = v_isSharedCheck_3195_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3185_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3195_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v_premise_3190_; lean_object* v___x_3191_; lean_object* v___x_3193_; 
v_premise_3190_ = lean_ctor_get(v_r_3080_, 2);
lean_inc_ref(v_premise_3190_);
lean_dec_ref(v_r_3080_);
v___x_3191_ = l_Lean_Expr_app___override(v_a_3186_, v_premise_3190_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3191_);
v___x_3193_ = v___x_3188_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v___x_3191_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
else
{
lean_dec_ref(v_r_3080_);
return v___x_3185_;
}
}
v___jp_3090_:
{
lean_object* v___x_3099_; 
lean_inc_ref(v_refuted_3082_);
lean_inc(v___y_3098_);
lean_inc_ref(v___y_3097_);
lean_inc(v___y_3096_);
lean_inc_ref(v___y_3095_);
lean_inc(v___y_3094_);
lean_inc_ref(v___y_3093_);
v___x_3099_ = lean_apply_8(v_refuted_3082_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, lean_box(0));
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3101_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
lean_inc(v___y_3098_);
lean_inc_ref(v___y_3097_);
lean_inc(v___y_3096_);
lean_inc_ref(v___y_3095_);
lean_inc(v___y_3094_);
lean_inc_ref(v___y_3093_);
v___x_3101_ = lean_apply_8(v_refuted_3082_, v___y_3091_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, lean_box(0));
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3110_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3104_ = v___x_3101_;
v_isShared_3105_ = v_isSharedCheck_3110_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3101_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3110_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3108_; 
v___x_3106_ = l_Lean_Expr_app___override(v_a_3100_, v_a_3102_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 0, v___x_3106_);
v___x_3108_ = v___x_3104_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v___x_3106_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
else
{
lean_dec(v_a_3100_);
return v___x_3101_;
}
}
else
{
lean_dec_ref(v___y_3091_);
lean_dec_ref(v_refuted_3082_);
return v___x_3099_;
}
}
v___jp_3112_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3117_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__1);
v___x_3118_ = l_Nat_reprFast(v___x_3111_);
v___x_3119_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
v___x_3120_ = l_Lean_MessageData_ofFormat(v___x_3119_);
v___x_3121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3117_);
lean_ctor_set(v___x_3121_, 1, v___x_3120_);
v___x_3122_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__3);
v___x_3123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3121_);
lean_ctor_set(v___x_3123_, 1, v___x_3122_);
v___x_3124_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3123_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3124_;
}
v___jp_3125_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; uint8_t v___x_3130_; 
v___x_3128_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__1));
v___x_3129_ = lean_unsigned_to_nat(1u);
v___x_3130_ = l_Lean_Expr_isAppOfArity(v_snd_3127_, v___x_3128_, v___x_3129_);
if (v___x_3130_ == 0)
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_dec_ref(v_snd_3127_);
lean_dec_ref(v_fst_3126_);
lean_dec_ref(v_refuted_3082_);
v___x_3131_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__5);
v___x_3132_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3131_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_);
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3132_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3132_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
else
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = l_Lean_Expr_appArg_x21(v_snd_3127_);
lean_inc_ref(v_fst_3126_);
v___x_3142_ = l_Lean_Meta_isExprDefEq(v___x_3141_, v_fst_3126_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_object* v_a_3143_; uint8_t v___x_3144_; 
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_a_3143_);
lean_dec_ref_known(v___x_3142_, 1);
v___x_3144_ = lean_unbox(v_a_3143_);
lean_dec(v_a_3143_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_dec_ref(v_refuted_3082_);
v___x_3145_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__7);
v___x_3146_ = l_Lean_indentExpr(v_fst_3126_);
v___x_3147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3145_);
lean_ctor_set(v___x_3147_, 1, v___x_3146_);
v___x_3148_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__9);
v___x_3149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = l_Lean_indentExpr(v_snd_3127_);
v___x_3151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3149_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___closed__11);
v___x_3153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3151_);
lean_ctor_set(v___x_3153_, 1, v___x_3152_);
v___x_3154_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3153_, v_a_3085_, v_a_3086_, v_a_3087_, v_a_3088_);
v_a_3155_ = lean_ctor_get(v___x_3154_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3154_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3154_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3154_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
else
{
v___y_3091_ = v_fst_3126_;
v___y_3092_ = v_snd_3127_;
v___y_3093_ = v_a_3083_;
v___y_3094_ = v_a_3084_;
v___y_3095_ = v_a_3085_;
v___y_3096_ = v_a_3086_;
v___y_3097_ = v_a_3087_;
v___y_3098_ = v_a_3088_;
goto v___jp_3090_;
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
lean_dec_ref(v_snd_3127_);
lean_dec_ref(v_fst_3126_);
lean_dec_ref(v_refuted_3082_);
v_a_3163_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3142_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3142_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root___boxed(lean_object* v_r_3196_, lean_object* v_parts_3197_, lean_object* v_refuted_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_){
_start:
{
lean_object* v_res_3206_; 
v_res_3206_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root(v_r_3196_, v_parts_3197_, v_refuted_3198_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec_ref(v_a_3201_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec_ref(v_parts_3197_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0(lean_object* v_parts_3207_, lean_object* v_val_3208_, lean_object* v_n_3209_, lean_object* v_p_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_){
_start:
{
lean_object* v___x_3218_; lean_object* v_a_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; uint8_t v___x_3224_; uint8_t v___x_3225_; uint8_t v___x_3226_; lean_object* v___x_3227_; 
lean_inc_ref(v_p_3210_);
v___x_3218_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_parts_3207_, v_val_3208_, v_p_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref(v___x_3218_);
v___x_3220_ = lean_unsigned_to_nat(1u);
v___x_3221_ = lean_mk_empty_array_with_capacity(v___x_3220_);
v___x_3222_ = lean_array_push(v___x_3221_, v_p_3210_);
v___x_3223_ = l_Lean_Expr_app___override(v_n_3209_, v_a_3219_);
v___x_3224_ = 0;
v___x_3225_ = 1;
v___x_3226_ = 1;
v___x_3227_ = l_Lean_Meta_mkLambdaFVars(v___x_3222_, v___x_3223_, v___x_3224_, v___x_3225_, v___x_3224_, v___x_3225_, v___x_3226_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
lean_dec_ref(v___x_3222_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0___boxed(lean_object* v_parts_3228_, lean_object* v_val_3229_, lean_object* v_n_3230_, lean_object* v_p_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v_res_3239_; 
v_res_3239_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0(v_parts_3228_, v_val_3229_, v_n_3230_, v_p_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec(v___y_3233_);
lean_dec_ref(v___y_3232_);
lean_dec_ref(v_parts_3228_);
return v_res_3239_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0(lean_object* v_parts_3240_, lean_object* v_snd_3241_, lean_object* v_n_3242_, uint8_t v___x_3243_, lean_object* v_p_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v___x_3252_; 
lean_inc_ref(v_p_3244_);
v___x_3252_ = lp_vampireReplay_Vampire_Reconstruct_injectGiven(v_parts_3240_, v_snd_3241_, v_p_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; uint8_t v___x_3258_; uint8_t v___x_3259_; lean_object* v___x_3260_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3253_);
lean_dec_ref_known(v___x_3252_, 1);
v___x_3254_ = lean_unsigned_to_nat(1u);
v___x_3255_ = lean_mk_empty_array_with_capacity(v___x_3254_);
v___x_3256_ = lean_array_push(v___x_3255_, v_p_3244_);
v___x_3257_ = l_Lean_Expr_app___override(v_n_3242_, v_a_3253_);
v___x_3258_ = 0;
v___x_3259_ = 1;
v___x_3260_ = l_Lean_Meta_mkLambdaFVars(v___x_3256_, v___x_3257_, v___x_3258_, v___x_3243_, v___x_3258_, v___x_3243_, v___x_3259_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_);
lean_dec_ref(v___x_3256_);
return v___x_3260_;
}
else
{
lean_dec_ref(v_p_3244_);
lean_dec_ref(v_n_3242_);
return v___x_3252_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0___boxed(lean_object* v_parts_3261_, lean_object* v_snd_3262_, lean_object* v_n_3263_, lean_object* v___x_3264_, lean_object* v_p_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
uint8_t v___x_7259__boxed_3273_; lean_object* v_res_3274_; 
v___x_7259__boxed_3273_ = lean_unbox(v___x_3264_);
v_res_3274_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0(v_parts_3261_, v_snd_3262_, v_n_3263_, v___x_7259__boxed_3273_, v_p_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec_ref(v_parts_3261_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0(lean_object* v_parts_3284_, lean_object* v_n_3285_, lean_object* v_e_3286_, lean_object* v_as_3287_, size_t v_sz_3288_, size_t v_i_3289_, lean_object* v_b_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
uint8_t v___x_3298_; 
v___x_3298_ = lean_usize_dec_lt(v_i_3289_, v_sz_3288_);
if (v___x_3298_ == 0)
{
lean_object* v___x_3299_; 
lean_dec_ref(v_e_3286_);
lean_dec_ref(v_n_3285_);
lean_dec_ref(v_parts_3284_);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v_b_3290_);
return v___x_3299_;
}
else
{
lean_object* v_a_3300_; lean_object* v_fst_3301_; lean_object* v_snd_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3381_; 
lean_dec_ref(v_b_3290_);
v_a_3300_ = lean_array_uget(v_as_3287_, v_i_3289_);
v_fst_3301_ = lean_ctor_get(v_a_3300_, 0);
v_snd_3302_ = lean_ctor_get(v_a_3300_, 1);
v_isSharedCheck_3381_ = !lean_is_exclusive(v_a_3300_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3304_ = v_a_3300_;
v_isShared_3305_ = v_isSharedCheck_3381_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_snd_3302_);
lean_inc(v_fst_3301_);
lean_dec(v_a_3300_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3381_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; 
lean_inc_ref(v_e_3286_);
lean_inc(v_fst_3301_);
v___x_3306_ = lp_vampireReplay_Vampire_Reconstruct_sameUpToDoubleNegation___redArg(v_fst_3301_, v_e_3286_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; lean_object* v___x_3308_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref_known(v___x_3306_, 1);
v___x_3308_ = lean_box(0);
if (lean_obj_tag(v_a_3307_) == 1)
{
lean_object* v_val_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3368_; 
lean_dec_ref(v_e_3286_);
v_val_3309_ = lean_ctor_get(v_a_3307_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v_a_3307_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3311_ = v_a_3307_;
v_isShared_3312_ = v_isSharedCheck_3368_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_val_3309_);
lean_dec(v_a_3307_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3368_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v___f_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3313_ = lean_box(v___x_3298_);
v___f_3314_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___lam__0___boxed), 12, 4);
lean_closure_set(v___f_3314_, 0, v_parts_3284_);
lean_closure_set(v___f_3314_, 1, v_snd_3302_);
lean_closure_set(v___f_3314_, 2, v_n_3285_);
lean_closure_set(v___f_3314_, 3, v___x_3313_);
v___x_3315_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__1));
v___x_3316_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3315_, v_fst_3301_, v___f_3314_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
v___x_3318_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__3));
v___x_3319_ = lean_unsigned_to_nat(1u);
v___x_3320_ = lean_mk_empty_array_with_capacity(v___x_3319_);
v___x_3321_ = lean_array_push(v___x_3320_, v_val_3309_);
v___x_3322_ = l_Lean_Meta_mkAppM(v___x_3318_, v___x_3321_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3322_) == 0)
{
lean_object* v_a_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3322_, 1);
v___x_3324_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_peelBlock_go___closed__4));
v___x_3325_ = lean_unsigned_to_nat(2u);
v___x_3326_ = lean_mk_empty_array_with_capacity(v___x_3325_);
v___x_3327_ = lean_array_push(v___x_3326_, v_a_3323_);
v___x_3328_ = lean_array_push(v___x_3327_, v_a_3317_);
v___x_3329_ = l_Lean_Meta_mkAppM(v___x_3324_, v___x_3328_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3343_; 
v_a_3330_ = lean_ctor_get(v___x_3329_, 0);
v_isSharedCheck_3343_ = !lean_is_exclusive(v___x_3329_);
if (v_isSharedCheck_3343_ == 0)
{
v___x_3332_ = v___x_3329_;
v_isShared_3333_ = v_isSharedCheck_3343_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3329_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3343_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v_a_3330_);
v___x_3335_ = v___x_3311_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3342_; 
v_reuseFailAlloc_3342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3342_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3342_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
lean_object* v___x_3337_; 
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 1, v___x_3308_);
lean_ctor_set(v___x_3304_, 0, v___x_3335_);
v___x_3337_ = v___x_3304_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v___x_3335_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v___x_3308_);
v___x_3337_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3339_; 
if (v_isShared_3333_ == 0)
{
lean_ctor_set(v___x_3332_, 0, v___x_3337_);
v___x_3339_ = v___x_3332_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v___x_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
}
else
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
lean_del_object(v___x_3311_);
lean_del_object(v___x_3304_);
v_a_3344_ = lean_ctor_get(v___x_3329_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3329_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3346_ = v___x_3329_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v___x_3329_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3344_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec(v_a_3317_);
lean_del_object(v___x_3311_);
lean_del_object(v___x_3304_);
v_a_3352_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3322_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3322_);
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
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_del_object(v___x_3311_);
lean_dec(v_val_3309_);
lean_del_object(v___x_3304_);
v_a_3360_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3316_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3316_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
else
{
lean_object* v___x_3369_; size_t v___x_3370_; size_t v___x_3371_; 
lean_dec(v_a_3307_);
lean_del_object(v___x_3304_);
lean_dec(v_snd_3302_);
lean_dec(v_fst_3301_);
v___x_3369_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__4));
v___x_3370_ = ((size_t)1ULL);
v___x_3371_ = lean_usize_add(v_i_3289_, v___x_3370_);
v_i_3289_ = v___x_3371_;
v_b_3290_ = v___x_3369_;
goto _start;
}
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
lean_del_object(v___x_3304_);
lean_dec(v_snd_3302_);
lean_dec(v_fst_3301_);
lean_dec_ref(v_e_3286_);
lean_dec_ref(v_n_3285_);
lean_dec_ref(v_parts_3284_);
v_a_3373_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3306_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3306_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___boxed(lean_object* v_parts_3382_, lean_object* v_n_3383_, lean_object* v_e_3384_, lean_object* v_as_3385_, lean_object* v_sz_3386_, lean_object* v_i_3387_, lean_object* v_b_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
size_t v_sz_boxed_3396_; size_t v_i_boxed_3397_; lean_object* v_res_3398_; 
v_sz_boxed_3396_ = lean_unbox_usize(v_sz_3386_);
lean_dec(v_sz_3386_);
v_i_boxed_3397_ = lean_unbox_usize(v_i_3387_);
lean_dec(v_i_3387_);
v_res_3398_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0(v_parts_3382_, v_n_3383_, v_e_3384_, v_as_3385_, v_sz_boxed_3396_, v_i_boxed_3397_, v_b_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec_ref(v_as_3385_);
return v_res_3398_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__0));
v___x_3401_ = l_Lean_stringToMessageData(v___x_3400_);
return v___x_3401_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3403_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__2));
v___x_3404_ = l_Lean_stringToMessageData(v___x_3403_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1(lean_object* v_parts_3405_, lean_object* v_n_3406_, lean_object* v_e_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = lean_unsigned_to_nat(0u);
v___x_3416_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Meta_Tactic_FunInd_0__Lean_Tactic_FunInd_unpackMutualInduction_doRealize_spec__0(v_e_3407_, v_parts_3405_, v___x_3415_);
if (lean_obj_tag(v___x_3416_) == 1)
{
lean_object* v_val_3417_; lean_object* v___f_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v_val_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_val_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v___f_3418_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__0___boxed), 11, 3);
lean_closure_set(v___f_3418_, 0, v_parts_3405_);
lean_closure_set(v___f_3418_, 1, v_val_3417_);
lean_closure_set(v___f_3418_, 2, v_n_3406_);
v___x_3419_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__1));
v___x_3420_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3419_, v_e_3407_, v___f_3418_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
return v___x_3420_;
}
else
{
lean_object* v___x_3421_; lean_object* v___x_3422_; size_t v_sz_3423_; size_t v___x_3424_; lean_object* v___x_3425_; 
lean_dec(v___x_3416_);
lean_inc_ref(v_parts_3405_);
v___x_3421_ = l_Array_zipIdx___redArg(v_parts_3405_, v___x_3415_);
v___x_3422_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0___closed__4));
v_sz_3423_ = lean_array_size(v___x_3421_);
v___x_3424_ = ((size_t)0ULL);
lean_inc_ref(v_e_3407_);
v___x_3425_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove_spec__0(v_parts_3405_, v_n_3406_, v_e_3407_, v___x_3421_, v_sz_3423_, v___x_3424_, v___x_3422_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
lean_dec_ref(v___x_3421_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3448_; 
v_a_3426_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3428_ = v___x_3425_;
v_isShared_3429_ = v_isSharedCheck_3448_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3425_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3448_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_fst_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3446_; 
v_fst_3430_ = lean_ctor_get(v_a_3426_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v_a_3426_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; 
v_unused_3447_ = lean_ctor_get(v_a_3426_, 1);
lean_dec(v_unused_3447_);
v___x_3432_ = v_a_3426_;
v_isShared_3433_ = v_isSharedCheck_3446_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_fst_3430_);
lean_dec(v_a_3426_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3446_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
if (lean_obj_tag(v_fst_3430_) == 0)
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
lean_del_object(v___x_3428_);
v___x_3434_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__1);
v___x_3435_ = l_Lean_indentExpr(v_e_3407_);
if (v_isShared_3433_ == 0)
{
lean_ctor_set_tag(v___x_3432_, 7);
lean_ctor_set(v___x_3432_, 1, v___x_3435_);
lean_ctor_set(v___x_3432_, 0, v___x_3434_);
v___x_3437_ = v___x_3432_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v___x_3434_);
lean_ctor_set(v_reuseFailAlloc_3441_, 1, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___closed__3);
v___x_3439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3439_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
return v___x_3440_;
}
}
else
{
lean_object* v_val_3442_; lean_object* v___x_3444_; 
lean_del_object(v___x_3432_);
lean_dec_ref(v_e_3407_);
v_val_3442_ = lean_ctor_get(v_fst_3430_, 0);
lean_inc(v_val_3442_);
lean_dec_ref_known(v_fst_3430_, 1);
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 0, v_val_3442_);
v___x_3444_ = v___x_3428_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_val_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref(v_e_3407_);
v_a_3449_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3425_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3425_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___boxed(lean_object* v_parts_3457_, lean_object* v_n_3458_, lean_object* v_e_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1(v_parts_3457_, v_n_3458_, v_e_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
lean_dec(v___y_3465_);
lean_dec_ref(v___y_3464_);
lean_dec(v___y_3463_);
lean_dec_ref(v___y_3462_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2(uint32_t v_val_3468_, lean_object* v_refuted_3469_, lean_object* v_r_3470_, lean_object* v_c_3471_, lean_object* v_val_3472_, lean_object* v_parts_3473_, lean_object* v_parentParts_3474_, lean_object* v_i_3475_, lean_object* v_h_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v___x_3484_; uint8_t v___x_3485_; 
v___x_3484_ = lean_uint32_to_nat(v_val_3468_);
v___x_3485_ = lean_nat_dec_eq(v_i_3475_, v___x_3484_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; 
lean_dec(v___x_3484_);
lean_dec_ref(v_val_3472_);
lean_dec_ref(v_c_3471_);
lean_dec_ref(v_r_3470_);
lean_inc(v___y_3482_);
lean_inc_ref(v___y_3481_);
lean_inc(v___y_3480_);
lean_inc_ref(v___y_3479_);
lean_inc_ref(v_h_3476_);
v___x_3486_ = lean_infer_type(v_h_3476_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3486_) == 0)
{
lean_object* v_a_3487_; lean_object* v___x_3488_; lean_object* v_a_3489_; lean_object* v___x_3490_; 
v_a_3487_ = lean_ctor_get(v___x_3486_, 0);
lean_inc(v_a_3487_);
lean_dec_ref_known(v___x_3486_, 1);
v___x_3488_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_a_3487_, v___y_3480_);
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
lean_dec_ref(v___x_3488_);
lean_inc(v___y_3482_);
lean_inc_ref(v___y_3481_);
lean_inc(v___y_3480_);
lean_inc_ref(v___y_3479_);
lean_inc(v___y_3478_);
lean_inc_ref(v___y_3477_);
v___x_3490_ = lean_apply_8(v_refuted_3469_, v_a_3489_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, lean_box(0));
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3499_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3490_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3493_ = v___x_3490_;
v_isShared_3494_ = v_isSharedCheck_3499_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3490_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3499_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3495_; lean_object* v___x_3497_; 
v___x_3495_ = l_Lean_Expr_app___override(v_a_3491_, v_h_3476_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 0, v___x_3495_);
v___x_3497_ = v___x_3493_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
else
{
lean_dec_ref(v_h_3476_);
return v___x_3490_;
}
}
else
{
lean_dec_ref(v_h_3476_);
lean_dec_ref(v_refuted_3469_);
return v___x_3486_;
}
}
else
{
lean_object* v___x_3500_; 
v___x_3500_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced(v_r_3470_, v_c_3471_, v_val_3472_, v___x_3484_, v_parts_3473_, v_parentParts_3474_, v_h_3476_, v_refuted_3469_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
lean_dec(v___x_3484_);
return v___x_3500_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2___boxed(lean_object* v_val_3501_, lean_object* v_refuted_3502_, lean_object* v_r_3503_, lean_object* v_c_3504_, lean_object* v_val_3505_, lean_object* v_parts_3506_, lean_object* v_parentParts_3507_, lean_object* v_i_3508_, lean_object* v_h_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
uint32_t v_val_7648__boxed_3517_; lean_object* v_res_3518_; 
v_val_7648__boxed_3517_ = lean_unbox_uint32(v_val_3501_);
lean_dec(v_val_3501_);
v_res_3518_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2(v_val_7648__boxed_3517_, v_refuted_3502_, v_r_3503_, v_c_3504_, v_val_3505_, v_parts_3506_, v_parentParts_3507_, v_i_3508_, v_h_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v_i_3508_);
lean_dec_ref(v_parentParts_3507_);
lean_dec_ref(v_parts_3506_);
return v_res_3518_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1(void){
_start:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__0));
v___x_3521_ = l_Lean_stringToMessageData(v___x_3520_);
return v___x_3521_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3(void){
_start:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3523_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__2));
v___x_3524_ = l_Lean_stringToMessageData(v___x_3523_);
return v___x_3524_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3(lean_object* v_parts_3525_, lean_object* v_c_3526_, lean_object* v_r_3527_, lean_object* v_parent_x3f_3528_, lean_object* v_parentParts_3529_, lean_object* v_n_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v_body_3539_; lean_object* v_refuted_3547_; lean_object* v___x_3548_; 
lean_inc_ref(v_n_3530_);
lean_inc_ref(v_parts_3525_);
v_refuted_3547_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__1___boxed), 10, 2);
lean_closure_set(v_refuted_3547_, 0, v_parts_3525_);
lean_closure_set(v_refuted_3547_, 1, v_n_3530_);
lean_inc_ref(v_c_3526_);
v___x_3548_ = lp_vampireReplay_Vampire_GenClause_parent_x3f(v_c_3526_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v___x_3549_; 
lean_dec_ref(v_parentParts_3529_);
lean_dec(v_parent_x3f_3528_);
lean_dec_ref(v_c_3526_);
v___x_3549_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_root(v_r_3527_, v_parts_3525_, v_refuted_3547_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
lean_dec_ref(v_parts_3525_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3549_, 1);
v_body_3539_ = v_a_3550_;
goto v___jp_3538_;
}
else
{
lean_dec_ref(v_n_3530_);
return v___x_3549_;
}
}
else
{
lean_object* v_val_3551_; lean_object* v___x_3552_; 
v_val_3551_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_val_3551_);
lean_dec_ref_known(v___x_3548_, 1);
v___x_3552_ = lp_vampireReplay_Vampire_GenClause_position_x3f(v_c_3526_);
if (lean_obj_tag(v___x_3552_) == 1)
{
if (lean_obj_tag(v_parent_x3f_3528_) == 1)
{
lean_object* v_val_3553_; lean_object* v_val_3554_; lean_object* v___f_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v_val_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_val_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v_val_3554_ = lean_ctor_get(v_parent_x3f_3528_, 0);
lean_inc(v_val_3554_);
lean_dec_ref_known(v_parent_x3f_3528_, 1);
lean_inc_ref(v_parentParts_3529_);
v___f_3555_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__2___boxed), 16, 7);
lean_closure_set(v___f_3555_, 0, v_val_3553_);
lean_closure_set(v___f_3555_, 1, v_refuted_3547_);
lean_closure_set(v___f_3555_, 2, v_r_3527_);
lean_closure_set(v___f_3555_, 3, v_c_3526_);
lean_closure_set(v___f_3555_, 4, v_val_3551_);
lean_closure_set(v___f_3555_, 5, v_parts_3525_);
lean_closure_set(v___f_3555_, 6, v_parentParts_3529_);
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = lean_box(0);
v___x_3558_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_parentParts_3529_, v___f_3555_, v_val_3554_, v___x_3556_, v___x_3557_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
lean_dec_ref(v_parentParts_3529_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref_known(v___x_3558_, 1);
v_body_3539_ = v_a_3559_;
goto v___jp_3538_;
}
else
{
lean_dec_ref(v_n_3530_);
return v___x_3558_;
}
}
else
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec_ref_known(v___x_3552_, 1);
lean_dec(v_val_3551_);
lean_dec_ref(v_refuted_3547_);
lean_dec_ref(v_n_3530_);
lean_dec_ref(v_parentParts_3529_);
lean_dec(v_parent_x3f_3528_);
lean_dec_ref(v_r_3527_);
lean_dec_ref(v_c_3526_);
lean_dec_ref(v_parts_3525_);
v___x_3560_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__1);
v___x_3561_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3560_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
return v___x_3561_;
}
}
else
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
lean_dec(v___x_3552_);
lean_dec(v_val_3551_);
lean_dec_ref(v_refuted_3547_);
lean_dec_ref(v_n_3530_);
lean_dec_ref(v_parentParts_3529_);
lean_dec(v_parent_x3f_3528_);
lean_dec_ref(v_r_3527_);
lean_dec_ref(v_c_3526_);
lean_dec_ref(v_parts_3525_);
v___x_3562_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___closed__3);
v___x_3563_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3562_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
return v___x_3563_;
}
}
v___jp_3538_:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; uint8_t v___x_3544_; uint8_t v___x_3545_; lean_object* v___x_3546_; 
v___x_3540_ = lean_unsigned_to_nat(1u);
v___x_3541_ = lean_mk_empty_array_with_capacity(v___x_3540_);
v___x_3542_ = lean_array_push(v___x_3541_, v_n_3530_);
v___x_3543_ = 0;
v___x_3544_ = 1;
v___x_3545_ = 1;
v___x_3546_ = l_Lean_Meta_mkLambdaFVars(v___x_3542_, v_body_3539_, v___x_3543_, v___x_3544_, v___x_3543_, v___x_3544_, v___x_3545_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
lean_dec_ref(v___x_3542_);
return v___x_3546_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___boxed(lean_object* v_parts_3564_, lean_object* v_c_3565_, lean_object* v_r_3566_, lean_object* v_parent_x3f_3567_, lean_object* v_parentParts_3568_, lean_object* v_n_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3(v_parts_3564_, v_c_3565_, v_r_3566_, v_parent_x3f_3567_, v_parentParts_3568_, v_n_3569_, v___y_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec(v___y_3573_);
lean_dec_ref(v___y_3572_);
lean_dec(v___y_3571_);
lean_dec_ref(v___y_3570_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove(lean_object* v_r_3581_, lean_object* v_c_3582_, lean_object* v_parent_x3f_3583_, lean_object* v_parts_3584_, lean_object* v_parentParts_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_){
_start:
{
lean_object* v___f_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v_target_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
lean_inc_ref(v_parts_3584_);
v___f_3593_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___lam__3___boxed), 13, 5);
lean_closure_set(v___f_3593_, 0, v_parts_3584_);
lean_closure_set(v___f_3593_, 1, v_c_3582_);
lean_closure_set(v___f_3593_, 2, v_r_3581_);
lean_closure_set(v___f_3593_, 3, v_parent_x3f_3583_);
lean_closure_set(v___f_3593_, 4, v_parentParts_3585_);
v___x_3594_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3));
v___x_3595_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30));
v_target_3596_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_3594_, v___x_3595_, v_parts_3584_);
v___x_3597_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___closed__1));
v___x_3598_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genLit___closed__2);
lean_inc_ref(v_target_3596_);
v___x_3599_ = l_Lean_Expr_app___override(v___x_3598_, v_target_3596_);
v___x_3600_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_3597_, v___x_3599_, v___f_3593_, v_a_3586_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3609_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3609_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3609_ == 0)
{
v___x_3603_ = v___x_3600_;
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3600_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3609_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3605_ = lp_vampireReplay_Vampire_Reconstruct_ofNotNot(v_target_3596_, v_a_3601_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v___x_3605_);
v___x_3607_ = v___x_3603_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
return v___x_3607_;
}
}
}
else
{
lean_dec_ref(v_target_3596_);
return v___x_3600_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove___boxed(lean_object* v_r_3610_, lean_object* v_c_3611_, lean_object* v_parent_x3f_3612_, lean_object* v_parts_3613_, lean_object* v_parentParts_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove(v_r_3610_, v_c_3611_, v_parent_x3f_3612_, v_parts_3613_, v_parentParts_3614_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_);
lean_dec(v_a_3620_);
lean_dec_ref(v_a_3619_);
lean_dec(v_a_3618_);
lean_dec_ref(v_a_3617_);
lean_dec(v_a_3616_);
lean_dec_ref(v_a_3615_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0(lean_object* v_as_3623_, size_t v_sz_3624_, size_t v_i_3625_, lean_object* v_b_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_a_3635_; uint8_t v___x_3639_; 
v___x_3639_ = lean_usize_dec_lt(v_i_3625_, v_sz_3624_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; 
v___x_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3640_, 0, v_b_3626_);
return v___x_3640_;
}
else
{
lean_object* v_a_3641_; lean_object* v_fst_3642_; lean_object* v_snd_3643_; lean_object* v_fst_3644_; lean_object* v_snd_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3672_; 
v_a_3641_ = lean_array_uget_borrowed(v_as_3623_, v_i_3625_);
v_fst_3642_ = lean_ctor_get(v_a_3641_, 0);
v_snd_3643_ = lean_ctor_get(v_a_3641_, 1);
v_fst_3644_ = lean_ctor_get(v_b_3626_, 0);
v_snd_3645_ = lean_ctor_get(v_b_3626_, 1);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_b_3626_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3647_ = v_b_3626_;
v_isShared_3648_ = v_isSharedCheck_3672_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_snd_3645_);
lean_inc(v_fst_3644_);
lean_dec(v_b_3626_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3672_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3649_; 
lean_inc(v_snd_3643_);
v___x_3649_ = lp_vampireReplay_Vampire_Reconstruct_term(v_fst_3644_, v_snd_3643_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v_a_3650_; uint32_t v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3654_; 
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
lean_inc(v_a_3650_);
lean_dec_ref_known(v___x_3649_, 1);
v___x_3651_ = lean_unbox_uint32(v_fst_3642_);
v___x_3652_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_fst_3644_, v___x_3651_, v_a_3650_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 0, v___x_3652_);
v___x_3654_ = v___x_3647_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3652_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_snd_3645_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
v_a_3635_ = v___x_3654_;
goto v___jp_3634_;
}
}
else
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3671_; 
v_a_3656_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3658_ = v___x_3649_;
v_isShared_3659_ = v_isSharedCheck_3671_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3649_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3671_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
uint8_t v___y_3661_; uint8_t v___x_3669_; 
v___x_3669_ = l_Lean_Exception_isInterrupt(v_a_3656_);
if (v___x_3669_ == 0)
{
uint8_t v___x_3670_; 
lean_inc(v_a_3656_);
v___x_3670_ = l_Lean_Exception_isRuntime(v_a_3656_);
v___y_3661_ = v___x_3670_;
goto v___jp_3660_;
}
else
{
v___y_3661_ = v___x_3669_;
goto v___jp_3660_;
}
v___jp_3660_:
{
if (v___y_3661_ == 0)
{
lean_object* v___x_3662_; lean_object* v___x_3664_; 
lean_del_object(v___x_3658_);
lean_dec(v_a_3656_);
lean_inc(v_a_3641_);
v___x_3662_ = lean_array_push(v_snd_3645_, v_a_3641_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 1, v___x_3662_);
v___x_3664_ = v___x_3647_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_fst_3644_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v___x_3662_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
v_a_3635_ = v___x_3664_;
goto v___jp_3634_;
}
}
else
{
lean_object* v___x_3667_; 
lean_del_object(v___x_3647_);
lean_dec(v_snd_3645_);
lean_dec(v_fst_3644_);
if (v_isShared_3659_ == 0)
{
v___x_3667_ = v___x_3658_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3656_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
}
}
}
v___jp_3634_:
{
size_t v___x_3636_; size_t v___x_3637_; 
v___x_3636_ = ((size_t)1ULL);
v___x_3637_ = lean_usize_add(v_i_3625_, v___x_3636_);
v_i_3625_ = v___x_3637_;
v_b_3626_ = v_a_3635_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0___boxed(lean_object* v_as_3673_, lean_object* v_sz_3674_, lean_object* v_i_3675_, lean_object* v_b_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
size_t v_sz_boxed_3684_; size_t v_i_boxed_3685_; lean_object* v_res_3686_; 
v_sz_boxed_3684_ = lean_unbox_usize(v_sz_3674_);
lean_dec(v_sz_3674_);
v_i_boxed_3685_ = lean_unbox_usize(v_i_3675_);
lean_dec(v_i_3675_);
v_res_3686_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0(v_as_3673_, v_sz_boxed_3684_, v_i_boxed_3685_, v_b_3676_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_);
lean_dec(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec(v___y_3678_);
lean_dec_ref(v___y_3677_);
lean_dec_ref(v_as_3673_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg(lean_object* v_a_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_){
_start:
{
lean_object* v_fst_3697_; lean_object* v_snd_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3734_; 
v_fst_3697_ = lean_ctor_get(v_a_3689_, 0);
v_snd_3698_ = lean_ctor_get(v_a_3689_, 1);
v_isSharedCheck_3734_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3700_ = v_a_3689_;
v_isShared_3701_ = v_isSharedCheck_3734_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_snd_3698_);
lean_inc(v_fst_3697_);
lean_dec(v_a_3689_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3734_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3702_ = lean_array_get_size(v_snd_3698_);
v___x_3703_ = lean_unsigned_to_nat(0u);
v___x_3704_ = ((lean_object*)(lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___closed__0));
if (v_isShared_3701_ == 0)
{
lean_ctor_set(v___x_3700_, 1, v___x_3704_);
v___x_3706_ = v___x_3700_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_fst_3697_);
lean_ctor_set(v_reuseFailAlloc_3733_, 1, v___x_3704_);
v___x_3706_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
size_t v_sz_3707_; size_t v___x_3708_; lean_object* v___x_3709_; 
v_sz_3707_ = lean_array_size(v_snd_3698_);
v___x_3708_ = ((size_t)0ULL);
v___x_3709_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__0(v_snd_3698_, v_sz_3707_, v___x_3708_, v___x_3706_, v___y_3690_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_);
lean_dec(v_snd_3698_);
if (lean_obj_tag(v___x_3709_) == 0)
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3732_; 
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3709_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3712_ = v___x_3709_;
v_isShared_3713_ = v_isSharedCheck_3732_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3709_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3732_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v_fst_3714_; lean_object* v_snd_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3731_; 
v_fst_3714_ = lean_ctor_get(v_a_3710_, 0);
v_snd_3715_ = lean_ctor_get(v_a_3710_, 1);
v_isSharedCheck_3731_ = !lean_is_exclusive(v_a_3710_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3717_ = v_a_3710_;
v_isShared_3718_ = v_isSharedCheck_3731_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_snd_3715_);
lean_inc(v_fst_3714_);
lean_dec(v_a_3710_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3731_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3726_; uint8_t v___x_3727_; 
v___x_3726_ = lean_array_get_size(v_snd_3715_);
v___x_3727_ = lean_nat_dec_eq(v___x_3726_, v___x_3703_);
if (v___x_3727_ == 0)
{
uint8_t v___x_3728_; 
v___x_3728_ = lean_nat_dec_eq(v___x_3726_, v___x_3702_);
if (v___x_3728_ == 0)
{
lean_object* v___x_3729_; 
lean_del_object(v___x_3717_);
lean_del_object(v___x_3712_);
v___x_3729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3729_, 0, v_fst_3714_);
lean_ctor_set(v___x_3729_, 1, v_snd_3715_);
v_a_3689_ = v___x_3729_;
goto _start;
}
else
{
goto v___jp_3719_;
}
}
else
{
goto v___jp_3719_;
}
v___jp_3719_:
{
lean_object* v___x_3721_; 
if (v_isShared_3718_ == 0)
{
v___x_3721_ = v___x_3717_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_fst_3714_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v_snd_3715_);
v___x_3721_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3723_; 
if (v_isShared_3713_ == 0)
{
lean_ctor_set(v___x_3712_, 0, v___x_3721_);
v___x_3723_ = v___x_3712_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
else
{
return v___x_3709_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg___boxed(lean_object* v_a_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg(v_a_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec(v___y_3737_);
lean_dec_ref(v___y_3736_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0(lean_object* v___x_3744_, lean_object* v_sorts_3745_, uint8_t v_snd_3746_, lean_object* v___y_3747_, lean_object* v_fst_3748_, lean_object* v_vars_3749_, lean_object* v_x_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3758_, 0, v_vars_3749_);
lean_ctor_set(v___x_3758_, 1, v___x_3744_);
v___x_3759_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg(v___x_3758_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v_fst_3761_; lean_object* v___x_3762_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3760_);
lean_dec_ref_known(v___x_3759_, 1);
v_fst_3761_ = lean_ctor_get(v_a_3760_, 0);
lean_inc(v_fst_3761_);
lean_dec(v_a_3760_);
v___x_3762_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock(v_sorts_3745_, v_snd_3746_, v___y_3747_, v_fst_3761_, v_fst_3748_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_);
return v___x_3762_;
}
else
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3770_; 
lean_dec_ref(v_fst_3748_);
lean_dec_ref(v_sorts_3745_);
v_a_3763_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3765_ = v___x_3759_;
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3759_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3770_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3768_; 
if (v_isShared_3766_ == 0)
{
v___x_3768_ = v___x_3765_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3763_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0___boxed(lean_object* v___x_3771_, lean_object* v_sorts_3772_, lean_object* v_snd_3773_, lean_object* v___y_3774_, lean_object* v_fst_3775_, lean_object* v_vars_3776_, lean_object* v_x_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
uint8_t v_snd_15652__boxed_3785_; lean_object* v_res_3786_; 
v_snd_15652__boxed_3785_ = lean_unbox(v_snd_3773_);
v_res_3786_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0(v___x_3771_, v_sorts_3772_, v_snd_15652__boxed_3785_, v___y_3774_, v_fst_3775_, v_vars_3776_, v_x_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec_ref(v_x_3777_);
lean_dec_ref(v___y_3774_);
return v_res_3786_;
}
}
LEAN_EXPORT uint8_t lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2(uint32_t v_fst_3787_, lean_object* v_as_3788_, size_t v_i_3789_, size_t v_stop_3790_){
_start:
{
uint8_t v___x_3791_; 
v___x_3791_ = lean_usize_dec_eq(v_i_3789_, v_stop_3790_);
if (v___x_3791_ == 0)
{
lean_object* v___x_3792_; lean_object* v_fst_3793_; uint32_t v___x_3794_; uint8_t v___x_3795_; 
v___x_3792_ = lean_array_uget_borrowed(v_as_3788_, v_i_3789_);
v_fst_3793_ = lean_ctor_get(v___x_3792_, 0);
v___x_3794_ = lean_unbox_uint32(v_fst_3793_);
v___x_3795_ = lean_uint32_dec_eq(v___x_3794_, v_fst_3787_);
if (v___x_3795_ == 0)
{
size_t v___x_3796_; size_t v___x_3797_; 
v___x_3796_ = ((size_t)1ULL);
v___x_3797_ = lean_usize_add(v_i_3789_, v___x_3796_);
v_i_3789_ = v___x_3797_;
goto _start;
}
else
{
return v___x_3795_;
}
}
else
{
uint8_t v___x_3799_; 
v___x_3799_ = 0;
return v___x_3799_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2___boxed(lean_object* v_fst_3800_, lean_object* v_as_3801_, lean_object* v_i_3802_, lean_object* v_stop_3803_){
_start:
{
uint32_t v_fst_15711__boxed_3804_; size_t v_i_boxed_3805_; size_t v_stop_boxed_3806_; uint8_t v_res_3807_; lean_object* v_r_3808_; 
v_fst_15711__boxed_3804_ = lean_unbox_uint32(v_fst_3800_);
lean_dec(v_fst_3800_);
v_i_boxed_3805_ = lean_unbox_usize(v_i_3802_);
lean_dec(v_i_3802_);
v_stop_boxed_3806_ = lean_unbox_usize(v_stop_3803_);
lean_dec(v_stop_3803_);
v_res_3807_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2(v_fst_15711__boxed_3804_, v_as_3801_, v_i_boxed_3805_, v_stop_boxed_3806_);
lean_dec_ref(v_as_3801_);
v_r_3808_ = lean_box(v_res_3807_);
return v_r_3808_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3(lean_object* v___x_3809_, lean_object* v___x_3810_, lean_object* v___x_3811_, lean_object* v_as_3812_, size_t v_i_3813_, size_t v_stop_3814_, lean_object* v_b_3815_){
_start:
{
lean_object* v___y_3817_; uint8_t v___x_3821_; 
v___x_3821_ = lean_usize_dec_eq(v_i_3813_, v_stop_3814_);
if (v___x_3821_ == 0)
{
lean_object* v___x_3822_; lean_object* v_fst_3823_; lean_object* v___x_3828_; lean_object* v___y_3830_; uint8_t v___x_3836_; 
v___x_3822_ = lean_array_uget_borrowed(v_as_3812_, v_i_3813_);
v_fst_3823_ = lean_ctor_get(v___x_3822_, 0);
v___x_3828_ = lean_unsigned_to_nat(0u);
v___x_3836_ = lean_nat_dec_lt(v___x_3828_, v___x_3811_);
if (v___x_3836_ == 0)
{
goto v___jp_3824_;
}
else
{
lean_object* v___x_3837_; uint8_t v___x_3838_; 
v___x_3837_ = lean_array_get_size(v___x_3810_);
v___x_3838_ = lean_nat_dec_le(v___x_3811_, v___x_3837_);
if (v___x_3838_ == 0)
{
v___y_3830_ = v___x_3837_;
goto v___jp_3829_;
}
else
{
lean_inc(v___x_3811_);
v___y_3830_ = v___x_3811_;
goto v___jp_3829_;
}
}
v___jp_3824_:
{
uint32_t v___x_3825_; uint8_t v___x_3826_; 
v___x_3825_ = lean_unbox_uint32(v_fst_3823_);
v___x_3826_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_contains___at___00Vampire_Reconstruct_coverVars_spec__0___redArg(v___x_3809_, v___x_3825_);
if (v___x_3826_ == 0)
{
lean_object* v___x_3827_; 
lean_inc(v___x_3822_);
v___x_3827_ = lean_array_push(v_b_3815_, v___x_3822_);
v___y_3817_ = v___x_3827_;
goto v___jp_3816_;
}
else
{
v___y_3817_ = v_b_3815_;
goto v___jp_3816_;
}
}
v___jp_3829_:
{
uint8_t v___x_3831_; 
v___x_3831_ = lean_nat_dec_lt(v___x_3828_, v___y_3830_);
if (v___x_3831_ == 0)
{
lean_dec(v___y_3830_);
goto v___jp_3824_;
}
else
{
size_t v___x_3832_; size_t v___x_3833_; uint32_t v___x_3834_; uint8_t v___x_3835_; 
v___x_3832_ = ((size_t)0ULL);
v___x_3833_ = lean_usize_of_nat(v___y_3830_);
lean_dec(v___y_3830_);
v___x_3834_ = lean_unbox_uint32(v_fst_3823_);
v___x_3835_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__2(v___x_3834_, v___x_3810_, v___x_3832_, v___x_3833_);
if (v___x_3835_ == 0)
{
goto v___jp_3824_;
}
else
{
v___y_3817_ = v_b_3815_;
goto v___jp_3816_;
}
}
}
}
else
{
lean_dec(v___x_3811_);
return v_b_3815_;
}
v___jp_3816_:
{
size_t v___x_3818_; size_t v___x_3819_; 
v___x_3818_ = ((size_t)1ULL);
v___x_3819_ = lean_usize_add(v_i_3813_, v___x_3818_);
v_i_3813_ = v___x_3819_;
v_b_3815_ = v___y_3817_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3___boxed(lean_object* v___x_3839_, lean_object* v___x_3840_, lean_object* v___x_3841_, lean_object* v_as_3842_, lean_object* v_i_3843_, lean_object* v_stop_3844_, lean_object* v_b_3845_){
_start:
{
size_t v_i_boxed_3846_; size_t v_stop_boxed_3847_; lean_object* v_res_3848_; 
v_i_boxed_3846_ = lean_unbox_usize(v_i_3843_);
lean_dec(v_i_3843_);
v_stop_boxed_3847_ = lean_unbox_usize(v_stop_3844_);
lean_dec(v_stop_3844_);
v_res_3848_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3(v___x_3839_, v___x_3840_, v___x_3841_, v_as_3842_, v_i_boxed_3846_, v_stop_boxed_3847_, v_b_3845_);
lean_dec_ref(v_as_3842_);
lean_dec_ref(v___x_3840_);
lean_dec_ref(v___x_3839_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4(lean_object* v___x_3849_, lean_object* v_as_3850_, size_t v_i_3851_, size_t v_stop_3852_, lean_object* v_b_3853_){
_start:
{
lean_object* v___y_3855_; uint8_t v___x_3859_; 
v___x_3859_ = lean_usize_dec_eq(v_i_3851_, v_stop_3852_);
if (v___x_3859_ == 0)
{
lean_object* v___x_3860_; lean_object* v_fst_3861_; uint32_t v___x_3862_; lean_object* v___x_3863_; 
v___x_3860_ = lean_array_uget_borrowed(v_as_3850_, v_i_3851_);
v_fst_3861_ = lean_ctor_get(v___x_3860_, 0);
v___x_3862_ = lean_unbox_uint32(v_fst_3861_);
v___x_3863_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v___x_3849_, v___x_3862_);
if (lean_obj_tag(v___x_3863_) == 0)
{
v___y_3855_ = v_b_3853_;
goto v___jp_3854_;
}
else
{
lean_object* v_val_3864_; uint32_t v___x_3865_; lean_object* v___x_3866_; 
v_val_3864_ = lean_ctor_get(v___x_3863_, 0);
lean_inc(v_val_3864_);
lean_dec_ref_known(v___x_3863_, 1);
v___x_3865_ = lean_unbox_uint32(v_fst_3861_);
v___x_3866_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_3853_, v___x_3865_, v_val_3864_);
v___y_3855_ = v___x_3866_;
goto v___jp_3854_;
}
}
else
{
return v_b_3853_;
}
v___jp_3854_:
{
size_t v___x_3856_; size_t v___x_3857_; 
v___x_3856_ = ((size_t)1ULL);
v___x_3857_ = lean_usize_add(v_i_3851_, v___x_3856_);
v_i_3851_ = v___x_3857_;
v_b_3853_ = v___y_3855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4___boxed(lean_object* v___x_3867_, lean_object* v_as_3868_, lean_object* v_i_3869_, lean_object* v_stop_3870_, lean_object* v_b_3871_){
_start:
{
size_t v_i_boxed_3872_; size_t v_stop_boxed_3873_; lean_object* v_res_3874_; 
v_i_boxed_3872_ = lean_unbox_usize(v_i_3869_);
lean_dec(v_i_3869_);
v_stop_boxed_3873_ = lean_unbox_usize(v_stop_3870_);
lean_dec(v_stop_3870_);
v_res_3874_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4(v___x_3867_, v_as_3868_, v_i_boxed_3872_, v_stop_boxed_3873_, v_b_3871_);
lean_dec_ref(v_as_3868_);
lean_dec_ref(v___x_3867_);
return v_res_3874_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0(void){
_start:
{
lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3875_ = lean_box(0);
v___x_3876_ = lean_unsigned_to_nat(16u);
v___x_3877_ = lean_mk_array(v___x_3876_, v___x_3875_);
return v___x_3877_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1(void){
_start:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3878_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0);
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
lean_ctor_set(v___x_3880_, 1, v___x_3878_);
return v___x_3880_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong(lean_object* v_sorts_3883_, lean_object* v_skolems_3884_, lean_object* v_c_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_, lean_object* v_a_3891_){
_start:
{
lean_object* v___x_3893_; 
lean_inc_ref(v_c_3885_);
v___x_3893_ = lp_vampireReplay_Vampire_GenClause_parent_x3f(v_c_3885_);
if (lean_obj_tag(v___x_3893_) == 1)
{
lean_object* v_val_3894_; lean_object* v___x_3895_; 
v_val_3894_ = lean_ctor_get(v___x_3893_, 0);
lean_inc_n(v_val_3894_, 2);
lean_dec_ref_known(v___x_3893_, 1);
lean_inc_ref(v_skolems_3884_);
lean_inc_ref(v_sorts_3883_);
v___x_3895_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong(v_sorts_3883_, v_skolems_3884_, v_val_3894_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3973_; 
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3973_ == 0)
{
lean_object* v_unused_3974_; 
v_unused_3974_ = lean_ctor_get(v___x_3895_, 0);
lean_dec(v_unused_3974_);
v___x_3897_ = v___x_3895_;
v_isShared_3898_ = v_isSharedCheck_3973_;
goto v_resetjp_3896_;
}
else
{
lean_dec(v___x_3895_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3973_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; 
v___x_3899_ = lp_vampireReplay_Vampire_GenClause_position_x3f(v_c_3885_);
if (lean_obj_tag(v___x_3899_) == 1)
{
lean_object* v_val_3900_; lean_object* v___x_3901_; uint32_t v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; uint8_t v___x_3905_; 
lean_del_object(v___x_3897_);
v_val_3900_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_val_3900_);
lean_dec_ref_known(v___x_3899_, 1);
lean_inc(v_val_3894_);
v___x_3901_ = lp_vampireReplay_Vampire_GenClause_literals(v_val_3894_);
v___x_3902_ = lean_unbox_uint32(v_val_3900_);
lean_dec(v_val_3900_);
v___x_3903_ = lean_uint32_to_nat(v___x_3902_);
v___x_3904_ = lean_array_get_size(v___x_3901_);
v___x_3905_ = lean_nat_dec_lt(v___x_3903_, v___x_3904_);
if (v___x_3905_ == 0)
{
lean_object* v___x_3906_; lean_object* v___x_3907_; 
lean_dec(v___x_3903_);
lean_dec_ref(v___x_3901_);
lean_dec(v_val_3894_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
v___x_3906_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__1);
v___x_3907_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_3906_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
return v___x_3907_;
}
else
{
lean_object* v___x_3908_; lean_object* v_fst_3909_; lean_object* v_snd_3910_; lean_object* v___x_3911_; 
v___x_3908_ = lean_array_fget(v___x_3901_, v___x_3903_);
lean_dec(v___x_3903_);
lean_dec_ref(v___x_3901_);
v_fst_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_fst_3909_);
v_snd_3910_ = lean_ctor_get(v___x_3908_, 1);
lean_inc(v_snd_3910_);
lean_dec(v___x_3908_);
v___x_3911_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_fst_3909_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3960_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3914_ = v___x_3911_;
v_isShared_3915_ = v_isSharedCheck_3960_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3911_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3960_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
uint8_t v___x_3916_; uint8_t v___x_3917_; uint8_t v___x_3918_; 
v___x_3916_ = lean_unbox(v_a_3912_);
lean_dec(v_a_3912_);
v___x_3917_ = lean_unbox(v_snd_3910_);
v___x_3918_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_skolemises(v___x_3916_, v___x_3917_);
if (v___x_3918_ == 0)
{
lean_object* v___x_3919_; lean_object* v___x_3921_; 
lean_dec(v_snd_3910_);
lean_dec(v_fst_3909_);
lean_dec(v_val_3894_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
v___x_3919_ = lean_box(0);
if (v_isShared_3915_ == 0)
{
lean_ctor_set(v___x_3914_, 0, v___x_3919_);
v___x_3921_ = v___x_3914_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v___x_3919_);
v___x_3921_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
return v___x_3921_;
}
}
else
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___x_3930_; lean_object* v___y_3932_; uint8_t v___x_3948_; 
lean_del_object(v___x_3914_);
lean_inc(v_fst_3909_);
v___x_3923_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_boundOf(v_sorts_3883_, v_fst_3909_);
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3930_ = lean_array_get_size(v___x_3923_);
v___x_3948_ = lean_nat_dec_lt(v___x_3924_, v___x_3930_);
if (v___x_3948_ == 0)
{
lean_dec_ref(v_c_3885_);
v___y_3932_ = v_skolems_3884_;
goto v___jp_3931_;
}
else
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; uint8_t v___x_3953_; 
v___x_3949_ = lp_vampireReplay_Vampire_GenClause_bindings(v_c_3885_);
v___x_3950_ = lean_array_to_list(v___x_3949_);
v___x_3951_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1);
v___x_3952_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_3950_, v___x_3951_);
lean_dec(v___x_3950_);
v___x_3953_ = lean_nat_dec_le(v___x_3930_, v___x_3930_);
if (v___x_3953_ == 0)
{
if (v___x_3948_ == 0)
{
lean_dec_ref(v___x_3952_);
v___y_3932_ = v_skolems_3884_;
goto v___jp_3931_;
}
else
{
size_t v___x_3954_; size_t v___x_3955_; lean_object* v___x_3956_; 
v___x_3954_ = ((size_t)0ULL);
v___x_3955_ = lean_usize_of_nat(v___x_3930_);
v___x_3956_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4(v___x_3952_, v___x_3923_, v___x_3954_, v___x_3955_, v_skolems_3884_);
lean_dec_ref(v___x_3952_);
v___y_3932_ = v___x_3956_;
goto v___jp_3931_;
}
}
else
{
size_t v___x_3957_; size_t v___x_3958_; lean_object* v___x_3959_; 
v___x_3957_ = ((size_t)0ULL);
v___x_3958_ = lean_usize_of_nat(v___x_3930_);
v___x_3959_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__4(v___x_3952_, v___x_3923_, v___x_3957_, v___x_3958_, v_skolems_3884_);
lean_dec_ref(v___x_3952_);
v___y_3932_ = v___x_3959_;
goto v___jp_3931_;
}
}
v___jp_3925_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1);
v___x_3929_ = lp_vampireReplay_Vampire_Reconstruct_withVars___redArg(v___y_3927_, v___x_3928_, v___y_3926_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_, v_a_3890_, v_a_3891_);
return v___x_3929_;
}
v___jp_3931_:
{
lean_object* v___x_3933_; lean_object* v___f_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; uint8_t v___x_3937_; 
v___x_3933_ = lp_vampireReplay_Vampire_GenClause_bindings(v_val_3894_);
lean_inc_ref(v_sorts_3883_);
lean_inc_ref(v___x_3933_);
v___f_3934_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3934_, 0, v___x_3933_);
lean_closure_set(v___f_3934_, 1, v_sorts_3883_);
lean_closure_set(v___f_3934_, 2, v_snd_3910_);
lean_closure_set(v___f_3934_, 3, v___y_3932_);
lean_closure_set(v___f_3934_, 4, v_fst_3909_);
v___x_3935_ = lean_array_get_size(v_sorts_3883_);
v___x_3936_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__2));
v___x_3937_ = lean_nat_dec_lt(v___x_3924_, v___x_3935_);
if (v___x_3937_ == 0)
{
lean_dec_ref(v___x_3933_);
lean_dec_ref(v___x_3923_);
lean_dec_ref(v_sorts_3883_);
v___y_3926_ = v___f_3934_;
v___y_3927_ = v___x_3936_;
goto v___jp_3925_;
}
else
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; uint8_t v___x_3941_; 
v___x_3938_ = lean_array_to_list(v___x_3933_);
v___x_3939_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1);
v___x_3940_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_3938_, v___x_3939_);
lean_dec(v___x_3938_);
v___x_3941_ = lean_nat_dec_le(v___x_3935_, v___x_3935_);
if (v___x_3941_ == 0)
{
if (v___x_3937_ == 0)
{
lean_dec_ref(v___x_3940_);
lean_dec_ref(v___x_3923_);
lean_dec_ref(v_sorts_3883_);
v___y_3926_ = v___f_3934_;
v___y_3927_ = v___x_3936_;
goto v___jp_3925_;
}
else
{
size_t v___x_3942_; size_t v___x_3943_; lean_object* v___x_3944_; 
v___x_3942_ = ((size_t)0ULL);
v___x_3943_ = lean_usize_of_nat(v___x_3935_);
v___x_3944_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3(v___x_3940_, v___x_3923_, v___x_3930_, v_sorts_3883_, v___x_3942_, v___x_3943_, v___x_3936_);
lean_dec_ref(v_sorts_3883_);
lean_dec_ref(v___x_3923_);
lean_dec_ref(v___x_3940_);
v___y_3926_ = v___f_3934_;
v___y_3927_ = v___x_3944_;
goto v___jp_3925_;
}
}
else
{
size_t v___x_3945_; size_t v___x_3946_; lean_object* v___x_3947_; 
v___x_3945_ = ((size_t)0ULL);
v___x_3946_ = lean_usize_of_nat(v___x_3935_);
v___x_3947_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__3(v___x_3940_, v___x_3923_, v___x_3930_, v_sorts_3883_, v___x_3945_, v___x_3946_, v___x_3936_);
lean_dec_ref(v_sorts_3883_);
lean_dec_ref(v___x_3923_);
lean_dec_ref(v___x_3940_);
v___y_3926_ = v___f_3934_;
v___y_3927_ = v___x_3947_;
goto v___jp_3925_;
}
}
}
}
}
}
else
{
lean_object* v_a_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3968_; 
lean_dec(v_snd_3910_);
lean_dec(v_fst_3909_);
lean_dec(v_val_3894_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
v_a_3961_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3963_ = v___x_3911_;
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_a_3961_);
lean_dec(v___x_3911_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3966_; 
if (v_isShared_3964_ == 0)
{
v___x_3966_ = v___x_3963_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3961_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
}
else
{
lean_object* v___x_3969_; lean_object* v___x_3971_; 
lean_dec(v___x_3899_);
lean_dec(v_val_3894_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
v___x_3969_ = lean_box(0);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 0, v___x_3969_);
v___x_3971_ = v___x_3897_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3969_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
return v___x_3971_;
}
}
}
}
else
{
lean_dec(v_val_3894_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
return v___x_3895_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
lean_dec(v___x_3893_);
lean_dec_ref(v_c_3885_);
lean_dec_ref(v_skolems_3884_);
lean_dec_ref(v_sorts_3883_);
v___x_3975_ = lean_box(0);
v___x_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___boxed(lean_object* v_sorts_3977_, lean_object* v_skolems_3978_, lean_object* v_c_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong(v_sorts_3977_, v_skolems_3978_, v_c_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_);
lean_dec(v_a_3985_);
lean_dec_ref(v_a_3984_);
lean_dec(v_a_3983_);
lean_dec_ref(v_a_3982_);
lean_dec(v_a_3981_);
lean_dec_ref(v_a_3980_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1(lean_object* v_inst_3988_, lean_object* v_a_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v___x_3997_; 
v___x_3997_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___redArg(v_a_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_);
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1___boxed(lean_object* v_inst_3998_, lean_object* v_a_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = lp_vampireReplay___private_Init_While_0__repeatM_erased___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong_spec__1(v_inst_3998_, v_a_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
lean_dec(v___y_4003_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0(lean_object* v_as_4008_, size_t v_i_4009_, size_t v_stop_4010_, lean_object* v_b_4011_){
_start:
{
uint8_t v___x_4012_; 
v___x_4012_ = lean_usize_dec_eq(v_i_4009_, v_stop_4010_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; size_t v___x_4016_; size_t v___x_4017_; 
v___x_4013_ = lean_array_uget_borrowed(v_as_4008_, v_i_4009_);
lean_inc(v___x_4013_);
v___x_4014_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_4013_);
v___x_4015_ = l_Array_append___redArg(v_b_4011_, v___x_4014_);
lean_dec_ref(v___x_4014_);
v___x_4016_ = ((size_t)1ULL);
v___x_4017_ = lean_usize_add(v_i_4009_, v___x_4016_);
v_i_4009_ = v___x_4017_;
v_b_4011_ = v___x_4015_;
goto _start;
}
else
{
return v_b_4011_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0___boxed(lean_object* v_as_4019_, lean_object* v_i_4020_, lean_object* v_stop_4021_, lean_object* v_b_4022_){
_start:
{
size_t v_i_boxed_4023_; size_t v_stop_boxed_4024_; lean_object* v_res_4025_; 
v_i_boxed_4023_ = lean_unbox_usize(v_i_4020_);
lean_dec(v_i_4020_);
v_stop_boxed_4024_ = lean_unbox_usize(v_stop_4021_);
lean_dec(v_stop_4021_);
v_res_4025_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0(v_as_4019_, v_i_boxed_4023_, v_stop_boxed_4024_, v_b_4022_);
lean_dec_ref(v_as_4019_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1(lean_object* v_as_4026_, size_t v_i_4027_, size_t v_stop_4028_, lean_object* v_b_4029_){
_start:
{
uint8_t v___x_4030_; 
v___x_4030_ = lean_usize_dec_eq(v_i_4027_, v_stop_4028_);
if (v___x_4030_ == 0)
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; size_t v___x_4034_; size_t v___x_4035_; 
v___x_4031_ = lean_array_uget_borrowed(v_as_4026_, v_i_4027_);
lean_inc(v___x_4031_);
v___x_4032_ = lp_vampireReplay_Vampire_Unit_skolems(v___x_4031_);
v___x_4033_ = l_Array_append___redArg(v_b_4029_, v___x_4032_);
lean_dec_ref(v___x_4032_);
v___x_4034_ = ((size_t)1ULL);
v___x_4035_ = lean_usize_add(v_i_4027_, v___x_4034_);
v_i_4027_ = v___x_4035_;
v_b_4029_ = v___x_4033_;
goto _start;
}
else
{
return v_b_4029_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1___boxed(lean_object* v_as_4037_, lean_object* v_i_4038_, lean_object* v_stop_4039_, lean_object* v_b_4040_){
_start:
{
size_t v_i_boxed_4041_; size_t v_stop_boxed_4042_; lean_object* v_res_4043_; 
v_i_boxed_4041_ = lean_unbox_usize(v_i_4038_);
lean_dec(v_i_4038_);
v_stop_boxed_4042_ = lean_unbox_usize(v_stop_4039_);
lean_dec(v_stop_4039_);
v_res_4043_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1(v_as_4037_, v_i_boxed_4041_, v_stop_boxed_4042_, v_b_4040_);
lean_dec_ref(v_as_4037_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf(lean_object* v_u_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_){
_start:
{
lean_object* v___x_4056_; 
lean_inc_ref(v_u_4048_);
v___x_4056_ = lp_vampireReplay_Vampire_Unit_genClause_x3f(v_u_4048_);
if (lean_obj_tag(v___x_4056_) == 1)
{
lean_object* v_val_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4103_; 
v_val_4057_ = lean_ctor_get(v___x_4056_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v___x_4056_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4059_ = v___x_4056_;
v_isShared_4060_ = v_isSharedCheck_4103_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_val_4057_);
lean_dec(v___x_4056_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4103_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___y_4062_; lean_object* v___y_4063_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___y_4070_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; uint8_t v___x_4095_; 
lean_inc_ref_n(v_u_4048_, 2);
v___x_4067_ = lp_vampireReplay_Vampire_Unit_skolems(v_u_4048_);
v___x_4068_ = lp_vampireReplay_Vampire_Unit_parents(v_u_4048_);
v___x_4092_ = lean_unsigned_to_nat(0u);
v___x_4093_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__1));
v___x_4094_ = lean_array_get_size(v___x_4068_);
v___x_4095_ = lean_nat_dec_lt(v___x_4092_, v___x_4094_);
if (v___x_4095_ == 0)
{
v___y_4070_ = v___x_4093_;
goto v___jp_4069_;
}
else
{
uint8_t v___x_4096_; 
v___x_4096_ = lean_nat_dec_le(v___x_4094_, v___x_4094_);
if (v___x_4096_ == 0)
{
if (v___x_4095_ == 0)
{
v___y_4070_ = v___x_4093_;
goto v___jp_4069_;
}
else
{
size_t v___x_4097_; size_t v___x_4098_; lean_object* v___x_4099_; 
v___x_4097_ = ((size_t)0ULL);
v___x_4098_ = lean_usize_of_nat(v___x_4094_);
v___x_4099_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1(v___x_4068_, v___x_4097_, v___x_4098_, v___x_4093_);
v___y_4070_ = v___x_4099_;
goto v___jp_4069_;
}
}
else
{
size_t v___x_4100_; size_t v___x_4101_; lean_object* v___x_4102_; 
v___x_4100_ = ((size_t)0ULL);
v___x_4101_ = lean_usize_of_nat(v___x_4094_);
v___x_4102_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__1(v___x_4068_, v___x_4100_, v___x_4101_, v___x_4093_);
v___y_4070_ = v___x_4102_;
goto v___jp_4069_;
}
}
v___jp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4064_ = lp_vampireReplay_Vampire_Unit_varSorts(v_u_4048_);
v___x_4065_ = l_Array_append___redArg(v___y_4063_, v___x_4064_);
lean_dec_ref(v___x_4064_);
v___x_4066_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong(v___x_4065_, v___y_4062_, v_val_4057_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_, v_a_4053_, v_a_4054_);
return v___x_4066_;
}
v___jp_4069_:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v_skolems_4075_; lean_object* v_size_4076_; uint8_t v___x_4077_; 
v___x_4071_ = l_Array_append___redArg(v___x_4067_, v___y_4070_);
lean_dec_ref(v___y_4070_);
v___x_4072_ = lean_array_to_list(v___x_4071_);
v___x_4073_ = lean_unsigned_to_nat(0u);
v___x_4074_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__1);
v_skolems_4075_ = lp_vampireReplay_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00Vampire_Reconstruct_instantiateAt_spec__0_spec__0___redArg(v___x_4072_, v___x_4074_);
lean_dec(v___x_4072_);
v_size_4076_ = lean_ctor_get(v_skolems_4075_, 0);
lean_inc(v_size_4076_);
v___x_4077_ = lean_nat_dec_eq(v_size_4076_, v___x_4073_);
lean_dec(v_size_4076_);
if (v___x_4077_ == 0)
{
lean_object* v___x_4078_; lean_object* v___x_4079_; uint8_t v___x_4080_; 
lean_del_object(v___x_4059_);
v___x_4078_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___closed__0));
v___x_4079_ = lean_array_get_size(v___x_4068_);
v___x_4080_ = lean_nat_dec_lt(v___x_4073_, v___x_4079_);
if (v___x_4080_ == 0)
{
lean_dec_ref(v___x_4068_);
v___y_4062_ = v_skolems_4075_;
v___y_4063_ = v___x_4078_;
goto v___jp_4061_;
}
else
{
uint8_t v___x_4081_; 
v___x_4081_ = lean_nat_dec_le(v___x_4079_, v___x_4079_);
if (v___x_4081_ == 0)
{
if (v___x_4080_ == 0)
{
lean_dec_ref(v___x_4068_);
v___y_4062_ = v_skolems_4075_;
v___y_4063_ = v___x_4078_;
goto v___jp_4061_;
}
else
{
size_t v___x_4082_; size_t v___x_4083_; lean_object* v___x_4084_; 
v___x_4082_ = ((size_t)0ULL);
v___x_4083_ = lean_usize_of_nat(v___x_4079_);
v___x_4084_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0(v___x_4068_, v___x_4082_, v___x_4083_, v___x_4078_);
lean_dec_ref(v___x_4068_);
v___y_4062_ = v_skolems_4075_;
v___y_4063_ = v___x_4084_;
goto v___jp_4061_;
}
}
else
{
size_t v___x_4085_; size_t v___x_4086_; lean_object* v___x_4087_; 
v___x_4085_ = ((size_t)0ULL);
v___x_4086_ = lean_usize_of_nat(v___x_4079_);
v___x_4087_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Vampire_Reconstruct_Clausify_registerSkolemsOf_spec__0(v___x_4068_, v___x_4085_, v___x_4086_, v___x_4078_);
lean_dec_ref(v___x_4068_);
v___y_4062_ = v_skolems_4075_;
v___y_4063_ = v___x_4087_;
goto v___jp_4061_;
}
}
}
else
{
lean_object* v___x_4088_; lean_object* v___x_4090_; 
lean_dec_ref(v_skolems_4075_);
lean_dec_ref(v___x_4068_);
lean_dec(v_val_4057_);
lean_dec_ref(v_u_4048_);
v___x_4088_ = lean_box(0);
if (v_isShared_4060_ == 0)
{
lean_ctor_set_tag(v___x_4059_, 0);
lean_ctor_set(v___x_4059_, 0, v___x_4088_);
v___x_4090_ = v___x_4059_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v___x_4088_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
}
else
{
lean_object* v___x_4104_; lean_object* v___x_4105_; 
lean_dec(v___x_4056_);
lean_dec_ref(v_u_4048_);
v___x_4104_ = lean_box(0);
v___x_4105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4104_);
return v___x_4105_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf___boxed(lean_object* v_u_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v_a_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = lp_vampireReplay_Vampire_Reconstruct_Clausify_registerSkolemsOf(v_u_4106_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_, v_a_4111_, v_a_4112_);
lean_dec(v_a_4112_);
lean_dec_ref(v_a_4111_);
lean_dec(v_a_4110_);
lean_dec_ref(v_a_4109_);
lean_dec(v_a_4108_);
lean_dec_ref(v_a_4107_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_chainTo(lean_object* v_c_4115_, lean_object* v_chain_4116_){
_start:
{
lean_object* v___x_4117_; 
lean_inc_ref(v_c_4115_);
v___x_4117_ = lp_vampireReplay_Vampire_GenClause_parent_x3f(v_c_4115_);
if (lean_obj_tag(v___x_4117_) == 0)
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4118_ = lean_array_push(v_chain_4116_, v_c_4115_);
v___x_4119_ = l_Array_reverse___redArg(v___x_4118_);
return v___x_4119_;
}
else
{
lean_object* v_val_4120_; lean_object* v___x_4121_; 
v_val_4120_ = lean_ctor_get(v___x_4117_, 0);
lean_inc(v_val_4120_);
lean_dec_ref_known(v___x_4117_, 1);
v___x_4121_ = lean_array_push(v_chain_4116_, v_c_4115_);
v_c_4115_ = v_val_4120_;
v_chain_4116_ = v___x_4121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0(lean_object* v_k_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v_b_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_){
_start:
{
lean_object* v___x_4132_; 
lean_inc(v___y_4130_);
lean_inc_ref(v___y_4129_);
lean_inc(v___y_4128_);
lean_inc_ref(v___y_4127_);
lean_inc(v___y_4125_);
lean_inc_ref(v___y_4124_);
v___x_4132_ = lean_apply_8(v_k_4123_, v_b_4126_, v___y_4124_, v___y_4125_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, lean_box(0));
return v___x_4132_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0___boxed(lean_object* v_k_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v_b_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v_res_4142_; 
v_res_4142_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0(v_k_4133_, v___y_4134_, v___y_4135_, v_b_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(lean_object* v_name_4143_, lean_object* v_type_4144_, lean_object* v_val_4145_, lean_object* v_k_4146_, uint8_t v_nondep_4147_, uint8_t v_kind_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v___f_4156_; lean_object* v___x_4157_; 
lean_inc(v___y_4150_);
lean_inc_ref(v___y_4149_);
v___f_4156_ = lean_alloc_closure((void*)(lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4156_, 0, v_k_4146_);
lean_closure_set(v___f_4156_, 1, v___y_4149_);
lean_closure_set(v___f_4156_, 2, v___y_4150_);
v___x_4157_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___redArg(v_name_4143_, v_type_4144_, v_val_4145_, v___f_4156_, v_nondep_4147_, v_kind_4148_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_);
if (lean_obj_tag(v___x_4157_) == 0)
{
return v___x_4157_;
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
v_a_4158_ = lean_ctor_get(v___x_4157_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4157_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4157_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4157_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg___boxed(lean_object* v_name_4166_, lean_object* v_type_4167_, lean_object* v_val_4168_, lean_object* v_k_4169_, lean_object* v_nondep_4170_, lean_object* v_kind_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
uint8_t v_nondep_boxed_4179_; uint8_t v_kind_boxed_4180_; lean_object* v_res_4181_; 
v_nondep_boxed_4179_ = lean_unbox(v_nondep_4170_);
v_kind_boxed_4180_ = lean_unbox(v_kind_4171_);
v_res_4181_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(v_name_4166_, v_type_4167_, v_val_4168_, v_k_4169_, v_nondep_boxed_4179_, v_kind_boxed_4180_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0(lean_object* v_00_u03b1_4182_, lean_object* v_name_4183_, lean_object* v_type_4184_, lean_object* v_val_4185_, lean_object* v_k_4186_, uint8_t v_nondep_4187_, uint8_t v_kind_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_){
_start:
{
lean_object* v___x_4196_; 
v___x_4196_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(v_name_4183_, v_type_4184_, v_val_4185_, v_k_4186_, v_nondep_4187_, v_kind_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_);
return v___x_4196_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___boxed(lean_object* v_00_u03b1_4197_, lean_object* v_name_4198_, lean_object* v_type_4199_, lean_object* v_val_4200_, lean_object* v_k_4201_, lean_object* v_nondep_4202_, lean_object* v_kind_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
uint8_t v_nondep_boxed_4211_; uint8_t v_kind_boxed_4212_; lean_object* v_res_4213_; 
v_nondep_boxed_4211_ = lean_unbox(v_nondep_4202_);
v_kind_boxed_4212_ = lean_unbox(v_kind_4203_);
v_res_4213_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0(v_00_u03b1_4197_, v_name_4198_, v_type_4199_, v_val_4200_, v_k_4201_, v_nondep_boxed_4211_, v_kind_boxed_4212_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
return v_res_4213_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1(void){
_start:
{
lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4215_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__0));
v___x_4216_ = l_Lean_stringToMessageData(v___x_4215_);
return v___x_4216_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0___boxed(lean_object* v_bound_4217_, lean_object* v_r_4218_, lean_object* v_chain_4219_, lean_object* v___x_4220_, lean_object* v_parts_4221_, lean_object* v_g_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0(v_bound_4217_, v_r_4218_, v_chain_4219_, v___x_4220_, v_parts_4221_, v_g_4222_, v___y_4223_, v___y_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec(v___y_4224_);
lean_dec_ref(v___y_4223_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain(lean_object* v_r_4232_, lean_object* v_chain_4233_, lean_object* v_i_4234_, lean_object* v_parent_x3f_4235_, lean_object* v_parentParts_4236_, lean_object* v_bound_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_){
_start:
{
lean_object* v___x_4245_; uint8_t v___x_4246_; 
v___x_4245_ = lean_array_get_size(v_chain_4233_);
v___x_4246_ = lean_nat_dec_lt(v_i_4234_, v___x_4245_);
if (v___x_4246_ == 0)
{
lean_object* v___x_4247_; lean_object* v___x_4248_; 
lean_dec_ref(v_bound_4237_);
lean_dec_ref(v_parentParts_4236_);
lean_dec(v_parent_x3f_4235_);
lean_dec(v_i_4234_);
lean_dec_ref(v_chain_4233_);
lean_dec_ref(v_r_4232_);
v___x_4247_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__1);
v___x_4248_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4247_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
return v___x_4248_;
}
else
{
lean_object* v___x_4249_; lean_object* v_parts_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___x_4277_; 
v___x_4249_ = lean_array_fget_borrowed(v_chain_4233_, v_i_4234_);
lean_inc(v___x_4249_);
v___x_4277_ = lp_vampireReplay_Vampire_GenClause_parent_x3f(v___x_4249_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v_sorts_4278_; lean_object* v_vars_4279_; lean_object* v___x_4280_; 
v_sorts_4278_ = lean_ctor_get(v_r_4232_, 0);
v_vars_4279_ = lean_ctor_get(v_r_4232_, 1);
lean_inc(v___x_4249_);
lean_inc_ref(v_vars_4279_);
lean_inc_ref(v_sorts_4278_);
v___x_4280_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts(v_sorts_4278_, v_vars_4279_, v___x_4249_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
if (lean_obj_tag(v___x_4280_) == 0)
{
lean_object* v_a_4281_; 
v_a_4281_ = lean_ctor_get(v___x_4280_, 0);
lean_inc(v_a_4281_);
lean_dec_ref_known(v___x_4280_, 1);
v_parts_4251_ = v_a_4281_;
v___y_4252_ = v_a_4238_;
v___y_4253_ = v_a_4239_;
v___y_4254_ = v_a_4240_;
v___y_4255_ = v_a_4241_;
v___y_4256_ = v_a_4242_;
v___y_4257_ = v_a_4243_;
goto v___jp_4250_;
}
else
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4289_; 
lean_dec_ref(v_bound_4237_);
lean_dec_ref(v_parentParts_4236_);
lean_dec(v_parent_x3f_4235_);
lean_dec(v_i_4234_);
lean_dec_ref(v_chain_4233_);
lean_dec_ref(v_r_4232_);
v_a_4282_ = lean_ctor_get(v___x_4280_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v___x_4280_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4284_ = v___x_4280_;
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v___x_4280_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4287_; 
if (v_isShared_4285_ == 0)
{
v___x_4287_ = v___x_4284_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4282_);
v___x_4287_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
return v___x_4287_;
}
}
}
}
else
{
lean_object* v_val_4290_; lean_object* v_sorts_4291_; lean_object* v_vars_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v_val_4290_ = lean_ctor_get(v___x_4277_, 0);
lean_inc(v_val_4290_);
lean_dec_ref_known(v___x_4277_, 1);
v_sorts_4291_ = lean_ctor_get(v_r_4232_, 0);
v_vars_4292_ = lean_ctor_get(v_r_4232_, 1);
v___x_4293_ = lp_vampireReplay_Vampire_GenClause_literals(v_val_4290_);
lean_inc(v___x_4249_);
lean_inc_ref(v_vars_4292_);
lean_inc_ref(v_sorts_4291_);
v___x_4294_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genPartsFrom(v_sorts_4291_, v_vars_4292_, v___x_4249_, v___x_4293_, v_parentParts_4236_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
lean_dec_ref(v___x_4293_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v_parts_4251_ = v_a_4295_;
v___y_4252_ = v_a_4238_;
v___y_4253_ = v_a_4239_;
v___y_4254_ = v_a_4240_;
v___y_4255_ = v_a_4241_;
v___y_4256_ = v_a_4242_;
v___y_4257_ = v_a_4243_;
goto v___jp_4250_;
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
lean_dec_ref(v_bound_4237_);
lean_dec_ref(v_parentParts_4236_);
lean_dec(v_parent_x3f_4235_);
lean_dec(v_i_4234_);
lean_dec_ref(v_chain_4233_);
lean_dec_ref(v_r_4232_);
v_a_4296_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4294_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4294_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
v___jp_4250_:
{
lean_object* v___x_4258_; 
lean_inc_ref(v_parts_4251_);
lean_inc(v___x_4249_);
lean_inc_ref(v_r_4232_);
v___x_4258_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_prove(v_r_4232_, v___x_4249_, v_parent_x3f_4235_, v_parts_4251_, v_parentParts_4236_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; uint8_t v___x_4262_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_a_4259_);
lean_dec_ref_known(v___x_4258_, 1);
v___x_4260_ = lean_unsigned_to_nat(1u);
v___x_4261_ = lean_nat_add(v_i_4234_, v___x_4260_);
v___x_4262_ = lean_nat_dec_eq(v___x_4261_, v___x_4245_);
if (v___x_4262_ == 0)
{
lean_object* v___f_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; uint8_t v___x_4272_; lean_object* v___x_4273_; 
lean_inc_ref(v_parts_4251_);
v___f_4263_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0___boxed), 13, 5);
lean_closure_set(v___f_4263_, 0, v_bound_4237_);
lean_closure_set(v___f_4263_, 1, v_r_4232_);
lean_closure_set(v___f_4263_, 2, v_chain_4233_);
lean_closure_set(v___f_4263_, 3, v___x_4261_);
lean_closure_set(v___f_4263_, 4, v_parts_4251_);
v___x_4264_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___closed__2));
v___x_4265_ = l_Nat_reprFast(v_i_4234_);
v___x_4266_ = lean_string_append(v___x_4264_, v___x_4265_);
lean_dec_ref(v___x_4265_);
v___x_4267_ = lean_box(0);
v___x_4268_ = l_Lean_Name_str___override(v___x_4267_, v___x_4266_);
v___x_4269_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3));
v___x_4270_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30));
v___x_4271_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_4269_, v___x_4270_, v_parts_4251_);
v___x_4272_ = 0;
v___x_4273_ = lp_vampireReplay_Lean_Meta_withLetDecl___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain_spec__0___redArg(v___x_4268_, v___x_4271_, v_a_4259_, v___f_4263_, v___x_4262_, v___x_4272_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
return v___x_4273_;
}
else
{
uint8_t v___x_4274_; uint8_t v___x_4275_; lean_object* v___x_4276_; 
lean_dec(v___x_4261_);
lean_dec_ref(v_parts_4251_);
lean_dec(v_i_4234_);
lean_dec_ref(v_chain_4233_);
lean_dec_ref(v_r_4232_);
v___x_4274_ = 0;
v___x_4275_ = 1;
v___x_4276_ = l_Lean_Meta_mkLetFVars(v_bound_4237_, v_a_4259_, v___x_4274_, v___x_4262_, v___x_4275_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec_ref(v_bound_4237_);
return v___x_4276_;
}
}
else
{
lean_dec_ref(v_parts_4251_);
lean_dec_ref(v_bound_4237_);
lean_dec(v_i_4234_);
lean_dec_ref(v_chain_4233_);
lean_dec_ref(v_r_4232_);
return v___x_4258_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___lam__0(lean_object* v_bound_4304_, lean_object* v_r_4305_, lean_object* v_chain_4306_, lean_object* v___x_4307_, lean_object* v_parts_4308_, lean_object* v_g_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
lean_inc_ref(v_g_4309_);
v___x_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4317_, 0, v_g_4309_);
v___x_4318_ = lean_array_push(v_bound_4304_, v_g_4309_);
v___x_4319_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain(v_r_4305_, v_chain_4306_, v___x_4307_, v___x_4317_, v_parts_4308_, v___x_4318_, v___y_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain___boxed(lean_object* v_r_4320_, lean_object* v_chain_4321_, lean_object* v_i_4322_, lean_object* v_parent_x3f_4323_, lean_object* v_parentParts_4324_, lean_object* v_bound_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v_a_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_){
_start:
{
lean_object* v_res_4333_; 
v_res_4333_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain(v_r_4320_, v_chain_4321_, v_i_4322_, v_parent_x3f_4323_, v_parentParts_4324_, v_bound_4325_, v_a_4326_, v_a_4327_, v_a_4328_, v_a_4329_, v_a_4330_, v_a_4331_);
lean_dec(v_a_4331_);
lean_dec_ref(v_a_4330_);
lean_dec(v_a_4329_);
lean_dec_ref(v_a_4328_);
lean_dec(v_a_4327_);
lean_dec_ref(v_a_4326_);
return v_res_4333_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0(lean_object* v_snd_4334_, lean_object* v_a_4335_, uint8_t v___x_4336_, lean_object* v_h_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; uint8_t v___x_4350_; uint8_t v___x_4351_; lean_object* v___x_4352_; 
v___x_4345_ = lean_unsigned_to_nat(1u);
v___x_4346_ = lean_mk_empty_array_with_capacity(v___x_4345_);
lean_inc_ref(v_h_4337_);
v___x_4347_ = lean_array_push(v___x_4346_, v_h_4337_);
v___x_4348_ = l_Lean_mkAppN(v_h_4337_, v_snd_4334_);
v___x_4349_ = l_Lean_Expr_app___override(v_a_4335_, v___x_4348_);
v___x_4350_ = 0;
v___x_4351_ = 1;
v___x_4352_ = l_Lean_Meta_mkLambdaFVars(v___x_4347_, v___x_4349_, v___x_4350_, v___x_4336_, v___x_4350_, v___x_4336_, v___x_4351_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_);
lean_dec_ref(v___x_4347_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0___boxed(lean_object* v_snd_4353_, lean_object* v_a_4354_, lean_object* v___x_4355_, lean_object* v_h_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
uint8_t v___x_21492__boxed_4364_; lean_object* v_res_4365_; 
v___x_21492__boxed_4364_ = lean_unbox(v___x_4355_);
v_res_4365_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0(v_snd_4353_, v_a_4354_, v___x_21492__boxed_4364_, v_h_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
lean_dec(v___y_4362_);
lean_dec_ref(v___y_4361_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec(v___y_4358_);
lean_dec_ref(v___y_4357_);
lean_dec(v_snd_4353_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1(lean_object* v_a_4366_, lean_object* v___x_4367_, lean_object* v_a_4368_, uint8_t v___x_4369_, lean_object* v_h_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v___x_4378_; 
lean_inc_ref(v_h_4370_);
v___x_4378_ = lp_vampireReplay_Vampire_Reconstruct_projectGiven(v_a_4366_, v___x_4367_, v_h_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; uint8_t v___x_4384_; uint8_t v___x_4385_; lean_object* v___x_4386_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v___x_4378_, 1);
v___x_4380_ = lean_unsigned_to_nat(1u);
v___x_4381_ = lean_mk_empty_array_with_capacity(v___x_4380_);
v___x_4382_ = lean_array_push(v___x_4381_, v_h_4370_);
v___x_4383_ = l_Lean_Expr_app___override(v_a_4368_, v_a_4379_);
v___x_4384_ = 0;
v___x_4385_ = 1;
v___x_4386_ = l_Lean_Meta_mkLambdaFVars(v___x_4382_, v___x_4383_, v___x_4384_, v___x_4369_, v___x_4384_, v___x_4369_, v___x_4385_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
lean_dec_ref(v___x_4382_);
return v___x_4386_;
}
else
{
lean_dec_ref(v_h_4370_);
lean_dec_ref(v_a_4368_);
return v___x_4378_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1___boxed(lean_object* v_a_4387_, lean_object* v___x_4388_, lean_object* v_a_4389_, lean_object* v___x_4390_, lean_object* v_h_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
uint8_t v___x_21537__boxed_4399_; lean_object* v_res_4400_; 
v___x_21537__boxed_4399_ = lean_unbox(v___x_4390_);
v_res_4400_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1(v_a_4387_, v___x_4388_, v_a_4389_, v___x_21537__boxed_4399_, v_h_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec(v___y_4395_);
lean_dec_ref(v___y_4394_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
lean_dec_ref(v_a_4387_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(uint8_t v_____do__lift_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_){
_start:
{
if (v_____do__lift_4401_ == 0)
{
uint8_t v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4409_ = 1;
v___x_4410_ = lean_box(v___x_4409_);
v___x_4411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4410_);
return v___x_4411_;
}
else
{
uint8_t v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4412_ = 0;
v___x_4413_ = lean_box(v___x_4412_);
v___x_4414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4413_);
return v___x_4414_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2___boxed(lean_object* v_____do__lift_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
uint8_t v_____do__lift_21586__boxed_4423_; lean_object* v_res_4424_; 
v_____do__lift_21586__boxed_4423_ = lean_unbox(v_____do__lift_4415_);
v_res_4424_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(v_____do__lift_21586__boxed_4423_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4424_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4426_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__0));
v___x_4427_ = l_Lean_stringToMessageData(v___x_4426_);
return v___x_4427_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3(lean_object* v_a_4428_, lean_object* v_i_4429_, lean_object* v_hi_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v___x_4438_; uint8_t v___x_4439_; 
v___x_4438_ = lean_array_get_size(v_a_4428_);
v___x_4439_ = lean_nat_dec_lt(v_i_4429_, v___x_4438_);
if (v___x_4439_ == 0)
{
lean_object* v___x_4440_; lean_object* v___x_4441_; 
lean_dec_ref(v_hi_4430_);
v___x_4440_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1);
v___x_4441_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4440_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_);
return v___x_4441_;
}
else
{
lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4442_ = lean_array_fget_borrowed(v_a_4428_, v_i_4429_);
lean_inc(v___x_4442_);
v___x_4443_ = l_Lean_Expr_app___override(v___x_4442_, v_hi_4430_);
v___x_4444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4444_, 0, v___x_4443_);
return v___x_4444_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___boxed(lean_object* v_a_4445_, lean_object* v_i_4446_, lean_object* v_hi_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3(v_a_4445_, v_i_4446_, v_hi_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_, v___y_4452_, v___y_4453_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
lean_dec(v___y_4449_);
lean_dec_ref(v___y_4448_);
lean_dec(v_i_4446_);
lean_dec_ref(v_a_4445_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4(lean_object* v_a_4456_, lean_object* v___f_4457_, lean_object* v___x_4458_, uint8_t v_a_4459_, uint8_t v___x_4460_, lean_object* v_h_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4469_ = lean_box(0);
lean_inc_ref(v_h_4461_);
v___x_4470_ = lp_vampireReplay_Vampire_Reconstruct_elimGiven(v_a_4456_, v___f_4457_, v_h_4461_, v___x_4458_, v___x_4469_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4470_) == 0)
{
lean_object* v_a_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; uint8_t v___x_4475_; lean_object* v___x_4476_; 
v_a_4471_ = lean_ctor_get(v___x_4470_, 0);
lean_inc(v_a_4471_);
lean_dec_ref_known(v___x_4470_, 1);
v___x_4472_ = lean_unsigned_to_nat(1u);
v___x_4473_ = lean_mk_empty_array_with_capacity(v___x_4472_);
v___x_4474_ = lean_array_push(v___x_4473_, v_h_4461_);
v___x_4475_ = 1;
v___x_4476_ = l_Lean_Meta_mkLambdaFVars(v___x_4474_, v_a_4471_, v_a_4459_, v___x_4460_, v_a_4459_, v___x_4460_, v___x_4475_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
lean_dec_ref(v___x_4474_);
return v___x_4476_;
}
else
{
lean_dec_ref(v_h_4461_);
return v___x_4470_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4___boxed(lean_object* v_a_4477_, lean_object* v___f_4478_, lean_object* v___x_4479_, lean_object* v_a_4480_, lean_object* v___x_4481_, lean_object* v_h_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
uint8_t v_a_21672__boxed_4490_; uint8_t v___x_21673__boxed_4491_; lean_object* v_res_4492_; 
v_a_21672__boxed_4490_ = lean_unbox(v_a_4480_);
v___x_21673__boxed_4491_ = lean_unbox(v___x_4481_);
v_res_4492_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4(v_a_4477_, v___f_4478_, v___x_4479_, v_a_21672__boxed_4490_, v___x_21673__boxed_4491_, v_h_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
lean_dec(v___y_4486_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec_ref(v___y_4483_);
lean_dec_ref(v_a_4477_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5(lean_object* v_stated_4493_, lean_object* v_target_4494_, uint8_t v___x_4495_, lean_object* v_h_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_){
_start:
{
lean_object* v___x_4504_; 
lean_inc_ref(v_h_4496_);
v___x_4504_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v_stated_4493_, v_target_4494_, v_h_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; uint8_t v___x_4509_; uint8_t v___x_4510_; lean_object* v___x_4511_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref_known(v___x_4504_, 1);
v___x_4506_ = lean_unsigned_to_nat(1u);
v___x_4507_ = lean_mk_empty_array_with_capacity(v___x_4506_);
v___x_4508_ = lean_array_push(v___x_4507_, v_h_4496_);
v___x_4509_ = 0;
v___x_4510_ = 1;
v___x_4511_ = l_Lean_Meta_mkLambdaFVars(v___x_4508_, v_a_4505_, v___x_4509_, v___x_4495_, v___x_4509_, v___x_4495_, v___x_4510_, v___y_4499_, v___y_4500_, v___y_4501_, v___y_4502_);
lean_dec_ref(v___x_4508_);
return v___x_4511_;
}
else
{
lean_dec_ref(v_h_4496_);
return v___x_4504_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5___boxed(lean_object* v_stated_4512_, lean_object* v_target_4513_, lean_object* v___x_4514_, lean_object* v_h_4515_, lean_object* v___y_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
uint8_t v___x_21722__boxed_4523_; lean_object* v_res_4524_; 
v___x_21722__boxed_4523_ = lean_unbox(v___x_4514_);
v_res_4524_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5(v_stated_4512_, v_target_4513_, v___x_21722__boxed_4523_, v_h_4515_, v___y_4516_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v___y_4517_);
lean_dec_ref(v___y_4516_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6(lean_object* v___x_4526_, lean_object* v_target_4527_, lean_object* v_h_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_){
_start:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; 
v___x_4536_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___closed__0));
v___x_4537_ = l_Lean_Name_mkStr2(v___x_4526_, v___x_4536_);
v___x_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4538_, 0, v_target_4527_);
lean_inc_ref(v_h_4528_);
v___x_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4539_, 0, v_h_4528_);
v___x_4540_ = lean_unsigned_to_nat(2u);
v___x_4541_ = lean_mk_empty_array_with_capacity(v___x_4540_);
v___x_4542_ = lean_array_push(v___x_4541_, v___x_4538_);
v___x_4543_ = lean_array_push(v___x_4542_, v___x_4539_);
v___x_4544_ = l_Lean_Meta_mkAppOptM(v___x_4537_, v___x_4543_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; uint8_t v___x_4549_; uint8_t v___x_4550_; uint8_t v___x_4551_; lean_object* v___x_4552_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v___x_4546_ = lean_unsigned_to_nat(1u);
v___x_4547_ = lean_mk_empty_array_with_capacity(v___x_4546_);
v___x_4548_ = lean_array_push(v___x_4547_, v_h_4528_);
v___x_4549_ = 0;
v___x_4550_ = 1;
v___x_4551_ = 1;
v___x_4552_ = l_Lean_Meta_mkLambdaFVars(v___x_4548_, v_a_4545_, v___x_4549_, v___x_4550_, v___x_4549_, v___x_4550_, v___x_4551_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
lean_dec_ref(v___x_4548_);
return v___x_4552_;
}
else
{
lean_dec_ref(v_h_4528_);
return v___x_4544_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___boxed(lean_object* v___x_4553_, lean_object* v_target_4554_, lean_object* v_h_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6(v___x_4553_, v_target_4554_, v_h_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
lean_dec(v___y_4559_);
lean_dec_ref(v___y_4558_);
lean_dec(v___y_4557_);
lean_dec_ref(v___y_4556_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7(lean_object* v_target_4564_, lean_object* v_h_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_){
_start:
{
lean_object* v___x_4573_; 
lean_inc_ref(v_h_4565_);
v___x_4573_ = lp_vampireReplay_Vampire_Reconstruct_placeLiteral(v_target_4564_, v_h_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_);
if (lean_obj_tag(v___x_4573_) == 0)
{
lean_object* v_a_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; uint8_t v___x_4578_; uint8_t v___x_4579_; uint8_t v___x_4580_; lean_object* v___x_4581_; 
v_a_4574_ = lean_ctor_get(v___x_4573_, 0);
lean_inc(v_a_4574_);
lean_dec_ref_known(v___x_4573_, 1);
v___x_4575_ = lean_unsigned_to_nat(1u);
v___x_4576_ = lean_mk_empty_array_with_capacity(v___x_4575_);
v___x_4577_ = lean_array_push(v___x_4576_, v_h_4565_);
v___x_4578_ = 0;
v___x_4579_ = 1;
v___x_4580_ = 1;
v___x_4581_ = l_Lean_Meta_mkLambdaFVars(v___x_4577_, v_a_4574_, v___x_4578_, v___x_4579_, v___x_4578_, v___x_4579_, v___x_4580_, v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_);
lean_dec_ref(v___x_4577_);
return v___x_4581_;
}
else
{
lean_dec_ref(v_h_4565_);
return v___x_4573_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7___boxed(lean_object* v_target_4582_, lean_object* v_h_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7(v_target_4582_, v_h_4583_, v___y_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_);
lean_dec(v___y_4589_);
lean_dec_ref(v___y_4588_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___y_4585_);
lean_dec_ref(v___y_4584_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg(lean_object* v_as_4592_, size_t v_i_4593_, size_t v_stop_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_){
_start:
{
uint8_t v___x_4600_; 
v___x_4600_ = lean_usize_dec_eq(v_i_4593_, v_stop_4594_);
if (v___x_4600_ == 0)
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = lean_array_uget_borrowed(v_as_4592_, v_i_4593_);
v___x_4602_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v___x_4601_, v___y_4595_, v___y_4596_, v___y_4597_, v___y_4598_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_object* v_a_4603_; lean_object* v___x_4605_; uint8_t v_isShared_4606_; uint8_t v_isSharedCheck_4632_; 
v_a_4603_ = lean_ctor_get(v___x_4602_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4602_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4605_ = v___x_4602_;
v_isShared_4606_ = v_isSharedCheck_4632_;
goto v_resetjp_4604_;
}
else
{
lean_inc(v_a_4603_);
lean_dec(v___x_4602_);
v___x_4605_ = lean_box(0);
v_isShared_4606_ = v_isSharedCheck_4632_;
goto v_resetjp_4604_;
}
v_resetjp_4604_:
{
uint8_t v___x_4607_; uint8_t v___x_4608_; 
v___x_4607_ = 1;
v___x_4608_ = lean_unbox(v_a_4603_);
lean_dec(v_a_4603_);
switch(v___x_4608_)
{
case 7:
{
lean_object* v___x_4609_; lean_object* v___x_4611_; 
v___x_4609_ = lean_box(v___x_4607_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4609_);
v___x_4611_ = v___x_4605_;
goto v_reusejp_4610_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v___x_4609_);
v___x_4611_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4610_;
}
v_reusejp_4610_:
{
return v___x_4611_;
}
}
case 1:
{
lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___x_4613_ = lean_box(v___x_4607_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4613_);
v___x_4615_ = v___x_4605_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
case 2:
{
lean_object* v___x_4617_; lean_object* v___x_4619_; 
v___x_4617_ = lean_box(v___x_4607_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4617_);
v___x_4619_ = v___x_4605_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
case 10:
{
lean_object* v___x_4621_; lean_object* v___x_4623_; 
v___x_4621_ = lean_box(v___x_4607_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4621_);
v___x_4623_ = v___x_4605_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v___x_4621_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
default: 
{
if (v___x_4600_ == 0)
{
size_t v___x_4625_; size_t v___x_4626_; 
lean_del_object(v___x_4605_);
v___x_4625_ = ((size_t)1ULL);
v___x_4626_ = lean_usize_add(v_i_4593_, v___x_4625_);
v_i_4593_ = v___x_4626_;
goto _start;
}
else
{
lean_object* v___x_4628_; lean_object* v___x_4630_; 
v___x_4628_ = lean_box(v___x_4607_);
if (v_isShared_4606_ == 0)
{
lean_ctor_set(v___x_4605_, 0, v___x_4628_);
v___x_4630_ = v___x_4605_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v___x_4628_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
}
}
}
else
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
v_a_4633_ = lean_ctor_get(v___x_4602_, 0);
v_isSharedCheck_4640_ = !lean_is_exclusive(v___x_4602_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4635_ = v___x_4602_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4602_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_a_4633_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
return v___x_4638_;
}
}
}
}
else
{
uint8_t v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4641_ = 0;
v___x_4642_ = lean_box(v___x_4641_);
v___x_4643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4642_);
return v___x_4643_;
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg___boxed(lean_object* v_as_4644_, lean_object* v_i_4645_, lean_object* v_stop_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
size_t v_i_boxed_4652_; size_t v_stop_boxed_4653_; lean_object* v_res_4654_; 
v_i_boxed_4652_ = lean_unbox_usize(v_i_4645_);
lean_dec(v_i_4645_);
v_stop_boxed_4653_ = lean_unbox_usize(v_stop_4646_);
lean_dec(v_stop_4646_);
v_res_4654_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg(v_as_4644_, v_i_boxed_4652_, v_stop_boxed_4653_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec_ref(v_as_4644_);
return v_res_4654_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4656_; lean_object* v___x_4657_; 
v___x_4656_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__0));
v___x_4657_ = l_Lean_stringToMessageData(v___x_4656_);
return v___x_4657_;
}
}
static lean_object* _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4659_; lean_object* v___x_4660_; 
v___x_4659_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__2));
v___x_4660_ = l_Lean_stringToMessageData(v___x_4659_);
return v___x_4660_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0(lean_object* v_sorts_4664_, lean_object* v_as_4665_, size_t v_sz_4666_, size_t v_i_4667_, lean_object* v_b_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
uint8_t v___x_4676_; 
v___x_4676_ = lean_usize_dec_lt(v_i_4667_, v_sz_4666_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4677_; 
v___x_4677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4677_, 0, v_b_4668_);
return v___x_4677_;
}
else
{
lean_object* v_fst_4678_; lean_object* v_snd_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4747_; 
v_fst_4678_ = lean_ctor_get(v_b_4668_, 0);
v_snd_4679_ = lean_ctor_get(v_b_4668_, 1);
v_isSharedCheck_4747_ = !lean_is_exclusive(v_b_4668_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4681_ = v_b_4668_;
v_isShared_4682_ = v_isSharedCheck_4747_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_snd_4679_);
lean_inc(v_fst_4678_);
lean_dec(v_b_4668_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4747_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v_a_4683_; lean_object* v_arg_4685_; uint32_t v___x_4715_; lean_object* v___x_4716_; 
v_a_4683_ = lean_array_uget_borrowed(v_as_4665_, v_i_4667_);
v___x_4715_ = lean_unbox_uint32(v_a_4683_);
v___x_4716_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Vampire_Reconstruct_term_spec__1___redArg(v_fst_4678_, v___x_4715_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v___x_4717_; size_t v_sz_4718_; size_t v___x_4719_; uint32_t v___x_4720_; lean_object* v___x_4721_; lean_object* v_fst_4722_; 
v___x_4717_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__4));
v_sz_4718_ = lean_array_size(v_sorts_4664_);
v___x_4719_ = ((size_t)0ULL);
v___x_4720_ = lean_unbox_uint32(v_a_4683_);
v___x_4721_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_formula_spec__0(v___x_4720_, v_sorts_4664_, v_sz_4718_, v___x_4719_, v___x_4717_);
v_fst_4722_ = lean_ctor_get(v___x_4721_, 0);
lean_inc(v_fst_4722_);
lean_dec_ref(v___x_4721_);
if (lean_obj_tag(v_fst_4722_) == 0)
{
goto v___jp_4695_;
}
else
{
lean_object* v_val_4723_; 
v_val_4723_ = lean_ctor_get(v_fst_4722_, 0);
lean_inc(v_val_4723_);
lean_dec_ref_known(v_fst_4722_, 1);
if (lean_obj_tag(v_val_4723_) == 1)
{
lean_object* v_val_4724_; lean_object* v_snd_4725_; lean_object* v___x_4726_; 
v_val_4724_ = lean_ctor_get(v_val_4723_, 0);
lean_inc(v_val_4724_);
lean_dec_ref_known(v_val_4723_, 1);
v_snd_4725_ = lean_ctor_get(v_val_4724_, 1);
lean_inc(v_snd_4725_);
lean_dec(v_val_4724_);
v___x_4726_ = lp_vampireReplay_Vampire_Reconstruct_sortType(v_snd_4725_, v___y_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v___x_4728_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc(v_a_4727_);
lean_dec_ref_known(v___x_4726_, 1);
v___x_4728_ = lp_vampireReplay_Vampire_Reconstruct_someElement(v_a_4727_, v___y_4669_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v_a_4729_; 
v_a_4729_ = lean_ctor_get(v___x_4728_, 0);
lean_inc(v_a_4729_);
lean_dec_ref_known(v___x_4728_, 1);
v_arg_4685_ = v_a_4729_;
goto v___jp_4684_;
}
else
{
lean_object* v_a_4730_; lean_object* v___x_4732_; uint8_t v_isShared_4733_; uint8_t v_isSharedCheck_4737_; 
lean_del_object(v___x_4681_);
lean_dec(v_snd_4679_);
lean_dec(v_fst_4678_);
v_a_4730_ = lean_ctor_get(v___x_4728_, 0);
v_isSharedCheck_4737_ = !lean_is_exclusive(v___x_4728_);
if (v_isSharedCheck_4737_ == 0)
{
v___x_4732_ = v___x_4728_;
v_isShared_4733_ = v_isSharedCheck_4737_;
goto v_resetjp_4731_;
}
else
{
lean_inc(v_a_4730_);
lean_dec(v___x_4728_);
v___x_4732_ = lean_box(0);
v_isShared_4733_ = v_isSharedCheck_4737_;
goto v_resetjp_4731_;
}
v_resetjp_4731_:
{
lean_object* v___x_4735_; 
if (v_isShared_4733_ == 0)
{
v___x_4735_ = v___x_4732_;
goto v_reusejp_4734_;
}
else
{
lean_object* v_reuseFailAlloc_4736_; 
v_reuseFailAlloc_4736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4736_, 0, v_a_4730_);
v___x_4735_ = v_reuseFailAlloc_4736_;
goto v_reusejp_4734_;
}
v_reusejp_4734_:
{
return v___x_4735_;
}
}
}
}
else
{
lean_object* v_a_4738_; lean_object* v___x_4740_; uint8_t v_isShared_4741_; uint8_t v_isSharedCheck_4745_; 
lean_del_object(v___x_4681_);
lean_dec(v_snd_4679_);
lean_dec(v_fst_4678_);
v_a_4738_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4740_ = v___x_4726_;
v_isShared_4741_ = v_isSharedCheck_4745_;
goto v_resetjp_4739_;
}
else
{
lean_inc(v_a_4738_);
lean_dec(v___x_4726_);
v___x_4740_ = lean_box(0);
v_isShared_4741_ = v_isSharedCheck_4745_;
goto v_resetjp_4739_;
}
v_resetjp_4739_:
{
lean_object* v___x_4743_; 
if (v_isShared_4741_ == 0)
{
v___x_4743_ = v___x_4740_;
goto v_reusejp_4742_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_a_4738_);
v___x_4743_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4742_;
}
v_reusejp_4742_:
{
return v___x_4743_;
}
}
}
}
else
{
lean_dec(v_val_4723_);
goto v___jp_4695_;
}
}
}
else
{
lean_object* v_val_4746_; 
v_val_4746_ = lean_ctor_get(v___x_4716_, 0);
lean_inc(v_val_4746_);
lean_dec_ref_known(v___x_4716_, 1);
v_arg_4685_ = v_val_4746_;
goto v___jp_4684_;
}
v___jp_4684_:
{
uint32_t v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4690_; 
v___x_4686_ = lean_unbox_uint32(v_a_4683_);
lean_inc_ref(v_arg_4685_);
v___x_4687_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_fst_4678_, v___x_4686_, v_arg_4685_);
v___x_4688_ = lean_array_push(v_snd_4679_, v_arg_4685_);
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 1, v___x_4688_);
lean_ctor_set(v___x_4681_, 0, v___x_4687_);
v___x_4690_ = v___x_4681_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v___x_4687_);
lean_ctor_set(v_reuseFailAlloc_4694_, 1, v___x_4688_);
v___x_4690_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
size_t v___x_4691_; size_t v___x_4692_; 
v___x_4691_ = ((size_t)1ULL);
v___x_4692_ = lean_usize_add(v_i_4667_, v___x_4691_);
v_i_4667_ = v___x_4692_;
v_b_4668_ = v___x_4690_;
goto _start;
}
}
v___jp_4695_:
{
lean_object* v___x_4696_; uint32_t v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4696_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__1);
v___x_4697_ = lean_unbox_uint32(v_a_4683_);
v___x_4698_ = lean_uint32_to_nat(v___x_4697_);
v___x_4699_ = l_Nat_reprFast(v___x_4698_);
v___x_4700_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4700_, 0, v___x_4699_);
v___x_4701_ = l_Lean_MessageData_ofFormat(v___x_4700_);
v___x_4702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4696_);
lean_ctor_set(v___x_4702_, 1, v___x_4701_);
v___x_4703_ = lean_obj_once(&lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3, &lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3_once, _init_lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___closed__3);
v___x_4704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4702_);
lean_ctor_set(v___x_4704_, 1, v___x_4703_);
v___x_4705_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4704_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
v_arg_4685_ = v_a_4706_;
goto v___jp_4684_;
}
else
{
lean_object* v_a_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4714_; 
lean_del_object(v___x_4681_);
lean_dec(v_snd_4679_);
lean_dec(v_fst_4678_);
v_a_4707_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4714_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4714_ == 0)
{
v___x_4709_ = v___x_4705_;
v_isShared_4710_ = v_isSharedCheck_4714_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_a_4707_);
lean_dec(v___x_4705_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4714_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v___x_4712_; 
if (v_isShared_4710_ == 0)
{
v___x_4712_ = v___x_4709_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4713_; 
v_reuseFailAlloc_4713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4713_, 0, v_a_4707_);
v___x_4712_ = v_reuseFailAlloc_4713_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
return v___x_4712_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0___boxed(lean_object* v_sorts_4748_, lean_object* v_as_4749_, lean_object* v_sz_4750_, lean_object* v_i_4751_, lean_object* v_b_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
size_t v_sz_boxed_4760_; size_t v_i_boxed_4761_; lean_object* v_res_4762_; 
v_sz_boxed_4760_ = lean_unbox_usize(v_sz_4750_);
lean_dec(v_sz_4750_);
v_i_boxed_4761_ = lean_unbox_usize(v_i_4751_);
lean_dec(v_i_4751_);
v_res_4762_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0(v_sorts_4748_, v_as_4749_, v_sz_boxed_4760_, v_i_boxed_4761_, v_b_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_, v___y_4758_);
lean_dec(v___y_4758_);
lean_dec_ref(v___y_4757_);
lean_dec(v___y_4756_);
lean_dec_ref(v___y_4755_);
lean_dec(v___y_4754_);
lean_dec_ref(v___y_4753_);
lean_dec_ref(v_as_4749_);
lean_dec_ref(v_sorts_4748_);
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1(lean_object* v_f_4766_, lean_object* v_as_4767_, size_t v_sz_4768_, size_t v_i_4769_, lean_object* v_b_4770_){
_start:
{
uint8_t v___x_4771_; 
v___x_4771_ = lean_usize_dec_lt(v_i_4769_, v_sz_4768_);
if (v___x_4771_ == 0)
{
lean_inc_ref(v_b_4770_);
return v_b_4770_;
}
else
{
lean_object* v_a_4772_; lean_object* v_fst_4773_; uint32_t v_idx_4774_; uint32_t v_idx_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v_a_4772_ = lean_array_uget_borrowed(v_as_4767_, v_i_4769_);
v_fst_4773_ = lean_ctor_get(v_a_4772_, 0);
v_idx_4774_ = lean_ctor_get_uint32(v_fst_4773_, sizeof(void*)*1);
v_idx_4775_ = lean_ctor_get_uint32(v_f_4766_, sizeof(void*)*1);
v___x_4776_ = lean_box(0);
v___x_4777_ = lean_uint32_dec_eq(v_idx_4774_, v_idx_4775_);
if (v___x_4777_ == 0)
{
lean_object* v___x_4778_; size_t v___x_4779_; size_t v___x_4780_; 
v___x_4778_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___closed__0));
v___x_4779_ = ((size_t)1ULL);
v___x_4780_ = lean_usize_add(v_i_4769_, v___x_4779_);
v_i_4769_ = v___x_4780_;
v_b_4770_ = v___x_4778_;
goto _start;
}
else
{
lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
lean_inc(v_a_4772_);
v___x_4782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4782_, 0, v_a_4772_);
v___x_4783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4783_, 0, v___x_4782_);
v___x_4784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4783_);
lean_ctor_set(v___x_4784_, 1, v___x_4776_);
return v___x_4784_;
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___boxed(lean_object* v_f_4785_, lean_object* v_as_4786_, lean_object* v_sz_4787_, lean_object* v_i_4788_, lean_object* v_b_4789_){
_start:
{
size_t v_sz_boxed_4790_; size_t v_i_boxed_4791_; lean_object* v_res_4792_; 
v_sz_boxed_4790_ = lean_unbox_usize(v_sz_4787_);
lean_dec(v_sz_4787_);
v_i_boxed_4791_ = lean_unbox_usize(v_i_4788_);
lean_dec(v_i_4788_);
v_res_4792_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1(v_f_4785_, v_as_4786_, v_sz_boxed_4790_, v_i_boxed_4791_, v_b_4789_);
lean_dec_ref(v_b_4789_);
lean_dec_ref(v_as_4786_);
lean_dec_ref(v_f_4785_);
return v_res_4792_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3(void){
_start:
{
lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4797_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__2));
v___x_4798_ = l_Lean_stringToMessageData(v___x_4797_);
return v___x_4798_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5(void){
_start:
{
lean_object* v___x_4800_; lean_object* v___x_4801_; 
v___x_4800_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__4));
v___x_4801_ = l_Lean_stringToMessageData(v___x_4800_);
return v___x_4801_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7(void){
_start:
{
lean_object* v___x_4803_; lean_object* v___x_4804_; 
v___x_4803_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__6));
v___x_4804_ = l_Lean_stringToMessageData(v___x_4803_);
return v___x_4804_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9(void){
_start:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___x_4806_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__8));
v___x_4807_ = l_Lean_stringToMessageData(v___x_4806_);
return v___x_4807_;
}
}
static lean_object* _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10(void){
_start:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4808_ = lean_box(0);
v___x_4809_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30));
v___x_4810_ = l_Lean_Expr_const___override(v___x_4809_, v___x_4808_);
return v___x_4810_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(lean_object* v_sorts_4811_, lean_object* v_choices_4812_, lean_object* v_vars_4813_, lean_object* v_f_4814_, lean_object* v_stated_4815_, lean_object* v_target_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = lp_vampireReplay_Vampire_Reconstruct_connectiveOf___redArg(v_f_4814_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4824_) == 0)
{
lean_object* v_a_4825_; uint8_t v___x_4826_; 
v_a_4825_ = lean_ctor_get(v___x_4824_, 0);
lean_inc(v_a_4825_);
lean_dec_ref_known(v___x_4824_, 1);
v___x_4826_ = lean_unbox(v_a_4825_);
lean_dec(v_a_4825_);
switch(v___x_4826_)
{
case 7:
{
lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; uint8_t v___x_4830_; 
lean_inc_ref(v_f_4814_);
v___x_4827_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_4814_);
v___x_4828_ = lean_unsigned_to_nat(0u);
v___x_4829_ = lean_array_get_size(v___x_4827_);
v___x_4830_ = lean_nat_dec_lt(v___x_4828_, v___x_4829_);
if (v___x_4830_ == 0)
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
lean_dec_ref(v___x_4827_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_f_4814_);
lean_dec_ref(v_vars_4813_);
v___x_4831_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerBlock___closed__1);
v___x_4832_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4831_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4832_;
}
else
{
lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; size_t v_sz_4836_; size_t v___x_4837_; lean_object* v___x_4838_; 
v___x_4833_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf___closed__0));
v___x_4834_ = lp_vampireReplay_Vampire_Formula_boundVars(v_f_4814_);
v___x_4835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4835_, 0, v_vars_4813_);
lean_ctor_set(v___x_4835_, 1, v___x_4833_);
v_sz_4836_ = lean_array_size(v___x_4834_);
v___x_4837_ = ((size_t)0ULL);
v___x_4838_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__0(v_sorts_4811_, v___x_4834_, v_sz_4836_, v___x_4837_, v___x_4835_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
lean_dec_ref(v___x_4834_);
if (lean_obj_tag(v___x_4838_) == 0)
{
lean_object* v_a_4839_; lean_object* v_fst_4840_; lean_object* v_snd_4841_; lean_object* v___x_4842_; 
v_a_4839_ = lean_ctor_get(v___x_4838_, 0);
lean_inc(v_a_4839_);
lean_dec_ref_known(v___x_4838_, 1);
v_fst_4840_ = lean_ctor_get(v_a_4839_, 0);
lean_inc(v_fst_4840_);
v_snd_4841_ = lean_ctor_get(v_a_4839_, 1);
lean_inc(v_snd_4841_);
lean_dec(v_a_4839_);
lean_inc_ref(v_stated_4815_);
v___x_4842_ = l_Lean_Meta_instantiateForall(v_stated_4815_, v_snd_4841_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4842_) == 0)
{
lean_object* v_a_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; 
v_a_4843_ = lean_ctor_get(v___x_4842_, 0);
lean_inc(v_a_4843_);
lean_dec_ref_known(v___x_4842_, 1);
v___x_4844_ = lean_array_fget(v___x_4827_, v___x_4828_);
lean_dec_ref(v___x_4827_);
v___x_4845_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(v_sorts_4811_, v_choices_4812_, v_fst_4840_, v___x_4844_, v_a_4843_, v_target_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v___x_4847_; lean_object* v___f_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
v_a_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc(v_a_4846_);
lean_dec_ref_known(v___x_4845_, 1);
v___x_4847_ = lean_box(v___x_4830_);
v___f_4848_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__0___boxed), 11, 3);
lean_closure_set(v___f_4848_, 0, v_snd_4841_);
lean_closure_set(v___f_4848_, 1, v_a_4846_);
lean_closure_set(v___f_4848_, 2, v___x_4847_);
v___x_4849_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_4850_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4849_, v_stated_4815_, v___f_4848_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4850_;
}
else
{
lean_dec(v_snd_4841_);
lean_dec_ref(v_stated_4815_);
return v___x_4845_;
}
}
else
{
lean_dec(v_snd_4841_);
lean_dec(v_fst_4840_);
lean_dec_ref(v___x_4827_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
return v___x_4842_;
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec_ref(v___x_4827_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
v_a_4851_ = lean_ctor_get(v___x_4838_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4838_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4838_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4838_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4859_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__1));
lean_inc_ref(v_f_4814_);
v___x_4860_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_4814_);
v___x_4861_ = lean_array_get_size(v___x_4860_);
lean_inc_ref(v_stated_4815_);
v___x_4862_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(v___x_4859_, v_stated_4815_, v___x_4861_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4862_) == 0)
{
lean_object* v_a_4863_; lean_object* v___x_4871_; size_t v_sz_4872_; size_t v___x_4873_; lean_object* v___x_4874_; lean_object* v_fst_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4932_; 
v_a_4863_ = lean_ctor_get(v___x_4862_, 0);
lean_inc(v_a_4863_);
lean_dec_ref_known(v___x_4862_, 1);
v___x_4871_ = ((lean_object*)(lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1___closed__0));
v_sz_4872_ = lean_array_size(v_choices_4812_);
v___x_4873_ = ((size_t)0ULL);
v___x_4874_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__1(v_f_4814_, v_choices_4812_, v_sz_4872_, v___x_4873_, v___x_4871_);
lean_dec_ref(v_f_4814_);
v_fst_4875_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4932_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4932_ == 0)
{
lean_object* v_unused_4933_; 
v_unused_4933_ = lean_ctor_get(v___x_4874_, 1);
lean_dec(v_unused_4933_);
v___x_4877_ = v___x_4874_;
v_isShared_4878_ = v_isSharedCheck_4932_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_fst_4875_);
lean_dec(v___x_4874_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4932_;
goto v_resetjp_4876_;
}
v___jp_4864_:
{
lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4865_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__3);
v___x_4866_ = l_Lean_indentExpr(v_stated_4815_);
v___x_4867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4865_);
lean_ctor_set(v___x_4867_, 1, v___x_4866_);
v___x_4868_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__5);
v___x_4869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4869_, 0, v___x_4867_);
lean_ctor_set(v___x_4869_, 1, v___x_4868_);
v___x_4870_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4869_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4870_;
}
v_resetjp_4876_:
{
if (lean_obj_tag(v_fst_4875_) == 0)
{
lean_del_object(v___x_4877_);
lean_dec(v_a_4863_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_vars_4813_);
goto v___jp_4864_;
}
else
{
lean_object* v_val_4879_; 
v_val_4879_ = lean_ctor_get(v_fst_4875_, 0);
lean_inc(v_val_4879_);
lean_dec_ref_known(v_fst_4875_, 1);
if (lean_obj_tag(v_val_4879_) == 1)
{
lean_object* v_val_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4931_; 
v_val_4880_ = lean_ctor_get(v_val_4879_, 0);
v_isSharedCheck_4931_ = !lean_is_exclusive(v_val_4879_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4882_ = v_val_4879_;
v_isShared_4883_ = v_isSharedCheck_4931_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_val_4880_);
lean_dec(v_val_4879_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4931_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v_snd_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4929_; 
v_snd_4884_ = lean_ctor_get(v_val_4880_, 1);
v_isSharedCheck_4929_ = !lean_is_exclusive(v_val_4880_);
if (v_isSharedCheck_4929_ == 0)
{
lean_object* v_unused_4930_; 
v_unused_4930_ = lean_ctor_get(v_val_4880_, 0);
lean_dec(v_unused_4930_);
v___x_4886_ = v_val_4880_;
v_isShared_4887_ = v_isSharedCheck_4929_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_snd_4884_);
lean_dec(v_val_4880_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4929_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
uint32_t v___x_4888_; lean_object* v___x_4889_; uint8_t v___x_4890_; 
v___x_4888_ = lean_unbox_uint32(v_snd_4884_);
lean_dec(v_snd_4884_);
v___x_4889_ = lean_uint32_to_nat(v___x_4888_);
v___x_4890_ = lean_nat_dec_lt(v___x_4889_, v___x_4861_);
if (v___x_4890_ == 0)
{
lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4894_; 
lean_dec(v_a_4863_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_vars_4813_);
v___x_4891_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7);
v___x_4892_ = l_Nat_reprFast(v___x_4889_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set_tag(v___x_4882_, 3);
lean_ctor_set(v___x_4882_, 0, v___x_4892_);
v___x_4894_ = v___x_4882_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v___x_4892_);
v___x_4894_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
lean_object* v___x_4895_; lean_object* v___x_4897_; 
v___x_4895_ = l_Lean_MessageData_ofFormat(v___x_4894_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set_tag(v___x_4886_, 7);
lean_ctor_set(v___x_4886_, 1, v___x_4895_);
lean_ctor_set(v___x_4886_, 0, v___x_4891_);
v___x_4897_ = v___x_4886_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v___x_4891_);
lean_ctor_set(v_reuseFailAlloc_4903_, 1, v___x_4895_);
v___x_4897_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
lean_object* v___x_4898_; lean_object* v___x_4900_; 
v___x_4898_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9);
if (v_isShared_4878_ == 0)
{
lean_ctor_set_tag(v___x_4877_, 7);
lean_ctor_set(v___x_4877_, 1, v___x_4898_);
lean_ctor_set(v___x_4877_, 0, v___x_4897_);
v___x_4900_ = v___x_4877_;
goto v_reusejp_4899_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v___x_4897_);
lean_ctor_set(v_reuseFailAlloc_4902_, 1, v___x_4898_);
v___x_4900_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4899_;
}
v_reusejp_4899_:
{
lean_object* v___x_4901_; 
v___x_4901_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4900_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4901_;
}
}
}
}
else
{
lean_object* v___x_4905_; uint8_t v___x_4906_; 
v___x_4905_ = lean_array_get_size(v_a_4863_);
v___x_4906_ = lean_nat_dec_lt(v___x_4889_, v___x_4905_);
if (v___x_4906_ == 0)
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4910_; 
lean_dec(v_a_4863_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_vars_4813_);
v___x_4907_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__7);
v___x_4908_ = l_Nat_reprFast(v___x_4889_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set_tag(v___x_4882_, 3);
lean_ctor_set(v___x_4882_, 0, v___x_4908_);
v___x_4910_ = v___x_4882_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v___x_4908_);
v___x_4910_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
lean_object* v___x_4911_; lean_object* v___x_4913_; 
v___x_4911_ = l_Lean_MessageData_ofFormat(v___x_4910_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set_tag(v___x_4886_, 7);
lean_ctor_set(v___x_4886_, 1, v___x_4911_);
lean_ctor_set(v___x_4886_, 0, v___x_4907_);
v___x_4913_ = v___x_4886_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v___x_4907_);
lean_ctor_set(v_reuseFailAlloc_4919_, 1, v___x_4911_);
v___x_4913_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
lean_object* v___x_4914_; lean_object* v___x_4916_; 
v___x_4914_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__9);
if (v_isShared_4878_ == 0)
{
lean_ctor_set_tag(v___x_4877_, 7);
lean_ctor_set(v___x_4877_, 1, v___x_4914_);
lean_ctor_set(v___x_4877_, 0, v___x_4913_);
v___x_4916_ = v___x_4877_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v___x_4913_);
lean_ctor_set(v_reuseFailAlloc_4918_, 1, v___x_4914_);
v___x_4916_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
lean_object* v___x_4917_; 
v___x_4917_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_4916_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4917_;
}
}
}
}
else
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
lean_del_object(v___x_4886_);
lean_del_object(v___x_4882_);
lean_del_object(v___x_4877_);
v___x_4921_ = lean_array_fget(v___x_4860_, v___x_4889_);
lean_dec_ref(v___x_4860_);
v___x_4922_ = lean_array_fget_borrowed(v_a_4863_, v___x_4889_);
lean_inc(v___x_4922_);
v___x_4923_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(v_sorts_4811_, v_choices_4812_, v_vars_4813_, v___x_4921_, v___x_4922_, v_target_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4923_) == 0)
{
lean_object* v_a_4924_; lean_object* v___x_4925_; lean_object* v___f_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v_a_4924_ = lean_ctor_get(v___x_4923_, 0);
lean_inc(v_a_4924_);
lean_dec_ref_known(v___x_4923_, 1);
v___x_4925_ = lean_box(v___x_4906_);
v___f_4926_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__1___boxed), 12, 4);
lean_closure_set(v___f_4926_, 0, v_a_4863_);
lean_closure_set(v___f_4926_, 1, v___x_4889_);
lean_closure_set(v___f_4926_, 2, v_a_4924_);
lean_closure_set(v___f_4926_, 3, v___x_4925_);
v___x_4927_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_4928_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4927_, v_stated_4815_, v___f_4926_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4928_;
}
else
{
lean_dec(v___x_4889_);
lean_dec(v_a_4863_);
lean_dec_ref(v_stated_4815_);
return v___x_4923_;
}
}
}
}
}
}
else
{
lean_dec(v_val_4879_);
lean_del_object(v___x_4877_);
lean_dec(v_a_4863_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_vars_4813_);
goto v___jp_4864_;
}
}
}
}
else
{
lean_object* v_a_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4941_; 
lean_dec_ref(v___x_4860_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_f_4814_);
lean_dec_ref(v_vars_4813_);
v_a_4934_ = lean_ctor_get(v___x_4862_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4862_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4936_ = v___x_4862_;
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_a_4934_);
lean_dec(v___x_4862_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4934_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
}
case 2:
{
lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4942_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3));
v___x_4943_ = lp_vampireReplay_Vampire_Formula_subformulas(v_f_4814_);
v___x_4944_ = lean_array_get_size(v___x_4943_);
lean_inc_ref(v_stated_4815_);
v___x_4945_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_partsOf(v___x_4942_, v_stated_4815_, v___x_4944_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4945_) == 0)
{
lean_object* v_a_4946_; lean_object* v___x_4947_; lean_object* v___y_4949_; uint8_t v___x_4983_; 
v_a_4946_ = lean_ctor_get(v___x_4945_, 0);
lean_inc(v_a_4946_);
lean_dec_ref_known(v___x_4945_, 1);
v___x_4947_ = lean_unsigned_to_nat(0u);
v___x_4983_ = lean_nat_dec_lt(v___x_4947_, v___x_4944_);
if (v___x_4983_ == 0)
{
lean_object* v___x_4984_; 
v___x_4984_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(v___x_4983_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
v___y_4949_ = v___x_4984_;
goto v___jp_4948_;
}
else
{
if (v___x_4983_ == 0)
{
lean_object* v___x_4985_; 
v___x_4985_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(v___x_4983_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
v___y_4949_ = v___x_4985_;
goto v___jp_4948_;
}
else
{
size_t v___x_4986_; size_t v___x_4987_; lean_object* v___x_4988_; 
v___x_4986_ = ((size_t)0ULL);
v___x_4987_ = lean_usize_of_nat(v___x_4944_);
v___x_4988_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg(v___x_4943_, v___x_4986_, v___x_4987_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4988_) == 0)
{
lean_object* v_a_4989_; uint8_t v___x_4990_; lean_object* v___x_4991_; 
v_a_4989_ = lean_ctor_get(v___x_4988_, 0);
lean_inc(v_a_4989_);
lean_dec_ref_known(v___x_4988_, 1);
v___x_4990_ = lean_unbox(v_a_4989_);
lean_dec(v_a_4989_);
v___x_4991_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__2(v___x_4990_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
v___y_4949_ = v___x_4991_;
goto v___jp_4948_;
}
else
{
v___y_4949_ = v___x_4988_;
goto v___jp_4948_;
}
}
}
v___jp_4948_:
{
if (lean_obj_tag(v___y_4949_) == 0)
{
lean_object* v_a_4950_; uint8_t v___x_4951_; uint8_t v___x_4952_; 
v_a_4950_ = lean_ctor_get(v___y_4949_, 0);
lean_inc(v_a_4950_);
lean_dec_ref_known(v___y_4949_, 1);
v___x_4951_ = 1;
v___x_4952_ = lean_unbox(v_a_4950_);
if (v___x_4952_ == 0)
{
lean_object* v___x_4953_; size_t v_sz_4954_; size_t v___x_4955_; lean_object* v___x_4956_; 
v___x_4953_ = l_Array_zipIdx___redArg(v___x_4943_, v___x_4947_);
v_sz_4954_ = lean_array_size(v___x_4953_);
v___x_4955_ = ((size_t)0ULL);
v___x_4956_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2(v_a_4946_, v_sorts_4811_, v_choices_4812_, v_vars_4813_, v_target_4816_, v_sz_4954_, v___x_4955_, v___x_4953_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v_a_4957_; lean_object* v___f_4958_; lean_object* v___x_4959_; lean_object* v___f_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; 
v_a_4957_ = lean_ctor_get(v___x_4956_, 0);
lean_inc(v_a_4957_);
lean_dec_ref_known(v___x_4956_, 1);
v___f_4958_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___boxed), 10, 1);
lean_closure_set(v___f_4958_, 0, v_a_4957_);
v___x_4959_ = lean_box(v___x_4951_);
v___f_4960_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__4___boxed), 13, 5);
lean_closure_set(v___f_4960_, 0, v_a_4946_);
lean_closure_set(v___f_4960_, 1, v___f_4958_);
lean_closure_set(v___f_4960_, 2, v___x_4947_);
lean_closure_set(v___f_4960_, 3, v_a_4950_);
lean_closure_set(v___f_4960_, 4, v___x_4959_);
v___x_4961_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_4962_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4961_, v_stated_4815_, v___f_4960_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4962_;
}
else
{
lean_object* v_a_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_4970_; 
lean_dec(v_a_4950_);
lean_dec(v_a_4946_);
lean_dec_ref(v_stated_4815_);
v_a_4963_ = lean_ctor_get(v___x_4956_, 0);
v_isSharedCheck_4970_ = !lean_is_exclusive(v___x_4956_);
if (v_isSharedCheck_4970_ == 0)
{
v___x_4965_ = v___x_4956_;
v_isShared_4966_ = v_isSharedCheck_4970_;
goto v_resetjp_4964_;
}
else
{
lean_inc(v_a_4963_);
lean_dec(v___x_4956_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_4970_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v___x_4968_; 
if (v_isShared_4966_ == 0)
{
v___x_4968_ = v___x_4965_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4969_; 
v_reuseFailAlloc_4969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4969_, 0, v_a_4963_);
v___x_4968_ = v_reuseFailAlloc_4969_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
return v___x_4968_;
}
}
}
}
else
{
lean_object* v___x_4971_; lean_object* v___f_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
lean_dec(v_a_4950_);
lean_dec(v_a_4946_);
lean_dec_ref(v___x_4943_);
lean_dec_ref(v_vars_4813_);
v___x_4971_ = lean_box(v___x_4951_);
lean_inc_ref(v_stated_4815_);
v___f_4972_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__5___boxed), 11, 3);
lean_closure_set(v___f_4972_, 0, v_stated_4815_);
lean_closure_set(v___f_4972_, 1, v_target_4816_);
lean_closure_set(v___f_4972_, 2, v___x_4971_);
v___x_4973_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_4974_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_4973_, v_stated_4815_, v___f_4972_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_4974_;
}
}
else
{
lean_object* v_a_4975_; lean_object* v___x_4977_; uint8_t v_isShared_4978_; uint8_t v_isSharedCheck_4982_; 
lean_dec(v_a_4946_);
lean_dec_ref(v___x_4943_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_vars_4813_);
v_a_4975_ = lean_ctor_get(v___y_4949_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v___y_4949_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4977_ = v___y_4949_;
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
else
{
lean_inc(v_a_4975_);
lean_dec(v___y_4949_);
v___x_4977_ = lean_box(0);
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
v_resetjp_4976_:
{
lean_object* v___x_4980_; 
if (v_isShared_4978_ == 0)
{
v___x_4980_ = v___x_4977_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_a_4975_);
v___x_4980_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
return v___x_4980_;
}
}
}
}
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_4999_; 
lean_dec_ref(v___x_4943_);
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_vars_4813_);
v_a_4992_ = lean_ctor_get(v___x_4945_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4994_ = v___x_4945_;
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4945_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_4999_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4997_; 
if (v_isShared_4995_ == 0)
{
v___x_4997_ = v___x_4994_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_a_4992_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
}
}
case 10:
{
lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___f_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_f_4814_);
lean_dec_ref(v_vars_4813_);
v___x_5000_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_5001_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__29));
v___f_5002_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__6___boxed), 10, 2);
lean_closure_set(v___f_5002_, 0, v___x_5001_);
lean_closure_set(v___f_5002_, 1, v_target_4816_);
v___x_5003_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__10);
v___x_5004_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_5000_, v___x_5003_, v___f_5002_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_5004_;
}
default: 
{
lean_object* v___f_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
lean_dec_ref(v_f_4814_);
lean_dec_ref(v_vars_4813_);
v___f_5005_ = lean_alloc_closure((void*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__7___boxed), 9, 1);
lean_closure_set(v___f_5005_, 0, v_target_4816_);
v___x_5006_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___closed__1));
v___x_5007_ = lp_vampireReplay_Lean_Meta_withLocalDeclD___at___00Vampire_Reconstruct_withVars_go_spec__1___redArg(v___x_5006_, v_stated_4815_, v___f_5005_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_, v_a_4821_, v_a_4822_);
return v___x_5007_;
}
}
}
else
{
lean_object* v_a_5008_; lean_object* v___x_5010_; uint8_t v_isShared_5011_; uint8_t v_isSharedCheck_5015_; 
lean_dec_ref(v_target_4816_);
lean_dec_ref(v_stated_4815_);
lean_dec_ref(v_f_4814_);
lean_dec_ref(v_vars_4813_);
v_a_5008_ = lean_ctor_get(v___x_4824_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v___x_4824_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5010_ = v___x_4824_;
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
else
{
lean_inc(v_a_5008_);
lean_dec(v___x_4824_);
v___x_5010_ = lean_box(0);
v_isShared_5011_ = v_isSharedCheck_5015_;
goto v_resetjp_5009_;
}
v_resetjp_5009_:
{
lean_object* v___x_5013_; 
if (v_isShared_5011_ == 0)
{
v___x_5013_ = v___x_5010_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_a_5008_);
v___x_5013_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
return v___x_5013_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2(lean_object* v_a_5016_, lean_object* v_sorts_5017_, lean_object* v_choices_5018_, lean_object* v_vars_5019_, lean_object* v_target_5020_, size_t v_sz_5021_, size_t v_i_5022_, lean_object* v_bs_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_, lean_object* v___y_5029_){
_start:
{
uint8_t v___x_5031_; 
v___x_5031_ = lean_usize_dec_lt(v_i_5022_, v_sz_5021_);
if (v___x_5031_ == 0)
{
lean_object* v___x_5032_; 
lean_dec_ref(v_target_5020_);
lean_dec_ref(v_vars_5019_);
v___x_5032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5032_, 0, v_bs_5023_);
return v___x_5032_;
}
else
{
lean_object* v_v_5033_; lean_object* v_fst_5034_; lean_object* v_snd_5035_; lean_object* v___x_5036_; lean_object* v_bs_x27_5037_; lean_object* v___y_5039_; lean_object* v___x_5053_; uint8_t v___x_5054_; 
v_v_5033_ = lean_array_uget_borrowed(v_bs_5023_, v_i_5022_);
v_fst_5034_ = lean_ctor_get(v_v_5033_, 0);
lean_inc(v_fst_5034_);
v_snd_5035_ = lean_ctor_get(v_v_5033_, 1);
lean_inc(v_snd_5035_);
v___x_5036_ = lean_unsigned_to_nat(0u);
v_bs_x27_5037_ = lean_array_uset(v_bs_5023_, v_i_5022_, v___x_5036_);
v___x_5053_ = lean_array_get_size(v_a_5016_);
v___x_5054_ = lean_nat_dec_lt(v_snd_5035_, v___x_5053_);
if (v___x_5054_ == 0)
{
lean_object* v___x_5055_; lean_object* v___x_5056_; 
lean_dec(v_snd_5035_);
lean_dec(v_fst_5034_);
v___x_5055_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___lam__3___closed__1);
v___x_5056_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_5055_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
v___y_5039_ = v___x_5056_;
goto v___jp_5038_;
}
else
{
lean_object* v___x_5057_; lean_object* v___x_5058_; 
v___x_5057_ = lean_array_fget_borrowed(v_a_5016_, v_snd_5035_);
lean_dec(v_snd_5035_);
lean_inc_ref(v_target_5020_);
lean_inc(v___x_5057_);
lean_inc_ref(v_vars_5019_);
v___x_5058_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(v_sorts_5017_, v_choices_5018_, v_vars_5019_, v_fst_5034_, v___x_5057_, v_target_5020_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_, v___y_5028_, v___y_5029_);
v___y_5039_ = v___x_5058_;
goto v___jp_5038_;
}
v___jp_5038_:
{
if (lean_obj_tag(v___y_5039_) == 0)
{
lean_object* v_a_5040_; size_t v___x_5041_; size_t v___x_5042_; lean_object* v___x_5043_; 
v_a_5040_ = lean_ctor_get(v___y_5039_, 0);
lean_inc(v_a_5040_);
lean_dec_ref_known(v___y_5039_, 1);
v___x_5041_ = ((size_t)1ULL);
v___x_5042_ = lean_usize_add(v_i_5022_, v___x_5041_);
v___x_5043_ = lean_array_uset(v_bs_x27_5037_, v_i_5022_, v_a_5040_);
v_i_5022_ = v___x_5042_;
v_bs_5023_ = v___x_5043_;
goto _start;
}
else
{
lean_object* v_a_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5052_; 
lean_dec_ref(v_bs_x27_5037_);
lean_dec_ref(v_target_5020_);
lean_dec_ref(v_vars_5019_);
v_a_5045_ = lean_ctor_get(v___y_5039_, 0);
v_isSharedCheck_5052_ = !lean_is_exclusive(v___y_5039_);
if (v_isSharedCheck_5052_ == 0)
{
v___x_5047_ = v___y_5039_;
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_a_5045_);
lean_dec(v___y_5039_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5050_; 
if (v_isShared_5048_ == 0)
{
v___x_5050_ = v___x_5047_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v_a_5045_);
v___x_5050_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
return v___x_5050_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2___boxed(lean_object* v_a_5059_, lean_object* v_sorts_5060_, lean_object* v_choices_5061_, lean_object* v_vars_5062_, lean_object* v_target_5063_, lean_object* v_sz_5064_, lean_object* v_i_5065_, lean_object* v_bs_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_, lean_object* v___y_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_){
_start:
{
size_t v_sz_boxed_5074_; size_t v_i_boxed_5075_; lean_object* v_res_5076_; 
v_sz_boxed_5074_ = lean_unbox_usize(v_sz_5064_);
lean_dec(v_sz_5064_);
v_i_boxed_5075_ = lean_unbox_usize(v_i_5065_);
lean_dec(v_i_5065_);
v_res_5076_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__2(v_a_5059_, v_sorts_5060_, v_choices_5061_, v_vars_5062_, v_target_5063_, v_sz_boxed_5074_, v_i_boxed_5075_, v_bs_5066_, v___y_5067_, v___y_5068_, v___y_5069_, v___y_5070_, v___y_5071_, v___y_5072_);
lean_dec(v___y_5072_);
lean_dec_ref(v___y_5071_);
lean_dec(v___y_5070_);
lean_dec_ref(v___y_5069_);
lean_dec(v___y_5068_);
lean_dec_ref(v___y_5067_);
lean_dec_ref(v_choices_5061_);
lean_dec_ref(v_sorts_5060_);
lean_dec_ref(v_a_5059_);
return v_res_5076_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend___boxed(lean_object* v_sorts_5077_, lean_object* v_choices_5078_, lean_object* v_vars_5079_, lean_object* v_f_5080_, lean_object* v_stated_5081_, lean_object* v_target_5082_, lean_object* v_a_5083_, lean_object* v_a_5084_, lean_object* v_a_5085_, lean_object* v_a_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_){
_start:
{
lean_object* v_res_5090_; 
v_res_5090_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(v_sorts_5077_, v_choices_5078_, v_vars_5079_, v_f_5080_, v_stated_5081_, v_target_5082_, v_a_5083_, v_a_5084_, v_a_5085_, v_a_5086_, v_a_5087_, v_a_5088_);
lean_dec(v_a_5088_);
lean_dec_ref(v_a_5087_);
lean_dec(v_a_5086_);
lean_dec_ref(v_a_5085_);
lean_dec(v_a_5084_);
lean_dec_ref(v_a_5083_);
lean_dec_ref(v_choices_5078_);
lean_dec_ref(v_sorts_5077_);
return v_res_5090_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3(lean_object* v_as_5091_, size_t v_i_5092_, size_t v_stop_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_, lean_object* v___y_5099_){
_start:
{
lean_object* v___x_5101_; 
v___x_5101_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___redArg(v_as_5091_, v_i_5092_, v_stop_5093_, v___y_5096_, v___y_5097_, v___y_5098_, v___y_5099_);
return v___x_5101_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3___boxed(lean_object* v_as_5102_, lean_object* v_i_5103_, lean_object* v_stop_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_){
_start:
{
size_t v_i_boxed_5112_; size_t v_stop_boxed_5113_; lean_object* v_res_5114_; 
v_i_boxed_5112_ = lean_unbox_usize(v_i_5103_);
lean_dec(v_i_5103_);
v_stop_boxed_5113_ = lean_unbox_usize(v_stop_5104_);
lean_dec(v_stop_5104_);
v_res_5114_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend_spec__3(v_as_5102_, v_i_boxed_5112_, v_stop_boxed_5113_, v___y_5105_, v___y_5106_, v___y_5107_, v___y_5108_, v___y_5109_, v___y_5110_);
lean_dec(v___y_5110_);
lean_dec_ref(v___y_5109_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5105_);
lean_dec_ref(v_as_5102_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0(lean_object* v_as_5115_, size_t v_sz_5116_, size_t v_i_5117_, lean_object* v_b_5118_, lean_object* v___y_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_){
_start:
{
uint8_t v___x_5126_; 
v___x_5126_ = lean_usize_dec_lt(v_i_5117_, v_sz_5116_);
if (v___x_5126_ == 0)
{
lean_object* v___x_5127_; 
v___x_5127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5127_, 0, v_b_5118_);
return v___x_5127_;
}
else
{
lean_object* v_a_5128_; lean_object* v_fst_5129_; lean_object* v_snd_5130_; lean_object* v___x_5131_; 
v_a_5128_ = lean_array_uget_borrowed(v_as_5115_, v_i_5117_);
v_fst_5129_ = lean_ctor_get(v_a_5128_, 0);
v_snd_5130_ = lean_ctor_get(v_a_5128_, 1);
lean_inc(v_snd_5130_);
v___x_5131_ = lp_vampireReplay_Vampire_Reconstruct_term(v_b_5118_, v_snd_5130_, v___y_5119_, v___y_5120_, v___y_5121_, v___y_5122_, v___y_5123_, v___y_5124_);
if (lean_obj_tag(v___x_5131_) == 0)
{
lean_object* v_a_5132_; uint32_t v___x_5133_; lean_object* v___x_5134_; size_t v___x_5135_; size_t v___x_5136_; 
v_a_5132_ = lean_ctor_get(v___x_5131_, 0);
lean_inc(v_a_5132_);
lean_dec_ref_known(v___x_5131_, 1);
v___x_5133_ = lean_unbox_uint32(v_fst_5129_);
v___x_5134_ = lp_vampireReplay_Std_DHashMap_Internal_Raw_u2080_insert___at___00Vampire_Reconstruct_withVars_go_spec__0___redArg(v_b_5118_, v___x_5133_, v_a_5132_);
v___x_5135_ = ((size_t)1ULL);
v___x_5136_ = lean_usize_add(v_i_5117_, v___x_5135_);
v_i_5117_ = v___x_5136_;
v_b_5118_ = v___x_5134_;
goto _start;
}
else
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5145_; 
lean_dec_ref(v_b_5118_);
v_a_5138_ = lean_ctor_get(v___x_5131_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5140_ = v___x_5131_;
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5131_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5143_; 
if (v_isShared_5141_ == 0)
{
v___x_5143_ = v___x_5140_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_a_5138_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0___boxed(lean_object* v_as_5146_, lean_object* v_sz_5147_, lean_object* v_i_5148_, lean_object* v_b_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_){
_start:
{
size_t v_sz_boxed_5157_; size_t v_i_boxed_5158_; lean_object* v_res_5159_; 
v_sz_boxed_5157_ = lean_unbox_usize(v_sz_5147_);
lean_dec(v_sz_5147_);
v_i_boxed_5158_ = lean_unbox_usize(v_i_5148_);
lean_dec(v_i_5148_);
v_res_5159_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0(v_as_5146_, v_sz_boxed_5157_, v_i_boxed_5158_, v_b_5149_, v___y_5150_, v___y_5151_, v___y_5152_, v___y_5153_, v___y_5154_, v___y_5155_);
lean_dec(v___y_5155_);
lean_dec_ref(v___y_5154_);
lean_dec(v___y_5153_);
lean_dec_ref(v___y_5152_);
lean_dec(v___y_5151_);
lean_dec_ref(v___y_5150_);
lean_dec_ref(v_as_5146_);
return v_res_5159_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0(lean_object* v___x_5160_, lean_object* v___x_5161_, lean_object* v_unit_5162_, lean_object* v_snd_5163_, lean_object* v_sorts_5164_, lean_object* v_val_5165_, lean_object* v_fst_5166_, uint8_t v___x_5167_, lean_object* v_xs_5168_, lean_object* v_target_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_){
_start:
{
lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; size_t v_sz_5180_; size_t v___x_5181_; lean_object* v___x_5182_; 
v___x_5177_ = lean_obj_once(&lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0, &lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0_once, _init_lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_registerAlong___closed__0);
lean_inc(v___x_5160_);
v___x_5178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5160_);
lean_ctor_set(v___x_5178_, 1, v___x_5177_);
v___x_5179_ = l_Array_zip___redArg(v_xs_5168_, v___x_5161_);
v_sz_5180_ = lean_array_size(v___x_5179_);
v___x_5181_ = ((size_t)0ULL);
v___x_5182_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_relateLiterals_spec__0___redArg(v___x_5179_, v_sz_5180_, v___x_5181_, v___x_5178_);
lean_dec_ref(v___x_5179_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v_a_5183_; lean_object* v___x_5184_; 
v_a_5183_ = lean_ctor_get(v___x_5182_, 0);
lean_inc(v_a_5183_);
lean_dec_ref_known(v___x_5182_, 1);
lean_inc_ref(v_unit_5162_);
v___x_5184_ = lp_vampireReplay_Vampire_Unit_genClause_x3f(v_unit_5162_);
if (lean_obj_tag(v___x_5184_) == 0)
{
lean_object* v___x_5185_; lean_object* v_a_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; 
lean_dec(v___x_5160_);
v___x_5185_ = lp_vampireReplay_Lean_instantiateMVars___at___00Vampire_Reconstruct_witnessAgainst_spec__0___redArg(v_snd_5163_, v___y_5173_);
v_a_5186_ = lean_ctor_get(v___x_5185_, 0);
lean_inc(v_a_5186_);
lean_dec_ref(v___x_5185_);
v___x_5187_ = lp_vampireReplay_Vampire_Unit_conjunctChoices(v_unit_5162_);
v___x_5188_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_descend(v_sorts_5164_, v___x_5187_, v_a_5183_, v_val_5165_, v_a_5186_, v_target_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
lean_dec_ref(v___x_5187_);
lean_dec_ref(v_sorts_5164_);
if (lean_obj_tag(v___x_5188_) == 0)
{
lean_object* v_a_5189_; lean_object* v___x_5190_; uint8_t v___x_5191_; uint8_t v___x_5192_; lean_object* v___x_5193_; 
v_a_5189_ = lean_ctor_get(v___x_5188_, 0);
lean_inc(v_a_5189_);
lean_dec_ref_known(v___x_5188_, 1);
v___x_5190_ = l_Lean_Expr_app___override(v_a_5189_, v_fst_5166_);
v___x_5191_ = 0;
v___x_5192_ = 1;
v___x_5193_ = l_Lean_Meta_mkLambdaFVars(v_xs_5168_, v___x_5190_, v___x_5191_, v___x_5167_, v___x_5191_, v___x_5167_, v___x_5192_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
return v___x_5193_;
}
else
{
lean_dec_ref(v_fst_5166_);
return v___x_5188_;
}
}
else
{
lean_object* v_val_5194_; lean_object* v___x_5195_; size_t v_sz_5196_; lean_object* v___x_5197_; 
lean_dec_ref(v_val_5165_);
lean_dec_ref(v_snd_5163_);
lean_dec_ref(v_unit_5162_);
v_val_5194_ = lean_ctor_get(v___x_5184_, 0);
lean_inc_n(v_val_5194_, 2);
lean_dec_ref_known(v___x_5184_, 1);
v___x_5195_ = lp_vampireReplay_Vampire_GenClause_bindings(v_val_5194_);
v_sz_5196_ = lean_array_size(v___x_5195_);
v___x_5197_ = lp_vampireReplay___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Vampire_Reconstruct_Clausify_clausify_spec__0(v___x_5195_, v_sz_5196_, v___x_5181_, v_a_5183_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
lean_dec_ref(v___x_5195_);
if (lean_obj_tag(v___x_5197_) == 0)
{
lean_object* v_a_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; 
v_a_5198_ = lean_ctor_get(v___x_5197_, 0);
lean_inc_n(v_a_5198_, 2);
lean_dec_ref_known(v___x_5197_, 1);
lean_inc_ref(v_sorts_5164_);
v___x_5199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5199_, 0, v_sorts_5164_);
lean_ctor_set(v___x_5199_, 1, v_a_5198_);
lean_ctor_set(v___x_5199_, 2, v_fst_5166_);
v___x_5200_ = lean_mk_empty_array_with_capacity(v___x_5160_);
lean_inc_ref_n(v___x_5200_, 2);
lean_inc(v_val_5194_);
v___x_5201_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_chainTo(v_val_5194_, v___x_5200_);
v___x_5202_ = lean_box(0);
v___x_5203_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_proveChain(v___x_5199_, v___x_5201_, v___x_5160_, v___x_5202_, v___x_5200_, v___x_5200_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
if (lean_obj_tag(v___x_5203_) == 0)
{
lean_object* v_a_5204_; lean_object* v___x_5205_; 
v_a_5204_ = lean_ctor_get(v___x_5203_, 0);
lean_inc(v_a_5204_);
lean_dec_ref_known(v___x_5203_, 1);
v___x_5205_ = lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_genParts(v_sorts_5164_, v_a_5198_, v_val_5194_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
if (lean_obj_tag(v___x_5205_) == 0)
{
lean_object* v_a_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; 
v_a_5206_ = lean_ctor_get(v___x_5205_, 0);
lean_inc(v_a_5206_);
lean_dec_ref_known(v___x_5205_, 1);
v___x_5207_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_subformulaParts___closed__3));
v___x_5208_ = ((lean_object*)(lp_vampireReplay___private_Vampire_Reconstruct_Rules_Clausify_0__Vampire_Reconstruct_Clausify_replaced___closed__30));
v___x_5209_ = lp_vampireReplay_Vampire_Reconstruct_junction(v___x_5207_, v___x_5208_, v_a_5206_);
v___x_5210_ = lp_vampireReplay_Vampire_Reconstruct_carryAll(v___x_5209_, v_target_5169_, v_a_5204_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
if (lean_obj_tag(v___x_5210_) == 0)
{
lean_object* v_a_5211_; uint8_t v___x_5212_; uint8_t v___x_5213_; lean_object* v___x_5214_; 
v_a_5211_ = lean_ctor_get(v___x_5210_, 0);
lean_inc(v_a_5211_);
lean_dec_ref_known(v___x_5210_, 1);
v___x_5212_ = 0;
v___x_5213_ = 1;
v___x_5214_ = l_Lean_Meta_mkLambdaFVars(v_xs_5168_, v_a_5211_, v___x_5212_, v___x_5167_, v___x_5212_, v___x_5167_, v___x_5213_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_);
return v___x_5214_;
}
else
{
return v___x_5210_;
}
}
else
{
lean_object* v_a_5215_; lean_object* v___x_5217_; uint8_t v_isShared_5218_; uint8_t v_isSharedCheck_5222_; 
lean_dec(v_a_5204_);
lean_dec_ref(v_target_5169_);
v_a_5215_ = lean_ctor_get(v___x_5205_, 0);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5205_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5217_ = v___x_5205_;
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
else
{
lean_inc(v_a_5215_);
lean_dec(v___x_5205_);
v___x_5217_ = lean_box(0);
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
v_resetjp_5216_:
{
lean_object* v___x_5220_; 
if (v_isShared_5218_ == 0)
{
v___x_5220_ = v___x_5217_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v_a_5215_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
}
else
{
lean_dec(v_a_5198_);
lean_dec(v_val_5194_);
lean_dec_ref(v_target_5169_);
lean_dec_ref(v_sorts_5164_);
return v___x_5203_;
}
}
else
{
lean_object* v_a_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5230_; 
lean_dec(v_val_5194_);
lean_dec_ref(v_target_5169_);
lean_dec_ref(v_fst_5166_);
lean_dec_ref(v_sorts_5164_);
lean_dec(v___x_5160_);
v_a_5223_ = lean_ctor_get(v___x_5197_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5197_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5225_ = v___x_5197_;
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
else
{
lean_inc(v_a_5223_);
lean_dec(v___x_5197_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5228_; 
if (v_isShared_5226_ == 0)
{
v___x_5228_ = v___x_5225_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_a_5223_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
return v___x_5228_;
}
}
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
lean_dec_ref(v_target_5169_);
lean_dec_ref(v_fst_5166_);
lean_dec_ref(v_val_5165_);
lean_dec_ref(v_sorts_5164_);
lean_dec_ref(v_snd_5163_);
lean_dec_ref(v_unit_5162_);
lean_dec(v___x_5160_);
v_a_5231_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5182_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5182_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0___boxed(lean_object** _args){
lean_object* v___x_5239_ = _args[0];
lean_object* v___x_5240_ = _args[1];
lean_object* v_unit_5241_ = _args[2];
lean_object* v_snd_5242_ = _args[3];
lean_object* v_sorts_5243_ = _args[4];
lean_object* v_val_5244_ = _args[5];
lean_object* v_fst_5245_ = _args[6];
lean_object* v___x_5246_ = _args[7];
lean_object* v_xs_5247_ = _args[8];
lean_object* v_target_5248_ = _args[9];
lean_object* v___y_5249_ = _args[10];
lean_object* v___y_5250_ = _args[11];
lean_object* v___y_5251_ = _args[12];
lean_object* v___y_5252_ = _args[13];
lean_object* v___y_5253_ = _args[14];
lean_object* v___y_5254_ = _args[15];
lean_object* v___y_5255_ = _args[16];
_start:
{
uint8_t v___x_7169__boxed_5256_; lean_object* v_res_5257_; 
v___x_7169__boxed_5256_ = lean_unbox(v___x_5246_);
v_res_5257_ = lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0(v___x_5239_, v___x_5240_, v_unit_5241_, v_snd_5242_, v_sorts_5243_, v_val_5244_, v_fst_5245_, v___x_7169__boxed_5256_, v_xs_5247_, v_target_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_, v___y_5254_);
lean_dec(v___y_5254_);
lean_dec_ref(v___y_5253_);
lean_dec(v___y_5252_);
lean_dec_ref(v___y_5251_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec_ref(v_xs_5247_);
lean_dec_ref(v___x_5240_);
return v_res_5257_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1(void){
_start:
{
lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5259_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__0));
v___x_5260_ = l_Lean_stringToMessageData(v___x_5259_);
return v___x_5260_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3(void){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5262_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__2));
v___x_5263_ = l_Lean_stringToMessageData(v___x_5262_);
return v___x_5263_;
}
}
static lean_object* _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5(void){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5265_ = ((lean_object*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__4));
v___x_5266_ = l_Lean_stringToMessageData(v___x_5265_);
return v___x_5266_;
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify(lean_object* v_step_5267_, lean_object* v_a_5268_, lean_object* v_a_5269_, lean_object* v_a_5270_, lean_object* v_a_5271_, lean_object* v_a_5272_, lean_object* v_a_5273_){
_start:
{
lean_object* v_unit_5275_; lean_object* v_premises_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; uint8_t v___x_5279_; 
v_unit_5275_ = lean_ctor_get(v_step_5267_, 0);
lean_inc_ref(v_unit_5275_);
v_premises_5276_ = lean_ctor_get(v_step_5267_, 1);
v___x_5277_ = lean_array_get_size(v_premises_5276_);
v___x_5278_ = lean_unsigned_to_nat(1u);
v___x_5279_ = lean_nat_dec_eq(v___x_5277_, v___x_5278_);
if (v___x_5279_ == 0)
{
lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; 
lean_dec_ref(v_unit_5275_);
lean_dec_ref(v_step_5267_);
v___x_5280_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1, &lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1_once, _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__1);
v___x_5281_ = l_Nat_reprFast(v___x_5277_);
v___x_5282_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5282_, 0, v___x_5281_);
v___x_5283_ = l_Lean_MessageData_ofFormat(v___x_5282_);
v___x_5284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5284_, 0, v___x_5280_);
lean_ctor_set(v___x_5284_, 1, v___x_5283_);
v___x_5285_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_5284_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_);
return v___x_5285_;
}
else
{
lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v_fst_5288_; lean_object* v_snd_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; uint8_t v___x_5292_; 
v___x_5286_ = lean_unsigned_to_nat(0u);
v___x_5287_ = lean_array_fget_borrowed(v_premises_5276_, v___x_5286_);
v_fst_5288_ = lean_ctor_get(v___x_5287_, 0);
lean_inc(v_fst_5288_);
v_snd_5289_ = lean_ctor_get(v___x_5287_, 1);
lean_inc(v_snd_5289_);
lean_inc_ref(v_unit_5275_);
v___x_5290_ = lp_vampireReplay_Vampire_Unit_parents(v_unit_5275_);
v___x_5291_ = lean_array_get_size(v___x_5290_);
v___x_5292_ = lean_nat_dec_lt(v___x_5286_, v___x_5291_);
if (v___x_5292_ == 0)
{
lean_object* v___x_5293_; lean_object* v___x_5294_; 
lean_dec_ref(v___x_5290_);
lean_dec(v_snd_5289_);
lean_dec(v_fst_5288_);
lean_dec_ref(v_unit_5275_);
lean_dec_ref(v_step_5267_);
v___x_5293_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3, &lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3_once, _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__3);
v___x_5294_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_5293_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_);
return v___x_5294_;
}
else
{
lean_object* v___x_5295_; lean_object* v___x_5296_; 
v___x_5295_ = lean_array_fget(v___x_5290_, v___x_5286_);
lean_dec_ref(v___x_5290_);
lean_inc(v___x_5295_);
v___x_5296_ = lp_vampireReplay_Vampire_Unit_formula_x3f(v___x_5295_);
if (lean_obj_tag(v___x_5296_) == 1)
{
lean_object* v_val_5297_; lean_object* v___x_5299_; uint8_t v_isShared_5300_; uint8_t v_isSharedCheck_5314_; 
v_val_5297_ = lean_ctor_get(v___x_5296_, 0);
v_isSharedCheck_5314_ = !lean_is_exclusive(v___x_5296_);
if (v_isSharedCheck_5314_ == 0)
{
v___x_5299_ = v___x_5296_;
v_isShared_5300_ = v_isSharedCheck_5314_;
goto v_resetjp_5298_;
}
else
{
lean_inc(v_val_5297_);
lean_dec(v___x_5296_);
v___x_5299_ = lean_box(0);
v_isShared_5300_ = v_isSharedCheck_5314_;
goto v_resetjp_5298_;
}
v_resetjp_5298_:
{
lean_object* v___x_5301_; 
v___x_5301_ = lp_vampireReplay_Vampire_Reconstruct_Step_conclusion(v_step_5267_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_);
if (lean_obj_tag(v___x_5301_) == 0)
{
lean_object* v_a_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v_sorts_5305_; lean_object* v___x_5306_; lean_object* v___f_5307_; lean_object* v___x_5308_; lean_object* v___x_5310_; 
v_a_5302_ = lean_ctor_get(v___x_5301_, 0);
lean_inc(v_a_5302_);
lean_dec_ref_known(v___x_5301_, 1);
v___x_5303_ = lp_vampireReplay_Vampire_Unit_varSorts(v___x_5295_);
lean_inc_ref(v_unit_5275_);
v___x_5304_ = lp_vampireReplay_Vampire_Unit_varSorts(v_unit_5275_);
v_sorts_5305_ = l_Array_append___redArg(v___x_5303_, v___x_5304_);
v___x_5306_ = lean_box(v___x_5292_);
lean_inc_ref(v___x_5304_);
v___f_5307_ = lean_alloc_closure((void*)(lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___lam__0___boxed), 17, 8);
lean_closure_set(v___f_5307_, 0, v___x_5286_);
lean_closure_set(v___f_5307_, 1, v___x_5304_);
lean_closure_set(v___f_5307_, 2, v_unit_5275_);
lean_closure_set(v___f_5307_, 3, v_snd_5289_);
lean_closure_set(v___f_5307_, 4, v_sorts_5305_);
lean_closure_set(v___f_5307_, 5, v_val_5297_);
lean_closure_set(v___f_5307_, 6, v_fst_5288_);
lean_closure_set(v___f_5307_, 7, v___x_5306_);
v___x_5308_ = lean_array_get_size(v___x_5304_);
lean_dec_ref(v___x_5304_);
if (v_isShared_5300_ == 0)
{
lean_ctor_set(v___x_5299_, 0, v___x_5308_);
v___x_5310_ = v___x_5299_;
goto v_reusejp_5309_;
}
else
{
lean_object* v_reuseFailAlloc_5313_; 
v_reuseFailAlloc_5313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5313_, 0, v___x_5308_);
v___x_5310_ = v_reuseFailAlloc_5313_;
goto v_reusejp_5309_;
}
v_reusejp_5309_:
{
uint8_t v___x_5311_; lean_object* v___x_5312_; 
v___x_5311_ = 0;
v___x_5312_ = lp_vampireReplay_Lean_Meta_forallBoundedTelescope___at___00Vampire_Reconstruct_relateLiterals_spec__6___redArg(v_a_5302_, v___x_5310_, v___f_5307_, v___x_5311_, v___x_5311_, v_a_5268_, v_a_5269_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_);
return v___x_5312_;
}
}
else
{
lean_del_object(v___x_5299_);
lean_dec(v_val_5297_);
lean_dec(v___x_5295_);
lean_dec(v_snd_5289_);
lean_dec(v_fst_5288_);
lean_dec_ref(v_unit_5275_);
return v___x_5301_;
}
}
}
else
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
lean_dec(v___x_5296_);
lean_dec(v___x_5295_);
lean_dec(v_snd_5289_);
lean_dec(v_fst_5288_);
lean_dec_ref(v_unit_5275_);
lean_dec_ref(v_step_5267_);
v___x_5315_ = lean_obj_once(&lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5, &lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5_once, _init_lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___closed__5);
v___x_5316_ = lp_vampireReplay_Lean_throwError___at___00Vampire_Reconstruct_throwIntroduced_spec__0___redArg(v___x_5315_, v_a_5270_, v_a_5271_, v_a_5272_, v_a_5273_);
return v___x_5316_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify___boxed(lean_object* v_step_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_, lean_object* v_a_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_){
_start:
{
lean_object* v_res_5325_; 
v_res_5325_ = lp_vampireReplay_Vampire_Reconstruct_Clausify_clausify(v_step_5317_, v_a_5318_, v_a_5319_, v_a_5320_, v_a_5321_, v_a_5322_, v_a_5323_);
lean_dec(v_a_5323_);
lean_dec_ref(v_a_5322_);
lean_dec(v_a_5321_);
lean_dec_ref(v_a_5320_);
lean_dec(v_a_5319_);
lean_dec_ref(v_a_5318_);
return v_res_5325_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_vampireReplay_Vampire_Reconstruct_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_vampireReplay_Vampire_Reconstruct_Rules_Clausify(uint8_t builtin) {
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
